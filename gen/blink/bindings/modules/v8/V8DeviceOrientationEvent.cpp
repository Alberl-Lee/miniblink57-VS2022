// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8DeviceOrientationEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8DeviceOrientationEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8DeviceOrientationEvent::domTemplate, V8DeviceOrientationEvent::trace, V8DeviceOrientationEvent::traceWrappers, 0, nullptr, "DeviceOrientationEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DeviceOrientationEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DeviceOrientationEvent::s_wrapperTypeInfo = V8DeviceOrientationEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DeviceOrientationEvent>::value,
    "DeviceOrientationEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DeviceOrientationEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "DeviceOrientationEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DeviceOrientationEventV8Internal {

    static void alphaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DeviceOrientationEvent* impl = V8DeviceOrientationEvent::toImpl(holder);

        bool isNull = false;

        double cppValue(impl->alpha(isNull));

        if (isNull) {
            v8SetReturnValueNull(info);
            return;
        }

        v8SetReturnValue(info, cppValue);
    }

    MODULES_EXPORT void alphaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DeviceOrientationEventV8Internal::alphaAttributeGetter(info);
    }

    static void betaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DeviceOrientationEvent* impl = V8DeviceOrientationEvent::toImpl(holder);

        bool isNull = false;

        double cppValue(impl->beta(isNull));

        if (isNull) {
            v8SetReturnValueNull(info);
            return;
        }

        v8SetReturnValue(info, cppValue);
    }

    MODULES_EXPORT void betaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DeviceOrientationEventV8Internal::betaAttributeGetter(info);
    }

    static void gammaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DeviceOrientationEvent* impl = V8DeviceOrientationEvent::toImpl(holder);

        bool isNull = false;

        double cppValue(impl->gamma(isNull));

        if (isNull) {
            v8SetReturnValueNull(info);
            return;
        }

        v8SetReturnValue(info, cppValue);
    }

    MODULES_EXPORT void gammaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DeviceOrientationEventV8Internal::gammaAttributeGetter(info);
    }

    static void absoluteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DeviceOrientationEvent* impl = V8DeviceOrientationEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->absolute());
    }

    MODULES_EXPORT void absoluteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DeviceOrientationEventV8Internal::absoluteAttributeGetter(info);
    }

    static void initDeviceOrientationEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DeviceOrientationEvent", "initDeviceOrientationEvent");

        DeviceOrientationEvent* impl = V8DeviceOrientationEvent::toImpl(info.Holder());

        V8StringResource<> type;
        bool bubbles;
        bool cancelable;
        Nullable<double> alpha;
        Nullable<double> beta;
        Nullable<double> gamma;
        bool absolute;
        type = info[0];
        if (!type.prepare())
            return;

        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.hadException())
            return;

        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.hadException())
            return;

        if (!isUndefinedOrNull(info[3])) {
            alpha = toRestrictedDouble(info.GetIsolate(), info[3], exceptionState);
            if (exceptionState.hadException())
                return;
        }

        if (!isUndefinedOrNull(info[4])) {
            beta = toRestrictedDouble(info.GetIsolate(), info[4], exceptionState);
            if (exceptionState.hadException())
                return;
        }

        if (!isUndefinedOrNull(info[5])) {
            gamma = toRestrictedDouble(info.GetIsolate(), info[5], exceptionState);
            if (exceptionState.hadException())
                return;
        }

        absolute = toBoolean(info.GetIsolate(), info[6], exceptionState);
        if (exceptionState.hadException())
            return;

        impl->initDeviceOrientationEvent(type, bubbles, cancelable, alpha, beta, gamma, absolute);
    }

    MODULES_EXPORT void initDeviceOrientationEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8DeviceOrientationEvent_InitDeviceOrientationEvent_Method);
        DeviceOrientationEventV8Internal::initDeviceOrientationEventMethod(info);
    }

} // namespace DeviceOrientationEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8DeviceOrientationEventAccessors[] = {
    { "alpha", DeviceOrientationEventV8Internal::alphaAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "beta", DeviceOrientationEventV8Internal::betaAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "gamma", DeviceOrientationEventV8Internal::gammaAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "absolute", DeviceOrientationEventV8Internal::absoluteAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8DeviceOrientationEventMethods[] = {
    { "initDeviceOrientationEvent", DeviceOrientationEventV8Internal::initDeviceOrientationEventMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8DeviceOrientationEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DeviceOrientationEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8DeviceOrientationEvent::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DeviceOrientationEventAccessors, WTF_ARRAY_LENGTH(V8DeviceOrientationEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DeviceOrientationEventMethods, WTF_ARRAY_LENGTH(V8DeviceOrientationEventMethods));
}

v8::Local<v8::FunctionTemplate> V8DeviceOrientationEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DeviceOrientationEventTemplate);
}

bool V8DeviceOrientationEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DeviceOrientationEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DeviceOrientationEvent* V8DeviceOrientationEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
