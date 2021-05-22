// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8AudioBufferSourceOptions.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8AudioBuffer.h"

namespace blink {

void V8AudioBufferSourceOptions::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioBufferSourceOptions& impl, ExceptionState& exceptionState)
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
    v8::Local<v8::Value> bufferValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "buffer")).ToLocal(&bufferValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (bufferValue.IsEmpty() || bufferValue->IsUndefined()) {
        // Do nothing.
    } else if (bufferValue->IsNull()) {
        impl.setBufferToNull();
    } else {
        AudioBuffer* buffer = V8AudioBuffer::toImplWithTypeCheck(isolate, bufferValue);
        if (!buffer) {
            exceptionState.throwTypeError("member buffer is not of type AudioBuffer.");
            return;
        }
        impl.setBuffer(buffer);
    }

    v8::Local<v8::Value> detuneValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "detune")).ToLocal(&detuneValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (detuneValue.IsEmpty() || detuneValue->IsUndefined()) {
        // Do nothing.
    } else {
        float detune = toRestrictedFloat(isolate, detuneValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setDetune(detune);
    }

    v8::Local<v8::Value> loopValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "loop")).ToLocal(&loopValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (loopValue.IsEmpty() || loopValue->IsUndefined()) {
        // Do nothing.
    } else {
        bool loop = toBoolean(isolate, loopValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setLoop(loop);
    }

    v8::Local<v8::Value> loopEndValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "loopEnd")).ToLocal(&loopEndValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (loopEndValue.IsEmpty() || loopEndValue->IsUndefined()) {
        // Do nothing.
    } else {
        double loopEnd = toRestrictedDouble(isolate, loopEndValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setLoopEnd(loopEnd);
    }

    v8::Local<v8::Value> loopStartValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "loopStart")).ToLocal(&loopStartValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (loopStartValue.IsEmpty() || loopStartValue->IsUndefined()) {
        // Do nothing.
    } else {
        double loopStart = toRestrictedDouble(isolate, loopStartValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setLoopStart(loopStart);
    }

    v8::Local<v8::Value> playbackRateValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "playbackRate")).ToLocal(&playbackRateValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (playbackRateValue.IsEmpty() || playbackRateValue->IsUndefined()) {
        // Do nothing.
    } else {
        float playbackRate = toRestrictedFloat(isolate, playbackRateValue, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setPlaybackRate(playbackRate);
    }
}

v8::Local<v8::Value> AudioBufferSourceOptions::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8AudioBufferSourceOptions(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8AudioBufferSourceOptions(const AudioBufferSourceOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasBuffer()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "buffer"), ToV8(impl.buffer(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "buffer"), v8::Null(isolate))))
            return false;
    }

    if (impl.hasDetune()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "detune"), v8::Number::New(isolate, impl.detune()))))
            return false;
    }

    if (impl.hasLoop()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "loop"), v8Boolean(impl.loop(), isolate))))
            return false;
    }

    if (impl.hasLoopEnd()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "loopEnd"), v8::Number::New(isolate, impl.loopEnd()))))
            return false;
    }

    if (impl.hasLoopStart()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "loopStart"), v8::Number::New(isolate, impl.loopStart()))))
            return false;
    }

    if (impl.hasPlaybackRate()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "playbackRate"), v8::Number::New(isolate, impl.playbackRate()))))
            return false;
    }

    return true;
}

AudioBufferSourceOptions NativeValueTraits<AudioBufferSourceOptions>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    AudioBufferSourceOptions impl;
    V8AudioBufferSourceOptions::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
