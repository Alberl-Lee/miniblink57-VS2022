// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8CloseEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8CloseEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CloseEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> codeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "code")).ToLocal(&codeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (codeValue.IsEmpty() || codeValue->IsUndefined()) {
        // Do nothing.
    } else {
        unsigned code = toUInt16(isolate, codeValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setCode(code);
    }

    v8::Local<v8::Value> reasonValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "reason")).ToLocal(&reasonValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> reason = reasonValue;
        if (!reason.prepare(exceptionState))
            return;
        impl.setReason(reason);
    }

    v8::Local<v8::Value> wasCleanValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "wasClean")).ToLocal(&wasCleanValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (wasCleanValue.IsEmpty() || wasCleanValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool wasClean = toBoolean(isolate, wasCleanValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setWasClean(wasClean);
    }
}

v8::Local<v8::Value> CloseEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8CloseEventInit(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8CloseEventInit(const CloseEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8EventInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasCode()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "code"), v8::Integer::NewFromUnsigned(isolate, impl.code()))))
            return false;
    }

    if (impl.hasReason()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "reason"), v8String(isolate, impl.reason()))))
            return false;
    }

    if (impl.hasWasClean()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "wasClean"), v8Boolean(impl.wasClean(), isolate))))
            return false;
    }

    return true;
}

CloseEventInit NativeValueTraits<CloseEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    CloseEventInit impl;
    V8CloseEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
