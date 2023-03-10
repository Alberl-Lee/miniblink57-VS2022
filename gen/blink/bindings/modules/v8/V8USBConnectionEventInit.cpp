// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8USBConnectionEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"
#include "bindings/modules/v8/V8USBDevice.h"

namespace blink {

void V8USBConnectionEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USBConnectionEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("Missing required member(s): device.");
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
    v8::Local<v8::Value> deviceValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "device")).ToLocal(&deviceValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (deviceValue.IsEmpty() || deviceValue->IsUndefined()) {
        exceptionState.throwTypeError("required member device is undefined.");
        return;
    } else {
        USBDevice* device = V8USBDevice::toImplWithTypeCheck(isolate, deviceValue);
        if (!device) {
            exceptionState.throwTypeError("member device is not of type USBDevice.");
            return;
        }
        impl.setDevice(device);
    }
}

v8::Local<v8::Value> USBConnectionEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8USBConnectionEventInit(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8USBConnectionEventInit(const USBConnectionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8EventInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasDevice()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "device"), ToV8(impl.device(), creationContext, isolate))))
            return false;
    } else {
        NOTREACHED();
    }

    return true;
}

USBConnectionEventInit NativeValueTraits<USBConnectionEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    USBConnectionEventInit impl;
    V8USBConnectionEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
