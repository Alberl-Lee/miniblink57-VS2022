// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8IDBKeyRange.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8IDBKeyRange.h"
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
const WrapperTypeInfo V8IDBKeyRange::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBKeyRange::domTemplate, V8IDBKeyRange::trace, V8IDBKeyRange::traceWrappers, 0, nullptr, "IDBKeyRange", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBKeyRange.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBKeyRange::s_wrapperTypeInfo = V8IDBKeyRange::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, IDBKeyRange>::value,
    "IDBKeyRange inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&IDBKeyRange::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "IDBKeyRange is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace IDBKeyRangeV8Internal {

    static void lowerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBKeyRange* impl = V8IDBKeyRange::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        v8SetReturnValue(info, impl->lowerValue(scriptState).v8Value());
    }

    MODULES_EXPORT void lowerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::lowerAttributeGetter(info);
    }

    static void upperAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBKeyRange* impl = V8IDBKeyRange::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        v8SetReturnValue(info, impl->upperValue(scriptState).v8Value());
    }

    MODULES_EXPORT void upperAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::upperAttributeGetter(info);
    }

    static void lowerOpenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBKeyRange* impl = V8IDBKeyRange::toImpl(holder);

        v8SetReturnValueBool(info, impl->lowerOpen());
    }

    MODULES_EXPORT void lowerOpenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::lowerOpenAttributeGetter(info);
    }

    static void upperOpenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBKeyRange* impl = V8IDBKeyRange::toImpl(holder);

        v8SetReturnValueBool(info, impl->upperOpen());
    }

    MODULES_EXPORT void upperOpenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::upperOpenAttributeGetter(info);
    }

    static void onlyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBKeyRange", "only");

        ScriptState* scriptState = ScriptState::forFunctionObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue value;
        value = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        IDBKeyRange* result = IDBKeyRange::only(scriptState, value, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
    }

    MODULES_EXPORT void onlyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::onlyMethod(info);
    }

    static void lowerBoundMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBKeyRange", "lowerBound");

        ScriptState* scriptState = ScriptState::forFunctionObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue bound;
        bool open;
        bound = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            open = toBoolean(info.GetIsolate(), info[1], exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            open = false;
        }

        IDBKeyRange* result = IDBKeyRange::lowerBound(scriptState, bound, open, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
    }

    MODULES_EXPORT void lowerBoundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::lowerBoundMethod(info);
    }

    static void upperBoundMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBKeyRange", "upperBound");

        ScriptState* scriptState = ScriptState::forFunctionObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue bound;
        bool open;
        bound = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            open = toBoolean(info.GetIsolate(), info[1], exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            open = false;
        }

        IDBKeyRange* result = IDBKeyRange::upperBound(scriptState, bound, open, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
    }

    MODULES_EXPORT void upperBoundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::upperBoundMethod(info);
    }

    static void boundMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBKeyRange", "bound");

        ScriptState* scriptState = ScriptState::forFunctionObject(info);

        if (UNLIKELY(info.Length() < 2)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
            return;
        }

        ScriptValue lower;
        ScriptValue upper;
        bool lowerOpen;
        bool upperOpen;
        lower = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        upper = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);

        if (!info[2]->IsUndefined()) {
            lowerOpen = toBoolean(info.GetIsolate(), info[2], exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            lowerOpen = false;
        }
        if (!info[3]->IsUndefined()) {
            upperOpen = toBoolean(info.GetIsolate(), info[3], exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            upperOpen = false;
        }

        IDBKeyRange* result = IDBKeyRange::bound(scriptState, lower, upper, lowerOpen, upperOpen, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
    }

    MODULES_EXPORT void boundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::boundMethod(info);
    }

    static void includesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBKeyRange", "includes");

        IDBKeyRange* impl = V8IDBKeyRange::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue key;
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        bool result = impl->includes(scriptState, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueBool(info, result);
    }

    MODULES_EXPORT void includesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBKeyRangeV8Internal::includesMethod(info);
    }

} // namespace IDBKeyRangeV8Internal

const V8DOMConfiguration::AccessorConfiguration V8IDBKeyRangeAccessors[] = {
    { "lower", IDBKeyRangeV8Internal::lowerAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "upper", IDBKeyRangeV8Internal::upperAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "lowerOpen", IDBKeyRangeV8Internal::lowerOpenAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "upperOpen", IDBKeyRangeV8Internal::upperOpenAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8IDBKeyRangeMethods[] = {
    { "only", IDBKeyRangeV8Internal::onlyMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "lowerBound", IDBKeyRangeV8Internal::lowerBoundMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "upperBound", IDBKeyRangeV8Internal::upperBoundMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "bound", IDBKeyRangeV8Internal::boundMethodCallback, 0, 2, v8::None, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder },
    { "includes", IDBKeyRangeV8Internal::includesMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8IDBKeyRangeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8IDBKeyRange::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8IDBKeyRange::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBKeyRangeAccessors, WTF_ARRAY_LENGTH(V8IDBKeyRangeAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBKeyRangeMethods, WTF_ARRAY_LENGTH(V8IDBKeyRangeMethods));
}

v8::Local<v8::FunctionTemplate> V8IDBKeyRange::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBKeyRangeTemplate);
}

bool V8IDBKeyRange::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBKeyRange::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBKeyRange* V8IDBKeyRange::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
