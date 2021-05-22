// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8IDBObservation.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8IDBObservation::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBObservation::domTemplate, V8IDBObservation::trace, V8IDBObservation::traceWrappers, 0, nullptr, "IDBObservation", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBObservation.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBObservation::s_wrapperTypeInfo = V8IDBObservation::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, IDBObservation>::value,
    "IDBObservation inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&IDBObservation::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "IDBObservation is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace IDBObservationV8Internal {

    static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObservation* impl = V8IDBObservation::toImpl(holder);

        v8SetReturnValueString(info, impl->type(), info.GetIsolate());
    }

    MODULES_EXPORT void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObservationV8Internal::typeAttributeGetter(info);
    }

    static void keyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObservation* impl = V8IDBObservation::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        v8SetReturnValue(info, impl->key(scriptState).v8Value());
    }

    MODULES_EXPORT void keyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObservationV8Internal::keyAttributeGetter(info);
    }

    static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObservation* impl = V8IDBObservation::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        v8SetReturnValue(info, impl->value(scriptState).v8Value());
    }

    MODULES_EXPORT void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObservationV8Internal::valueAttributeGetter(info);
    }

} // namespace IDBObservationV8Internal

const V8DOMConfiguration::AccessorConfiguration V8IDBObservationAccessors[] = {
    { "type", IDBObservationV8Internal::typeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "key", IDBObservationV8Internal::keyAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "value", IDBObservationV8Internal::valueAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8IDBObservationTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8IDBObservation::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8IDBObservation::internalFieldCount);

    if (!RuntimeEnabledFeatures::iDBObserverEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBObservationAccessors, WTF_ARRAY_LENGTH(V8IDBObservationAccessors));
}

v8::Local<v8::FunctionTemplate> V8IDBObservation::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBObservationTemplate);
}

bool V8IDBObservation::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBObservation::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBObservation* V8IDBObservation::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
