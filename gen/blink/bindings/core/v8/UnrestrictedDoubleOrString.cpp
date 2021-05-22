// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "UnrestrictedDoubleOrString.h"

#include "bindings/core/v8/ToV8.h"

namespace blink {

UnrestrictedDoubleOrString::UnrestrictedDoubleOrString()
    : m_type(SpecificTypeNone)
{
}

double UnrestrictedDoubleOrString::getAsUnrestrictedDouble() const
{
    DCHECK(isUnrestrictedDouble());
    return m_unrestrictedDouble;
}

void UnrestrictedDoubleOrString::setUnrestrictedDouble(double value)
{
    DCHECK(isNull());
    m_unrestrictedDouble = value;
    m_type = SpecificTypeUnrestrictedDouble;
}

UnrestrictedDoubleOrString UnrestrictedDoubleOrString::fromUnrestrictedDouble(double value)
{
    UnrestrictedDoubleOrString container;
    container.setUnrestrictedDouble(value);
    return container;
}

String UnrestrictedDoubleOrString::getAsString() const
{
    DCHECK(isString());
    return m_string;
}

void UnrestrictedDoubleOrString::setString(String value)
{
    DCHECK(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

UnrestrictedDoubleOrString UnrestrictedDoubleOrString::fromString(String value)
{
    UnrestrictedDoubleOrString container;
    container.setString(value);
    return container;
}

UnrestrictedDoubleOrString::UnrestrictedDoubleOrString(const UnrestrictedDoubleOrString&) = default;
UnrestrictedDoubleOrString::~UnrestrictedDoubleOrString() = default;
UnrestrictedDoubleOrString& UnrestrictedDoubleOrString::operator=(const UnrestrictedDoubleOrString&) = default;

DEFINE_TRACE(UnrestrictedDoubleOrString)
{
}

void V8UnrestrictedDoubleOrString::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UnrestrictedDoubleOrString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsNumber()) {
        double cppValue = toDouble(isolate, v8Value, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setUnrestrictedDouble(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }
}

v8::Local<v8::Value> ToV8(const UnrestrictedDoubleOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case UnrestrictedDoubleOrString::SpecificTypeNone:
        return v8::Null(isolate);
    case UnrestrictedDoubleOrString::SpecificTypeUnrestrictedDouble:
        return v8::Number::New(isolate, impl.getAsUnrestrictedDouble());
    case UnrestrictedDoubleOrString::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

UnrestrictedDoubleOrString NativeValueTraits<UnrestrictedDoubleOrString>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    UnrestrictedDoubleOrString impl;
    V8UnrestrictedDoubleOrString::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
