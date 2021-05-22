// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "ElementDefinitionOptions.h"

namespace blink {

ElementDefinitionOptions::ElementDefinitionOptions()
{
}

ElementDefinitionOptions::~ElementDefinitionOptions() { }

ElementDefinitionOptions::ElementDefinitionOptions(const ElementDefinitionOptions&) = default;

ElementDefinitionOptions& ElementDefinitionOptions::operator=(const ElementDefinitionOptions&) = default;

bool ElementDefinitionOptions::hasExtends() const
{
    return !m_extends.isNull();
}
String ElementDefinitionOptions::extends() const
{
    return m_extends;
}
void ElementDefinitionOptions::setExtends(String value)
{
    m_extends = value;
}
void ElementDefinitionOptions::setExtendsToNull()
{
    m_extends = String();
}

DEFINE_TRACE(ElementDefinitionOptions)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
