// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "ExtendableEventInit.h"

namespace blink {

ExtendableEventInit::ExtendableEventInit()
{
}

ExtendableEventInit::~ExtendableEventInit() { }

ExtendableEventInit::ExtendableEventInit(const ExtendableEventInit&) = default;

ExtendableEventInit& ExtendableEventInit::operator=(const ExtendableEventInit&) = default;

DEFINE_TRACE(ExtendableEventInit)
{
    EventInit::trace(visitor);
}

} // namespace blink
