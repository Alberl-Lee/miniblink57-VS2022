// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/partial_interface.cpp.tmpl

// clang-format on
#include "V8ScreenPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Screen.h"
#include "bindings/modules/v8/V8ScreenOrientation.h"
#include "core/dom/Document.h"
#include "modules/screen_orientation/ScreenScreenOrientation.h"
#include "modules/wake_lock/ScreenWakeLock.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace ScreenPartialV8Internal {

    static void orientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScreenOrientation* cppValue(ScreenScreenOrientation::orientation(scriptState, *impl));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Screen#orientation";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    void orientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenPartialV8Internal::orientationAttributeGetter(info);
    }

    static void keepAwakeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueBool(info, ScreenWakeLock::keepAwake(*impl));
    }

    void keepAwakeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenPartialV8Internal::keepAwakeAttributeGetter(info);
    }

    static void keepAwakeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        Screen* impl = V8Screen::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "Screen", "keepAwake");

        // Prepare the value to be set.
        bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
        if (exceptionState.hadException())
            return;

        ScreenWakeLock::setKeepAwake(*impl, cppValue);
    }

    void keepAwakeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        ScreenPartialV8Internal::keepAwakeAttributeSetter(v8Value, info);
    }

} // namespace ScreenPartialV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ScreenAccessors[] = {
    { "orientation", ScreenPartialV8Internal::orientationAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8ScreenPartial::installV8ScreenTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8Screen::installV8ScreenTemplate(isolate, world, interfaceTemplate);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ScreenAccessors, WTF_ARRAY_LENGTH(V8ScreenAccessors));

    if (RuntimeEnabledFeatures::wakeLockEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorkeepAwakeConfiguration = { "keepAwake", ScreenPartialV8Internal::keepAwakeAttributeGetterCallback, ScreenPartialV8Internal::keepAwakeAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorkeepAwakeConfiguration);
    }
}

void V8ScreenPartial::initialize()
{
    // Should be invoked from ModulesInitializer.
    V8Screen::updateWrapperTypeInfo(
        &V8ScreenPartial::installV8ScreenTemplate,
        nullptr);
}

} // namespace blink
