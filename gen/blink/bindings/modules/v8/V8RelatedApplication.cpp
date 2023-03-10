// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8RelatedApplication.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8RelatedApplication::wrapperTypeInfo = { gin::kEmbedderBlink, V8RelatedApplication::domTemplate, V8RelatedApplication::trace, V8RelatedApplication::traceWrappers, 0, nullptr, "RelatedApplication", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RelatedApplication.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& RelatedApplication::s_wrapperTypeInfo = V8RelatedApplication::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RelatedApplication>::value,
    "RelatedApplication inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RelatedApplication::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "RelatedApplication is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace RelatedApplicationV8Internal {

    static void platformAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        RelatedApplication* impl = V8RelatedApplication::toImpl(holder);

        v8SetReturnValueString(info, impl->platform(), info.GetIsolate());
    }

    MODULES_EXPORT void platformAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        RelatedApplicationV8Internal::platformAttributeGetter(info);
    }

    static void urlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        RelatedApplication* impl = V8RelatedApplication::toImpl(holder);

        v8SetReturnValueString(info, impl->url(), info.GetIsolate());
    }

    MODULES_EXPORT void urlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        RelatedApplicationV8Internal::urlAttributeGetter(info);
    }

    static void idAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        RelatedApplication* impl = V8RelatedApplication::toImpl(holder);

        v8SetReturnValueString(info, impl->id(), info.GetIsolate());
    }

    MODULES_EXPORT void idAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        RelatedApplicationV8Internal::idAttributeGetter(info);
    }

} // namespace RelatedApplicationV8Internal

const V8DOMConfiguration::AccessorConfiguration V8RelatedApplicationAccessors[] = {
    { "platform", RelatedApplicationV8Internal::platformAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "url", RelatedApplicationV8Internal::urlAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "id", RelatedApplicationV8Internal::idAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8RelatedApplicationTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8RelatedApplication::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8RelatedApplication::internalFieldCount);

    if (!RuntimeEnabledFeatures::installedAppEnabled()) {
        return;
    }

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8RelatedApplicationAccessors, WTF_ARRAY_LENGTH(V8RelatedApplicationAccessors));
}

v8::Local<v8::FunctionTemplate> V8RelatedApplication::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8RelatedApplicationTemplate);
}

bool V8RelatedApplication::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8RelatedApplication::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

RelatedApplication* V8RelatedApplication::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
