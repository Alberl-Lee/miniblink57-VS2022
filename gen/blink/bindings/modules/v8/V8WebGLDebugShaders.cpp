// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8WebGLDebugShaders.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8WebGLShader.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8WebGLDebugShaders::wrapperTypeInfo = { gin::kEmbedderBlink, V8WebGLDebugShaders::domTemplate, V8WebGLDebugShaders::trace, V8WebGLDebugShaders::traceWrappers, V8WebGLDebugShaders::visitDOMWrapper, nullptr, "WebGLDebugShaders", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLDebugShaders.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WebGLDebugShaders::s_wrapperTypeInfo = V8WebGLDebugShaders::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLDebugShaders>::value,
    "WebGLDebugShaders inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLDebugShaders::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "WebGLDebugShaders is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace WebGLDebugShadersV8Internal {

    static void getTranslatedShaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        WebGLDebugShaders* impl = V8WebGLDebugShaders::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getTranslatedShaderSource", "WebGLDebugShaders", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        WebGLShader* shader;
        shader = V8WebGLShader::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!shader) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getTranslatedShaderSource", "WebGLDebugShaders", "parameter 1 is not of type 'WebGLShader'."));

            return;
        }

        v8SetReturnValueStringOrNull(info, impl->getTranslatedShaderSource(shader), info.GetIsolate());
    }

    MODULES_EXPORT void getTranslatedShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        WebGLDebugShadersV8Internal::getTranslatedShaderSourceMethod(info);
    }

} // namespace WebGLDebugShadersV8Internal

void V8WebGLDebugShaders::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    WebGLDebugShaders* impl = scriptWrappable->toImpl<WebGLDebugShaders>();
    // The canvas() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->canvas())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::MethodConfiguration V8WebGLDebugShadersMethods[] = {
    { "getTranslatedShaderSource", WebGLDebugShadersV8Internal::getTranslatedShaderSourceMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8WebGLDebugShadersTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WebGLDebugShaders::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8WebGLDebugShaders::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8WebGLDebugShadersMethods, WTF_ARRAY_LENGTH(V8WebGLDebugShadersMethods));
}

v8::Local<v8::FunctionTemplate> V8WebGLDebugShaders::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8WebGLDebugShadersTemplate);
}

bool V8WebGLDebugShaders::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WebGLDebugShaders::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WebGLDebugShaders* V8WebGLDebugShaders::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
