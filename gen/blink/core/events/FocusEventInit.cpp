// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "FocusEventInit.h"

#include "core/events/EventTarget.h"

namespace blink {

FocusEventInit::FocusEventInit()
{
}

FocusEventInit::~FocusEventInit() { }

FocusEventInit::FocusEventInit(const FocusEventInit&) = default;

FocusEventInit& FocusEventInit::operator=(const FocusEventInit&) = default;

bool FocusEventInit::hasRelatedTarget() const
{
    return m_relatedTarget;
}
EventTarget* FocusEventInit::relatedTarget() const
{
    return m_relatedTarget;
}
void FocusEventInit::setRelatedTarget(EventTarget* value)
{
    m_relatedTarget = value;
}
void FocusEventInit::setRelatedTargetToNull()
{
    m_relatedTarget = Member<EventTarget>();
}

DEFINE_TRACE(FocusEventInit)
{
    visitor->trace(m_relatedTarget);
    UIEventInit::trace(visitor);
}

} // namespace blink
