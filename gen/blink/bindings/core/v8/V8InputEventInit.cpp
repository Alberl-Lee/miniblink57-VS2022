// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8InputEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DataTransfer.h"
#include "bindings/core/v8/V8Range.h"
#include "bindings/core/v8/V8UIEventInit.h"

namespace blink {

void V8InputEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InputEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8UIEventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> dataValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "data")).ToLocal(&dataValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
        // Do nothing.
    } else if (dataValue->IsNull()) {
        impl.setDataToNull();
    } else {
        V8StringResource<> data = dataValue;
        if (!data.prepare(exceptionState))
            return;
        impl.setData(data);
    }

    v8::Local<v8::Value> dataTransferValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "dataTransfer")).ToLocal(&dataTransferValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (dataTransferValue.IsEmpty() || dataTransferValue->IsUndefined()) {
        // Do nothing.
    } else if (dataTransferValue->IsNull()) {
        impl.setDataTransferToNull();
    } else {
        DataTransfer* dataTransfer = V8DataTransfer::toImplWithTypeCheck(isolate, dataTransferValue);
        if (!dataTransfer) {
            exceptionState.throwTypeError("member dataTransfer is not of type DataTransfer.");
            return;
        }
        impl.setDataTransfer(dataTransfer);
    }

    v8::Local<v8::Value> inputTypeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "inputType")).ToLocal(&inputTypeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (inputTypeValue.IsEmpty() || inputTypeValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> inputType = inputTypeValue;
        if (!inputType.prepare(exceptionState))
            return;
        impl.setInputType(inputType);
    }

    v8::Local<v8::Value> isComposingValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isComposing")).ToLocal(&isComposingValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (isComposingValue.IsEmpty() || isComposingValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool isComposing = toBoolean(isolate, isComposingValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIsComposing(isComposing);
    }

    v8::Local<v8::Value> rangesValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "ranges")).ToLocal(&rangesValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (rangesValue.IsEmpty() || rangesValue->IsUndefined()) {
        // Do nothing.
    } else {
        HeapVector<Member<Range>> ranges = (toMemberNativeArray<Range>(rangesValue, 0, isolate, exceptionState));
        if (exceptionState.hadException())
            return;
        impl.setRanges(ranges);
    }
}

v8::Local<v8::Value> InputEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8InputEventInit(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8InputEventInit(const InputEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasData()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), v8String(isolate, impl.data()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "data"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasDataTransfer()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "dataTransfer"), ToV8(impl.dataTransfer(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "dataTransfer"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasInputType()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "inputType"), v8String(isolate, impl.inputType()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "inputType"), v8String(isolate, String("")))))
            return false;
    }

    if (impl.hasIsComposing()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isComposing"), v8Boolean(impl.isComposing(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isComposing"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasRanges()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "ranges"), ToV8(impl.ranges(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "ranges"), ToV8(HeapVector<Member<Range>>(), creationContext, isolate))))
            return false;
    }

    return true;
}

InputEventInit NativeValueTraits<InputEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    InputEventInit impl;
    V8InputEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
