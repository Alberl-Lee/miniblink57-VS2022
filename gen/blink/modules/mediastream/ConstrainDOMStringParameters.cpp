// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "ConstrainDOMStringParameters.h"

#include "bindings/modules/v8/StringOrStringSequence.h"

namespace blink {

ConstrainDOMStringParameters::ConstrainDOMStringParameters()
{
}

ConstrainDOMStringParameters::~ConstrainDOMStringParameters() { }

ConstrainDOMStringParameters::ConstrainDOMStringParameters(const ConstrainDOMStringParameters&) = default;

ConstrainDOMStringParameters& ConstrainDOMStringParameters::operator=(const ConstrainDOMStringParameters&) = default;

bool ConstrainDOMStringParameters::hasExact() const
{
    return !m_exact.isNull();
}
const StringOrStringSequence& ConstrainDOMStringParameters::exact() const
{
    return m_exact;
}
void ConstrainDOMStringParameters::setExact(const StringOrStringSequence& value)
{
    m_exact = value;
}
bool ConstrainDOMStringParameters::hasIdeal() const
{
    return !m_ideal.isNull();
}
const StringOrStringSequence& ConstrainDOMStringParameters::ideal() const
{
    return m_ideal;
}
void ConstrainDOMStringParameters::setIdeal(const StringOrStringSequence& value)
{
    m_ideal = value;
}

DEFINE_TRACE(ConstrainDOMStringParameters)
{
    visitor->trace(m_exact);
    visitor->trace(m_ideal);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
