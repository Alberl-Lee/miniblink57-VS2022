// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8MediaStreamEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaStream.h"
#include "bindings/modules/v8/V8MediaStreamEventInit.h"
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
const WrapperTypeInfo V8MediaStreamEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaStreamEvent::domTemplate, V8MediaStreamEvent::trace, V8MediaStreamEvent::traceWrappers, 0, nullptr, "MediaStreamEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaStreamEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaStreamEvent::s_wrapperTypeInfo = V8MediaStreamEvent::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MediaStreamEvent>::value,
    "MediaStreamEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MediaStreamEvent::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "MediaStreamEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MediaStreamEventV8Internal {

    static void streamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MediaStreamEvent* impl = V8MediaStreamEvent::toImpl(holder);

        MediaStream* cppValue(WTF::getPtr(impl->stream()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#MediaStreamEvent#stream";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void streamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaStreamEventV8Internal::streamAttributeGetter(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "MediaStreamEvent");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> type;
        MediaStreamEventInit eventInitDict;
        type = info[0];
        if (!type.prepare())
            return;

        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('eventInitDict') is not an object.");

            return;
        }
        V8MediaStreamEventInit::toImpl(info.GetIsolate(), info[1], eventInitDict, exceptionState);
        if (exceptionState.hadException())
            return;

        MediaStreamEvent* impl = MediaStreamEvent::create(type, eventInitDict);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8MediaStreamEvent::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace MediaStreamEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MediaStreamEventAccessors[] = {
    { "stream", MediaStreamEventV8Internal::streamAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8MediaStreamEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("MediaStreamEvent"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MediaStreamEventV8Internal::constructor(info);
}

static void installV8MediaStreamEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaStreamEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8MediaStreamEvent::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8MediaStreamEvent::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaStreamEventAccessors, WTF_ARRAY_LENGTH(V8MediaStreamEventAccessors));
}

v8::Local<v8::FunctionTemplate> V8MediaStreamEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaStreamEventTemplate);
}

bool V8MediaStreamEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaStreamEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaStreamEvent* V8MediaStreamEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
