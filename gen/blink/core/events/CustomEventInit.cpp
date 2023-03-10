// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "CustomEventInit.h"

namespace blink {

CustomEventInit::CustomEventInit()
{
}

CustomEventInit::~CustomEventInit() { }

CustomEventInit::CustomEventInit(const CustomEventInit&) = default;

CustomEventInit& CustomEventInit::operator=(const CustomEventInit&) = default;

bool CustomEventInit::hasDetail() const
{
    return !(m_detail.isEmpty() || m_detail.isNull() || m_detail.isUndefined());
}
ScriptValue CustomEventInit::detail() const
{
    return m_detail;
}
void CustomEventInit::setDetail(ScriptValue value)
{
    m_detail = value;
}

DEFINE_TRACE(CustomEventInit)
{
    EventInit::trace(visitor);
}

} // namespace blink
