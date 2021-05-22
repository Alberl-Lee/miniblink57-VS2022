// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8ExtendableEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8ExtendableEventInit.h"
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
const WrapperTypeInfo V8ExtendableEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8ExtendableEvent::domTemplate, V8ExtendableEvent::trace, V8ExtendableEvent::traceWrappers, 0, nullptr, "ExtendableEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ExtendableEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ExtendableEvent::s_wrapperTypeInfo = V8ExtendableEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ExtendableEvent>::value,
    "ExtendableEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ExtendableEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "ExtendableEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ExtendableEventV8Internal {

    static void waitUntilMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        //   ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "ExtendableEvent", "waitUntil");
        //
        //   ExtendableEvent* impl = V8ExtendableEvent::toImpl(info.Holder());
        //
        //   ScriptState* scriptState = ScriptState::forReceiverObject(info);
        //
        //   if (UNLIKELY(info.Length() < 1)) {
        //     exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        //     return;
        //   }
        //
        //   ScriptPromise f;
        //   f = ScriptPromise::cast(ScriptState::current(info.GetIsolate()), info[0]);
        //   if (!f.isUndefinedOrNull() && !f.isObject()) {
        //     exceptionState.throwTypeError("parameter 1 ('f') is not an object.");
        //
        //     return;
        //   }
        //
        //   impl->waitUntil(scriptState, f, exceptionState);
        //   if (exceptionState.hadException()) {
        //     return;
        //   }
        DebugBreak();
    }

    MODULES_EXPORT void waitUntilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExtendableEventV8Internal::waitUntilMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        //   ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "ExtendableEvent");
        //
        //   if (UNLIKELY(info.Length() < 1)) {
        //     exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        //     return;
        //   }
        //
        //   V8StringResource<> type;
        //   ExtendableEventInit eventInitDict;
        //   type = info[0];
        //   if (!type.prepare())
        //     return;
        //
        //   if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
        //     exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");
        //
        //     return;
        //   }
        //   V8ExtendableEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        //   if (exceptionState.hadException())
        //     return;
        //
        //   ExtendableEvent* impl = ExtendableEvent::create(type, eventInitDict);
        //   v8::Local<v8::Object> wrapper = info.Holder();
        //   wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8ExtendableEvent::wrapperTypeInfo, wrapper);
        //   v8SetReturnValue(info, wrapper);
        DebugBreak();
    }

} // namespace ExtendableEventV8Internal

const V8DOMConfiguration::MethodConfiguration V8ExtendableEventMethods[] = {
    { "waitUntil", ExtendableEventV8Internal::waitUntilMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8ExtendableEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("ExtendableEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    ExtendableEventV8Internal::constructor(info);
}

static void installV8ExtendableEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ExtendableEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8ExtendableEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8ExtendableEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ExtendableEventMethods, WTF_ARRAY_LENGTH(V8ExtendableEventMethods));
}

v8::Local<v8::FunctionTemplate> V8ExtendableEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ExtendableEventTemplate);
}

bool V8ExtendableEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ExtendableEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ExtendableEvent* V8ExtendableEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    //return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
    DebugBreak();
    return nullptr;
}

} // namespace blink
