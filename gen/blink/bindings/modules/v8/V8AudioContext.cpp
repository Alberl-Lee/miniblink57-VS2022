// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8AudioContext.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AudioTimestamp.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AudioContext::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioContext::domTemplate, V8AudioContext::trace, V8AudioContext::traceWrappers, 0, nullptr, "AudioContext", &V8BaseAudioContext::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AudioContext::s_wrapperTypeInfo = V8AudioContext::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, AudioContext>::value,
    "AudioContext does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&AudioContext::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "AudioContext is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AudioContextV8Internal {

    static void suspendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "AudioContext", "suspend");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8AudioContext::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        AudioContext* impl = V8AudioContext::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptPromise result = impl->suspendContext(scriptState);
        v8SetReturnValue(info, result.v8Value());
    }

    MODULES_EXPORT void suspendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::AudioContextSuspend);
        AudioContextV8Internal::suspendMethod(info);
    }

    static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "AudioContext", "close");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8AudioContext::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        AudioContext* impl = V8AudioContext::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptPromise result = impl->closeContext(scriptState);
        v8SetReturnValue(info, result.v8Value());
    }

    MODULES_EXPORT void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::AudioContextClose);
        AudioContextV8Internal::closeMethod(info);
    }

    static void getOutputTimestampMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AudioContext* impl = V8AudioContext::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        AudioTimestamp result;
        impl->getOutputTimestamp(scriptState, result);
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getOutputTimestampMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::AudioContextGetOutputTimestamp);
        AudioContextV8Internal::getOutputTimestampMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "AudioContext");

        Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
        AudioContext* impl = AudioContext::create(document, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8AudioContext::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace AudioContextV8Internal

const V8DOMConfiguration::MethodConfiguration V8AudioContextMethods[] = {
    { "suspend", AudioContextV8Internal::suspendMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
    { "close", AudioContextV8Internal::closeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
    { "getOutputTimestamp", AudioContextV8Internal::getOutputTimestampMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8AudioContext::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8AudioContext_Constructor);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("AudioContext"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    AudioContextV8Internal::constructor(info);
}

static void installV8AudioContextTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AudioContext::wrapperTypeInfo.interfaceName, V8BaseAudioContext::domTemplate(isolate, world), V8AudioContext::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8AudioContext::constructorCallback);
    interfaceTemplate->SetLength(0);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AudioContextMethods, WTF_ARRAY_LENGTH(V8AudioContextMethods));
}

v8::Local<v8::FunctionTemplate> V8AudioContext::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioContextTemplate);
}

bool V8AudioContext::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioContext::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioContext* V8AudioContext::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
