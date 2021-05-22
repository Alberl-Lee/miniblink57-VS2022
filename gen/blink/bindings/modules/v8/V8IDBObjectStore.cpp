// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8IDBObjectStore.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DOMStringList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/StringOrStringSequence.h"
#include "bindings/modules/v8/V8IDBIndex.h"
#include "bindings/modules/v8/V8IDBIndexParameters.h"
#include "bindings/modules/v8/V8IDBRequest.h"
#include "bindings/modules/v8/V8IDBTransaction.h"
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
const WrapperTypeInfo V8IDBObjectStore::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBObjectStore::domTemplate, V8IDBObjectStore::trace, V8IDBObjectStore::traceWrappers, 0, nullptr, "IDBObjectStore", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBObjectStore.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& IDBObjectStore::s_wrapperTypeInfo = V8IDBObjectStore::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, IDBObjectStore>::value,
    "IDBObjectStore inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&IDBObjectStore::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "IDBObjectStore is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace IDBObjectStoreV8Internal {

    static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        v8SetReturnValueString(info, impl->name(), info.GetIsolate());
    }

    MODULES_EXPORT void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::nameAttributeGetter(info);
    }

    static void nameAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::SetterContext, "IDBObjectStore", "name");

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setName(cppValue, exceptionState);
    }

    MODULES_EXPORT void nameAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        IDBObjectStoreV8Internal::nameAttributeSetter(v8Value, info);
    }

    static void keyPathAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        v8SetReturnValue(info, impl->keyPath(scriptState).v8Value());
    }

    MODULES_EXPORT void keyPathAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::keyPathAttributeGetter(info);
    }

    static void indexNamesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        DOMStringList* cppValue(WTF::getPtr(impl->indexNames()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#IDBObjectStore#indexNames";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void indexNamesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::indexNamesAttributeGetter(info);
    }

    static void transactionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        IDBTransaction* cppValue(WTF::getPtr(impl->transaction()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#IDBObjectStore#transaction";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    MODULES_EXPORT void transactionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::transactionAttributeGetter(info);
    }

    static void autoIncrementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(holder);

        v8SetReturnValueBool(info, impl->autoIncrement());
    }

    MODULES_EXPORT void autoIncrementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::autoIncrementAttributeGetter(info);
    }

    static void putMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "put");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue value;
        ScriptValue key;
        value = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);

        IDBRequest* result = impl->put(scriptState, value, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void putMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::putMethod(info);
    }

    static void addMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "add");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue value;
        ScriptValue key;
        value = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);

        IDBRequest* result = impl->add(scriptState, value, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::addMethod(info);
    }

    static void deleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "delete");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue key;
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        IDBRequest* result = impl->deleteFunction(scriptState, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void deleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::deleteMethod(info);
    }

    static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "clear");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        IDBRequest* result = impl->clear(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::clearMethod(info);
    }

    static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "get");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue key;
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        IDBRequest* result = impl->get(scriptState, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::getMethod(info);
    }

    static void getKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "getKey");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        ScriptValue key;
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        IDBRequest* result = impl->getKey(scriptState, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::getKeyMethod(info);
    }

    static void getAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "getAll");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue range;
        unsigned maxCount;
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            maxCount = toUInt32(info.GetIsolate(), info[1], EnforceRange, exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            maxCount = 4294967295u;
        }

        IDBRequest* result = impl->getAll(scriptState, range, maxCount, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::getAllMethod(info);
    }

    static void getAllKeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "getAllKeys");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue range;
        unsigned maxCount;
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            maxCount = toUInt32(info.GetIsolate(), info[1], EnforceRange, exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            maxCount = 4294967295u;
        }

        IDBRequest* result = impl->getAllKeys(scriptState, range, maxCount, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void getAllKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::getAllKeysMethod(info);
    }

    static void countMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "count");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue key;
        key = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        IDBRequest* result = impl->count(scriptState, key, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void countMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::countMethod(info);
    }

    static void openCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "openCursor");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue range;
        V8StringResource<> direction;
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            direction = info[1];
            if (!direction.prepare())
                return;
            const char* validDirectionValues[] = {
                "next",
                "nextunique",
                "prev",
                "prevunique",
            };
            if (!isValidEnum(direction, validDirectionValues, WTF_ARRAY_LENGTH(validDirectionValues), "IDBCursorDirection", exceptionState)) {
                return;
            }
        } else {
            direction = String("next");
        }

        IDBRequest* result = impl->openCursor(scriptState, range, direction, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void openCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::openCursorMethod(info);
    }

    static void openKeyCursorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "openKeyCursor");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue range;
        V8StringResource<> direction;
        range = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);

        if (!info[1]->IsUndefined()) {
            direction = info[1];
            if (!direction.prepare())
                return;
            const char* validDirectionValues[] = {
                "next",
                "nextunique",
                "prev",
                "prevunique",
            };
            if (!isValidEnum(direction, validDirectionValues, WTF_ARRAY_LENGTH(validDirectionValues), "IDBCursorDirection", exceptionState)) {
                return;
            }
        } else {
            direction = String("next");
        }

        IDBRequest* result = impl->openKeyCursor(scriptState, range, direction, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void openKeyCursorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::openKeyCursorMethod(info);
    }

    static void createIndexMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "createIndex");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        if (UNLIKELY(info.Length() < 2)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
            return;
        }

        V8StringResource<> name;
        StringOrStringSequence keyPath;
        IDBIndexParameters options;
        name = info[0];
        if (!name.prepare())
            return;

        V8StringOrStringSequence::toImpl(info.GetIsolate(), info[1], keyPath, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;

        if (!isUndefinedOrNull(info[2]) && !info[2]->IsObject()) {
            exceptionState.throwTypeError("parameter 3 ('options') is not an object.");

            return;
        }
        V8IDBIndexParameters::toImpl(info.GetIsolate(), info[2], options, exceptionState);
        if (exceptionState.hadException())
            return;

        IDBIndex* result = impl->createIndex(scriptState, name, keyPath, options, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void createIndexMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::createIndexMethod(info);
    }

    static void indexMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "index");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> name;
        name = info[0];
        if (!name.prepare())
            return;

        IDBIndex* result = impl->index(name, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    MODULES_EXPORT void indexMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::indexMethod(info);
    }

    static void deleteIndexMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "IDBObjectStore", "deleteIndex");

        IDBObjectStore* impl = V8IDBObjectStore::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> name;
        name = info[0];
        if (!name.prepare())
            return;

        impl->deleteIndex(name, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    MODULES_EXPORT void deleteIndexMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        IDBObjectStoreV8Internal::deleteIndexMethod(info);
    }

} // namespace IDBObjectStoreV8Internal

