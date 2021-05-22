// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8CSSRule.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8CSSRule.h"
#include "bindings/core/v8/V8CSSStyleSheet.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
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
const WrapperTypeInfo V8CSSRule::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSSRule::domTemplate, V8CSSRule::trace, V8CSSRule::traceWrappers, 0, nullptr, "CSSRule", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSRule.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& CSSRule::s_wrapperTypeInfo = V8CSSRule::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSRule>::value,
    "CSSRule inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSRule::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "CSSRule is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CSSRuleV8Internal {

    static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        CSSRule* impl = V8CSSRule::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->type());
    }

    CORE_EXPORT void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CSSRuleV8Internal::typeAttributeGetter(info);
    }

    static void cssTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        CSSRule* impl = V8CSSRule::toImpl(holder);

        v8SetReturnValueString(info, impl->cssText(), info.GetIsolate());
    }

    CORE_EXPORT void cssTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CSSRuleV8Internal::cssTextAttributeGetter(info);
    }

    static void cssTextAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        CSSRule* impl = V8CSSRule::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setCSSText(cppValue);
    }

    CORE_EXPORT void cssTextAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CSSRuleV8Internal::cssTextAttributeSetter(v8Value, info);
    }

    static void parentRuleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        CSSRule* impl = V8CSSRule::toImpl(holder);

        CSSRule* cppValue(WTF::getPtr(impl->parentRule()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#CSSRule#parentRule";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void parentRuleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CSSRuleV8Internal::parentRuleAttributeGetter(info);
    }

    static void parentStyleSheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        CSSRule* impl = V8CSSRule::toImpl(holder);

        CSSStyleSheet* cppValue(WTF::getPtr(impl->parentStyleSheet()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#CSSRule#parentStyleSheet";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void parentStyleSheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CSSRuleV8Internal::parentStyleSheetAttributeGetter(info);
    }

} // namespace CSSRuleV8Internal

const V8DOMConfiguration::AccessorConfiguration V8CSSRuleAccessors[] = {
    { "type", CSSRuleV8Internal::typeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "cssText", CSSRuleV8Internal::cssTextAttributeGetterCallback, CSSRuleV8Internal::cssTextAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "parentRule", CSSRuleV8Internal::parentRuleAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "parentStyleSheet", CSSRuleV8Internal::parentStyleSheetAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8CSSRuleTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSSRule::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8CSSRule::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8CSSRuleConstants[] = {
        { "STYLE_RULE", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "CHARSET_RULE", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "IMPORT_RULE", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "MEDIA_RULE", 4, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "FONT_FACE_RULE", 5, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "PAGE_RULE", 6, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NAMESPACE_RULE", 10, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "KEYFRAMES_RULE", 7, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "KEYFRAME_RULE", 8, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "SUPPORTS_RULE", 12, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "WEBKIT_KEYFRAMES_RULE", 7, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "WEBKIT_KEYFRAME_RULE", 8, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8CSSRuleConstants, WTF_ARRAY_LENGTH(V8CSSRuleConstants));
    if (RuntimeEnabledFeatures::cssViewportEnabled()) {
        const V8DOMConfiguration::ConstantConfiguration constantViewportRuleConfiguration = { "VIEWPORT_RULE", 15, 0, V8DOMConfiguration::ConstantTypeUnsignedShort };
        V8DOMConfiguration::installConstant(isolate, interfaceTemplate, prototypeTemplate, constantViewportRuleConfiguration);
    }
    static_assert(1 == CSSRule::kStyleRule, "the value of CSSRule_kStyleRule does not match with implementation");
    static_assert(2 == CSSRule::kCharsetRule, "the value of CSSRule_kCharsetRule does not match with implementation");
    static_assert(3 == CSSRule::kImportRule, "the value of CSSRule_kImportRule does not match with implementation");
    static_assert(4 == CSSRule::kMediaRule, "the value of CSSRule_kMediaRule does not match with implementation");
    static_assert(5 == CSSRule::kFontFaceRule, "the value of CSSRule_kFontFaceRule does not match with implementation");
    static_assert(6 == CSSRule::kPageRule, "the value of CSSRule_kPageRule does not match with implementation");
    static_assert(10 == CSSRule::kNamespaceRule, "the value of CSSRule_kNamespaceRule does not match with implementation");
    static_assert(7 == CSSRule::kKeyframesRule, "the value of CSSRule_kKeyframesRule does not match with implementation");
    static_assert(8 == CSSRule::kKeyframeRule, "the value of CSSRule_kKeyframeRule does not match with implementation");
    static_assert(12 == CSSRule::kSupportsRule, "the value of CSSRule_kSupportsRule does not match with implementation");
    static_assert(15 == CSSRule::kViewportRule, "the value of CSSRule_kViewportRule does not match with implementation");
    static_assert(7 == CSSRule::kWebkitKeyframesRule, "the value of CSSRule_kWebkitKeyframesRule does not match with implementation");
    static_assert(8 == CSSRule::kWebkitKeyframeRule, "the value of CSSRule_kWebkitKeyframeRule does not match with implementation");
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CSSRuleAccessors, WTF_ARRAY_LENGTH(V8CSSRuleAccessors));
}

v8::Local<v8::FunctionTemplate> V8CSSRule::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSRuleTemplate);
}

bool V8CSSRule::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSSRule::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

CSSRule* V8CSSRule::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
