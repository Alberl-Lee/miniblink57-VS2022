// Copyright 2018 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/base/region-allocator.h"
#include "src/base/bits.h"
#include "src/base/macros.h"

namespace v8 {
namespace base {

    // If |free_size| < |region_size| * |kMaxLoadFactorForRandomization| stop trying
    // to randomize region allocation.
    constexpr double kMaxLoadFactorForRandomization = 0.40;

    // Max number of attempts to allocate page at random address.
    constexpr int kMaxRandomizationAttempts = 3;

    RegionAllocator::RegionAllocator(Address memory_region_begin,
        size_t memory_region_size, size_t page_size)
        : whole_region_(memory_region_begin, memory_region_size, false)
        , region_size_in_pages_(size() / page_size)
        , max_load_for_randomization_(
              static_cast<size_t>(size() * kMaxLoadFactorForRandomization))
        , free_size_(0)
        , page_size_(page_size)
    {
        CHECK_LT(begin(), end());
        CHECK(base::bits::IsPowerOfTwo(page_size_));
        CHECK(IsAligned(size(), page_size_));
        CHECK(IsAligned(begin(), page_size_));

        // Initial region.
        Region* region = new Region(whole_region_);

        all_regions_.insert(region);

        FreeListAddRegion(region);
    }

    RegionAllocator::~RegionAllocator()
    {
        for (Region* region : all_regions_) {
            delete region;
        }
    }

    RegionAllocator::AllRegionsSet::iterator RegionAllocator::FindRegion(
        Address address)
    {
        if (!whole_region_.contains(address))
            return all_regions_.end();

        Region key(address, 0, false);
        AllRegionsSet::iterator iter = all_regions_.upper_bound(&key);
        // Regions in |all_regions_| are compared by end() values and key's end()
        // points exactly to the address we are querying, so the upper_bound will
        // find the region whose |end()| is greater than the requested address.
        DCHECK_NE(iter, all_regions_.end());
        DCHECK((*iter)->contains(address));
        return iter;
    }

    void RegionAllocator::FreeListAddRegion(Region* region)
    {
        free_size_ += region->size();
        free_regions_.insert(region);
    }

    RegionAllocator::Region* RegionAllocator::FreeListFindRegion(size_t size)
    {
        Region key(0, size, false);
        auto iter = free_regions_.lower_bound(&key);
        return iter == free_regions_.end() ? nullptr : *iter;
    }

    void RegionAllocator::FreeListRemoveRegion(Region* region)
    {
        DCHECK(!region->is_used());
        auto iter = free_regions_.find(region);
        DCHECK_NE(iter, free_regions_.end());
        DCHECK_EQ(region, *iter);
        DCHECK_LE(region->size(), free_size_);
        free_size_ -= region->size();
        free_regions_.erase(iter);
    }

    RegionAllocator::Region* RegionAllocator::Split(Region* region,
        size_t new_size)
    {
        DCHECK(IsAligned(new_size, page_size_));
        DCHECK_NE(new_size, 0);
        DCHECK_GT(region->size(), new_size);

        // Create new region and put it to the lists after the |region|.
        bool used = region->is_used();
        Region* new_region = new Region(region->begin() + new_size, region->size() - new_size, used);
        if (!used) {
            // Remove region from the free list before updating it's size.
            FreeListRemoveRegion(region);
        }
        region->set_size(new_size);

        all_regions_.insert(new_region);

        if (!used) {
            FreeListAddRegion(region);
            FreeListAddRegion(new_region);
        }
        return new_region;
    }

    void RegionAllocator::Merge(AllRegionsSet::iterator prev_iter,
        AllRegionsSet::iterator next_iter)
    {
        Region* prev = *prev_iter;
        Region* next = *next_iter;
        DCHECK_EQ(prev->end(), next->begin());
        prev->set_size(prev->size() + next->size());

        all_regions_.erase(next_iter); // prev_iter stays valid.

        // The |next| region must already not be in the free list.
        DCHECK_EQ(free_regions_.find(next), free_regions_.end());
        delete next;
    }

    RegionAllocator::Address RegionAllocator::AllocateRegion(size_t size)
    {
        DCHECK_NE(size, 0);
        DCHECK(IsAligned(size, page_size_));

        Region* region = FreeListFindRegion(size);
        if (region == nullptr)
            return kAllocationFailure;

        if (region->size() != size) {
            Split(region, size);
        }
        DCHECK(IsAligned(region->begin(), page_size_));
        DCHECK_EQ(region->size(), size);

        // Mark region as used.
        FreeListRemoveRegion(region);
        region->set_is_used(true);
        return region->begin();
    }

    RegionAllocator::Address RegionAllocator::AllocateRegion(
        RandomNumberGenerator* rng, size_t size)
    {
        if (free_size() >= max_load_for_randomization_) {
            // There is enough free space for trying to randomize the address.
            size_t random = 0;

            for (int i = 0; i < kMaxRandomizationAttempts; i++) {
                rng->NextBytes(&random, sizeof(random));
                size_t random_offset = page_size_ * (random % region_size_in_pages_);
                Address address = begin() + random_offset;
                if (AllocateRegionAt(address, size)) {
                    return address;
                }
            }
            // Fall back to free list allocation.
        }
        return AllocateRegion(size);
    }

