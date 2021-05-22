// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "GainOptions.h"

namespace blink {

GainOptions::GainOptions()
{
}

GainOptions::~GainOptions() { }

GainOptions::GainOptions(const GainOptions&) = default;

GainOptions& GainOptions::operator=(const GainOptions&) = default;

bool GainOptions::hasGain() const
{
    return m_hasGain;
}
float GainOptions::gain() const
{
    DCHECK(m_hasGain);
    return m_gain;
}
void GainOptions::setGain(float value)
{
    m_gain = value;
    m_hasGain = true;
}

DEFINE_TRACE(GainOptions)
{
    AudioNodeOptions::trace(visitor);
}

} // namespace blink
