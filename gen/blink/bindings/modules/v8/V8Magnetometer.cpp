// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Magnetometer.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MagnetometerReading.h"
#include "bindings/modules/v8/V8SensorOptions.h"
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
const WrapperTypeInfo V8Magnetometer::wrapperTypeInfo = { gin::kEmbedderBlink, V8Magnetometer::domTemplate, V8Magnetometer::trace, V8Magnetometer::traceWrappers, 0, nullptr, "Magnetometer", &V8Sensor::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Magnetometer.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Magnetometer::s_wrapperTypeInfo = V8Magnetometer::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, Magnetometer>::value,
    "Magnetometer does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&Magnetometer::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Magnetometer is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MagnetometerV8Internal {

    static void readingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Magnetometer* impl = V8Magnetometer::toImpl(holder);

        MagnetometerReading* cppValue(WTF::getPtr(impl->reading()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Magnetometer#reading";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void readingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MagnetometerV8Internal::readingAttributeGetter(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "Magnetometer");

        SensorOptions sensorOptions;
        if (!isUndefinedOrNull(info[0]) && !info[0]->IsObject()) {
            exceptionState.throwTypeError("parameter 1 ('sensorOptions') is not an object.");

            return;
        }
        V8SensorOptions::toImpl(info.GetIsolate(), info[0], sensorOptions, exceptionState);
        if (exceptionState.hadException())
            return;

        ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
        Magnetometer* impl = Magnetometer::create(executionContext, sensorOptions, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Magnetometer::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace MagnetometerV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MagnetometerAccessors[] = {
    { "reading", MagnetometerV8Internal::readingAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8Magnetometer::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Magnetometer"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MagnetometerV8Internal::constructor(info);
}

static void installV8MagnetometerTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Magnetometer::wrapperTypeInfo.interfaceName, V8Sensor::domTemplate(isolate, world), V8Magnetometer::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8Magnetometer::constructorCallback);
    interfaceTemplate->SetLength(0);

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
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MagnetometerAccessors, WTF_ARRAY_LENGTH(V8MagnetometerAccessors));
}

v8::Local<v8::FunctionTemplate> V8Magnetometer::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MagnetometerTemplate);
}

bool V8Magnetometer::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Magnetometer::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Magnetometer* V8Magnetometer::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
