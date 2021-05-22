// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "StringOrArrayBufferOrArrayBufferView.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "core/dom/FlexibleArrayBufferView.h"

namespace blink {

StringOrArrayBufferOrArrayBufferView::StringOrArrayBufferOrArrayBufferView()
    : m_type(SpecificTypeNone)
{
}

String StringOrArrayBufferOrArrayBufferView::getAsString() const
{
    DCHECK(isString());
    return m_string;
}

void StringOrArrayBufferOrArrayBufferView::setString(String value)
{
    DCHECK(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

StringOrArrayBufferOrArrayBufferView StringOrArrayBufferOrArrayBufferView::fromString(String value)
{
    StringOrArrayBufferOrArrayBufferView container;
    container.setString(value);
    return container;
}

DOMArrayBuffer* StringOrArrayBufferOrArrayBufferView::getAsArrayBuffer() const
{
    DCHECK(isArrayBuffer());
    return m_arrayBuffer;
}

void StringOrArrayBufferOrArrayBufferView::setArrayBuffer(DOMArrayBuffer* value)
{
    DCHECK(isNull());
    m_arrayBuffer = value;
    m_type = SpecificTypeArrayBuffer;
}

StringOrArrayBufferOrArrayBufferView StringOrArrayBufferOrArrayBufferView::fromArrayBuffer(DOMArrayBuffer* value)
{
    StringOrArrayBufferOrArrayBufferView container;
    container.setArrayBuffer(value);
    return container;
}

DOMArrayBufferView* StringOrArrayBufferOrArrayBufferView::getAsArrayBufferView() const
{
    DCHECK(isArrayBufferView());
    return m_arrayBufferView;
}

void StringOrArrayBufferOrArrayBufferView::setArrayBufferView(DOMArrayBufferView* value)
{
    DCHECK(isNull());
    m_arrayBufferView = value;
    m_type = SpecificTypeArrayBufferView;
}

StringOrArrayBufferOrArrayBufferView StringOrArrayBufferOrArrayBufferView::fromArrayBufferView(DOMArrayBufferView* value)
{
    StringOrArrayBufferOrArrayBufferView container;
    container.setArrayBufferView(value);
    return container;
}

StringOrArrayBufferOrArrayBufferView::StringOrArrayBufferOrArrayBufferView(const StringOrArrayBufferOrArrayBufferView&) = default;
StringOrArrayBufferOrArrayBufferView::~StringOrArrayBufferOrArrayBufferView() = default;
StringOrArrayBufferOrArrayBufferView& StringOrArrayBufferOrArrayBufferView::operator=(const StringOrArrayBufferOrArrayBufferView&) = default;

DEFINE_TRACE(StringOrArrayBufferOrArrayBufferView)
{
    visitor->trace(m_arrayBuffer);
    visitor->trace(m_arrayBufferView);
}

void V8StringOrArrayBufferOrArrayBufferView::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrArrayBufferOrArrayBufferView& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (v8Value->IsArrayBuffer()) {
        DOMArrayBuffer* cppValue = V8ArrayBuffer::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setArrayBuffer(cppValue);
        return;
    }

    if (v8Value->IsArrayBufferView()) {
        DOMArrayBufferView* cppValue = V8ArrayBufferView::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setArrayBufferView(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrArrayBufferOrArrayBufferView& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case StringOrArrayBufferOrArrayBufferView::SpecificTypeNone:
        return v8::Null(isolate);
    case StringOrArrayBufferOrArrayBufferView::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case StringOrArrayBufferOrArrayBufferView::SpecificTypeArrayBuffer:
        return ToV8(impl.getAsArrayBuffer(), creationContext, isolate);
    case StringOrArrayBufferOrArrayBufferView::SpecificTypeArrayBufferView:
        return ToV8(impl.getAsArrayBufferView(), creationContext, isolate);
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

StringOrArrayBufferOrArrayBufferView NativeValueTraits<StringOrArrayBufferOrArrayBufferView>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    StringOrArrayBufferOrArrayBufferView impl;
    V8StringOrArrayBufferOrArrayBufferView::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
