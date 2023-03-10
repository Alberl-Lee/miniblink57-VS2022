// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData.h"

#include "bindings/core/v8/ArrayBufferOrArrayBufferViewOrBlobOrUSVString.h"
#include "bindings/core/v8/FileOrUSVString.h"
#include "bindings/core/v8/HTMLScriptElementOrSVGScriptElement.h"
#include "bindings/core/v8/StringOrDictionary.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8FormData.h"
#include "core/animation/DocumentAnimation.h"
#include "core/css/DocumentFontFaceSet.h"
#include "core/dom/DocumentFullscreen.h"
#include "core/dom/DocumentOrShadowRoot.h"
#include "core/dom/FlexibleArrayBufferView.h"
#include "core/dom/NonElementParentNode.h"
#include "core/dom/ParentNode.h"
#include "core/svg/SVGDocumentExtensions.h"
#include "core/xml/DocumentXPathEvaluator.h"

namespace blink {

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData()
    : m_type(SpecificTypeNone)
{
}

DOMArrayBuffer* ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsArrayBuffer() const
{
    DCHECK(isArrayBuffer());
    return m_arrayBuffer;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setArrayBuffer(DOMArrayBuffer* value)
{
    DCHECK(isNull());
    m_arrayBuffer = value;
    m_type = SpecificTypeArrayBuffer;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromArrayBuffer(DOMArrayBuffer* value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setArrayBuffer(value);
    return container;
}

DOMArrayBufferView* ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsArrayBufferView() const
{
    DCHECK(isArrayBufferView());
    return m_arrayBufferView;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setArrayBufferView(DOMArrayBufferView* value)
{
    DCHECK(isNull());
    m_arrayBufferView = value;
    m_type = SpecificTypeArrayBufferView;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromArrayBufferView(DOMArrayBufferView* value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setArrayBufferView(value);
    return container;
}

Blob* ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsBlob() const
{
    DCHECK(isBlob());
    return m_blob;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setBlob(Blob* value)
{
    DCHECK(isNull());
    m_blob = value;
    m_type = SpecificTypeBlob;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromBlob(Blob* value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setBlob(value);
    return container;
}

Document* ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsDocument() const
{
    DCHECK(isDocument());
    return m_document;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setDocument(Document* value)
{
    DCHECK(isNull());
    m_document = value;
    m_type = SpecificTypeDocument;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromDocument(Document* value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setDocument(value);
    return container;
}

String ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsString() const
{
    DCHECK(isString());
    return m_string;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setString(String value)
{
    DCHECK(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromString(String value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setString(value);
    return container;
}

FormData* ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::getAsFormData() const
{
    DCHECK(isFormData());
    return m_formData;
}

void ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::setFormData(FormData* value)
{
    DCHECK(isNull());
    m_formData = value;
    m_type = SpecificTypeFormData;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::fromFormData(FormData* value)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData container;
    container.setFormData(value);
    return container;
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData(const ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData&) = default;
ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::~ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData() = default;
ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData& ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::operator=(const ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData&) = default;

DEFINE_TRACE(ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData)
{
    visitor->trace(m_arrayBuffer);
    visitor->trace(m_arrayBufferView);
    visitor->trace(m_blob);
    visitor->trace(m_document);
    visitor->trace(m_formData);
}

void V8ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8Blob::hasInstance(v8Value, isolate)) {
        Blob* cppValue = V8Blob::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setBlob(cppValue);
        return;
    }

    if (V8Document::hasInstance(v8Value, isolate)) {
        Document* cppValue = V8Document::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setDocument(cppValue);
        return;
    }

    if (V8FormData::hasInstance(v8Value, isolate)) {
        FormData* cppValue = V8FormData::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setFormData(cppValue);
        return;
    }

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

v8::Local<v8::Value> ToV8(const ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeNone:
        return v8::Null(isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeArrayBuffer:
        return ToV8(impl.getAsArrayBuffer(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeArrayBufferView:
        return ToV8(impl.getAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeBlob:
        return ToV8(impl.getAsBlob(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeDocument:
        return ToV8(impl.getAsDocument(), creationContext, isolate);
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::SpecificTypeFormData:
        return ToV8(impl.getAsFormData(), creationContext, isolate);
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData NativeValueTraits<ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData impl;
    V8ArrayBufferOrArrayBufferViewOrBlobOrDocumentOrStringOrFormData::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
