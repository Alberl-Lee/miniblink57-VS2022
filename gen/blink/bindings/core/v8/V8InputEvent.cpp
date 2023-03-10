// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8InputEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DataTransfer.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8InputEventInit.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8StaticRange.h"
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
const WrapperTypeInfo V8InputEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8InputEvent::domTemplate, V8InputEvent::trace, V8InputEvent::traceWrappers, 0, nullptr, "InputEvent", &V8UIEvent::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in InputEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& InputEvent::s_wrapperTypeInfo = V8InputEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, InputEvent>::value,
    "InputEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&InputEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "InputEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace InputEventV8Internal {

    static void inputTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        InputEvent* impl = V8InputEvent::toImpl(holder);

        v8SetReturnValueString(info, impl->inputType(), info.GetIsolate());
    }

    CORE_EXPORT void inputTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::inputTypeAttributeGetter(info);
    }

    static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        InputEvent* impl = V8InputEvent::toImpl(holder);

        v8SetReturnValueStringOrNull(info, impl->data(), info.GetIsolate());
    }

    CORE_EXPORT void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::dataAttributeGetter(info);
    }

    static void dataTransferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        InputEvent* impl = V8InputEvent::toImpl(holder);

        DataTransfer* cppValue(WTF::getPtr(impl->dataTransfer()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#InputEvent#dataTransfer";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void dataTransferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::dataTransferAttributeGetter(info);
    }

    static void isComposingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        InputEvent* impl = V8InputEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->isComposing());
    }

    CORE_EXPORT void isComposingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::isComposingAttributeGetter(info);
    }

    static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        InputEvent* impl = V8InputEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->isTrusted());
    }

    CORE_EXPORT void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::isTrustedAttributeGetter(info);
    }

    static void getTargetRangesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEvent* impl = V8InputEvent::toImpl(info.Holder());

        v8SetReturnValue(info, ToV8(impl->getTargetRanges(), info.Holder(), info.GetIsolate()));
    }

    CORE_EXPORT void getTargetRangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        InputEventV8Internal::getTargetRangesMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "InputEvent");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> type;
        InputEventInit eventInitDict;
        type = info[0];
        if (!type.prepare())
            return;

        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");

            return;
        }
        V8InputEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.hadException())
            return;

        InputEvent* impl = InputEvent::create(type, eventInitDict);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8InputEvent::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace InputEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8InputEventAccessors[] = {
    { "inputType", InputEventV8Internal::inputTypeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "data", InputEventV8Internal::dataAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "dataTransfer", InputEventV8Internal::dataTransferAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isComposing", InputEventV8Internal::isComposingAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isTrusted", InputEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8InputEventMethods[] = {
    { "getTargetRanges", InputEventV8Internal::getTargetRangesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8InputEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("InputEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    InputEventV8Internal::constructor(info);
}

static void installV8InputEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8InputEvent::wrapperTypeInfo.interfaceName, V8UIEvent::domTemplate(isolate, world), V8InputEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8InputEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    if (!RuntimeEnabledFeatures::inputEventEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8InputEventAccessors, WTF_ARRAY_LENGTH(V8InputEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8InputEventMethods, WTF_ARRAY_LENGTH(V8InputEventMethods));
}

v8::Local<v8::FunctionTemplate> V8InputEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8InputEventTemplate);
}

bool V8InputEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8InputEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

InputEvent* V8InputEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
