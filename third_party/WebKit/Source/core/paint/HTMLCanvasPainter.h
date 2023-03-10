// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HTMLCanvasPainter_h
#define HTMLCanvasPainter_h

#include "wtf/Allocator.h"

namespace blink {

struct PaintInfo;
class LayoutPoint;
class LayoutHTMLCanvas;

class HTMLCanvasPainter {
    STACK_ALLOCATED();

public:
    HTMLCanvasPainter(const LayoutHTMLCanvas& layoutHTMLCanvas)
        : m_layoutHTMLCanvas(layoutHTMLCanvas)
    {
    }
    void paintReplaced(const PaintInfo&, const LayoutPoint&);

private:
    const LayoutHTMLCanvas& m_layoutHTMLCanvas;
};

} // namespace blink

#endif // HTMLCanvasPainter_h
