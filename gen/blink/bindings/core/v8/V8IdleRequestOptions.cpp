// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8IdleRequestOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8IdleRequestOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, IdleRequestOptions& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> timeoutValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "timeout")).ToLocal(&timeoutValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (timeoutValue.IsEmpty() || timeoutValue->IsUndefined()) {
        // Do nothing.
    } else {
        unsigned timeout = toUInt32(isolate, timeoutValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setTimeout(timeout);
    }
}

v8::Local<v8::Value> IdleRequestOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8IdleRequestOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8IdleRequestOptions(const IdleRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasTimeout()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timeout"), v8::Integer::NewFromUnsigned(isolate, impl.timeout()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "timeout"), v8::Integer::NewFromUnsigned(isolate, 0u))))
            return false;
    }

    return true;
}

IdleRequestOptions NativeValueTraits<IdleRequestOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    IdleRequestOptions impl;
    V8IdleRequestOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
