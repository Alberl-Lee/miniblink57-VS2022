// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8HTMLVideoElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/frame/Deprecation.h"
#include "core/frame/UseCounter.h"
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
WrapperTypeInfo V8HTMLVideoElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLVideoElement::domTemplate, V8HTMLVideoElement::trace, V8HTMLVideoElement::traceWrappers, 0, nullptr, "HTMLVideoElement", &V8HTMLMediaElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLVideoElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLVideoElement::s_wrapperTypeInfo = V8HTMLVideoElement::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLVideoElement>::value,
    "HTMLVideoElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLVideoElement::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "HTMLVideoElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLVideoElementV8Internal {

    static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->getIntegralAttribute(HTMLNames::widthAttr))));
    }

    CORE_EXPORT void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElementV8Internal::widthAttributeGetter(info);
    }

    static void widthAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        // Skip on compact node DOMString getters.
        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "HTMLVideoElement", "width");

        // Prepare the value to be set.
        unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setUnsignedIntegralAttribute(HTMLNames::widthAttr, cppValue);
    }

    CORE_EXPORT void widthAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLVideoElementV8Internal::widthAttributeSetter(v8Value, info);
    }

    static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->getIntegralAttribute(HTMLNames::heightAttr))));
    }

    CORE_EXPORT void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElementV8Internal::heightAttributeGetter(info);
    }

    static void heightAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        // Skip on compact node DOMString getters.
        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "HTMLVideoElement", "height");

        // Prepare the value to be set.
        unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setUnsignedIntegralAttribute(HTMLNames::heightAttr, cppValue);
    }

    CORE_EXPORT void heightAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLVideoElementV8Internal::heightAttributeSetter(v8Value, info);
    }

    static void videoWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->videoWidth());
    }

    CORE_EXPORT void videoWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElementV8Internal::videoWidthAttributeGetter(info);
    }

    static void videoHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->videoHeight());
    }

    CORE_EXPORT void videoHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElementV8Internal::videoHeightAttributeGetter(info);
    }

    static void posterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueString(info, impl->getURLAttribute(HTMLNames::posterAttr), info.GetIsolate());
    }

    CORE_EXPORT void posterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElementV8Internal::posterAttributeGetter(info);
    }

    static void posterAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setAttribute(HTMLNames::posterAttr, cppValue);
    }

    CORE_EXPORT void posterAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        HTMLVideoElementV8Internal::posterAttributeSetter(v8Value, info);
    }

    static void webkitSupportsFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueBool(info, impl->webkitSupportsFullscreen());
    }

    CORE_EXPORT void webkitSupportsFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoSupportsFullscreen);

        HTMLVideoElementV8Internal::webkitSupportsFullscreenAttributeGetter(info);
    }

    static void webkitDisplayingFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueBool(info, impl->webkitDisplayingFullscreen());
    }

    CORE_EXPORT void webkitDisplayingFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoDisplayingFullscreen);

        HTMLVideoElementV8Internal::webkitDisplayingFullscreenAttributeGetter(info);
    }

    static void webkitDecodedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->webkitDecodedFrameCount());
    }

    CORE_EXPORT void webkitDecodedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoDecodedFrameCount);

        HTMLVideoElementV8Internal::webkitDecodedFrameCountAttributeGetter(info);
    }

    static void webkitDroppedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->webkitDroppedFrameCount());
    }

    CORE_EXPORT void webkitDroppedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoDroppedFrameCount);

        HTMLVideoElementV8Internal::webkitDroppedFrameCountAttributeGetter(info);
    }

    static void webkitEnterFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());

        impl->webkitEnterFullscreen();
    }

    CORE_EXPORT void webkitEnterFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoEnterFullscreen);
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "HTMLVideoElement", "webkitEnterFullscreen");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("HTMLVideoElement.webkitEnterFullscreen", info.Length(), loggerArgs.data());
        }
        HTMLVideoElementV8Internal::webkitEnterFullscreenMethod(info);
    }

    static void webkitExitFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());

        impl->webkitExitFullscreen();
    }

    CORE_EXPORT void webkitExitFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoExitFullscreen);
        HTMLVideoElementV8Internal::webkitExitFullscreenMethod(info);
    }

    static void webkitEnterFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());

        impl->webkitEnterFullscreen();
    }

    CORE_EXPORT void webkitEnterFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoEnterFullScreen);
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "HTMLVideoElement", "webkitEnterFullScreen");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("HTMLVideoElement.webkitEnterFullScreen", info.Length(), loggerArgs.data());
        }
        HTMLVideoElementV8Internal::webkitEnterFullScreenMethod(info);
    }

    static void webkitExitFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());

        impl->webkitExitFullscreen();
    }

    CORE_EXPORT void webkitExitFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Deprecation::countDeprecation(currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedVideoExitFullScreen);
        HTMLVideoElementV8Internal::webkitExitFullScreenMethod(info);
    }

} // namespace HTMLVideoElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLVideoElementAccessors[] = {
    { "width", HTMLVideoElementV8Internal::widthAttributeGetterCallback, HTMLVideoElementV8Internal::widthAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "height", HTMLVideoElementV8Internal::heightAttributeGetterCallback, HTMLVideoElementV8Internal::heightAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "videoWidth", HTMLVideoElementV8Internal::videoWidthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "videoHeight", HTMLVideoElementV8Internal::videoHeightAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "poster", HTMLVideoElementV8Internal::posterAttributeGetterCallback, HTMLVideoElementV8Internal::posterAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "webkitDecodedFrameCount", HTMLVideoElementV8Internal::webkitDecodedFrameCountAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "webkitDroppedFrameCount", HTMLVideoElementV8Internal::webkitDroppedFrameCountAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8HTMLVideoElement::installV8HTMLVideoElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLVideoElement::wrapperTypeInfo.interfaceName, V8HTMLMediaElement::domTemplate(isolate, world), V8HTMLVideoElement::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLVideoElementAccessors, WTF_ARRAY_LENGTH(V8HTMLVideoElementAccessors));

    if (RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorwebkitDisplayingFullscreenConfiguration = { "webkitDisplayingFullscreen", HTMLVideoElementV8Internal::webkitDisplayingFullscreenAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorwebkitDisplayingFullscreenConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessorwebkitSupportsFullscreenConfiguration = { "webkitSupportsFullscreen", HTMLVideoElementV8Internal::webkitSupportsFullscreenAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorwebkitSupportsFullscreenConfiguration);
    }

    if (RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitEnterFullscreenMethodConfiguration = { "webkitEnterFullscreen", HTMLVideoElementV8Internal::webkitEnterFullscreenMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, webkitEnterFullscreenMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitExitFullscreenMethodConfiguration = { "webkitExitFullscreen", HTMLVideoElementV8Internal::webkitExitFullscreenMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, webkitExitFullscreenMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitEnterFullScreenMethodConfiguration = { "webkitEnterFullScreen", HTMLVideoElementV8Internal::webkitEnterFullScreenMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, webkitEnterFullScreenMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::prefixedVideoFullscreenEnabled()) {
        const V8DOMConfiguration::MethodConfiguration webkitExitFullScreenMethodConfiguration = { "webkitExitFullScreen", HTMLVideoElementV8Internal::webkitExitFullScreenMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, webkitExitFullScreenMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8HTMLVideoElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction);
}

bool V8HTMLVideoElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLVideoElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLVideoElement* V8HTMLVideoElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InstallTemplateFunction V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction = (InstallTemplateFunction)&V8HTMLVideoElement::installV8HTMLVideoElementTemplate;

void V8HTMLVideoElement::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeAndInterfaceObjectFunction preparePrototypeAndInterfaceObjectFunction)
{
    V8HTMLVideoElement::installV8HTMLVideoElementTemplateFunction = installTemplateFunction;
    if (preparePrototypeAndInterfaceObjectFunction)
        V8HTMLVideoElement::wrapperTypeInfo.preparePrototypeAndInterfaceObjectFunction = preparePrototypeAndInterfaceObjectFunction;
}

} // namespace blink
