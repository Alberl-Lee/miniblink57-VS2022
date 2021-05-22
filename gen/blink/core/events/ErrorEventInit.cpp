// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "ErrorEventInit.h"

namespace blink {

ErrorEventInit::ErrorEventInit()
{
}

ErrorEventInit::~ErrorEventInit() { }

ErrorEventInit::ErrorEventInit(const ErrorEventInit&) = default;

ErrorEventInit& ErrorEventInit::operator=(const ErrorEventInit&) = default;

bool ErrorEventInit::hasColno() const
{
    return m_hasColno;
}
unsigned ErrorEventInit::colno() const
{
    DCHECK(m_hasColno);
    return m_colno;
}
void ErrorEventInit::setColno(unsigned value)
{
    m_colno = value;
    m_hasColno = true;
}
bool ErrorEventInit::hasError() const
{
    return !(m_error.isEmpty() || m_error.isNull() || m_error.isUndefined());
}
ScriptValue ErrorEventInit::error() const
{
    return m_error;
}
void ErrorEventInit::setError(ScriptValue value)
{
    m_error = value;
}
bool ErrorEventInit::hasFilename() const
{
    return !m_filename.isNull();
}
String ErrorEventInit::filename() const
{
    return m_filename;
}
void ErrorEventInit::setFilename(String value)
{
    m_filename = value;
}
bool ErrorEventInit::hasLineno() const
{
    return m_hasLineno;
}
unsigned ErrorEventInit::lineno() const
{
    DCHECK(m_hasLineno);
    return m_lineno;
}
void ErrorEventInit::setLineno(unsigned value)
{
    m_lineno = value;
    m_hasLineno = true;
}
bool ErrorEventInit::hasMessage() const
{
    return !m_message.isNull();
}
String ErrorEventInit::message() const
{
    return m_message;
}
void ErrorEventInit::setMessage(String value)
{
    m_message = value;
}

DEFINE_TRACE(ErrorEventInit)
{
    EventInit::trace(visitor);
}

} // namespace blink
