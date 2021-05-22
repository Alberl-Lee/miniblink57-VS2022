// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8AppBannerPromptResult.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AppBannerPromptResult::wrapperTypeInfo = { gin::kEmbedderBlink, V8AppBannerPromptResult::domTemplate, V8AppBannerPromptResult::trace, V8AppBannerPromptResult::traceWrappers, 0, nullptr, "AppBannerPromptResult", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AppBannerPromptResult.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AppBannerPromptResult::s_wrapperTypeInfo = V8AppBannerPromptResult::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AppBannerPromptResult>::value,
    "AppBannerPromptResult inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AppBannerPromptResult::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "AppBannerPromptResult is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AppBannerPromptResultV8Internal {

    static void platformAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        AppBannerPromptResult* impl = V8AppBannerPromptResult::toImpl(holder);

        v8SetReturnValueString(info, impl->platform(), info.GetIsolate());
    }

    MODULES_EXPORT void platformAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AppBannerPromptResultV8Internal::platformAttributeGetter(info);
    }

    static void outcomeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        AppBannerPromptResult* impl = V8AppBannerPromptResult::toImpl(holder);

        v8SetReturnValueString(info, impl->outcome(), info.GetIsolate());
    }

    MODULES_EXPORT void outcomeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        AppBannerPromptResultV8Internal::outcomeAttributeGetter(info);
    }

} // namespace AppBannerPromptResultV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AppBannerPromptResultAccessors[] = {
    { "platform", AppBannerPromptResultV8Internal::platformAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "outcome", AppBannerPromptResultV8Internal::outcomeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8AppBannerPromptResultTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AppBannerPromptResult::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8AppBannerPromptResult::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AppBannerPromptResultAccessors, WTF_ARRAY_LENGTH(V8AppBannerPromptResultAccessors));
}

v8::Local<v8::FunctionTemplate> V8AppBannerPromptResult::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AppBannerPromptResultTemplate);
}

bool V8AppBannerPromptResult::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AppBannerPromptResult::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AppBannerPromptResult* V8AppBannerPromptResult::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
