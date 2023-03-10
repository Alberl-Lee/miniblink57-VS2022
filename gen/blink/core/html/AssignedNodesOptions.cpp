// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "AssignedNodesOptions.h"

namespace blink {

AssignedNodesOptions::AssignedNodesOptions()
{
    setFlatten(false);
}

AssignedNodesOptions::~AssignedNodesOptions() { }

AssignedNodesOptions::AssignedNodesOptions(const AssignedNodesOptions&) = default;

AssignedNodesOptions& AssignedNodesOptions::operator=(const AssignedNodesOptions&) = default;

bool AssignedNodesOptions::hasFlatten() const
{
    return m_hasFlatten;
}
bool AssignedNodesOptions::flatten() const
{
    DCHECK(m_hasFlatten);
    return m_flatten;
}
void AssignedNodesOptions::setFlatten(bool value)
{
    m_flatten = value;
    m_hasFlatten = true;
}

DEFINE_TRACE(AssignedNodesOptions)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
