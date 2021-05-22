// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8AccelerometerReading.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AccelerometerReadingInit.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8AccelerometerReading::wrapperTypeInfo = { gin::kEmbedderBlink, V8AccelerometerReading::domTemplate, V8AccelerometerReading::trace, V8AccelerometerReading::traceWrappers, 0, nullptr, "AccelerometerReading", &V8SensorReading::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AccelerometerReading.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AccelerometerReading::s_wrapperTypeInfo = V8AccelerometerReading::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AccelerometerReading>::value,
    "AccelerometerReading inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AccelerometerReading::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "AccelerometerReading is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AccelerometerReadingV8Internal {

    static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        AccelerometerReading* impl = V8AccelerometerReading::toImpl(holder);

        v8SetReturnValue(info, impl->x());
    }

    MODULES_EXPORT void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AccelerometerReadingV8Internal::xAttributeGetter(info);
    }

    static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        AccelerometerReading* impl = V8AccelerometerReading::toImpl(holder);

        v8SetReturnValue(info, impl->y());
    }

    MODULES_EXPORT void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AccelerometerReadingV8Internal::yAttributeGetter(info);
    }

    static void zAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        AccelerometerReading* impl = V8AccelerometerReading::toImpl(holder);

        v8SetReturnValue(info, impl->z());
    }

    MODULES_EXPORT void zAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AccelerometerReadingV8Internal::zAttributeGetter(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "AccelerometerReading");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        AccelerometerReadingInit accelerometerReadingInit;
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('accelerometerReadingInit') is not an object.");

            return;
        }
        V8AccelerometerReadingInit::toImpl(info.GetIsolate(), info[0], accelerometerReadingInit, exceptionState);
        if (exceptionState.hadException())
            return;

        AccelerometerReading* impl = AccelerometerReading::create(accelerometerReadingInit);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8AccelerometerReading::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace AccelerometerReadingV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AccelerometerReadingAccessors[] = {
    { "x", AccelerometerReadingV8Internal::xAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "y", AccelerometerReadingV8Internal::yAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "z", AccelerometerReadingV8Internal::zAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8AccelerometerReading::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("AccelerometerReading"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    AccelerometerReadingV8Internal::constructor(info);
}

static void installV8AccelerometerReadingTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AccelerometerReading::wrapperTypeInfo.interfaceName, V8SensorReading::domTemplate(isolate, world), V8AccelerometerReading::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8AccelerometerReading::constructorCallback);
    interfaceTemplate->SetLength(1);

    if (!RuntimeEnabledFeatures::sensorEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AccelerometerReadingAccessors, WTF_ARRAY_LENGTH(V8AccelerometerReadingAccessors));
}

v8::Local<v8::FunctionTemplate> V8AccelerometerReading::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AccelerometerReadingTemplate);
}

bool V8AccelerometerReading::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AccelerometerReading::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AccelerometerReading* V8AccelerometerReading::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
