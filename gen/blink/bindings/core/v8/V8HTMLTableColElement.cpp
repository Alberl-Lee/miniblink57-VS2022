// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8HTMLTableColElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLTableColElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLTableColElement::domTemplate, V8HTMLTableColElement::trace, V8HTMLTableColElement::traceWrappers, 0, nullptr, "HTMLTableColElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableColElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableColElement::s_wrapperTypeInfo = V8HTMLTableColElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLTableColElement>::value,
    "HTMLTableColElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLTableColElement::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "HTMLTableColElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLTableColElementV8Internal {

    static void spanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->span());
    }

    CORE_EXPORT void spanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::spanAttributeGetter(info);
    }

    static void spanAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "HTMLTableColElement", "span");

        // Prepare the value to be set.
        unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setSpan(cppValue);
    }

    CORE_EXPORT void spanAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        HTMLTableColElementV8Internal::spanAttributeSetter(v8Value, info);
    }

    static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
    }

    CORE_EXPORT void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::alignAttributeGetter(info);
    }

    static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::alignAttr, cppValue);
    }

    CORE_EXPORT void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLTableColElementV8Internal::alignAttributeSetter(v8Value, info);
    }

    static void chAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charAttr), info.GetIsolate());
    }

    CORE_EXPORT void chAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::chAttributeGetter(info);
    }

    static void chAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::charAttr, cppValue);
    }

    CORE_EXPORT void chAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLTableColElementV8Internal::chAttributeSetter(v8Value, info);
    }

    static void chOffAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charoffAttr), info.GetIsolate());
    }

    CORE_EXPORT void chOffAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::chOffAttributeGetter(info);
    }

    static void chOffAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::charoffAttr, cppValue);
    }

    CORE_EXPORT void chOffAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLTableColElementV8Internal::chOffAttributeSetter(v8Value, info);
    }

    static void vAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::valignAttr), info.GetIsolate());
    }

    CORE_EXPORT void vAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::vAlignAttributeGetter(info);
    }

    static void vAlignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::valignAttr, cppValue);
    }

    CORE_EXPORT void vAlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLTableColElementV8Internal::vAlignAttributeSetter(v8Value, info);
    }

    static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::widthAttr), info.GetIsolate());
    }

    CORE_EXPORT void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLTableColElementV8Internal::widthAttributeGetter(info);
    }

    static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLTableColElement* impl = V8HTMLTableColElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::widthAttr, cppValue);
    }

    CORE_EXPORT void widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLTableColElementV8Internal::widthAttributeSetter(v8Value, info);
    }

} // namespace HTMLTableColElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLTableColElementAccessors[] = {
    { "span", HTMLTableColElementV8Internal::spanAttributeGetterCallback, HTMLTableColElementV8Internal::spanAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "align", HTMLTableColElementV8Internal::alignAttributeGetterCallback, HTMLTableColElementV8Internal::alignAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "ch", HTMLTableColElementV8Internal::chAttributeGetterCallback, HTMLTableColElementV8Internal::chAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "chOff", HTMLTableColElementV8Internal::chOffAttributeGetterCallback, HTMLTableColElementV8Internal::chOffAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "vAlign", HTMLTableColElementV8Internal::vAlignAttributeGetterCallback, HTMLTableColElementV8Internal::vAlignAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "width", HTMLTableColElementV8Internal::widthAttributeGetterCallback, HTMLTableColElementV8Internal::widthAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8HTMLTableColElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLTableColElement::wrapperTypeInfo.interfaceName, V8HTMLElement::domTemplate(isolate, world), V8HTMLTableColElement::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLTableColElementAccessors, WTF_ARRAY_LENGTH(V8HTMLTableColElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8HTMLTableColElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLTableColElementTemplate);
}

bool V8HTMLTableColElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLTableColElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLTableColElement* V8HTMLTableColElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
