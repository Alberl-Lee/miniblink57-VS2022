// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_IC_STUB_CACHE_H_
#define V8_IC_STUB_CACHE_H_

#include "src/objects/name.h"

namespace v8 {
namespace internal {

    // The stub cache is used for megamorphic property accesses.
    // It maps (map, name, type) to property access handlers. The cache does not
    // need explicit invalidation when a prototype chain is modified, since the
    // handlers verify the chain.

    class SCTableReference {
    public:
        Address address() const { return address_; }

    private:
        explicit SCTableReference(Address address)
            : address_(address)
        {
        }

        Address address_;

        friend class StubCache;
    };

    class V8_EXPORT_PRIVATE StubCache {
    public:
        struct Entry {
            // The values here have plain Address types because they are read
            // directly from generated code. As a nice side effect, this keeps
            // #includes lightweight.
            Address key;
            // {value} is a tagged heap object reference (weak or strong), equivalent
            // to a MaybeObject's payload.
            Address value;
            // {map} is a tagged Map pointer, or nullptr.
            Address map;
        };

        void Initialize();
        // Access cache for entry hash(name, map).
        void Set(Name name, Map map, MaybeObject handler);
        MaybeObject Get(Name name, Map map);
        // Clear the lookup table (@ mark compact collection).
        void Clear();

        enum Table { kPrimary,
            kSecondary };

        SCTableReference key_reference(StubCache::Table table)
        {
            return SCTableReference(
                reinterpret_cast<Address>(&first_entry(table)->key));
        }

        SCTableReference map_reference(StubCache::Table table)
        {
            return SCTableReference(
                reinterpret_cast<Address>(&first_entry(table)->map));
        }

        SCTableReference value_reference(StubCache::Table table)
        {
            return SCTableReference(
                reinterpret_cast<Address>(&first_entry(table)->value));
        }

        StubCache::Entry* first_entry(StubCache::Table table)
        {
            switch (table) {
            case StubCache::kPrimary:
                return StubCache::primary_;
            case StubCache::kSecondary:
                return StubCache::secondary_;
            }
            UNREACHABLE();
        }

        Isolate* isolate() { return isolate_; }

        // Setting the entry size such that the index is shifted by Name::kHashShift
        // is convenient; shifting down the length field (to extract the hash code)
        // automatically discards the hash bit field.
        static const int kCacheIndexShift = Name::kHashShift;

        static const int kPrimaryTableBits = 11;
        static const int kPrimaryTableSize = (1 << kPrimaryTableBits);
        static const int kSecondaryTableBits = 9;
        static const int kSecondaryTableSize = (1 << kSecondaryTableBits);

        // We compute the hash code for a map as follows:
        //   <code> = <address> ^ (<address> >> kMapKeyShift)
        static const int kMapKeyShift = kPrimaryTableBits + kCacheIndexShift;

        // Some magic number used in the secondary hash computation.
        static const int kSecondaryMagic = 0xb16ca6e5;

        static int PrimaryOffsetForTesting(Name name, Map map);
        static int SecondaryOffsetForTesting(Name name, int seed);

        // The constructor is made public only for the purposes of testing.
        explicit StubCache(Isolate* isolate);

    private:
        // The stub cache has a primary and secondary level.  The two levels have
        // different hashing algorithms in order to avoid simultaneous collisions
        // in both caches.  Unlike a probing strategy (quadratic or otherwise) the
        // update strategy on updates is fairly clear and simple:  Any existing entry
        // in the primary cache is moved to the secondary cache, and secondary cache
        // entries are overwritten.

        // Hash algorithm for the primary table.  This algorithm is replicated in
        // assembler for every architecture.  Returns an index into the table that
        // is scaled by 1 << kCacheIndexShift.
        static int PrimaryOffset(Name name, Map map);

        // Hash algorithm for the secondary table.  This algorithm is replicated in
        // assembler for every architecture.  Returns an index into the table that
        // is scaled by 1 << kCacheIndexShift.
        static int SecondaryOffset(Name name, int seed);

        // Compute the entry for a given offset in exactly the same way as
        // we do in generated code.  We generate an hash code that already
        // ends in Name::kHashShift 0s.  Then we multiply it so it is a multiple
        // of sizeof(Entry).  This makes it easier to avoid making mistakes
        // in the hashed offset computations.
        static Entry* entry(Entry* table, int offset)
        {
            const int multiplier = sizeof(*table) >> Name::kHashShift;
            return reinterpret_cast<Entry*>(reinterpret_cast<Address>(table) + offset * multiplier);
        }

    private:
        Entry primary_[kPrimaryTableSize];
        Entry secondary_[kSecondaryTableSize];
        Isolate* isolate_;

        friend class Isolate;
        friend class SCTableReference;

        DISALLOW_COPY_AND_ASSIGN(StubCache);
    };
} // namespace internal
} // namespace v8

#endif // V8_IC_STUB_CACHE_H_
