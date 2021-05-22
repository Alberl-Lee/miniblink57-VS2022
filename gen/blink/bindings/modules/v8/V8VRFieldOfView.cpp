// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8VRFieldOfView.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8VRFieldOfView::wrapperTypeInfo = { gin::kEmbedderBlink, V8VRFieldOfView::domTemplate, V8VRFieldOfView::trace, V8VRFieldOfView::traceWrappers, 0, nullptr, "VRFieldOfView", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VRFieldOfView.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& VRFieldOfView::s_wrapperTypeInfo = V8VRFieldOfView::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, VRFieldOfView>::value,
    "VRFieldOfView inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&VRFieldOfView::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "VRFieldOfView is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace VRFieldOfViewV8Internal {

    static void upDegreesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        v8SetReturnValue(info, impl->upDegrees());
    }

    MODULES_EXPORT void upDegreesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        VRFieldOfViewV8Internal::upDegreesAttributeGetter(info);
    }

    static void upDegreesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "VRFieldOfView", "upDegrees");

        // Prepare the value to be set.
        double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setUpDegrees(cppValue);
    }

    MODULES_EXPORT void upDegreesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        VRFieldOfViewV8Internal::upDegreesAttributeSetter(v8Value, info);
    }

    static void downDegreesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        v8SetReturnValue(info, impl->downDegrees());
    }

    MODULES_EXPORT void downDegreesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        VRFieldOfViewV8Internal::downDegreesAttributeGetter(info);
    }

    static void downDegreesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "VRFieldOfView", "downDegrees");

        // Prepare the value to be set.
        double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setDownDegrees(cppValue);
    }

    MODULES_EXPORT void downDegreesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        VRFieldOfViewV8Internal::downDegreesAttributeSetter(v8Value, info);
    }

    static void leftDegreesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        v8SetReturnValue(info, impl->leftDegrees());
    }

    MODULES_EXPORT void leftDegreesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        VRFieldOfViewV8Internal::leftDegreesAttributeGetter(info);
    }

    static void leftDegreesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "VRFieldOfView", "leftDegrees");

        // Prepare the value to be set.
        double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setLeftDegrees(cppValue);
    }

    MODULES_EXPORT void leftDegreesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        VRFieldOfViewV8Internal::leftDegreesAttributeSetter(v8Value, info);
    }

    static void rightDegreesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        v8SetReturnValue(info, impl->rightDegrees());
    }

    MODULES_EXPORT void rightDegreesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        VRFieldOfViewV8Internal::rightDegreesAttributeGetter(info);
    }

    static void rightDegreesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        VRFieldOfView* impl = V8VRFieldOfView::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "VRFieldOfView", "rightDegrees");

        // Prepare the value to be set.
        double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setRightDegrees(cppValue);
    }

    MODULES_EXPORT void rightDegreesAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        VRFieldOfViewV8Internal::rightDegreesAttributeSetter(v8Value, info);
    }

} // namespace VRFieldOfViewV8Internal

const V8DOMConfiguration::AccessorConfiguration V8VRFieldOfViewAccessors[] = {
    { "upDegrees", VRFieldOfViewV8Internal::upDegreesAttributeGetterCallback, VRFieldOfViewV8Internal::upDegreesAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "downDegrees", VRFieldOfViewV8Internal::downDegreesAttributeGetterCallback, VRFieldOfViewV8Internal::downDegreesAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "leftDegrees", VRFieldOfViewV8Internal::leftDegreesAttributeGetterCallback, VRFieldOfViewV8Internal::leftDegreesAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "rightDegrees", VRFieldOfViewV8Internal::rightDegreesAttributeGetterCallback, VRFieldOfViewV8Internal::rightDegreesAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8VRFieldOfViewTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8VRFieldOfView::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8VRFieldOfView::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8VRFieldOfViewAccessors, WTF_ARRAY_LENGTH(V8VRFieldOfViewAccessors));
}

v8::Local<v8::FunctionTemplate> V8VRFieldOfView::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8VRFieldOfViewTemplate);
}

bool V8VRFieldOfView::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8VRFieldOfView::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

VRFieldOfView* V8VRFieldOfView::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
