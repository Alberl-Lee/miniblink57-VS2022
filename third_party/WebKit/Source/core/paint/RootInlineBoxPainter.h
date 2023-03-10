// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef RootInlineBoxPainter_h
#define RootInlineBoxPainter_h

#include "wtf/Allocator.h"

namespace blink {

struct PaintInfo;
class LayoutPoint;
class LayoutUnit;
class RootInlineBox;

class RootInlineBoxPainter {
    STACK_ALLOCATED();

public:
    RootInlineBoxPainter(const RootInlineBox& rootInlineBox)
        : m_rootInlineBox(rootInlineBox)
    {
    }

    void paint(const PaintInfo&,
        const LayoutPoint&,
        LayoutUnit lineTop,
        LayoutUnit lineBottom);

private:
    void paintEllipsisBox(const PaintInfo&,
        const LayoutPoint& paintOffset,
        LayoutUnit lineTop,
        LayoutUnit lineBottom) const;

    const RootInlineBox& m_rootInlineBox;
};

} // namespace blink

#endif // RootInlineBoxPainter_h
