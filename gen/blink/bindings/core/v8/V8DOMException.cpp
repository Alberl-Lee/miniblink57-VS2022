// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8DOMException.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DOMException::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMException::domTemplate, V8DOMException::trace, V8DOMException::traceWrappers, 0, nullptr, "DOMException", 0, WrapperTypeInfo::WrapperTypeExceptionPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMException.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMException::s_wrapperTypeInfo = V8DOMException::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMException>::value,
    "DOMException inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMException::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "DOMException is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMExceptionV8Internal {

    static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DOMException* impl = V8DOMException::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->code());
    }

    CORE_EXPORT void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMExceptionV8Internal::codeAttributeGetter(info);
    }

    static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DOMException* impl = V8DOMException::toImpl(holder);

        v8SetReturnValueString(info, impl->name(), info.GetIsolate());
    }

    CORE_EXPORT void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMExceptionV8Internal::nameAttributeGetter(info);
    }

    static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DOMException* impl = V8DOMException::toImpl(holder);

        v8SetReturnValueString(info, impl->message(), info.GetIsolate());
    }

    CORE_EXPORT void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMExceptionV8Internal::messageAttributeGetter(info);
    }

    static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMException* impl = V8DOMException::toImpl(info.Holder());

        v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
    }

    CORE_EXPORT void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMExceptionV8Internal::toStringMethod(info);
    }

    static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        V8StringResource<> message;
        V8StringResource<> name;
        if (!info[0]->IsUndefined()) {
            message = info[0];
            if (!message.prepare())
                return;
        } else {
            message = String("");
        }
        if (!info[1]->IsUndefined()) {
            name = info[1];
            if (!name.prepare())
                return;
        } else {
            name = String("Error");
        }

        DOMException* impl = DOMException::create(message, name);
        v8::Local<v8::Object> wrapper = info.Holder();
        wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8DOMException::wrapperTypeInfo, wrapper);
        v8SetReturnValue(info, wrapper);
    }

} // namespace DOMExceptionV8Internal

const V8DOMConfiguration::AccessorConfiguration V8DOMExceptionAccessors[] = {
    { "code", DOMExceptionV8Internal::codeAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "name", DOMExceptionV8Internal::nameAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "message", DOMExceptionV8Internal::messageAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8DOMExceptionMethods[] = {
    { "toString", DOMExceptionV8Internal::toStringMethodCallback, 0, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

void V8DOMException::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("DOMException"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    DOMExceptionV8Internal::constructor(info);
}

static void installV8DOMExceptionTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMException::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DOMException::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8DOMException::constructorCallback);
    interfaceTemplate->SetLength(0);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8DOMExceptionConstants[] = {
        { "INDEX_SIZE_ERR", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "DOMSTRING_SIZE_ERR", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "HIERARCHY_REQUEST_ERR", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "WRONG_DOCUMENT_ERR", 4, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INVALID_CHARACTER_ERR", 5, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NO_DATA_ALLOWED_ERR", 6, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NO_MODIFICATION_ALLOWED_ERR", 7, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NOT_FOUND_ERR", 8, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NOT_SUPPORTED_ERR", 9, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INUSE_ATTRIBUTE_ERR", 10, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INVALID_STATE_ERR", 11, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "SYNTAX_ERR", 12, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INVALID_MODIFICATION_ERR", 13, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NAMESPACE_ERR", 14, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INVALID_ACCESS_ERR", 15, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "VALIDATION_ERR", 16, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "TYPE_MISMATCH_ERR", 17, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "SECURITY_ERR", 18, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "NETWORK_ERR", 19, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "ABORT_ERR", 20, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "URL_MISMATCH_ERR", 21, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "QUOTA_EXCEEDED_ERR", 22, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "TIMEOUT_ERR", 23, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "INVALID_NODE_TYPE_ERR", 24, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
        { "DATA_CLONE_ERR", 25, 0, V8DOMConfiguration::ConstantTypeUnsignedShort },
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8DOMExceptionConstants, WTF_ARRAY_LENGTH(V8DOMExceptionConstants));
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMExceptionAccessors, WTF_ARRAY_LENGTH(V8DOMExceptionAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMExceptionMethods, WTF_ARRAY_LENGTH(V8DOMExceptionMethods));
}

v8::Local<v8::FunctionTemplate> V8DOMException::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMExceptionTemplate);
}

bool V8DOMException::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMException::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMException* V8DOMException::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
