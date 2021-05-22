// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8UnderlyingSourceBase.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8UnderlyingSourceBase::wrapperTypeInfo = { gin::kEmbedderBlink, V8UnderlyingSourceBase::domTemplate, V8UnderlyingSourceBase::trace, V8UnderlyingSourceBase::traceWrappers, 0, nullptr, "UnderlyingSourceBase", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in UnderlyingSourceBase.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& UnderlyingSourceBase::s_wrapperTypeInfo = V8UnderlyingSourceBase::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, UnderlyingSourceBase>::value,
    "UnderlyingSourceBase does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&UnderlyingSourceBase::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "UnderlyingSourceBase is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace UnderlyingSourceBaseV8Internal {

    static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "UnderlyingSourceBase", "start");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8UnderlyingSourceBase::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        UnderlyingSourceBase* impl = V8UnderlyingSourceBase::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue stream;
        stream = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        ScriptPromise result = impl->startWrapper(scriptState, stream);
        v8SetReturnValue(info, result.v8Value());
    }

    CORE_EXPORT void startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBaseV8Internal::startMethod(info);
    }

    static void pullMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "UnderlyingSourceBase", "pull");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8UnderlyingSourceBase::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        UnderlyingSourceBase* impl = V8UnderlyingSourceBase::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptPromise result = impl->pull(scriptState);
        v8SetReturnValue(info, result.v8Value());
    }

    CORE_EXPORT void pullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBaseV8Internal::pullMethod(info);
    }

    static void cancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "UnderlyingSourceBase", "cancel");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8UnderlyingSourceBase::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        UnderlyingSourceBase* impl = V8UnderlyingSourceBase::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue reason;
        reason = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        ScriptPromise result = impl->cancelWrapper(scriptState, reason);
        v8SetReturnValue(info, result.v8Value());
    }

    CORE_EXPORT void cancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBaseV8Internal::cancelMethod(info);
    }

    static void notifyLockAcquiredMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBase* impl = V8UnderlyingSourceBase::toImpl(info.Holder());

        impl->notifyLockAcquired();
    }

    CORE_EXPORT void notifyLockAcquiredMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBaseV8Internal::notifyLockAcquiredMethod(info);
    }

    static void notifyLockReleasedMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBase* impl = V8UnderlyingSourceBase::toImpl(info.Holder());

        impl->notifyLockReleased();
    }

    CORE_EXPORT void notifyLockReleasedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UnderlyingSourceBaseV8Internal::notifyLockReleasedMethod(info);
    }

} // namespace UnderlyingSourceBaseV8Internal

const V8DOMConfiguration::MethodConfiguration V8UnderlyingSourceBaseMethods[] = {
    { "start", UnderlyingSourceBaseV8Internal::startMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
    { "pull", UnderlyingSourceBaseV8Internal::pullMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
    { "cancel", UnderlyingSourceBaseV8Internal::cancelMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
    { "notifyLockAcquired", UnderlyingSourceBaseV8Internal::notifyLockAcquiredMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "notifyLockReleased", UnderlyingSourceBaseV8Internal::notifyLockReleasedMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8UnderlyingSourceBaseTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8UnderlyingSourceBase::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8UnderlyingSourceBase::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8UnderlyingSourceBaseMethods, WTF_ARRAY_LENGTH(V8UnderlyingSourceBaseMethods));
}

v8::Local<v8::FunctionTemplate> V8UnderlyingSourceBase::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8UnderlyingSourceBaseTemplate);
}

bool V8UnderlyingSourceBase::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8UnderlyingSourceBase::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

UnderlyingSourceBase* V8UnderlyingSourceBase::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
