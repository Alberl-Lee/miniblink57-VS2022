// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "FederatedCredentialData.h"

namespace blink {

FederatedCredentialData::FederatedCredentialData()
{
}

FederatedCredentialData::~FederatedCredentialData() { }

FederatedCredentialData::FederatedCredentialData(const FederatedCredentialData&) = default;

FederatedCredentialData& FederatedCredentialData::operator=(const FederatedCredentialData&) = default;

bool FederatedCredentialData::hasProvider() const
{
    return !m_provider.isNull();
}
String FederatedCredentialData::provider() const
{
    return m_provider;
}
void FederatedCredentialData::setProvider(String value)
{
    m_provider = value;
}

DEFINE_TRACE(FederatedCredentialData)
{
    LocallyStoredCredentialData::trace(visitor);
}

} // namespace blink
