// Copyright (c) 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_BASE_RTREE_H_
#define CC_BASE_RTREE_H_

#include <stddef.h>
#include <stdint.h>

#include <vector>

#include "cc/base/cc_export.h"
#include "ui/gfx/geometry/rect.h"

namespace cc {

// The following description and most of the implementation is borrowed from
// Skia's SkRTree implementation.
//
// An R-Tree implementation. In short, it is a balanced n-ary tree containing a
// hierarchy of bounding rectangles.
//
// It only supports bulk-loading, i.e. creation from a batch of bounding
// rectangles. This performs a bottom-up bulk load using the STR
// (sort-tile-recursive) algorithm.
//
// Things to do: Experiment with other bulk-load algorithms (in particular the
// Hilbert pack variant, which groups rects by position on the Hilbert curve, is
// probably worth a look). There also exist top-down bulk load variants
// (VAMSplit, TopDownGreedy, etc).
//
// For more details see:
//
//  Beckmann, N.; Kriegel, H. P.; Schneider, R.; Seeger, B. (1990).
//  "The R*-tree: an efficient and robust access method for points and
//  rectangles"
class CC_EXPORT RTree {
public:
    RTree();
    ~RTree();

    template <typename Container, typename Functor>
    void Build(const Container& items, const Functor& bounds_getter)
    {
        DCHECK_EQ(0u, num_data_elements_);

        std::vector<Branch> branches;
        branches.reserve(items.size());

        for (size_t i = 0; i < items.size(); i++) {
            const gfx::Rect& bounds = bounds_getter(items[i]);
            if (bounds.IsEmpty())
                continue;

            branches.push_back(Branch());
            Branch& branch = branches.back();
            branch.bounds = bounds;
            branch.index = i;
        }

        num_data_elements_ = branches.size();
        if (num_data_elements_ == 1u) {
            nodes_.reserve(1);
            Node* node = AllocateNodeAtLevel(0);
            node->num_children = 1;
            node->children[0] = branches[0];
            root_.subtree = node;
            root_.bounds = branches[0].bounds;
        } else if (num_data_elements_ > 1u) {
            // Determine a reasonable upper bound on the number of nodes to prevent
            // reallocations. This is basically (n**d - 1) / (n - 1), which is the
            // number of nodes in a complete tree with n branches at each node. In the
            // code n = |branch_count|, d = |depth|. However, we normally would have
            // kMaxChildren branch factor, but that can be broken if some children
            // don't have enough nodes. That can happen for at most kMinChildren nodes
            // (since otherwise, we'd create a new node).
            size_t branch_count = kMaxChildren;
            double depth = log(branches.size()) / log(branch_count);
            size_t node_count = static_cast<size_t>((std::pow(branch_count, depth) - 1) / (branch_count - 1)) + kMinChildren;
            nodes_.reserve(node_count);

            root_ = BuildRecursive(&branches, 0);
        }
        // We should've wasted at most kMinChildren nodes.
        DCHECK_LE(nodes_.capacity() - nodes_.size(),
            static_cast<size_t>(kMinChildren));
    }

    template <typename Container>
    void Build(const Container& items)
    {
        Build(items, [](const gfx::Rect& bounds) { return bounds; });
    }

    void Search(const gfx::Rect& query, std::vector<size_t>* results) const;

    gfx::Rect GetBounds() const;

private:
    // These values were empirically determined to produce reasonable performance
    // in most cases.
    enum { kMinChildren = 6 };
    enum { kMaxChildren = 11 };

    struct Node;
    struct Branch {
        // When the node level is 0, then the node is a leaf and the branch has a
        // valid index pointing to an element in the vector that was used to build
        // this rtree. When the level is not 0, it's an internal node and it has a
        // valid subtree pointer.
        union {
            Node* subtree;
            size_t index;
        };
        gfx::Rect bounds;
    };

    struct Node {
        uint16_t num_children;
        uint16_t level;
        Branch children[kMaxChildren];
    };

    void SearchRecursive(Node* root,
        const gfx::Rect& query,
        std::vector<size_t>* results) const;

    // Consumes the input array.
    Branch BuildRecursive(std::vector<Branch>* branches, int level);
    Node* AllocateNodeAtLevel(int level);

    // This is the count of data elements (rather than total nodes in the tree)
    size_t num_data_elements_;
    Branch root_;
    std::vector<Node> nodes_;
};

} // namespace cc

#endif // CC_BASE_RTREE_H_
