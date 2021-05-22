// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8DataTransferItemList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DataTransferItem.h"
#include "bindings/core/v8/V8File.h"
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
const WrapperTypeInfo V8DataTransferItemList::wrapperTypeInfo = { gin::kEmbedderBlink, V8DataTransferItemList::domTemplate, V8DataTransferItemList::trace, V8DataTransferItemList::traceWrappers, 0, nullptr, "DataTransferItemList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DataTransferItemList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DataTransferItemList::s_wrapperTypeInfo = V8DataTransferItemList::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DataTransferItemList>::value,
    "DataTransferItemList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DataTransferItemList::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "DataTransferItemList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DataTransferItemListV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DataTransferItemList* impl = V8DataTransferItemList::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemListV8Internal::lengthAttributeGetter(info);
    }

    static void add1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DataTransferItemList", "add");

        DataTransferItemList* impl = V8DataTransferItemList::toImpl(info.Holder());

        V8StringResource<> data;
        V8StringResource<> type;
        data = info[0];
        if (!data.prepare())
            return;

        type = info[1];
        if (!type.prepare())
            return;

        DataTransferItem* result = impl->add(data, type, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    static void add2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemList* impl = V8DataTransferItemList::toImpl(info.Holder());

        File* file;
        file = V8File::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!file) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("add", "DataTransferItemList", "parameter 1 is not of type 'File'."));

            return;
        }

        v8SetReturnValue(info, impl->add(file));
    }

    static void addMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        bool isArityError = false;
        switch (std::min(2, info.Length())) {
        case 1:
            if (true) {
                add2Method(info);
                return;
            }
            break;
        case 2:
            if (true) {
                add1Method(info);
                return;
            }
            break;
        default:
            isArityError = true;
        }

        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DataTransferItemList", "add");

        if (isArityError) {
            if (info.Length() < 1) {
                exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
                return;
            }
        }
        exceptionState.throwTypeError("No function was found that matched the signature provided.");
    }

    CORE_EXPORT void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemListV8Internal::addMethod(info);
    }

    static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DataTransferItemList", "remove");

        DataTransferItemList* impl = V8DataTransferItemList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->deleteItem(index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemListV8Internal::removeMethod(info);
    }

    static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemList* impl = V8DataTransferItemList::toImpl(info.Holder());

        impl->clear();
    }

    CORE_EXPORT void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DataTransferItemListV8Internal::clearMethod(info);
    }

    static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        DataTransferItemList* impl = V8DataTransferItemList::toImpl(info.Holder());

        // We assume that all the implementations support length() method, although
        // the spec doesn't require that length() must exist.  It's okay that
        // the interface does not have length attribute as long as the
        // implementation supports length() member function.
        if (index >= impl->length())
            return; // Returns undefined due to out-of-range.

        DataTransferItem* result = impl->item(index);
        v8SetReturnValueFast(info, result, impl);
    }

    CORE_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        DataTransferItemListV8Internal::indexedPropertyGetter(index, info);
    }

} // namespace DataTransferItemListV8Internal

const V8DOMConfiguration::AccessorConfiguration V8DataTransferItemListAccessors[] = {
    { "length", DataTransferItemListV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8DataTransferItemListMethods[] = {
    { "add", DataTransferItemListV8Internal::addMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "remove", DataTransferItemListV8Internal::removeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clear", DataTransferItemListV8Internal::clearMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8DataTransferItemListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DataTransferItemList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DataTransferItemList::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DataTransferItemListAccessors, WTF_ARRAY_LENGTH(V8DataTransferItemListAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DataTransferItemListMethods, WTF_ARRAY_LENGTH(V8DataTransferItemListMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(DataTransferItemListV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<DataTransferItemList>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

    // Array iterator (@@iterator)
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
}

v8::Local<v8::FunctionTemplate> V8DataTransferItemList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DataTransferItemListTemplate);
}

bool V8DataTransferItemList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DataTransferItemList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DataTransferItemList* V8DataTransferItemList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
