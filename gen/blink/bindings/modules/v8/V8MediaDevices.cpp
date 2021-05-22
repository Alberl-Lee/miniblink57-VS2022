// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8MediaDevices.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerHelper.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaStreamConstraints.h"
#include "bindings/modules/v8/V8MediaTrackSupportedConstraints.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MediaDevices::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaDevices::domTemplate, V8MediaDevices::trace, V8MediaDevices::traceWrappers, 0, nullptr, "MediaDevices", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaDevices.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaDevices::s_wrapperTypeInfo = V8MediaDevices::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MediaDevices>::value,
    "MediaDevices does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MediaDevices::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "MediaDevices is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MediaDevicesV8Internal {

    static void ondevicechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MediaDevices* impl = V8MediaDevices::toImpl(holder);

        EventListener* cppValue(WTF::getPtr(impl->ondevicechange()));

        v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
    }

    MODULES_EXPORT void ondevicechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaDevicesV8Internal::ondevicechangeAttributeGetter(info);
    }

    static void ondevicechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        MediaDevices* impl = V8MediaDevices::toImpl(holder);

        // Prepare the value to be set.
        moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->ondevicechange(), v8Value, V8MediaDevices::eventListenerCacheIndex);

        impl->setOndevicechange(V8EventListenerHelper::getEventListener(ScriptState::forReceiverObject(info), v8Value, true, ListenerFindOrCreate));
    }

    MODULES_EXPORT void ondevicechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        MediaDevicesV8Internal::ondevicechangeAttributeSetter(v8Value, info);
    }

    static void enumerateDevicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaDevices", "enumerateDevices");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8MediaDevices::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        MediaDevices* impl = V8MediaDevices::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptPromise result = impl->enumerateDevices(scriptState);
        v8SetReturnValue(info, result.v8Value());
    }

    MODULES_EXPORT void enumerateDevicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::MediaDevicesEnumerateDevices);
        MediaDevicesV8Internal::enumerateDevicesMethod(info);
    }

    static void getSupportedConstraintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaDevices* impl = V8MediaDevices::toImpl(info.Holder());

        MediaTrackSupportedConstraints result;
        impl->getSupportedConstraints(result);
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getSupportedConstraintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaDevicesV8Internal::getSupportedConstraintsMethod(info);
    }

    static void getUserMediaMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaDevices", "getUserMedia");
        ExceptionToRejectPromiseScope rejectPromiseScope(info, exceptionState);

        // V8DOMConfiguration::DoNotCheckHolder
        // Make sure that info.Holder() really points to an instance of the type.
        if (!V8MediaDevices::hasInstance(info.Holder(), info.GetIsolate())) {
            exceptionState.throwTypeError("Illegal invocation");
            return;
        }
        MediaDevices* impl = V8MediaDevices::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        MediaStreamConstraints constraints;
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('constraints') is not an object.");

            return;
        }
        V8MediaStreamConstraints::toImpl(info.GetIsolate(), info[0], constraints, exceptionState);
        if (exceptionState.hadException())
            return;

        ScriptPromise result = impl->getUserMedia(scriptState, constraints, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result.v8Value());
    }

    MODULES_EXPORT void getUserMediaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::GetUserMediaPromise);
        MediaDevicesV8Internal::getUserMediaMethod(info);
    }

} // namespace MediaDevicesV8Internal

const V8DOMConfiguration::MethodConfiguration V8MediaDevicesMethods[] = {
    { "enumerateDevices", MediaDevicesV8Internal::enumerateDevicesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder },
};

static void installV8MediaDevicesTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaDevices::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8MediaDevices::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaDevicesMethods, WTF_ARRAY_LENGTH(V8MediaDevicesMethods));

    if (RuntimeEnabledFeatures::onDeviceChangeEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorondevicechangeConfiguration = { "ondevicechange", MediaDevicesV8Internal::ondevicechangeAttributeGetterCallback, MediaDevicesV8Internal::ondevicechangeAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorondevicechangeConfiguration);
    }

    if (RuntimeEnabledFeatures::mediaConstraintsEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getSupportedConstraintsMethodConfiguration = { "getSupportedConstraints", MediaDevicesV8Internal::getSupportedConstraintsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getSupportedConstraintsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::getUserMediaEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getUserMediaMethodConfiguration = { "getUserMedia", MediaDevicesV8Internal::getUserMediaMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::DoNotCheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getUserMediaMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8MediaDevices::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaDevicesTemplate);
}

bool V8MediaDevices::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaDevices::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaDevices* V8MediaDevices::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
