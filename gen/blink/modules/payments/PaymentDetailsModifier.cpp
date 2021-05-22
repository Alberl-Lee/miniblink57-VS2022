// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "PaymentDetailsModifier.h"

namespace blink {

PaymentDetailsModifier::PaymentDetailsModifier()
{
}

PaymentDetailsModifier::~PaymentDetailsModifier() { }

PaymentDetailsModifier::PaymentDetailsModifier(const PaymentDetailsModifier&) = default;

PaymentDetailsModifier& PaymentDetailsModifier::operator=(const PaymentDetailsModifier&) = default;

bool PaymentDetailsModifier::hasAdditionalDisplayItems() const
{
    return m_hasAdditionalDisplayItems;
}
const HeapVector<PaymentItem>& PaymentDetailsModifier::additionalDisplayItems() const
{
    DCHECK(m_hasAdditionalDisplayItems);
    return m_additionalDisplayItems;
}
void PaymentDetailsModifier::setAdditionalDisplayItems(const HeapVector<PaymentItem>& value)
{
    m_additionalDisplayItems = value;
    m_hasAdditionalDisplayItems = true;
}
bool PaymentDetailsModifier::hasData() const
{
    return !(m_data.isEmpty() || m_data.isNull() || m_data.isUndefined());
}
ScriptValue PaymentDetailsModifier::data() const
{
    return m_data;
}
void PaymentDetailsModifier::setData(ScriptValue value)
{
    m_data = value;
}
bool PaymentDetailsModifier::hasSupportedMethods() const
{
    return m_hasSupportedMethods;
}
const Vector<String>& PaymentDetailsModifier::supportedMethods() const
{
    DCHECK(m_hasSupportedMethods);
    return m_supportedMethods;
}
void PaymentDetailsModifier::setSupportedMethods(const Vector<String>& value)
{
    m_supportedMethods = value;
    m_hasSupportedMethods = true;
}
bool PaymentDetailsModifier::hasTotal() const
{
    return m_hasTotal;
}
const PaymentItem& PaymentDetailsModifier::total() const
{
    DCHECK(m_hasTotal);
    return m_total;
}
void PaymentDetailsModifier::setTotal(const PaymentItem& value)
{
    m_total = value;
    m_hasTotal = true;
}

DEFINE_TRACE(PaymentDetailsModifier)
{
    visitor->trace(m_additionalDisplayItems);
    visitor->trace(m_total);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
