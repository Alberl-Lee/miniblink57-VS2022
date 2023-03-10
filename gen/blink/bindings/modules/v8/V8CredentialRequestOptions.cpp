// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8CredentialRequestOptions.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8FederatedCredentialRequestOptions.h"

namespace blink {

void V8CredentialRequestOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CredentialRequestOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> federatedValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "federated")).ToLocal(&federatedValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (federatedValue.IsEmpty() || federatedValue->IsUndefined()) {
        // Do nothing.
    } else {
        FederatedCredentialRequestOptions federated;
        V8FederatedCredentialRequestOptions::toImpl(isolate, federatedValue, federated, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setFederated(federated);
    }

    v8::Local<v8::Value> passwordValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "password")).ToLocal(&passwordValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (passwordValue.IsEmpty() || passwordValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool password = toBoolean(isolate, passwordValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setPassword(password);
    }

    v8::Local<v8::Value> unmediatedValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "unmediated")).ToLocal(&unmediatedValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (unmediatedValue.IsEmpty() || unmediatedValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool unmediated = toBoolean(isolate, unmediatedValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setUnmediated(unmediated);
    }
}

v8::Local<v8::Value> CredentialRequestOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8CredentialRequestOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8CredentialRequestOptions(const CredentialRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasFederated()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "federated"), ToV8(impl.federated(), creationContext, isolate))))
            return false;
    }

    if (impl.hasPassword()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "password"), v8Boolean(impl.password(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "password"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasUnmediated()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "unmediated"), v8Boolean(impl.unmediated(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "unmediated"), v8Boolean(false, isolate))))
            return false;
    }

    return true;
}

CredentialRequestOptions NativeValueTraits<CredentialRequestOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    CredentialRequestOptions impl;
    V8CredentialRequestOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
