// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8ApplicationCacheErrorEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8ApplicationCacheErrorEventInit.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8ApplicationCacheErrorEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8ApplicationCacheErrorEvent::domTemplate, V8ApplicationCacheErrorEvent::trace, V8ApplicationCacheErrorEvent::traceWrappers, 0, nullptr, "ApplicationCacheErrorEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ApplicationCacheErrorEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ApplicationCacheErrorEvent::s_wrapperTypeInfo = V8ApplicationCacheErrorEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ApplicationCacheErrorEvent>::value,
    "ApplicationCacheErrorEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ApplicationCacheErrorEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "ApplicationCacheErrorEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ApplicationCacheErrorEventV8Internal {

    static void reasonAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        ApplicationCacheErrorEvent* impl = V8ApplicationCacheErrorEvent::toImpl(holder);

        v8SetReturnValueString(info, impl->reason(), info.GetIsolate());
    }

    CORE_EXPORT void reasonAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ApplicationCacheErrorEventV8Internal::reasonAttributeGetter(info);
    }

    static void urlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        ApplicationCacheErrorEvent* impl = V8ApplicationCacheErrorEvent::toImpl(holder);

        v8SetReturnValueString(info, impl->url(), info.GetIsolate());
    }

    CORE_EXPORT void urlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ApplicationCacheErrorEventV8Internal::urlAttributeGetter(info);
    }

    static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        ApplicationCacheErrorEvent* impl = V8ApplicationCacheErrorEvent::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->status());
    }

    CORE_EXPORT void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ApplicationCacheErrorEventV8Internal::statusAttributeGetter(info);
    }

    static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        ApplicationCacheErrorEvent* impl = V8ApplicationCacheErrorEvent::toImpl(holder);

        v8SetReturnValueString(info, impl->message(), info.GetIsolate());
    }

    CORE_EXPORT void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ApplicationCacheErrorEventV8Internal::messageAttributeGetter(info);
    }

    static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        ApplicationCacheErrorEvent* impl = V8ApplicationCacheErrorEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->isTrusted());
    }

    CORE_EXPORT void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ApplicationCacheErrorEventV8Internal::isTrustedAttributeGetter(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "ApplicationCacheErrorEvent");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> type;
        ApplicationCacheErrorEventInit eventInitDict;
        type = info[0];
        if (!type.prepare())
            return;

        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");

            return;
        }
        V8ApplicationCacheErrorEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.hadException())
            return;

        ApplicationCacheErrorEvent* impl = ApplicationCacheErrorEvent::create(type, eventInitDict);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8ApplicationCacheErrorEvent::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace ApplicationCacheErrorEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ApplicationCacheErrorEventAccessors[] = {
    { "reason", ApplicationCacheErrorEventV8Internal::reasonAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "url", ApplicationCacheErrorEventV8Internal::urlAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "status", ApplicationCacheErrorEventV8Internal::statusAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "message", ApplicationCacheErrorEventV8Internal::messageAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isTrusted", ApplicationCacheErrorEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

void V8ApplicationCacheErrorEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("ApplicationCacheErrorEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ApplicationCacheErrorEventV8Internal::constructor(info);
}

static void installV8ApplicationCacheErrorEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ApplicationCacheErrorEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8ApplicationCacheErrorEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8ApplicationCacheErrorEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ApplicationCacheErrorEventAccessors, WTF_ARRAY_LENGTH(V8ApplicationCacheErrorEventAccessors));
}

v8::Local<v8::FunctionTemplate> V8ApplicationCacheErrorEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ApplicationCacheErrorEventTemplate);
}

bool V8ApplicationCacheErrorEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ApplicationCacheErrorEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ApplicationCacheErrorEvent* V8ApplicationCacheErrorEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
