// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Gamepad.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8GamepadButton.h"
#include "bindings/modules/v8/V8GamepadPose.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ConsoleMessage.h"
#include "core/origin_trials/OriginTrials.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Gamepad::wrapperTypeInfo = { gin::kEmbedderBlink, V8Gamepad::domTemplate, V8Gamepad::trace, V8Gamepad::traceWrappers, 0, nullptr, "Gamepad", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Gamepad.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Gamepad::s_wrapperTypeInfo = V8Gamepad::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Gamepad>::value,
    "Gamepad inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Gamepad::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Gamepad is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace GamepadV8Internal {

    static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueString(info, impl->id(), info.GetIsolate());
    }

    MODULES_EXPORT void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::idAttributeGetter(info);
    }

    static void indexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->index());
    }

    MODULES_EXPORT void indexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::indexAttributeGetter(info);
    }

    static void connectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueBool(info, impl->connected());
    }

    MODULES_EXPORT void connectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::connectedAttributeGetter(info);
    }

    static void timestampAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValue(info, static_cast<double>(impl->timestamp()));
    }

    MODULES_EXPORT void timestampAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::timestampAttributeGetter(info);
    }

    static void mappingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueString(info, impl->mapping(), info.GetIsolate());
    }

    MODULES_EXPORT void mappingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::mappingAttributeGetter(info);
    }

    static void axesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValue(info, ToV8(impl->axes(), info.Holder(), info.GetIsolate()));
    }

    MODULES_EXPORT void axesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::axesAttributeGetter(info);
    }

    static void buttonsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValue(info, ToV8(impl->buttons(), info.Holder(), info.GetIsolate()));
    }

    MODULES_EXPORT void buttonsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        GamepadV8Internal::buttonsAttributeGetter(info);
    }

    static void poseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        GamepadPose* cppValue(WTF::getPtr(impl->pose()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Gamepad#pose";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void poseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::GamepadPose);

        GamepadV8Internal::poseAttributeGetter(info);
    }

    static void handAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueString(info, impl->hand(), info.GetIsolate());
    }

    MODULES_EXPORT void handAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::GamepadHand);

        GamepadV8Internal::handAttributeGetter(info);
    }

    static void displayIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Gamepad* impl = V8Gamepad::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->displayId());
    }

    MODULES_EXPORT void displayIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::GamepadDisplayId);

        GamepadV8Internal::displayIdAttributeGetter(info);
    }

} // namespace GamepadV8Internal

const V8DOMConfiguration::AccessorConfiguration V8GamepadAccessors[] = {
    { "id", GamepadV8Internal::idAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "index", GamepadV8Internal::indexAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "connected", GamepadV8Internal::connectedAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "timestamp", GamepadV8Internal::timestampAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "mapping", GamepadV8Internal::mappingAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "axes", GamepadV8Internal::axesAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "buttons", GamepadV8Internal::buttonsAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8GamepadTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Gamepad::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Gamepad::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8GamepadAccessors, WTF_ARRAY_LENGTH(V8GamepadAccessors));
}

void V8Gamepad::installGamepadExtensions(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::Object> instance, v8::Local<v8::Object> prototype, v8::Local<v8::Function> interface)
{
    v8::Local<v8::FunctionTemplate> interfaceTemplate = V8Gamepad::wrapperTypeInfo.domTemplate(isolate, world);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    const V8DOMConfiguration::AccessorConfiguration accessordisplayIdConfiguration = { "displayId", GamepadV8Internal::displayIdAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
    V8DOMConfiguration::installAccessor(isolate, world, instance, prototype, interface, signature, accessordisplayIdConfiguration);
    const V8DOMConfiguration::AccessorConfiguration accessorhandConfiguration = { "hand", GamepadV8Internal::handAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
    V8DOMConfiguration::installAccessor(isolate, world, instance, prototype, interface, signature, accessorhandConfiguration);
    const V8DOMConfiguration::AccessorConfiguration accessorposeConfiguration = { "pose", GamepadV8Internal::poseAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
    V8DOMConfiguration::installAccessor(isolate, world, instance, prototype, interface, signature, accessorposeConfiguration);
}

void V8Gamepad::installGamepadExtensions(ScriptState* scriptState, v8::Local<v8::Object> instance)
{
    V8PerContextData* perContextData = V8PerContextData::from(scriptState->context());
    v8::Local<v8::Object> prototype = perContextData->prototypeForType(&V8Gamepad::wrapperTypeInfo);
    v8::Local<v8::Function> interface = perContextData->constructorForType(&V8Gamepad::wrapperTypeInfo);
    ALLOW_UNUSED_LOCAL(interface);
    installGamepadExtensions(scriptState->isolate(), scriptState->world(), instance, prototype, interface);
}

void V8Gamepad::installGamepadExtensions(ScriptState* scriptState)
{
    installGamepadExtensions(scriptState, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8Gamepad::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8GamepadTemplate);
}

bool V8Gamepad::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Gamepad::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Gamepad* V8Gamepad::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
