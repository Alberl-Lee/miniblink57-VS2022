// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8SpeechRecognitionError.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8SpeechRecognitionErrorInit.h"
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
const WrapperTypeInfo V8SpeechRecognitionError::wrapperTypeInfo = { gin::kEmbedderBlink, V8SpeechRecognitionError::domTemplate, V8SpeechRecognitionError::trace, V8SpeechRecognitionError::traceWrappers, 0, nullptr, "SpeechRecognitionError", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechRecognitionError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SpeechRecognitionError::s_wrapperTypeInfo = V8SpeechRecognitionError::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SpeechRecognitionError>::value,
    "SpeechRecognitionError inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SpeechRecognitionError::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "SpeechRecognitionError is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SpeechRecognitionErrorV8Internal {

    static void errorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SpeechRecognitionError* impl = V8SpeechRecognitionError::toImpl(holder);

        v8SetReturnValueString(info, impl->error(), info.GetIsolate());
    }

    MODULES_EXPORT void errorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SpeechRecognitionErrorV8Internal::errorAttributeGetter(info);
    }

    static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SpeechRecognitionError* impl = V8SpeechRecognitionError::toImpl(holder);

        v8SetReturnValueString(info, impl->message(), info.GetIsolate());
    }

    MODULES_EXPORT void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SpeechRecognitionErrorV8Internal::messageAttributeGetter(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ConstructionContext, "SpeechRecognitionError");

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> type;
        SpeechRecognitionErrorInit initDict;
        type = info[0];
        if (!type.prepare())
            return;

        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('initDict') is not an object.");

            return;
        }
        V8SpeechRecognitionErrorInit::toImpl(info.GetIsolate(), info[1], initDict, exceptionState);
        if (exceptionState.hadException())
            return;

        SpeechRecognitionError* impl = SpeechRecognitionError::create(type, initDict);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8SpeechRecognitionError::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace SpeechRecognitionErrorV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SpeechRecognitionErrorAccessors[] = {
    { "error", SpeechRecognitionErrorV8Internal::errorAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "message", SpeechRecognitionErrorV8Internal::messageAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8SpeechRecognitionError::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("SpeechRecognitionError"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    SpeechRecognitionErrorV8Internal::constructor(info);
}

static void installV8SpeechRecognitionErrorTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SpeechRecognitionError::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8SpeechRecognitionError::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8SpeechRecognitionError::constructorCallback);
    interfaceTemplate->SetLength(1);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SpeechRecognitionErrorAccessors, WTF_ARRAY_LENGTH(V8SpeechRecognitionErrorAccessors));
}

v8::Local<v8::FunctionTemplate> V8SpeechRecognitionError::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechRecognitionErrorTemplate);
}

bool V8SpeechRecognitionError::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechRecognitionError::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechRecognitionError* V8SpeechRecognitionError::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
