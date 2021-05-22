// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8UIEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8InputDeviceCapabilities.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8UIEventInit.h"
#include "bindings/core/v8/V8Window.h"
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
const WrapperTypeInfo V8UIEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8UIEvent::domTemplate, V8UIEvent::trace, V8UIEvent::traceWrappers, 0, nullptr, "UIEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in UIEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& UIEvent::s_wrapperTypeInfo = V8UIEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, UIEvent>::value,
    "UIEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&UIEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "UIEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace UIEventV8Internal {

    static void viewAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        UIEvent* impl = V8UIEvent::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->view()), impl);
    }

    CORE_EXPORT void viewAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UIEventV8Internal::viewAttributeGetter(info);
    }

    static void detailAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        UIEvent* impl = V8UIEvent::toImpl(holder);

        v8SetReturnValueInt(info, impl->detail());
    }

    CORE_EXPORT void detailAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UIEventV8Internal::detailAttributeGetter(info);
    }

    static void sourceCapabilitiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        UIEvent* impl = V8UIEvent::toImpl(holder);

        InputDeviceCapabilities* cppValue(WTF::getPtr(impl->sourceCapabilities()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#UIEvent#sourceCapabilities";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void sourceCapabilitiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UIEventV8Internal::sourceCapabilitiesAttributeGetter(info);
    }

    static void whichAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        UIEvent* impl = V8UIEvent::toImpl(holder);

        v8SetReturnValueInt(info, impl->which());
    }

    CORE_EXPORT void whichAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UIEventWhich);

        UIEventV8Internal::whichAttributeGetter(info);
    }

    static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        UIEvent* impl = V8UIEvent::toImpl(holder);

        v8SetReturnValueBool(info, impl->isTrusted());
    }

    CORE_EXPORT void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UIEventV8Internal::isTrustedAttributeGetter(info);
    }

    static void initUIEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "UIEvent", "initUIEvent");

        UIEvent* impl = V8UIEvent::toImpl(info.Holder());

        V8StringResource<> type;
        bool bubbles;
        bool cancelable;
        DOMWindow* view;
        int detail;
        type = info[0];
        if (!type.prepare())
            return;

        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.hadException())
            return;

        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.hadException())
            return;

        view = toDOMWindow(info.GetIsolate(), info[3]);
        if (!view && !isUndefinedOrNull(info[3])) {
            exceptionState.throwTypeError("parameter 4 is not of type 'Window'.");

            return;
        }

        detail = toInt32(info.GetIsolate(), info[4], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->initUIEvent(type, bubbles, cancelable, view, detail);
    }

    CORE_EXPORT void initUIEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8UIEvent_InitUIEvent_Method);
        UIEventV8Internal::initUIEventMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "UIEvent");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> type;
        UIEventInit eventInitDict;
        type = info[0];
        if (!type.prepare())
            return;

        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");

            return;
        }
        V8UIEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.hadException())
            return;

        UIEvent* impl = UIEvent::create(type, eventInitDict);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8UIEvent::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace UIEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8UIEventAccessors[] = {
    { "view", UIEventV8Internal::viewAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "detail", UIEventV8Internal::detailAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "sourceCapabilities", UIEventV8Internal::sourceCapabilitiesAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "which", UIEventV8Internal::whichAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isTrusted", UIEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8UIEventMethods[] = {
    { "initUIEvent", UIEventV8Internal::initUIEventMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8UIEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("UIEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    UIEventV8Internal::constructor(info);
}

static void installV8UIEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8UIEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8UIEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8UIEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8UIEventAccessors, WTF_ARRAY_LENGTH(V8UIEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8UIEventMethods, WTF_ARRAY_LENGTH(V8UIEventMethods));
}

v8::Local<v8::FunctionTemplate> V8UIEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8UIEventTemplate);
}

bool V8UIEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8UIEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

UIEvent* V8UIEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
