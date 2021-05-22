// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "StereoPannerOptions.h"

namespace blink {

StereoPannerOptions::StereoPannerOptions()
{
}

StereoPannerOptions::~StereoPannerOptions() { }

StereoPannerOptions::StereoPannerOptions(const StereoPannerOptions&) = default;

StereoPannerOptions& StereoPannerOptions::operator=(const StereoPannerOptions&) = default;

bool StereoPannerOptions::hasPan() const
{
    return m_hasPan;
}
float StereoPannerOptions::pan() const
{
    DCHECK(m_hasPan);
    return m_pan;
}
void StereoPannerOptions::setPan(float value)
{
    m_pan = value;
    m_hasPan = true;
}

DEFINE_TRACE(StereoPannerOptions)
{
    AudioNodeOptions::trace(visitor);
}

} // namespace blink
