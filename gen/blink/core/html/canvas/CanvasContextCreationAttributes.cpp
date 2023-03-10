// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "CanvasContextCreationAttributes.h"

namespace blink {

CanvasContextCreationAttributes::CanvasContextCreationAttributes()
{
    setAlpha(true);
    setAntialias(true);
    setColorSpace(String("legacy-srgb"));
    setDepth(true);
    setFailIfMajorPerformanceCaveat(false);
    setPremultipliedAlpha(true);
    setPreserveDrawingBuffer(false);
    setStencil(false);
}

CanvasContextCreationAttributes::~CanvasContextCreationAttributes() { }

CanvasContextCreationAttributes::CanvasContextCreationAttributes(const CanvasContextCreationAttributes&) = default;

CanvasContextCreationAttributes& CanvasContextCreationAttributes::operator=(const CanvasContextCreationAttributes&) = default;

bool CanvasContextCreationAttributes::hasAlpha() const
{
    return m_hasAlpha;
}
bool CanvasContextCreationAttributes::alpha() const
{
    DCHECK(m_hasAlpha);
    return m_alpha;
}
void CanvasContextCreationAttributes::setAlpha(bool value)
{
    m_alpha = value;
    m_hasAlpha = true;
}
bool CanvasContextCreationAttributes::hasAntialias() const
{
    return m_hasAntialias;
}
bool CanvasContextCreationAttributes::antialias() const
{
    DCHECK(m_hasAntialias);
    return m_antialias;
}
void CanvasContextCreationAttributes::setAntialias(bool value)
{
    m_antialias = value;
    m_hasAntialias = true;
}
bool CanvasContextCreationAttributes::hasColorSpace() const
{
    return !m_colorSpace.isNull();
}
String CanvasContextCreationAttributes::colorSpace() const
{
    return m_colorSpace;
}
void CanvasContextCreationAttributes::setColorSpace(String value)
{
    m_colorSpace = value;
}
bool CanvasContextCreationAttributes::hasDepth() const
{
    return m_hasDepth;
}
bool CanvasContextCreationAttributes::depth() const
{
    DCHECK(m_hasDepth);
    return m_depth;
}
void CanvasContextCreationAttributes::setDepth(bool value)
{
    m_depth = value;
    m_hasDepth = true;
}
bool CanvasContextCreationAttributes::hasFailIfMajorPerformanceCaveat() const
{
    return m_hasFailIfMajorPerformanceCaveat;
}
bool CanvasContextCreationAttributes::failIfMajorPerformanceCaveat() const
{
    DCHECK(m_hasFailIfMajorPerformanceCaveat);
    return m_failIfMajorPerformanceCaveat;
}
void CanvasContextCreationAttributes::setFailIfMajorPerformanceCaveat(bool value)
{
    m_failIfMajorPerformanceCaveat = value;
    m_hasFailIfMajorPerformanceCaveat = true;
}
bool CanvasContextCreationAttributes::hasPremultipliedAlpha() const
{
    return m_hasPremultipliedAlpha;
}
bool CanvasContextCreationAttributes::premultipliedAlpha() const
{
    DCHECK(m_hasPremultipliedAlpha);
    return m_premultipliedAlpha;
}
void CanvasContextCreationAttributes::setPremultipliedAlpha(bool value)
{
    m_premultipliedAlpha = value;
    m_hasPremultipliedAlpha = true;
}
bool CanvasContextCreationAttributes::hasPreserveDrawingBuffer() const
{
    return m_hasPreserveDrawingBuffer;
}
bool CanvasContextCreationAttributes::preserveDrawingBuffer() const
{
    DCHECK(m_hasPreserveDrawingBuffer);
    return m_preserveDrawingBuffer;
}
void CanvasContextCreationAttributes::setPreserveDrawingBuffer(bool value)
{
    m_preserveDrawingBuffer = value;
    m_hasPreserveDrawingBuffer = true;
}
bool CanvasContextCreationAttributes::hasStencil() const
{
    return m_hasStencil;
}
bool CanvasContextCreationAttributes::stencil() const
{
    DCHECK(m_hasStencil);
    return m_stencil;
}
void CanvasContextCreationAttributes::setStencil(bool value)
{
    m_stencil = value;
    m_hasStencil = true;
}

DEFINE_TRACE(CanvasContextCreationAttributes)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