const V8DOMConfiguration::AccessorConfiguration V8IDBObjectStoreAccessors[] = {
    { "name", IDBObjectStoreV8Internal::nameAttributeGetterCallback, IDBObjectStoreV8Internal::nameAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "keyPath", IDBObjectStoreV8Internal::keyPathAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "indexNames", IDBObjectStoreV8Internal::indexNamesAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "transaction", IDBObjectStoreV8Internal::transactionAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "autoIncrement", IDBObjectStoreV8Internal::autoIncrementAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8IDBObjectStoreMethods[] = {
    { "put", IDBObjectStoreV8Internal::putMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "add", IDBObjectStoreV8Internal::addMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "delete", IDBObjectStoreV8Internal::deleteMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clear", IDBObjectStoreV8Internal::clearMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "get", IDBObjectStoreV8Internal::getMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getAll", IDBObjectStoreV8Internal::getAllMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getAllKeys", IDBObjectStoreV8Internal::getAllKeysMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "count", IDBObjectStoreV8Internal::countMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "openCursor", IDBObjectStoreV8Internal::openCursorMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "openKeyCursor", IDBObjectStoreV8Internal::openKeyCursorMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "createIndex", IDBObjectStoreV8Internal::createIndexMethodCallback, 0, 2, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "index", IDBObjectStoreV8Internal::indexMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "deleteIndex", IDBObjectStoreV8Internal::deleteIndexMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8IDBObjectStoreTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8IDBObjectStore::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8IDBObjectStore::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBObjectStoreAccessors, WTF_ARRAY_LENGTH(V8IDBObjectStoreAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8IDBObjectStoreMethods, WTF_ARRAY_LENGTH(V8IDBObjectStoreMethods));

    if (RuntimeEnabledFeatures::indexedDBExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getKeyMethodConfiguration = { "getKey", IDBObjectStoreV8Internal::getKeyMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getKeyMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8IDBObjectStore::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8IDBObjectStoreTemplate);
}

bool V8IDBObjectStore::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8IDBObjectStore::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBObjectStore* V8IDBObjectStore::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
