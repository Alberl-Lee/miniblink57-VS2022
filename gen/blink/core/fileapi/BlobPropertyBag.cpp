// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "BlobPropertyBag.h"

namespace blink {

BlobPropertyBag::BlobPropertyBag()
{
    setEndings(String("transparent"));
    setType(String(""));
}

BlobPropertyBag::~BlobPropertyBag() { }

BlobPropertyBag::BlobPropertyBag(const BlobPropertyBag&) = default;

BlobPropertyBag& BlobPropertyBag::operator=(const BlobPropertyBag&) = default;

bool BlobPropertyBag::hasEndings() const
{
    return !m_endings.isNull();
}
String BlobPropertyBag::endings() const
{
    return m_endings;
}
void BlobPropertyBag::setEndings(String value)
{
    m_endings = value;
}
bool BlobPropertyBag::hasType() const
{
    return !m_type.isNull();
}
String BlobPropertyBag::type() const
{
    return m_type;
}
void BlobPropertyBag::setType(String value)
{
    m_type = value;
}

DEFINE_TRACE(BlobPropertyBag)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
