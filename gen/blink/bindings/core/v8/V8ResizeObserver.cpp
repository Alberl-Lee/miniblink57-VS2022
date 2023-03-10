// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8ResizeObserver.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8ResizeObserverCallback.h"
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
const WrapperTypeInfo V8ResizeObserver::wrapperTypeInfo = { gin::kEmbedderBlink, V8ResizeObserver::domTemplate, V8ResizeObserver::trace, V8ResizeObserver::traceWrappers, 0, nullptr, "ResizeObserver", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ResizeObserver.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ResizeObserver::s_wrapperTypeInfo = V8ResizeObserver::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ResizeObserver>::value,
    "ResizeObserver inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ResizeObserver::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "ResizeObserver is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ResizeObserverV8Internal {

    static void observeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserver* impl = V8ResizeObserver::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("observe", "ResizeObserver", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        Element* target;
        target = V8Element::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!target) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("observe", "ResizeObserver", "parameter 1 is not of type 'Element'."));

            return;
        }

        impl->observe(target);
    }

    CORE_EXPORT void observeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserverV8Internal::observeMethod(info);
    }

    static void unobserveMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserver* impl = V8ResizeObserver::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("unobserve", "ResizeObserver", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        Element* target;
        target = V8Element::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!target) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("unobserve", "ResizeObserver", "parameter 1 is not of type 'Element'."));

            return;
        }

        impl->unobserve(target);
    }

    CORE_EXPORT void unobserveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserverV8Internal::unobserveMethod(info);
    }

    static void disconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserver* impl = V8ResizeObserver::toImpl(info.Holder());

        impl->disconnect();
    }

    CORE_EXPORT void disconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ResizeObserverV8Internal::disconnectMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToConstruct("ResizeObserver", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        ResizeObserverCallback* callback;
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToConstruct("ResizeObserver", "The callback provided as parameter 1 is not a function."));

            return;
        }
        callback = V8ResizeObserverCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));

        Document& document = *toDocument(currentExecutionContext(info.GetIsolate()));
        ResizeObserver* impl = ResizeObserver::create(document, callback);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8ResizeObserver::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace ResizeObserverV8Internal

const V8DOMConfiguration::MethodConfiguration V8ResizeObserverMethods[] = {
    { "observe", ResizeObserverV8Internal::observeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "unobserve", ResizeObserverV8Internal::unobserveMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "disconnect", ResizeObserverV8Internal::disconnectMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8ResizeObserver::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("ResizeObserver"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ResizeObserverV8Internal::constructor(info);
}

static void installV8ResizeObserverTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ResizeObserver::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8ResizeObserver::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8ResizeObserver::constructorCallback);
    interfaceTemplate->SetLength(1);

    if (!RuntimeEnabledFeatures::resizeObserverEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ResizeObserverMethods, WTF_ARRAY_LENGTH(V8ResizeObserverMethods));
}

v8::Local<v8::FunctionTemplate> V8ResizeObserver::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ResizeObserverTemplate);
}

bool V8ResizeObserver::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ResizeObserver::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ResizeObserver* V8ResizeObserver::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
