// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8FileList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
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
const WrapperTypeInfo V8FileList::wrapperTypeInfo = { gin::kEmbedderBlink, V8FileList::domTemplate, V8FileList::trace, V8FileList::traceWrappers, 0, nullptr, "FileList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FileList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& FileList::s_wrapperTypeInfo = V8FileList::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, FileList>::value,
    "FileList inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&FileList::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "FileList is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace FileListV8Internal {

    static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        FileList* impl = V8FileList::toImpl(holder);

        v8SetReturnValueUnsigned(info, impl->length());
    }

    CORE_EXPORT void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        FileListV8Internal::lengthAttributeGetter(info);
    }

    static void itemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "FileList", "item");

        FileList* impl = V8FileList::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned index;
        index = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        v8SetReturnValue(info, impl->item(index));
    }

    CORE_EXPORT void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        FileListV8Internal::itemMethod(info);
    }

    static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        FileList* impl = V8FileList::toImpl(info.Holder());

        // We assume that all the implementations support length() method, although
        // the spec doesn't require that length() must exist.  It's okay that
        // the interface does not have length attribute as long as the
        // implementation supports length() member function.
        if (index >= impl->length())
            return; // Returns undefined due to out-of-range.

        File* result = impl->item(index);
        v8SetReturnValueFast(info, result, impl);
    }

    CORE_EXPORT void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
    {
        FileListV8Internal::indexedPropertyGetter(index, info);
    }

} // namespace FileListV8Internal

const V8DOMConfiguration::AccessorConfiguration V8FileListAccessors[] = {
    { "length", FileListV8Internal::lengthAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8FileListMethods[] = {
    { "item", FileListV8Internal::itemMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8FileListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8FileList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8FileList::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8FileListAccessors, WTF_ARRAY_LENGTH(V8FileListAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8FileListMethods, WTF_ARRAY_LENGTH(V8FileListMethods));

    // Indexed properties
    v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(FileListV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<FileList>, v8::Local<v8::Value>(), v8::PropertyHandlerFlags::kNone);
    instanceTemplate->SetHandler(indexedPropertyHandlerConfig);

    // Array iterator (@@iterator)
    prototypeTemplate->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
}

v8::Local<v8::FunctionTemplate> V8FileList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8FileListTemplate);
}

bool V8FileList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8FileList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

FileList* V8FileList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
