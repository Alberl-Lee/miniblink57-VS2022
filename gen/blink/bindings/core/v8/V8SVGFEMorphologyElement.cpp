// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8SVGFEMorphologyElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGAnimatedNumber.h"
#include "bindings/core/v8/V8SVGAnimatedString.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
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
const WrapperTypeInfo V8SVGFEMorphologyElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGFEMorphologyElement::domTemplate, V8SVGFEMorphologyElement::trace, V8SVGFEMorphologyElement::traceWrappers, 0, nullptr, "SVGFEMorphologyElement", &V8SVGElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGFEMorphologyElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGFEMorphologyElement::s_wrapperTypeInfo = V8SVGFEMorphologyElement::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGFEMorphologyElement>::value,
    "SVGFEMorphologyElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGFEMorphologyElement::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "SVGFEMorphologyElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGFEMorphologyElementV8Internal {

    CORE_EXPORT void SVG_MORPHOLOGY_OPERATOR_UNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
        v8SetReturnValueInt(info, 0);
    }

    CORE_EXPORT void SVG_MORPHOLOGY_OPERATOR_ERODEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
        v8SetReturnValueInt(info, 1);
    }

    CORE_EXPORT void SVG_MORPHOLOGY_OPERATOR_DILATEConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);
        v8SetReturnValueInt(info, 2);
    }

    static void in1AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->in1()), impl);
    }

    CORE_EXPORT void in1AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::in1AttributeGetter(info);
    }

    static void operatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->svgOperator()), impl);
    }

    CORE_EXPORT void operatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::operatorAttributeGetter(info);
    }

    static void radiusXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->radiusX()), impl);
    }

    CORE_EXPORT void radiusXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::radiusXAttributeGetter(info);
    }

    static void radiusYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->radiusY()), impl);
    }

    CORE_EXPORT void radiusYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::radiusYAttributeGetter(info);
    }

    static void xAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->x()), impl);
    }

    CORE_EXPORT void xAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::xAttributeGetter(info);
    }

    static void yAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->y()), impl);
    }

    CORE_EXPORT void yAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::yAttributeGetter(info);
    }

    static void widthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->width()), impl);
    }

    CORE_EXPORT void widthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::widthAttributeGetter(info);
    }

    static void heightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->height()), impl);
    }

    CORE_EXPORT void heightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::heightAttributeGetter(info);
    }

    static void resultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGFEMorphologyElement* impl = V8SVGFEMorphologyElement::toImpl(holder);

        v8SetReturnValueFast(info, WTF::getPtr(impl->result()), impl);
    }

    CORE_EXPORT void resultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::SVG1DOMFilter);

        SVGFEMorphologyElementV8Internal::resultAttributeGetter(info);
    }

} // namespace SVGFEMorphologyElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SVGFEMorphologyElementAccessors[] = {
    { "in1", SVGFEMorphologyElementV8Internal::in1AttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "operator", SVGFEMorphologyElementV8Internal::operatorAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "radiusX", SVGFEMorphologyElementV8Internal::radiusXAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "radiusY", SVGFEMorphologyElementV8Internal::radiusYAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "x", SVGFEMorphologyElementV8Internal::xAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "y", SVGFEMorphologyElementV8Internal::yAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "width", SVGFEMorphologyElementV8Internal::widthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "height", SVGFEMorphologyElementV8Internal::heightAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "result", SVGFEMorphologyElementV8Internal::resultAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8SVGFEMorphologyElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGFEMorphologyElement::wrapperTypeInfo.interfaceName, V8SVGElement::domTemplate(isolate, world), V8SVGFEMorphologyElement::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", SVGFEMorphologyElementV8Internal::SVG_MORPHOLOGY_OPERATOR_UNKNOWNConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_MORPHOLOGY_OPERATOR_ERODE", SVGFEMorphologyElementV8Internal::SVG_MORPHOLOGY_OPERATOR_ERODEConstantGetterCallback);
    V8DOMConfiguration::installConstantWithGetter(isolate, interfaceTemplate, prototypeTemplate, "SVG_MORPHOLOGY_OPERATOR_DILATE", SVGFEMorphologyElementV8Internal::SVG_MORPHOLOGY_OPERATOR_DILATEConstantGetterCallback);
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGFEMorphologyElementAccessors, WTF_ARRAY_LENGTH(V8SVGFEMorphologyElementAccessors));
}

v8::Local<v8::FunctionTemplate> V8SVGFEMorphologyElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGFEMorphologyElementTemplate);
}

bool V8SVGFEMorphologyElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGFEMorphologyElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGFEMorphologyElement* V8SVGFEMorphologyElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
