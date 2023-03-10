// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "CSSStyleValueOrCSSStyleValueSequenceOrString.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8CSSStyleValue.h"

namespace blink {

CSSStyleValueOrCSSStyleValueSequenceOrString::CSSStyleValueOrCSSStyleValueSequenceOrString()
    : m_type(SpecificTypeNone)
{
}

CSSStyleValue* CSSStyleValueOrCSSStyleValueSequenceOrString::getAsCSSStyleValue() const
{
    DCHECK(isCSSStyleValue());
    return m_cssStyleValue;
}

void CSSStyleValueOrCSSStyleValueSequenceOrString::setCSSStyleValue(CSSStyleValue* value)
{
    DCHECK(isNull());
    m_cssStyleValue = value;
    m_type = SpecificTypeCSSStyleValue;
}

CSSStyleValueOrCSSStyleValueSequenceOrString CSSStyleValueOrCSSStyleValueSequenceOrString::fromCSSStyleValue(CSSStyleValue* value)
{
    CSSStyleValueOrCSSStyleValueSequenceOrString container;
    container.setCSSStyleValue(value);
    return container;
}

const HeapVector<Member<CSSStyleValue>>& CSSStyleValueOrCSSStyleValueSequenceOrString::getAsCSSStyleValueSequence() const
{
    DCHECK(isCSSStyleValueSequence());
    return m_cssStyleValueSequence;
}

void CSSStyleValueOrCSSStyleValueSequenceOrString::setCSSStyleValueSequence(const HeapVector<Member<CSSStyleValue>>& value)
{
    DCHECK(isNull());
    m_cssStyleValueSequence = value;
    m_type = SpecificTypeCSSStyleValueSequence;
}

CSSStyleValueOrCSSStyleValueSequenceOrString CSSStyleValueOrCSSStyleValueSequenceOrString::fromCSSStyleValueSequence(const HeapVector<Member<CSSStyleValue>>& value)
{
    CSSStyleValueOrCSSStyleValueSequenceOrString container;
    container.setCSSStyleValueSequence(value);
    return container;
}

String CSSStyleValueOrCSSStyleValueSequenceOrString::getAsString() const
{
    DCHECK(isString());
    return m_string;
}

void CSSStyleValueOrCSSStyleValueSequenceOrString::setString(String value)
{
    DCHECK(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

CSSStyleValueOrCSSStyleValueSequenceOrString CSSStyleValueOrCSSStyleValueSequenceOrString::fromString(String value)
{
    CSSStyleValueOrCSSStyleValueSequenceOrString container;
    container.setString(value);
    return container;
}

CSSStyleValueOrCSSStyleValueSequenceOrString::CSSStyleValueOrCSSStyleValueSequenceOrString(const CSSStyleValueOrCSSStyleValueSequenceOrString&) = default;
CSSStyleValueOrCSSStyleValueSequenceOrString::~CSSStyleValueOrCSSStyleValueSequenceOrString() = default;
CSSStyleValueOrCSSStyleValueSequenceOrString& CSSStyleValueOrCSSStyleValueSequenceOrString::operator=(const CSSStyleValueOrCSSStyleValueSequenceOrString&) = default;

DEFINE_TRACE(CSSStyleValueOrCSSStyleValueSequenceOrString)
{
    visitor->trace(m_cssStyleValue);
    visitor->trace(m_cssStyleValueSequence);
}

void V8CSSStyleValueOrCSSStyleValueSequenceOrString::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CSSStyleValueOrCSSStyleValueSequenceOrString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8CSSStyleValue::hasInstance(v8Value, isolate)) {
        CSSStyleValue* cppValue = V8CSSStyleValue::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setCSSStyleValue(cppValue);
        return;
    }

    if (v8Value->IsArray()) {
        HeapVector<Member<CSSStyleValue>> cppValue = (toMemberNativeArray<CSSStyleValue>(v8Value, 0, isolate, exceptionState));
        if (exceptionState.hadException())
            return;
        impl.setCSSStyleValueSequence(cppValue);
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

v8::Local<v8::Value> ToV8(const CSSStyleValueOrCSSStyleValueSequenceOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case CSSStyleValueOrCSSStyleValueSequenceOrString::SpecificTypeNone:
        return v8::Null(isolate);
    case CSSStyleValueOrCSSStyleValueSequenceOrString::SpecificTypeCSSStyleValue:
        return ToV8(impl.getAsCSSStyleValue(), creationContext, isolate);
    case CSSStyleValueOrCSSStyleValueSequenceOrString::SpecificTypeCSSStyleValueSequence:
        return ToV8(impl.getAsCSSStyleValueSequence(), creationContext, isolate);
    case CSSStyleValueOrCSSStyleValueSequenceOrString::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

CSSStyleValueOrCSSStyleValueSequenceOrString NativeValueTraits<CSSStyleValueOrCSSStyleValueSequenceOrString>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    CSSStyleValueOrCSSStyleValueSequenceOrString impl;
    V8CSSStyleValueOrCSSStyleValueSequenceOrString::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
