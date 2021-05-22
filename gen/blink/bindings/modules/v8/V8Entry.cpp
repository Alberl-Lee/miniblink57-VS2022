// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Entry.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8VoidCallback.h"
#include "bindings/modules/v8/V8DOMFileSystem.h"
#include "bindings/modules/v8/V8DirectoryEntry.h"
#include "bindings/modules/v8/V8EntryCallback.h"
#include "bindings/modules/v8/V8ErrorCallback.h"
#include "bindings/modules/v8/V8MetadataCallback.h"
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
const WrapperTypeInfo V8Entry::wrapperTypeInfo = { gin::kEmbedderBlink, V8Entry::domTemplate, V8Entry::trace, V8Entry::traceWrappers, 0, nullptr, "Entry", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Entry.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Entry::s_wrapperTypeInfo = V8Entry::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Entry>::value,
    "Entry inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Entry::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Entry is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace EntryV8Internal {

    static void isFileAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Entry* impl = V8Entry::toImpl(holder);

        v8SetReturnValueBool(info, impl->isFile());
    }

    MODULES_EXPORT void isFileAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::isFileAttributeGetter(info);
    }

    static void isDirectoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Entry* impl = V8Entry::toImpl(holder);

        v8SetReturnValueBool(info, impl->isDirectory());
    }

    MODULES_EXPORT void isDirectoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::isDirectoryAttributeGetter(info);
    }

    static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Entry* impl = V8Entry::toImpl(holder);

        v8SetReturnValueString(info, impl->name(), info.GetIsolate());
    }

    MODULES_EXPORT void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::nameAttributeGetter(info);
    }

    static void fullPathAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Entry* impl = V8Entry::toImpl(holder);

        v8SetReturnValueString(info, impl->fullPath(), info.GetIsolate());
    }

    MODULES_EXPORT void fullPathAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::fullPathAttributeGetter(info);
    }

    static void filesystemAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Entry* impl = V8Entry::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        DOMFileSystem* cppValue(impl->filesystem(scriptState));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Entry#filesystem";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void filesystemAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::filesystemAttributeGetter(info);
    }

    static void getMetadataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getMetadata", "Entry", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        MetadataCallback* successCallback;
        ErrorCallback* errorCallback;
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getMetadata", "Entry", "The callback provided as parameter 1 is not a function."));

            return;
        }
        successCallback = V8MetadataCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));

        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getMetadata", "Entry", "The callback provided as parameter 2 is not a function."));

                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }

        impl->getMetadata(scriptState, successCallback, errorCallback);
    }

    MODULES_EXPORT void getMetadataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::getMetadataMethod(info);
    }

    static void moveToMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("moveTo", "Entry", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        DirectoryEntry* parent;
        V8StringResource<TreatNullAndUndefinedAsNullString> name;
        EntryCallback* successCallback;
        ErrorCallback* errorCallback;
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        parent = V8DirectoryEntry::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!parent) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("moveTo", "Entry", "parameter 1 is not of type 'DirectoryEntry'."));

            return;
        }

        if (UNLIKELY(numArgsPassed <= 1)) {
            impl->moveTo(scriptState, parent);
            return;
        }
        name = info[1];
        if (!name.prepare())
            return;

        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("moveTo", "Entry", "The callback provided as parameter 3 is not a function."));

                return;
            }
            successCallback = V8EntryCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }

        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("moveTo", "Entry", "The callback provided as parameter 4 is not a function."));

                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }

        impl->moveTo(scriptState, parent, name, successCallback, errorCallback);
    }

    MODULES_EXPORT void moveToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::moveToMethod(info);
    }

    static void copyToMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("copyTo", "Entry", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        DirectoryEntry* parent;
        V8StringResource<TreatNullAndUndefinedAsNullString> name;
        EntryCallback* successCallback;
        ErrorCallback* errorCallback;
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        parent = V8DirectoryEntry::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!parent) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("copyTo", "Entry", "parameter 1 is not of type 'DirectoryEntry'."));

            return;
        }

        if (UNLIKELY(numArgsPassed <= 1)) {
            impl->copyTo(scriptState, parent);
            return;
        }
        name = info[1];
        if (!name.prepare())
            return;

        if (!isUndefinedOrNull(info[2])) {
            if (!info[2]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("copyTo", "Entry", "The callback provided as parameter 3 is not a function."));

                return;
            }
            successCallback = V8EntryCallback::create(v8::Local<v8::Function>::Cast(info[2]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }

        if (!isUndefinedOrNull(info[3])) {
            if (!info[3]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("copyTo", "Entry", "The callback provided as parameter 4 is not a function."));

                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[3]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }

        impl->copyTo(scriptState, parent, name, successCallback, errorCallback);
    }

    MODULES_EXPORT void copyToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::copyToMethod(info);
    }

    static void toURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        String result = impl->toURL(scriptState);
        v8SetReturnValueString(info, result, info.GetIsolate());
    }

    MODULES_EXPORT void toURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::toURLMethod(info);
    }

    static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("remove", "Entry", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        VoidCallback* successCallback;
        ErrorCallback* errorCallback;
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("remove", "Entry", "The callback provided as parameter 1 is not a function."));

            return;
        }
        successCallback = V8VoidCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));

        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("remove", "Entry", "The callback provided as parameter 2 is not a function."));

                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }

        impl->remove(scriptState, successCallback, errorCallback);
    }

    MODULES_EXPORT void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::removeMethod(info);
    }

    static void getParentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Entry* impl = V8Entry::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        EntryCallback* successCallback;
        ErrorCallback* errorCallback;
        if (!isUndefinedOrNull(info[0])) {
            if (!info[0]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getParent", "Entry", "The callback provided as parameter 1 is not a function."));

                return;
            }
            successCallback = V8EntryCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        } else {
            successCallback = nullptr;
        }

        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getParent", "Entry", "The callback provided as parameter 2 is not a function."));

                return;
            }
            errorCallback = V8ErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }

        impl->getParent(scriptState, successCallback, errorCallback);
    }

    MODULES_EXPORT void getParentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        EntryV8Internal::getParentMethod(info);
    }

} // namespace EntryV8Internal

const V8DOMConfiguration::AccessorConfiguration V8EntryAccessors[] = {
    { "isFile", EntryV8Internal::isFileAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "isDirectory", EntryV8Internal::isDirectoryAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "name", EntryV8Internal::nameAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "fullPath", EntryV8Internal::fullPathAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "filesystem", EntryV8Internal::filesystemAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8EntryMethods[] = {
    { "getMetadata", EntryV8Internal::getMetadataMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "moveTo", EntryV8Internal::moveToMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "copyTo", EntryV8Internal::copyToMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "toURL", EntryV8Internal::toURLMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "remove", EntryV8Internal::removeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getParent", EntryV8Internal::getParentMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8EntryTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Entry::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Entry::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8EntryAccessors, WTF_ARRAY_LENGTH(V8EntryAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8EntryMethods, WTF_ARRAY_LENGTH(V8EntryMethods));
}

v8::Local<v8::FunctionTemplate> V8Entry::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8EntryTemplate);
}

bool V8Entry::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Entry::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Entry* V8Entry::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