    bool RegionAllocator::AllocateRegionAt(Address requested_address, size_t size)
    {
        DCHECK(IsAligned(requested_address, page_size_));
        DCHECK_NE(size, 0);
        DCHECK(IsAligned(size, page_size_));

        Address requested_end = requested_address + size;
        DCHECK_LE(requested_end, end());

        Region* region;
        {
            AllRegionsSet::iterator region_iter = FindRegion(requested_address);
            if (region_iter == all_regions_.end()) {
                return false;
            }
            region = *region_iter;
        }
        if (region->is_used() || region->end() < requested_end) {
            return false;
        }
        // Found free region that includes the requested one.
        if (region->begin() != requested_address) {
            // Split the region at the |requested_address| boundary.
            size_t new_size = requested_address - region->begin();
            DCHECK(IsAligned(new_size, page_size_));
            region = Split(region, new_size);
        }
        if (region->end() != requested_end) {
            // Split the region at the |requested_end| boundary.
            Split(region, size);
        }
        DCHECK_EQ(region->begin(), requested_address);
        DCHECK_EQ(region->size(), size);

        // Mark region as used.
        FreeListRemoveRegion(region);
        region->set_is_used(true);
        return true;
    }

    size_t RegionAllocator::TrimRegion(Address address, size_t new_size)
    {
        DCHECK(IsAligned(new_size, page_size_));

        AllRegionsSet::iterator region_iter = FindRegion(address);
        if (region_iter == all_regions_.end()) {
            return 0;
        }
        Region* region = *region_iter;
        if (region->begin() != address || !region->is_used()) {
            return 0;
        }

        // The region must not be in the free list.
        DCHECK_EQ(free_regions_.find(*region_iter), free_regions_.end());

        if (new_size > 0) {
            region = Split(region, new_size);
            ++region_iter;
        }
        size_t size = region->size();
        region->set_is_used(false);

        // Merge current region with the surrounding ones if they are free.
        if (region->end() != whole_region_.end()) {
            // There must be a range after the current one.
            AllRegionsSet::iterator next_iter = std::next(region_iter);
            DCHECK_NE(next_iter, all_regions_.end());
            if (!(*next_iter)->is_used()) {
                // |next| region object will be deleted during merge, remove it from
                // the free list.
                FreeListRemoveRegion(*next_iter);
                Merge(region_iter, next_iter);
            }
        }
        if (new_size == 0 && region->begin() != whole_region_.begin()) {
            // There must be a range before the current one.
            AllRegionsSet::iterator prev_iter = std::prev(region_iter);
            DCHECK_NE(prev_iter, all_regions_.end());
            if (!(*prev_iter)->is_used()) {
                // |prev| region's size will change, we'll have to re-insert it into
                // the proper place of the free list.
                FreeListRemoveRegion(*prev_iter);
                Merge(prev_iter, region_iter);
                // |prev| region becomes the current region.
                region_iter = prev_iter;
                region = *region_iter;
            }
        }
        FreeListAddRegion(region);
        return size;
    }

    size_t RegionAllocator::CheckRegion(Address address)
    {
        AllRegionsSet::iterator region_iter = FindRegion(address);
        if (region_iter == all_regions_.end()) {
            return 0;
        }
        Region* region = *region_iter;
        if (region->begin() != address || !region->is_used()) {
            return 0;
        }
        return region->size();
    }

    bool RegionAllocator::IsFree(Address address, size_t size)
    {
        CHECK(contains(address, size));
        AllRegionsSet::iterator region_iter = FindRegion(address);
        if (region_iter == all_regions_.end()) {
            return true;
        }
        Region* region = *region_iter;
        return !region->is_used() && region->contains(address, size);
    }

    void RegionAllocator::Region::Print(std::ostream& os) const
    {
        std::ios::fmtflags flags = os.flags(std::ios::hex | std::ios::showbase);
        os << "[" << begin() << ", " << end() << "), size: " << size();
        os << ", " << (is_used() ? "used" : "free");
        os.flags(flags);
    }

    void RegionAllocator::Print(std::ostream& os) const
    {
        std::ios::fmtflags flags = os.flags(std::ios::hex | std::ios::showbase);
        os << "RegionAllocator: [" << begin() << ", " << end() << ")";
        os << "\nsize: " << size();
        os << "\nfree_size: " << free_size();
        os << "\npage_size: " << page_size_;

        os << "\nall regions: ";
        for (const Region* region : all_regions_) {
            os << "\n  ";
            region->Print(os);
        }

        os << "\nfree regions: ";
        for (const Region* region : free_regions_) {
            os << "\n  ";
            region->Print(os);
        }
        os << "\n";
        os.flags(flags);
    }

} // namespace base
} // namespace v8
