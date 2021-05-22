// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "CacheQueryOptions.h"

namespace blink {

CacheQueryOptions::CacheQueryOptions()
{
    setIgnoreMethod(false);
    setIgnoreSearch(false);
    setIgnoreVary(false);
}

CacheQueryOptions::~CacheQueryOptions() { }

CacheQueryOptions::CacheQueryOptions(const CacheQueryOptions&) = default;

CacheQueryOptions& CacheQueryOptions::operator=(const CacheQueryOptions&) = default;

bool CacheQueryOptions::hasCacheName() const
{
    return !m_cacheName.isNull();
}
String CacheQueryOptions::cacheName() const
{
    return m_cacheName;
}
void CacheQueryOptions::setCacheName(String value)
{
    m_cacheName = value;
}
bool CacheQueryOptions::hasIgnoreMethod() const
{
    return m_hasIgnoreMethod;
}
bool CacheQueryOptions::ignoreMethod() const
{
    DCHECK(m_hasIgnoreMethod);
    return m_ignoreMethod;
}
void CacheQueryOptions::setIgnoreMethod(bool value)
{
    m_ignoreMethod = value;
    m_hasIgnoreMethod = true;
}
bool CacheQueryOptions::hasIgnoreSearch() const
{
    return m_hasIgnoreSearch;
}
bool CacheQueryOptions::ignoreSearch() const
{
    DCHECK(m_hasIgnoreSearch);
    return m_ignoreSearch;
}
void CacheQueryOptions::setIgnoreSearch(bool value)
{
    m_ignoreSearch = value;
    m_hasIgnoreSearch = true;
}
bool CacheQueryOptions::hasIgnoreVary() const
{
    return m_hasIgnoreVary;
}
bool CacheQueryOptions::ignoreVary() const
{
    DCHECK(m_hasIgnoreVary);
    return m_ignoreVary;
}
void CacheQueryOptions::setIgnoreVary(bool value)
{
    m_ignoreVary = value;
    m_hasIgnoreVary = true;
}

DEFINE_TRACE(CacheQueryOptions)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
