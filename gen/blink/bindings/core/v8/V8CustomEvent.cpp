// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8CustomEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8CustomEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8CustomEvent::domTemplate, V8CustomEvent::trace, V8CustomEvent::traceWrappers, 0, nullptr, "CustomEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CustomEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CustomEvent::s_wrapperTypeInfo = V8CustomEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CustomEvent>::value,
    "CustomEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CustomEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "CustomEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CustomEventV8Internal {

    CORE_EXPORT void detailAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        V8CustomEvent::detailAttributeGetterCustom(info);
    }

    static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        CustomEvent* impl = V8CustomEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->isTrusted());
    }

    CORE_EXPORT void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CustomEventV8Internal::isTrustedAttributeGetter(info);
    }

    static void initCustomEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "CustomEvent", "initCustomEvent");

        CustomEvent* impl = V8CustomEvent::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 4)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(4, info.Length()));
            return;
        }

        V8StringResource<> type;
        bool bubbles;
        bool cancelable;
        ScriptValue detail;
        type = info[0];
        if (!type.prepare())
            return;

        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.hadException())
            return;

        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.hadException())
            return;

        detail = ScriptValue(ScriptState::current(info.GetIsolate()), info[3]);

        impl->initCustomEvent(type, bubbles, cancelable, detail);
        V8CustomEvent::initCustomEventMethodEpilogueCustom(info, impl);
    }

    CORE_EXPORT void initCustomEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8CustomEvent_InitCustomEvent_Method);
        CustomEventV8Internal::initCustomEventMethod(info);
    }

} // namespace CustomEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8CustomEventAccessors[] = {
    { "detail", CustomEventV8Internal::detailAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isTrusted", CustomEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8CustomEventMethods[] = {
    { "initCustomEvent", CustomEventV8Internal::initCustomEventMethodCallback, 0, 4, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8CustomEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("CustomEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    V8CustomEvent::constructorCustom(info);
}

static void installV8CustomEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CustomEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8CustomEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8CustomEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CustomEventAccessors, WTF_ARRAY_LENGTH(V8CustomEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CustomEventMethods, WTF_ARRAY_LENGTH(V8CustomEventMethods));
}

v8::Local<v8::FunctionTemplate> V8CustomEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CustomEventTemplate);
}

bool V8CustomEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CustomEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CustomEvent* V8CustomEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
