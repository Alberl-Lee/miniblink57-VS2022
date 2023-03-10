// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8MIDIAccess.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerHelper.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MIDIInputMap.h"
#include "bindings/modules/v8/V8MIDIOutputMap.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MIDIAccess::wrapperTypeInfo = { gin::kEmbedderBlink, V8MIDIAccess::domTemplate, V8MIDIAccess::trace, V8MIDIAccess::traceWrappers, 0, nullptr, "MIDIAccess", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MIDIAccess.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MIDIAccess::s_wrapperTypeInfo = V8MIDIAccess::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MIDIAccess>::value,
    "MIDIAccess does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MIDIAccess::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "MIDIAccess is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MIDIAccessV8Internal {

    static void inputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MIDIAccess* impl = V8MIDIAccess::toImpl(holder);

        MIDIInputMap* cppValue(WTF::getPtr(impl->inputs()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#MIDIAccess#inputs";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void inputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MIDIAccessV8Internal::inputsAttributeGetter(info);
    }

    static void outputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MIDIAccess* impl = V8MIDIAccess::toImpl(holder);

        MIDIOutputMap* cppValue(WTF::getPtr(impl->outputs()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#MIDIAccess#outputs";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void outputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MIDIAccessV8Internal::outputsAttributeGetter(info);
    }

    static void sysexEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MIDIAccess* impl = V8MIDIAccess::toImpl(holder);

        v8SetReturnValueBool(info, impl->sysexEnabled());
    }

    MODULES_EXPORT void sysexEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MIDIAccessV8Internal::sysexEnabledAttributeGetter(info);
    }

    static void onstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MIDIAccess* impl = V8MIDIAccess::toImpl(holder);

        EventListener* cppValue(WTF::getPtr(impl->onstatechange()));

        v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
    }

    MODULES_EXPORT void onstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MIDIAccessV8Internal::onstatechangeAttributeGetter(info);
    }

    static void onstatechangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        MIDIAccess* impl = V8MIDIAccess::toImpl(holder);

        // Prepare the value to be set.
        moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onstatechange(), v8Value, V8MIDIAccess::eventListenerCacheIndex);

        impl->setOnstatechange(V8EventListenerHelper::getEventListener(ScriptState::forReceiverObject(info), v8Value, true, ListenerFindOrCreate));
    }

    MODULES_EXPORT void onstatechangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        MIDIAccessV8Internal::onstatechangeAttributeSetter(v8Value, info);
    }

} // namespace MIDIAccessV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MIDIAccessAccessors[] = {
    { "inputs", MIDIAccessV8Internal::inputsAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "outputs", MIDIAccessV8Internal::outputsAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "sysexEnabled", MIDIAccessV8Internal::sysexEnabledAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "onstatechange", MIDIAccessV8Internal::onstatechangeAttributeGetterCallback, MIDIAccessV8Internal::onstatechangeAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8MIDIAccessTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MIDIAccess::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8MIDIAccess::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MIDIAccessAccessors, WTF_ARRAY_LENGTH(V8MIDIAccessAccessors));
}

v8::Local<v8::FunctionTemplate> V8MIDIAccess::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MIDIAccessTemplate);
}

bool V8MIDIAccess::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MIDIAccess::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MIDIAccess* V8MIDIAccess::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
