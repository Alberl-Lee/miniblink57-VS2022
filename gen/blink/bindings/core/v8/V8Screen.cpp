// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Screen.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
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
WrapperTypeInfo V8Screen::wrapperTypeInfo = { gin::kEmbedderBlink, V8Screen::domTemplate, V8Screen::trace, V8Screen::traceWrappers, 0, nullptr, "Screen", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Screen.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Screen::s_wrapperTypeInfo = V8Screen::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Screen>::value,
    "Screen inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Screen::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Screen is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ScreenV8Internal {

    static void availWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->availWidth());
    }

    CORE_EXPORT void availWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::availWidthAttributeGetter(info);
    }

    static void availHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->availHeight());
    }

    CORE_EXPORT void availHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::availHeightAttributeGetter(info);
    }

    static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->width());
    }

    CORE_EXPORT void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::widthAttributeGetter(info);
    }

    static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->height());
    }

    CORE_EXPORT void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::heightAttributeGetter(info);
    }

    static void colorDepthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->colorDepth());
    }

    CORE_EXPORT void colorDepthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::colorDepthAttributeGetter(info);
    }

    static void pixelDepthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->pixelDepth());
    }

    CORE_EXPORT void pixelDepthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScreenV8Internal::pixelDepthAttributeGetter(info);
    }

    static void availLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->availLeft());
    }

    CORE_EXPORT void availLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8Screen_AvailLeft_AttributeGetter);

        ScreenV8Internal::availLeftAttributeGetter(info);
    }

    static void availTopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Screen* impl = V8Screen::toImpl(holder);

        v8SetReturnValueInt(info, impl->availTop());
    }

    CORE_EXPORT void availTopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8Screen_AvailTop_AttributeGetter);

        ScreenV8Internal::availTopAttributeGetter(info);
    }

} // namespace ScreenV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ScreenAccessors[] = {
    { "availWidth", ScreenV8Internal::availWidthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "availHeight", ScreenV8Internal::availHeightAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "width", ScreenV8Internal::widthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "height", ScreenV8Internal::heightAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "colorDepth", ScreenV8Internal::colorDepthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "pixelDepth", ScreenV8Internal::pixelDepthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "availLeft", ScreenV8Internal::availLeftAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "availTop", ScreenV8Internal::availTopAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8Screen::installV8ScreenTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Screen::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Screen::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ScreenAccessors, WTF_ARRAY_LENGTH(V8ScreenAccessors));
}

v8::Local<v8::FunctionTemplate> V8Screen::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8Screen::installV8ScreenTemplateFunction);
}

bool V8Screen::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Screen::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Screen* V8Screen::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InstallTemplateFunction V8Screen::installV8ScreenTemplateFunction = (InstallTemplateFunction)&V8Screen::installV8ScreenTemplate;

void V8Screen::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeAndInterfaceObjectFunction preparePrototypeAndInterfaceObjectFunction)
{
    V8Screen::installV8ScreenTemplateFunction = installTemplateFunction;
    if (preparePrototypeAndInterfaceObjectFunction)
        V8Screen::wrapperTypeInfo.preparePrototypeAndInterfaceObjectFunction = preparePrototypeAndInterfaceObjectFunction;
}

} // namespace blink
