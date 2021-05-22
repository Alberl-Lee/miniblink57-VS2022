// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8SVGLengthList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGLength.h"
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
const WrapperTypeInfo V8SVGLengthList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGLengthList::domTemplate, V8SVGLengthList::trace, V8SVGLengthList::traceWrappers, V8SVGLengthList::visitDOMWrapper, nullptr, "SVGLengthList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGLengthListTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGLengthListTearOff::s_wrapperTypeInfo = V8SVGLengthList::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGLengthListTearOff>::value,
    "SVGLengthListTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGLengthListTearOff::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "SVGLengthListTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGLengthListTearOffV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::lengthAttributeGetter(info);
    }

    static void numberOfItemsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void numberOfItemsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::numberOfItemsAttributeGetter(info);
    }

    static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "clear");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        impl->clear(exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::clearMethod(info);
    }

    static void initializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "initialize");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        SVGLengthTearOff* newItem;
        newItem = V8SVGLength::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGLength'.");

            return;
        }

        SVGLengthTearOff* result = impl->initialize(newItem, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void initializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::initializeMethod(info);
    }

    static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "getItem");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        SVGLengthTearOff* result = impl->getItem(index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::getItemMethod(info);
    }

    static void insertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "insertItemBefore");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 2)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
            return;
        }

        SVGLengthTearOff* newItem;
        unsigned index;
        newItem = V8SVGLength::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGLength'.");

            return;
        }

        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        SVGLengthTearOff* result = impl->insertItemBefore(newItem, index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void insertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::insertItemBeforeMethod(info);
    }

    static void replaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "replaceItem");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 2)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(2, info.Length()));
            return;
        }

        SVGLengthTearOff* newItem;
        unsigned index;
        newItem = V8SVGLength::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGLength'.");

            return;
        }

        index = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        SVGLengthTearOff* result = impl->replaceItem(newItem, index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void replaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::replaceItemMethod(info);
    }

    static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "removeItem");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        SVGLengthTearOff* result = impl->removeItem(index, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::removeItemMethod(info);
    }

    static void appendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "SVGLengthList", "appendItem");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        SVGLengthTearOff* newItem;
        newItem = V8SVGLength::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!newItem) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGLength'.");

            return;
        }

        SVGLengthTearOff* result = impl->appendItem(newItem, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void appendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::appendItemMethod(info);
    }

    static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::IndexedGetterContext, "SVGLengthList");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());

        // We assume that all the implementations support length() method, although
        // the spec doesn't require that length() must exist.  It's okay that
        // the interface does not have length attribute as long as the
        // implementation supports length() member function.
        if (index >= impl->length())
            return; // Returns undefined due to out-of-range.

        SVGLengthTearOff* result = impl->getItem(index, exceptionState);
        v8SetReturnValueFast(info, result, impl);
    }

    CORE_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::indexedPropertyGetter(index, info);
    }

    static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::IndexedSetterContext, "SVGLengthList");

        SVGLengthListTearOff* impl = V8SVGLengthList::toImpl(info.Holder());
        SVGLengthTearOff* propertyValue = V8SVGLength::toImplWithTypeCheck(info.GetIsolate(), v8Value);
        if (!propertyValue) {
            exceptionState.throwTypeError("The provided value is not of type 'SVGLength'.");
            return;
        }

        bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!result)
            return;
        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        SVGLengthListTearOffV8Internal::indexedPropertySetter(index, v8Value, info);
    }

} // namespace SVGLengthListTearOffV8Internal

void V8SVGLengthList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGLengthListTearOff* impl = scriptWrappable->toImpl<SVGLengthListTearOff>();
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, contextElement, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8SVGLengthListAccessors[] = {
    { "length", SVGLengthListTearOffV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "numberOfItems", SVGLengthListTearOffV8Internal::numberOfItemsAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8SVGLengthListMethods[] = {
    { "clear", SVGLengthListTearOffV8Internal::clearMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "initialize", SVGLengthListTearOffV8Internal::initializeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getItem", SVGLengthListTearOffV8Internal::getItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "insertItemBefore", SVGLengthListTearOffV8Internal::insertItemBeforeMethodCallback, 0, 2, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "replaceItem", SVGLengthListTearOffV8Internal::replaceItemMethodCallback, 0, 2, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "removeItem", SVGLengthListTearOffV8Internal::removeItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "appendItem", SVGLengthListTearOffV8Internal::appendItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8SVGLengthListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGLengthList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8SVGLengthList::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGLengthListAccessors, WTF_ARRAY_LENGTH(V8SVGLengthListAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGLengthListMethods, WTF_ARRAY_LENGTH(V8SVGLengthListMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(SVGLengthListTearOffV8Internal::indexedPropertyGetterCallback, SVGLengthListTearOffV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<SVGLengthListTearOff>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

    // Array iterator (@@iterator)
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
}

v8::Local<v8::FunctionTemplate> V8SVGLengthList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGLengthListTemplate);
}

bool V8SVGLengthList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGLengthList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGLengthListTearOff* V8SVGLengthList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
