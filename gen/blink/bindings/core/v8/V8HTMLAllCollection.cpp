// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8HTMLAllCollection.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/NodeListOrElement.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/html/LabelsNodeList.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLAllCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLAllCollection::domTemplate, V8HTMLAllCollection::trace, V8HTMLAllCollection::traceWrappers, V8HTMLAllCollection::visitDOMWrapper, nullptr, "HTMLAllCollection", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLAllCollection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLAllCollection::s_wrapperTypeInfo = V8HTMLAllCollection::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLAllCollection>::value,
    "HTMLAllCollection inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLAllCollection::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "HTMLAllCollection is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLAllCollectionV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollectionV8Internal::lengthAttributeGetter(info);
    }

    CORE_EXPORT void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        V8HTMLAllCollection::itemMethodCustom(info);
    }

    static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("namedItem", "HTMLAllCollection", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        V8StringResource<> name;
        name = info[0];
        if (!name.prepare())
            return;

        NodeListOrElement result;
        impl->namedGetter(name, result);
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollectionV8Internal::namedItemMethod(info);
    }

    static void namedPropertyGetter(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
        NodeListOrElement result;
        impl->namedGetter(name, result);
        if (result.isNull())
            return;
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        HTMLAllCollectionV8Internal::namedPropertyGetter(propertyName, info);
    }

    static void namedPropertyQuery(const AtomicString& name, const v8::PropertyCallbackInfo<v8::Integer>& info)
    {
        const CString& nameInUtf8 = name.utf8();
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::GetterContext, "HTMLAllCollection", nameInUtf8.data());

        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());

        bool result = impl->namedPropertyQuery(name, exceptionState);
        if (!result)
            return;
        v8SetReturnValueInt(info, v8::None);
    }

    CORE_EXPORT void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
    {
        if (!name->IsString())
            return;
        const AtomicString& propertyName = toCoreAtomicString(name.As<v8::String>());

        HTMLAllCollectionV8Internal::namedPropertyQuery(propertyName, info);
    }

    static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::EnumerationContext, "HTMLAllCollection");

        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());

        Vector<String> names;
        impl->namedPropertyEnumerator(names, exceptionState);
        if (exceptionState.hadException())
            return;
        v8SetReturnValue(info, ToV8(names, info.Holder(), info.GetIsolate()).As<v8::Array>());
    }

    CORE_EXPORT void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
    {
        HTMLAllCollectionV8Internal::namedPropertyEnumerator(info);
    }

    static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());

        // We assume that all the implementations support length() method, although
        // the spec doesn't require that length() must exist.  It's okay that
        // the interface does not have length attribute as long as the
        // implementation supports length() member function.
        if (index >= impl->length())
            return; // Returns undefined due to out-of-range.

        Element* result = impl->item(index);
        v8SetReturnValueFast(info, result, impl);
    }

    CORE_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        HTMLAllCollectionV8Internal::indexedPropertyGetter(index, info);
    }

} // namespace HTMLAllCollectionV8Internal

void V8HTMLAllCollection::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    HTMLAllCollection* impl = scriptWrappable->toImpl<HTMLAllCollection>();
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::AccessorConfiguration V8HTMLAllCollectionAccessors[] = {
    { "length", HTMLAllCollectionV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8HTMLAllCollectionMethods[] = {
    { "item", HTMLAllCollectionV8Internal::itemMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "namedItem", HTMLAllCollectionV8Internal::namedItemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8HTMLAllCollectionTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLAllCollection::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8HTMLAllCollection::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLAllCollectionAccessors, WTF_ARRAY_LENGTH(V8HTMLAllCollectionAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLAllCollectionMethods, WTF_ARRAY_LENGTH(V8HTMLAllCollectionMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(HTMLAllCollectionV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<HTMLAllCollection>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);
    // Named properties
    v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(HTMLAllCollectionV8Internal::namedPropertyGetterCallback, 0, HTMLAllCollectionV8Internal::namedPropertyQueryCallback, 0, HTMLAllCollectionV8Internal::namedPropertyEnumeratorCallback, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings) | int(v8::PropertyHandlerFlags::kNonMasking)));
    instanceTemplate->SetHandler(namedPropertyHandlerConfig);

    // Array iterator (@@iterator)
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

    instanceTemplate->SetCallAsFunctionHandler(V8HTMLAllCollection::legacyCallCustom);

    // Needed for legacy support of document.all
    instanceTemplate->MarkAsUndetectable();
}

v8::Local<v8::FunctionTemplate> V8HTMLAllCollection::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLAllCollectionTemplate);
}

bool V8HTMLAllCollection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLAllCollection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLAllCollection* V8HTMLAllCollection::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
