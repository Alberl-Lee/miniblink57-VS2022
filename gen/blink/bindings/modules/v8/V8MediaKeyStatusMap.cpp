// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8MediaKeyStatusMap.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Iterator.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/FlexibleArrayBufferView.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MediaKeyStatusMap::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaKeyStatusMap::domTemplate, V8MediaKeyStatusMap::trace, V8MediaKeyStatusMap::traceWrappers, 0, nullptr, "MediaKeyStatusMap", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaKeyStatusMap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaKeyStatusMap::s_wrapperTypeInfo = V8MediaKeyStatusMap::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MediaKeyStatusMap>::value,
    "MediaKeyStatusMap inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MediaKeyStatusMap::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "MediaKeyStatusMap is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MediaKeyStatusMapV8Internal {

    static void sizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->size());
    }

    MODULES_EXPORT void sizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::sizeAttributeGetter(info);
    }

    static void hasMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "has");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ArrayBufferOrArrayBufferView keyId;
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[0], keyId, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        v8SetReturnValueBool(info, impl->has(keyId));
    }

    MODULES_EXPORT void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::hasMethod(info);
    }

    static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "get");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ArrayBufferOrArrayBufferView keyId;
        V8ArrayBufferOrArrayBufferView::toImpl(info.GetIsolate(), info[0], keyId, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        ScriptValue result = impl->get(scriptState, keyId);
        v8SetReturnValue(info, result.v8Value());
    }

    MODULES_EXPORT void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::getMethod(info);
    }

    static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "keys");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->keysForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::keysMethod(info);
    }

    static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "values");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->valuesForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::valuesMethod(info);
    }

    static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "entries");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->entriesForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::entriesMethod(info);
    }

    static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "forEach");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue callback;
        ScriptValue thisArg;
        if (!(info[0]->IsObject() && v8::Local<v8::Object>::Cast(info[0])->IsCallable())) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");

            return;
        }
        callback = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        thisArg = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);

        impl->forEachForBinding(scriptState, ScriptValue(scriptState, info.Holder()), callback, thisArg, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    MODULES_EXPORT void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::forEachMethod(info);
    }

    static void iteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "MediaKeyStatusMap", "iterator");

        MediaKeyStatusMap* impl = V8MediaKeyStatusMap::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->iterator(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void iteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        MediaKeyStatusMapV8Internal::iteratorMethod(info);
    }

} // namespace MediaKeyStatusMapV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MediaKeyStatusMapAccessors[] = {
    { "size", MediaKeyStatusMapV8Internal::sizeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8MediaKeyStatusMapMethods[] = {
    { "has", MediaKeyStatusMapV8Internal::hasMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "get", MediaKeyStatusMapV8Internal::getMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "keys", MediaKeyStatusMapV8Internal::keysMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "values", MediaKeyStatusMapV8Internal::valuesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "entries", MediaKeyStatusMapV8Internal::entriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "forEach", MediaKeyStatusMapV8Internal::forEachMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8MediaKeyStatusMapTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaKeyStatusMap::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8MediaKeyStatusMap::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaKeyStatusMapAccessors, WTF_ARRAY_LENGTH(V8MediaKeyStatusMapAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaKeyStatusMapMethods, WTF_ARRAY_LENGTH(V8MediaKeyStatusMapMethods));

    // Iterator (@@iterator)
    const V8DOMConfiguration::SymbolKeyedMethodConfiguration symbolKeyedIteratorConfiguration = { v8::Symbol::GetIterator, MediaKeyStatusMapV8Internal::iteratorMethodCallback, 0, v8::DontEnum, V8DOMConfiguration::OnPrototype };
    V8DOMConfiguration::installMethod(isolate, world, prototypeTemplate, signature, symbolKeyedIteratorConfiguration);
}

v8::Local<v8::FunctionTemplate> V8MediaKeyStatusMap::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaKeyStatusMapTemplate);
}

bool V8MediaKeyStatusMap::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaKeyStatusMap::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaKeyStatusMap* V8MediaKeyStatusMap::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
