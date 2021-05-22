// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8ElementDefinitionOptions.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8ElementDefinitionOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ElementDefinitionOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> extendsValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "extends")).ToLocal(&extendsValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (extendsValue.IsEmpty() || extendsValue->IsUndefined()) {
        // Do nothing.
    } else if (extendsValue->IsNull()) {
        impl.setExtendsToNull();
    } else {
        V8StringResource<> extends = extendsValue;
        if (!extends.prepare(exceptionState))
            return;
        impl.setExtends(extends);
    }
}

v8::Local<v8::Value> ElementDefinitionOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ElementDefinitionOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8ElementDefinitionOptions(const ElementDefinitionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasExtends()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "extends"), v8String(isolate, impl.extends()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "extends"), v8::Null(isolate))))
            return false;
    }

    return true;
}

ElementDefinitionOptions NativeValueTraits<ElementDefinitionOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ElementDefinitionOptions impl;
    V8ElementDefinitionOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
