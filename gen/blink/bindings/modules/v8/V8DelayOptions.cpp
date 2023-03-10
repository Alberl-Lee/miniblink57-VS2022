// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8DelayOptions.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8AudioNodeOptions.h"

namespace blink {

void V8DelayOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DelayOptions& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8AudioNodeOptions::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> delayTimeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "delayTime")).ToLocal(&delayTimeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (delayTimeValue.IsEmpty() || delayTimeValue->IsUndefined()) {
        // Do nothing.
    } else {
        double delayTime = toRestrictedDouble(isolate, delayTimeValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDelayTime(delayTime);
    }

    v8::Local<v8::Value> maxDelayTimeValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "maxDelayTime")).ToLocal(&maxDelayTimeValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (maxDelayTimeValue.IsEmpty() || maxDelayTimeValue->IsUndefined()) {
        // Do nothing.
    } else {
        double maxDelayTime = toRestrictedDouble(isolate, maxDelayTimeValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setMaxDelayTime(maxDelayTime);
    }
}

v8::Local<v8::Value> DelayOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8DelayOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8DelayOptions(const DelayOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasDelayTime()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "delayTime"), v8::Number::New(isolate, impl.delayTime()))))
            return false;
    }

    if (impl.hasMaxDelayTime()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "maxDelayTime"), v8::Number::New(isolate, impl.maxDelayTime()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "maxDelayTime"), v8::Number::New(isolate, 1))))
            return false;
    }

    return true;
}

DelayOptions NativeValueTraits<DelayOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    DelayOptions impl;
    V8DelayOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
