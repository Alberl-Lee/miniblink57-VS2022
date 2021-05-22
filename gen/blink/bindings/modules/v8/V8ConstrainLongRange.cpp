// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8ConstrainLongRange.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8LongRange.h"

namespace blink {

void V8ConstrainLongRange::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ConstrainLongRange& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8LongRange::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> exactValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "exact")).ToLocal(&exactValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (exactValue.IsEmpty() || exactValue->IsUndefined()) {
        // Do nothing.
    } else {
        int exact = toInt32(isolate, exactValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setExact(exact);
    }

    v8::Local<v8::Value> idealValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "ideal")).ToLocal(&idealValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (idealValue.IsEmpty() || idealValue->IsUndefined()) {
        // Do nothing.
    } else {
        int ideal = toInt32(isolate, idealValue, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setIdeal(ideal);
    }
}

v8::Local<v8::Value> ConstrainLongRange::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ConstrainLongRange(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8ConstrainLongRange(const ConstrainLongRange& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8LongRange(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasExact()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "exact"), v8::Integer::New(isolate, impl.exact()))))
            return false;
    }

    if (impl.hasIdeal()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "ideal"), v8::Integer::New(isolate, impl.ideal()))))
            return false;
    }

    return true;
}

ConstrainLongRange NativeValueTraits<ConstrainLongRange>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ConstrainLongRange impl;
    V8ConstrainLongRange::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
