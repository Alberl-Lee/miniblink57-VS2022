// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Storage.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8Storage::wrapperTypeInfo = { gin::kEmbedderBlink, V8Storage::domTemplate, V8Storage::trace, V8Storage::traceWrappers, 0, nullptr, "Storage", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Storage.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Storage::s_wrapperTypeInfo = V8Storage::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Storage>::value,
    "Storage inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Storage::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Storage is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace StorageV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Storage* impl = V8Storage::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::GetterContext, "Storage", "length");

        unsigned cppValue(impl->length(exceptionState));

        if (UNLIKELY(exceptionState.hadException()))
            return;

        v8SetReturnValueUnsigned(info, cppValue);
    }

    MODULES_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        StorageV8Internal::lengthAttributeGetter(info);
    }

    static void keyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "key");

        Storage* impl = V8Storage::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        String result = impl->key(index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void keyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        StorageV8Internal::keyMethod(info);
    }

    static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "getItem");

        Storage* impl = V8Storage::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> key;
        key = info[0];
        if (!key.prepare())
            return;

        String result = impl->getItem(key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "getItem");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("Storage.getItem", info.Length(), loggerArgs.data());
        }
        StorageV8Internal::getItemMethod(info);
    }

    static void setItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "setItem");

        Storage* impl = V8Storage::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 2)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
            return;
        }

        V8StringResource<> key;
        V8StringResource<> value;
        key = info[0];
        if (!key.prepare())
            return;

        value = info[1];
        if (!value.prepare())
            return;

        impl->setItem(key, value, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    MODULES_EXPORT void setItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "setItem");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("Storage.setItem", info.Length(), loggerArgs.data());
        }
        StorageV8Internal::setItemMethod(info);
    }

    static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "removeItem");

        Storage* impl = V8Storage::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> key;
        key = info[0];
        if (!key.prepare())
            return;

        impl->removeItem(key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    MODULES_EXPORT void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "removeItem");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("Storage.removeItem", info.Length(), loggerArgs.data());
        }
        StorageV8Internal::removeItemMethod(info);
    }

    static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "clear");

        Storage* impl = V8Storage::toImpl(info.Holder());

        impl->clear(exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    MODULES_EXPORT void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ScriptState* scriptState = ScriptState::forReceiverObject(info);
        V8PerContextData* contextData = scriptState->perContextData();
        if (contextData && contextData->activityLogger()) {
            ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Storage", "clear");
            Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
            contextData->activityLogger()->logMethod("Storage.clear", info.Length(), loggerArgs.data());
        }
        StorageV8Internal::clearMethod(info);
    }

    static void namedPropertyGetter(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        const CString& nameInUtf8 = name.utf8();
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::GetterContext, "Storage", nameInUtf8.data());

        Storage* impl = V8Storage::toImpl(info.Holder());
        String result = impl->anonymousNamedGetter(name, exceptionState);
        if (result.isNull())
            return;
        v8SetReturnValueString(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        StorageV8Internal::namedPropertyGetter(propertyName, info);
    }

    static void namedPropertySetter(const AtomicString& name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        const CString& nameInUtf8 = name.utf8();
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "Storage", nameInUtf8.data());

        Storage* impl = V8Storage::toImpl(info.Holder());
        V8StringResource<> propertyValue = v8Value;
        if (!propertyValue.prepare())
            return;

        bool result = impl->anonymousNamedSetter(name, propertyValue, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!result)
            return;
        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void namedPropertySetterCallback(v8::Local<v8::Name> name, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        StorageV8Internal::namedPropertySetter(propertyName, v8Value, info);
    }

    static void namedPropertyDeleter(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
    {
        const CString& nameInUtf8 = name.utf8();
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::DeletionContext, "Storage", nameInUtf8.data());

        Storage* impl = V8Storage::toImpl(info.Holder());

        DeleteResult result = impl->anonymousNamedDeleter(name, exceptionState);
        if (exceptionState.hadException())
            return;
        if (result == DeleteUnknownProperty)
            return;
        v8SetReturnValue(info, result == DeleteSuccess);
    }

    MODULES_EXPORT void namedPropertyDeleterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Boolean>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        StorageV8Internal::namedPropertyDeleter(propertyName, info);
    }

    static void namedPropertyQuery(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Integer>& info)
    {
        const CString& nameInUtf8 = name.utf8();
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::GetterContext, "Storage", nameInUtf8.data());

        Storage* impl = V8Storage::toImpl(info.Holder());

        bool result = impl->namedPropertyQuery(name, exceptionState);
        if (!result)
            return;
        v8SetReturnValueInt(info, v8::None);
    }

    MODULES_EXPORT void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        StorageV8Internal::namedPropertyQuery(propertyName, info);
    }

    static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::EnumerationContext, "Storage");

        Storage* impl = V8Storage::toImpl(info.Holder());

        Vector<String> names;
        impl->namedPropertyEnumerator(names, exceptionState);
        if (exceptionState.hadException())
            return;
        v8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
    }

    MODULES_EXPORT void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
    {
        StorageV8Internal::namedPropertyEnumerator(info);
    }

    MODULES_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        const AtomicString& propertyName = AtomicString::number(index);

        StorageV8Internal::namedPropertyGetter(propertyName, info);
    }

    MODULES_EXPORT void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        const AtomicString& propertyName = AtomicString::number(index);

        StorageV8Internal::namedPropertySetter(propertyName, v8Value, info);
    }

    MODULES_EXPORT void indexedPropertyDeleterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Boolean>& info)
    {
        const AtomicString& propertyName = AtomicString::number(index);

        StorageV8Internal::namedPropertyDeleter(propertyName, info);
    }

} // namespace StorageV8Internal

const V8DOMConfiguration::AccessorConfiguration V8StorageAccessors[] = {
    { "length", StorageV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8StorageMethods[] = {
    { "key", StorageV8Internal::keyMethodCallback, 0, 1, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getItem", StorageV8Internal::getItemMethodCallback, 0, 1, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "setItem", StorageV8Internal::setItemMethodCallback, 0, 2, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "removeItem", StorageV8Internal::removeItemMethodCallback, 0, 1, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clear", StorageV8Internal::clearMethodCallback, 0, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8StorageTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Storage::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Storage::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8StorageAccessors, WTF_ARRAY_LENGTH(V8StorageAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8StorageMethods, WTF_ARRAY_LENGTH(V8StorageMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(StorageV8Internal::indexedPropertyGetterCallback, StorageV8Internal::indexedPropertySetterCallback, 0, StorageV8Internal::indexedPropertyDeleterCallback, 0, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
    // Named properties
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(StorageV8Internal::namedPropertyGetterCallback, StorageV8Internal::namedPropertySetterCallback, StorageV8Internal::namedPropertyQueryCallback, StorageV8Internal::namedPropertyDeleterCallback, StorageV8Internal::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);
}

v8::Local<v8::FunctionTemplate> V8Storage::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8StorageTemplate);
}

bool V8Storage::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Storage::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Storage* V8Storage::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
