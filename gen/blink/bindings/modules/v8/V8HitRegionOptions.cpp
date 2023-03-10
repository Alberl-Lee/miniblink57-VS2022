// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8HitRegionOptions.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/modules/v8/V8Path2D.h"

namespace blink {

void V8HitRegionOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, HitRegionOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> controlValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "control")).ToLocal(&controlValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (controlValue.IsEmpty() || controlValue->IsUndefined()) {
        // Do nothing.
    } else if (controlValue->IsNull()) {
        impl.setControlToNull();
    } else {
        Element* control = V8Element::toImplWithTypeCheck(isolate, controlValue);
        if (!control) {
            exceptionState.throwTypeError("member control is not of type Element.");
            return;
        }
        impl.setControl(control);
    }

    v8::Local<v8::Value> fillRuleValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "fillRule")).ToLocal(&fillRuleValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (fillRuleValue.IsEmpty() || fillRuleValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> fillRule = fillRuleValue;
        if (!fillRule.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "nonzero",
            "evenodd",
        };
        if (!isValidEnum(fillRule, validValues, WTF_ARRAY_LENGTH(validValues), "CanvasFillRule", exceptionState))
            return;
        impl.setFillRule(fillRule);
    }

    v8::Local<v8::Value> idValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "id")).ToLocal(&idValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (idValue.IsEmpty() || idValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> id = idValue;
        if (!id.prepare(exceptionState))
            return;
        impl.setId(id);
    }

    v8::Local<v8::Value> pathValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "path")).ToLocal(&pathValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (pathValue.IsEmpty() || pathValue->IsUndefined()) {
        // Do nothing.
    } else if (pathValue->IsNull()) {
        impl.setPathToNull();
    } else {
        Path2D* path = V8Path2D::toImplWithTypeCheck(isolate, pathValue);
        if (!path) {
            exceptionState.throwTypeError("member path is not of type Path2D.");
            return;
        }
        impl.setPath(path);
    }
}

v8::Local<v8::Value> HitRegionOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8HitRegionOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8HitRegionOptions(const HitRegionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasControl()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "control"), ToV8(impl.control(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "control"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasFillRule()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fillRule"), v8String(isolate, impl.fillRule()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "fillRule"), v8String(isolate, String("nonzero")))))
            return false;
    }

    if (impl.hasId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "id"), v8String(isolate, impl.id()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "id"), v8String(isolate, String("")))))
            return false;
    }

    if (impl.hasPath()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "path"), ToV8(impl.path(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "path"), v8::Null(isolate))))
            return false;
    }

    return true;
}

HitRegionOptions NativeValueTraits<HitRegionOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    HitRegionOptions impl;
    V8HitRegionOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
