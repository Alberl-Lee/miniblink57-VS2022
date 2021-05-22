// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "PaymentShippingOption.h"

namespace blink {

PaymentShippingOption::PaymentShippingOption()
{
    setSelected(false);
}

PaymentShippingOption::~PaymentShippingOption() { }

PaymentShippingOption::PaymentShippingOption(const PaymentShippingOption&) = default;

PaymentShippingOption& PaymentShippingOption::operator=(const PaymentShippingOption&) = default;

bool PaymentShippingOption::hasAmount() const
{
    return m_hasAmount;
}
const PaymentCurrencyAmount& PaymentShippingOption::amount() const
{
    DCHECK(m_hasAmount);
    return m_amount;
}
void PaymentShippingOption::setAmount(const PaymentCurrencyAmount& value)
{
    m_amount = value;
    m_hasAmount = true;
}
bool PaymentShippingOption::hasId() const
{
    return !m_id.isNull();
}
String PaymentShippingOption::id() const
{
    return m_id;
}
void PaymentShippingOption::setId(String value)
{
    m_id = value;
}
bool PaymentShippingOption::hasLabel() const
{
    return !m_label.isNull();
}
String PaymentShippingOption::label() const
{
    return m_label;
}
void PaymentShippingOption::setLabel(String value)
{
    m_label = value;
}
bool PaymentShippingOption::hasSelected() const
{
    return m_hasSelected;
}
bool PaymentShippingOption::selected() const
{
    DCHECK(m_hasSelected);
    return m_selected;
}
void PaymentShippingOption::setSelected(bool value)
{
    m_selected = value;
    m_hasSelected = true;
}

DEFINE_TRACE(PaymentShippingOption)
{
    visitor->trace(m_amount);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
