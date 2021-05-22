// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8BluetoothUUID.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/StringOrUnsignedLong.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8BluetoothUUID::wrapperTypeInfo = { gin::kEmbedderBlink, V8BluetoothUUID::domTemplate, V8BluetoothUUID::trace, V8BluetoothUUID::traceWrappers, 0, nullptr, "BluetoothUUID", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BluetoothUUID.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& BluetoothUUID::s_wrapperTypeInfo = V8BluetoothUUID::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, BluetoothUUID>::value,
    "BluetoothUUID inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&BluetoothUUID::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "BluetoothUUID is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace BluetoothUUIDV8Internal {

    static void getServiceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "BluetoothUUID", "getService");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        StringOrUnsignedLong name;
        V8StringOrUnsignedLong::toImpl(info.GetIsolate(), info[0], name, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        String result = BluetoothUUID::getService(name, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueString(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void getServiceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        BluetoothUUIDV8Internal::getServiceMethod(info);
    }

    static void getCharacteristicMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "BluetoothUUID", "getCharacteristic");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        StringOrUnsignedLong name;
        V8StringOrUnsignedLong::toImpl(info.GetIsolate(), info[0], name, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        String result = BluetoothUUID::getCharacteristic(name, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueString(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void getCharacteristicMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        BluetoothUUIDV8Internal::getCharacteristicMethod(info);
    }

    static void getDescriptorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "BluetoothUUID", "getDescriptor");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        StringOrUnsignedLong name;
        V8StringOrUnsignedLong::toImpl(info.GetIsolate(), info[0], name, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        String result = BluetoothUUID::getDescriptor(name, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueString(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void getDescriptorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        BluetoothUUIDV8Internal::getDescriptorMethod(info);
    }

    static void canonicalUUIDMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "BluetoothUUID", "canonicalUUID");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned alias;
        alias = toUInt32(info.GetIsolate(), info[0], EnforceRange, exceptionState);
        if (exceptionState.hadException())
            return;

        v8SetReturnValueString(info, BluetoothUUID::canonicalUUID(alias), info.GetIsolate());
    }

    MODULES_EXPORT void canonicalUUIDMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        BluetoothUUIDV8Internal::canonicalUUIDMethod(info);
    }

} // namespace BluetoothUUIDV8Internal

const V8DOMConfiguration::MethodConfiguration V8BluetoothUUIDMethods[] = {
    { "getService", BluetoothUUIDV8Internal::getServiceMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "getCharacteristic", BluetoothUUIDV8Internal::getCharacteristicMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "getDescriptor", BluetoothUUIDV8Internal::getDescriptorMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "canonicalUUID", BluetoothUUIDV8Internal::canonicalUUIDMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
};

static void installV8BluetoothUUIDTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8BluetoothUUID::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8BluetoothUUID::internalFieldCount);

    if (!RuntimeEnabledFeatures::webBluetoothEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8BluetoothUUIDMethods, WTF_ARRAY_LENGTH(V8BluetoothUUIDMethods));
}

v8::Local<v8::FunctionTemplate> V8BluetoothUUID::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8BluetoothUUIDTemplate);
}

bool V8BluetoothUUID::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8BluetoothUUID::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

BluetoothUUID* V8BluetoothUUID::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
