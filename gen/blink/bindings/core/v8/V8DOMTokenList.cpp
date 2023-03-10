// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8DOMTokenList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8Iterator.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DOMTokenList::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMTokenList::domTemplate, V8DOMTokenList::trace, V8DOMTokenList::traceWrappers, V8DOMTokenList::visitDOMWrapper, nullptr, "DOMTokenList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMTokenList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMTokenList::s_wrapperTypeInfo = V8DOMTokenList::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMTokenList>::value,
    "DOMTokenList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMTokenList::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "DOMTokenList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMTokenListV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DOMTokenList* impl = V8DOMTokenList::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::lengthAttributeGetter(info);
    }

    static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DOMTokenList* impl = V8DOMTokenList::toImpl(holder);

        v8SetReturnValueString(info, impl->value(), info.GetIsolate());
    }

    CORE_EXPORT void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::valueAttributeGetter(info);
    }

    static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        DOMTokenList* impl = V8DOMTokenList::toImpl(holder);

        // Prepare the value to be set.
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare())
            return;

        impl->setValue(cppValue);
    }

    CORE_EXPORT void valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        CEReactionsScope ceReactionsScope;

        DOMTokenListV8Internal::valueAttributeSetter(v8Value, info);
    }

    static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "item");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        v8SetReturnValueStringOrNull(info, impl->item(index), info.GetIsolate());
    }

    CORE_EXPORT void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::itemMethod(info);
    }

    static void containsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "contains");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> token;
        token = info[0];
        if (!token.prepare())
            return;

        bool result = impl->contains(token, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueBool(info, result);
    }

    CORE_EXPORT void containsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::containsMethod(info);
    }

    static void addMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "add");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        Vector<String> tokens;
        tokens = toImplArguments<Vector<String>>(info, 0, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->add(tokens, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void addMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CEReactionsScope ceReactionsScope;
        DOMTokenListV8Internal::addMethod(info);
    }

    static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "remove");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        Vector<String> tokens;
        tokens = toImplArguments<Vector<String>>(info, 0, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->remove(tokens, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CEReactionsScope ceReactionsScope;
        DOMTokenListV8Internal::removeMethod(info);
    }

    static void toggleMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "toggle");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> token;
        bool force;
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        token = info[0];
        if (!token.prepare())
            return;

        if (UNLIKELY(numArgsPassed <= 1)) {
            bool result = impl->toggle(token, exceptionState);
            if (exceptionState.hadException()) {
                return;
            }
            v8SetReturnValueBool(info, result);
            return;
        }
        force = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.hadException())
            return;

        bool result = impl->toggle(token, force, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueBool(info, result);
    }

    CORE_EXPORT void toggleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        CEReactionsScope ceReactionsScope;
        DOMTokenListV8Internal::toggleMethod(info);
    }

    static void supportsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "supports");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> token;
        token = info[0];
        if (!token.prepare())
            return;

        bool result = impl->supports(token, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValueBool(info, result);
    }

    CORE_EXPORT void supportsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::supportsMethod(info);
    }

    static void keysMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "keys");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->keysForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void keysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::keysMethod(info);
    }

    static void valuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "values");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->valuesForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void valuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::valuesMethod(info);
    }

    static void entriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "entries");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        Iterator* result = impl->entriesForBinding(scriptState, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
        v8SetReturnValue(info, result);
    }

    CORE_EXPORT void entriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::entriesMethod(info);
    }

    static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "DOMTokenList", "forEach");

        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

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

    CORE_EXPORT void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::forEachMethod(info);
    }

    static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
    }

    CORE_EXPORT void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::toStringMethod(info);
    }

    static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        DOMTokenList* impl = V8DOMTokenList::toImpl(info.Holder());

        // We assume that all the implementations support length() method, although
        // the spec doesn't require that length() must exist.  It's okay that
        // the interface does not have length attribute as long as the
        // implementation supports length() member function.
        if (index >= impl->length())
            return; // Returns undefined due to out-of-range.

        String result = impl->item(index);
        v8SetReturnValueStringOrNull(info, result, info.GetIsolate());
    }

    CORE_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        DOMTokenListV8Internal::indexedPropertyGetter(index, info);
    }

} // namespace DOMTokenListV8Internal

void V8DOMTokenList::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    DOMTokenList* impl = scriptWrappable->toImpl<DOMTokenList>();
    // The element() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->element())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

const V8DOMConfiguration::AccessorConfiguration V8DOMTokenListAccessors[] = {
    { "length", DOMTokenListV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "value", DOMTokenListV8Internal::valueAttributeGetterCallback, DOMTokenListV8Internal::valueAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8DOMTokenListMethods[] = {
    { "item", DOMTokenListV8Internal::itemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "contains", DOMTokenListV8Internal::containsMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "add", DOMTokenListV8Internal::addMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "remove", DOMTokenListV8Internal::removeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "toggle", DOMTokenListV8Internal::toggleMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "supports", DOMTokenListV8Internal::supportsMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "keys", DOMTokenListV8Internal::keysMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "values", DOMTokenListV8Internal::valuesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "entries", DOMTokenListV8Internal::entriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "forEach", DOMTokenListV8Internal::forEachMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "toString", DOMTokenListV8Internal::toStringMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8DOMTokenListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMTokenList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DOMTokenList::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMTokenListAccessors, WTF_ARRAY_LENGTH(V8DOMTokenListAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMTokenListMethods, WTF_ARRAY_LENGTH(V8DOMTokenListMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(DOMTokenListV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<DOMTokenList>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

    // Array iterator (@@iterator)
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
}

v8::Local<v8::FunctionTemplate> V8DOMTokenList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMTokenListTemplate);
}

bool V8DOMTokenList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMTokenList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMTokenList* V8DOMTokenList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
