// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8DedicatedWorkerGlobalScope.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/SerializedScriptValueFactory.h"
#include "bindings/core/v8/Transferables.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8CustomEvent.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DOMException.h"
#include "bindings/core/v8/V8DOMMatrix.h"
#include "bindings/core/v8/V8DOMMatrixReadOnly.h"
#include "bindings/core/v8/V8DOMStringList.h"
#include "bindings/core/v8/V8DedicatedWorkerGlobalScope.h"
#include "bindings/core/v8/V8Event.h"
#include "bindings/core/v8/V8EventListenerHelper.h"
#include "bindings/core/v8/V8EventTarget.h"
#include "bindings/core/v8/V8File.h"
#include "bindings/core/v8/V8FileList.h"
#include "bindings/core/v8/V8FileReader.h"
#include "bindings/core/v8/V8FileReaderSync.h"
#include "bindings/core/v8/V8Float32ImageData.h"
#include "bindings/core/v8/V8FormData.h"
#include "bindings/core/v8/V8ImageBitmap.h"
#include "bindings/core/v8/V8ImageData.h"
#include "bindings/core/v8/V8MessageChannel.h"
#include "bindings/core/v8/V8MessageEvent.h"
#include "bindings/core/v8/V8MessagePort.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8OffscreenCanvas.h"
#include "bindings/core/v8/V8PerformanceObserverEntryList.h"
#include "bindings/core/v8/V8ProgressEvent.h"
#include "bindings/core/v8/V8PromiseRejectionEvent.h"
#include "bindings/core/v8/V8URL.h"
#include "bindings/core/v8/V8URLSearchParams.h"
#include "bindings/core/v8/V8WorkerGlobalScope.h"
#include "bindings/core/v8/V8WorkerLocation.h"
#include "bindings/core/v8/V8WorkerNavigator.h"
#include "bindings/core/v8/V8XMLHttpRequest.h"
#include "bindings/core/v8/V8XMLHttpRequestEventTarget.h"
#include "bindings/core/v8/V8XMLHttpRequestUpload.h"
#include "core/DedicatedWorkerGlobalScopeCoreConstructors.h"
#include "core/dom/DOMArrayBufferBase.h"
#include "core/dom/Document.h"
#include "core/frame/ImageBitmap.h"
#include "core/frame/UseCounter.h"
#include "core/timing/WorkerGlobalScopePerformance.h"
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
WrapperTypeInfo V8DedicatedWorkerGlobalScope::wrapperTypeInfo = { gin::kEmbedderBlink, V8DedicatedWorkerGlobalScope::domTemplate, V8DedicatedWorkerGlobalScope::trace, V8DedicatedWorkerGlobalScope::traceWrappers, 0, nullptr, "DedicatedWorkerGlobalScope", &V8WorkerGlobalScope::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DedicatedWorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DedicatedWorkerGlobalScope::s_wrapperTypeInfo = V8DedicatedWorkerGlobalScope::wrapperTypeInfo;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, DedicatedWorkerGlobalScope>::value,
    "DedicatedWorkerGlobalScope does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&DedicatedWorkerGlobalScope::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "DedicatedWorkerGlobalScope is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DedicatedWorkerGlobalScopeV8Internal {

    static void onmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::toImpl(holder);

        EventListener* cppValue(WTF::getPtr(impl->onmessage()));

        v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
    }

    CORE_EXPORT void onmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeGetter(info);
    }

    static void onmessageAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::toImpl(holder);

        // Prepare the value to be set.
        moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onmessage(), v8Value, V8DedicatedWorkerGlobalScope::eventListenerCacheIndex);

        impl->setOnmessage(V8EventListenerHelper::getEventListener(ScriptState::forReceiverObject(info), v8Value, true, ListenerFindOrCreate));
    }

    CORE_EXPORT void onmessageAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeSetter(v8Value, info);
    }

    static void postMessageImpl(const char* interfaceName, DedicatedWorkerGlobalScope* instance, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, interfaceName, "postMessage");
        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        Transferables transferables;
        if (info.Length() > 1) {
            const int transferablesArgIndex = 1;
            if (!SerializedScriptValue::extractTransferables(info.GetIsolate(), info[transferablesArgIndex], transferablesArgIndex, transferables, exceptionState)) {
                return;
            }
        }

        RefPtr<SerializedScriptValue> message;
        if (instance->canTransferArrayBuffersAndImageBitmaps()) {
            // This instance supports sending array buffers by move semantics.
            message = SerializedScriptValue::serialize(info.GetIsolate(), info[0], &transferables, nullptr, exceptionState);
            if (exceptionState.hadException())
                return;
        } else {
            // This instance doesn't support sending array buffers and image bitmaps
            // by move semantics. Emulate it by copy-and-neuter semantics that sends
            // array buffers and image bitmaps via structured clone and then neuters
            // the original objects

            // Clear references to array buffers and image bitmaps from transferables
            // so that the serializer can consider the array buffers as
            // non-transferable and serialize them into the message.
            ArrayBufferArray transferableArrayBuffers = transferables.arrayBuffers;
            transferables.arrayBuffers.clear();
            ImageBitmapArray transferableImageBitmaps = transferables.imageBitmaps;
            transferables.imageBitmaps.clear();
            message = SerializedScriptValue::serialize(info.GetIsolate(), info[0], &transferables, nullptr, exceptionState);
            if (exceptionState.hadException())
                return;

            // Neuter the original array buffers on the sender context.
            SerializedScriptValue::transferArrayBufferContents(info.GetIsolate(), transferableArrayBuffers, exceptionState);
            if (exceptionState.hadException())
                return;
            // Neuter the original image bitmaps on the sender context.
            SerializedScriptValue::transferImageBitmapContents(info.GetIsolate(), transferableImageBitmaps, exceptionState);
            if (exceptionState.hadException())
                return;
        }

        // FIXME: Only pass context/exceptionState if instance really requires it.
        ExecutionContext* context = currentExecutionContext(info.GetIsolate());
        instance->postMessage(context, message.release(), transferables.messagePorts, exceptionState);
    }

    CORE_EXPORT void postMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        postMessageImpl("DedicatedWorkerGlobalScope", V8DedicatedWorkerGlobalScope::toImpl(info.Holder()), info);
    }

    static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DedicatedWorkerGlobalScope* impl = V8DedicatedWorkerGlobalScope::toImpl(info.Holder());

        impl->close();
    }

    CORE_EXPORT void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        DedicatedWorkerGlobalScopeV8Internal::closeMethod(info);
    }

} // namespace DedicatedWorkerGlobalScopeV8Internal

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const V8DOMConfiguration::AttributeConfiguration V8DedicatedWorkerGlobalScopeLazyDataAttributes[] = {
    { "Blob", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8Blob::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "CustomEvent", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8CustomEvent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "DOMException", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8DOMException::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "DOMStringList", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8DOMStringList::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "DedicatedWorkerGlobalScope", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8DedicatedWorkerGlobalScope::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "Event", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8Event::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "EventTarget", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8EventTarget::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "File", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8File::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "FileList", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8FileList::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "FileReader", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8FileReader::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "FileReaderSync", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8FileReaderSync::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "FormData", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8FormData::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "ImageBitmap", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8ImageBitmap::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "ImageData", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8ImageData::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "MessageChannel", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8MessageChannel::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "MessageEvent", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8MessageEvent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "MessagePort", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8MessagePort::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "ProgressEvent", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8ProgressEvent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "PromiseRejectionEvent", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8PromiseRejectionEvent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "URL", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8URL::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "URLSearchParams", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8URLSearchParams::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "WorkerGlobalScope", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8WorkerGlobalScope::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "WorkerLocation", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8WorkerLocation::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "WorkerNavigator", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8WorkerNavigator::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "XMLHttpRequest", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8XMLHttpRequest::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "XMLHttpRequestEventTarget", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8XMLHttpRequestEventTarget::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "XMLHttpRequestUpload", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8XMLHttpRequestUpload::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

const V8DOMConfiguration::AccessorConfiguration V8DedicatedWorkerGlobalScopeAccessors[] = {
    { "onmessage", DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeGetterCallback, DedicatedWorkerGlobalScopeV8Internal::onmessageAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8DedicatedWorkerGlobalScopeMethods[] = {
    { "postMessage", DedicatedWorkerGlobalScopeV8Internal::postMessageMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
    { "close", DedicatedWorkerGlobalScopeV8Internal::closeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder },
};

void V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DedicatedWorkerGlobalScope::wrapperTypeInfo.interfaceName, V8WorkerGlobalScope::domTemplate(isolate, world), V8DedicatedWorkerGlobalScope::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Global object prototype chain consists of Immutable Prototype Exotic Objects
    prototypeTemplate->SetImmutableProto();

    // Global objects are Immutable Prototype Exotic Objects
    instanceTemplate->SetImmutableProto();

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installLazyDataAttributes(isolate, world, instanceTemplate, prototypeTemplate, V8DedicatedWorkerGlobalScopeLazyDataAttributes, WTF_ARRAY_LENGTH(V8DedicatedWorkerGlobalScopeLazyDataAttributes));
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DedicatedWorkerGlobalScopeAccessors, WTF_ARRAY_LENGTH(V8DedicatedWorkerGlobalScopeAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DedicatedWorkerGlobalScopeMethods, WTF_ARRAY_LENGTH(V8DedicatedWorkerGlobalScopeMethods));

    if (RuntimeEnabledFeatures::experimentalCanvasFeaturesEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributeFloat32ImageDataConfiguration = { "Float32ImageData", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8Float32ImageData::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeFloat32ImageDataConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeOffscreenCanvasConfiguration = { "OffscreenCanvas", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8OffscreenCanvas::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeOffscreenCanvasConfiguration);
    }
    if (RuntimeEnabledFeatures::geometryInterfacesEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributeDOMMatrixConfiguration = { "DOMMatrix", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8DOMMatrix::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeDOMMatrixConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeDOMMatrixReadOnlyConfiguration = { "DOMMatrixReadOnly", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8DOMMatrixReadOnly::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeDOMMatrixReadOnlyConfiguration);
    }
    if (RuntimeEnabledFeatures::performanceObserverEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributePerformanceObserverEntryListConfiguration = { "PerformanceObserverEntryList", v8ConstructorAttributeGetter, 0, 0, 0, nullptr, const_cast<WrapperTypeInfo*>(&V8PerformanceObserverEntryList::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributePerformanceObserverEntryListConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8DedicatedWorkerGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction);
}

bool V8DedicatedWorkerGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DedicatedWorkerGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DedicatedWorkerGlobalScope* V8DedicatedWorkerGlobalScope::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

InstallTemplateFunction V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction = (InstallTemplateFunction)&V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplate;

void V8DedicatedWorkerGlobalScope::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeAndInterfaceObjectFunction preparePrototypeAndInterfaceObjectFunction)
{
    V8DedicatedWorkerGlobalScope::installV8DedicatedWorkerGlobalScopeTemplateFunction = installTemplateFunction;
    if (preparePrototypeAndInterfaceObjectFunction)
        V8DedicatedWorkerGlobalScope::wrapperTypeInfo.preparePrototypeAndInterfaceObjectFunction = preparePrototypeAndInterfaceObjectFunction;
}

} // namespace blink
