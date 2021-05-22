// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.cpp.tmpl

// clang-format on
#include "V8Performance.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/GeneratedCodeHelper.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerHelper.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8MemoryInfo.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "bindings/core/v8/V8PerformanceNavigation.h"
#include "bindings/core/v8/V8PerformanceTiming.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8Performance::wrapperTypeInfo = { gin::kEmbedderBlink, V8Performance::domTemplate, V8Performance::trace, V8Performance::traceWrappers, 0, nullptr, "Performance", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromActiveScriptWrappable, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Performance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Performance::s_wrapperTypeInfo = V8Performance::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Performance>::value,
    "Performance inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Performance::hasPendingActivity),
        decltype(&ScriptWrappable::hasPendingActivity)>::value,
    "Performance is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceV8Internal {

    static void onresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Performance* impl = V8Performance::toImpl(holder);

        EventListener* cppValue(WTF::getPtr(impl->onresourcetimingbufferfull()));

        v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
    }

    CORE_EXPORT void onresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::onresourcetimingbufferfullAttributeGetter(info);
    }

    static void onresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        Performance* impl = V8Performance::toImpl(holder);

        // Prepare the value to be set.
        moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onresourcetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);

        impl->setOnresourcetimingbufferfull(V8EventListenerHelper::getEventListener(ScriptState::forReceiverObject(info), v8Value, true, ListenerFindOrCreate));
    }

    CORE_EXPORT void onresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        PerformanceV8Internal::onresourcetimingbufferfullAttributeSetter(v8Value, info);
    }

    static void timingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Performance* impl = V8Performance::toImpl(holder);

        PerformanceTiming* cppValue(WTF::getPtr(impl->timing()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Performance#timing";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void timingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Timing_AttributeGetter);

        PerformanceV8Internal::timingAttributeGetter(info);
    }

    static void navigationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Performance* impl = V8Performance::toImpl(holder);

        PerformanceNavigation* cppValue(WTF::getPtr(impl->navigation()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Performance#navigation";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void navigationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Navigation_AttributeGetter);

        PerformanceV8Internal::navigationAttributeGetter(info);
    }

    static void onframetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Performance* impl = V8Performance::toImpl(holder);

        EventListener* cppValue(WTF::getPtr(impl->onframetimingbufferfull()));

        v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
    }

    CORE_EXPORT void onframetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::onframetimingbufferfullAttributeGetter(info);
    }

    static void onframetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();
        Performance* impl = V8Performance::toImpl(holder);

        // Prepare the value to be set.
        moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onframetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);

        impl->setOnframetimingbufferfull(V8EventListenerHelper::getEventListener(ScriptState::forReceiverObject(info), v8Value, true, ListenerFindOrCreate));
    }

    CORE_EXPORT void onframetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Value> v8Value = info[0];

        PerformanceV8Internal::onframetimingbufferfullAttributeSetter(v8Value, info);
    }

    static void memoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        v8::Local<v8::Object> holder = info.Holder();

        Performance* impl = V8Performance::toImpl(holder);

        MemoryInfo* cppValue(WTF::getPtr(impl->memory()));

        // Keep the wrapper object for the return value alive as long as |this|
        // object is alive in order to save creation time of the wrapper object.
        if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
            return;
        v8::Local<v8::Value> v8Value(ToV8(cppValue, holder, info.GetIsolate()));
        const char kKeepAliveKey[] = "KeepAlive#Performance#memory";
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), StringView(kKeepAliveKey, sizeof kKeepAliveKey)), v8Value);

        v8SetReturnValue(info, v8Value);
    }

    CORE_EXPORT void memoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Memory_AttributeGetter);

        PerformanceV8Internal::memoryAttributeGetter(info);
    }

    static void nowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        v8SetReturnValue(info, impl->now());
    }

    CORE_EXPORT void nowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::nowMethod(info);
    }

    static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        v8SetReturnValue(info, ToV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
    }

    CORE_EXPORT void getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
        PerformanceV8Internal::getEntriesMethod(info);
    }

    static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getEntriesByType", "Performance", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        V8StringResource<> entryType;
        entryType = info[0];
        if (!entryType.prepare())
            return;

        v8SetReturnValue(info, ToV8(impl->getEntriesByType(entryType), info.Holder(), info.GetIsolate()));
    }

    CORE_EXPORT void getEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
        PerformanceV8Internal::getEntriesByTypeMethod(info);
    }

    static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("getEntriesByName", "Performance", ExceptionMessages::notEnoughArguments(1, info.Length())));
            return;
        }

        V8StringResource<> name;
        V8StringResource<> entryType;
        name = info[0];
        if (!name.prepare())
            return;

        if (!info[1]->IsUndefined()) {
            entryType = info[1];
            if (!entryType.prepare())
                return;
        } else {
            entryType = nullptr;
        }

        v8SetReturnValue(info, ToV8(impl->getEntriesByName(name, entryType), info.Holder(), info.GetIsolate()));
    }

    CORE_EXPORT void getEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
        PerformanceV8Internal::getEntriesByNameMethod(info);
    }

    static void clearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        impl->clearResourceTimings();
    }

    CORE_EXPORT void clearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::clearResourceTimingsMethod(info);
    }

    static void setResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Performance", "setResourceTimingBufferSize");

        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned maxSize;
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setResourceTimingBufferSize(maxSize);
    }

    CORE_EXPORT void setResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::setResourceTimingBufferSizeMethod(info);
    }

    static void markMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Performance", "mark");

        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> markName;
        markName = info[0];
        if (!markName.prepare())
            return;

        impl->mark(markName, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void markMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
        PerformanceV8Internal::markMethod(info);
    }

    static void clearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        V8StringResource<> markName;
        if (!info[0]->IsUndefined()) {
            markName = info[0];
            if (!markName.prepare())
                return;
        } else {
            markName = nullptr;
        }

        impl->clearMarks(markName);
    }

    CORE_EXPORT void clearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
        PerformanceV8Internal::clearMarksMethod(info);
    }

    static void measureMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Performance", "measure");

        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        V8StringResource<> measureName;
        V8StringResource<> startMark;
        V8StringResource<> endMark;
        measureName = info[0];
        if (!measureName.prepare())
            return;

        if (!info[1]->IsUndefined()) {
            startMark = info[1];
            if (!startMark.prepare())
                return;
        } else {
            startMark = nullptr;
        }
        if (!info[2]->IsUndefined()) {
            endMark = info[2];
            if (!endMark.prepare())
                return;
        } else {
            endMark = nullptr;
        }

        impl->measure(measureName, startMark, endMark, exceptionState);
        if (exceptionState.hadException()) {
            return;
        }
    }

    CORE_EXPORT void measureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
        PerformanceV8Internal::measureMethod(info);
    }

    static void clearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        V8StringResource<> measureName;
        if (!info[0]->IsUndefined()) {
            measureName = info[0];
            if (!measureName.prepare())
                return;
        } else {
            measureName = nullptr;
        }

        impl->clearMeasures(measureName);
    }

    CORE_EXPORT void clearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
        PerformanceV8Internal::clearMeasuresMethod(info);
    }

    static void clearFrameTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        impl->clearFrameTimings();
    }

    CORE_EXPORT void clearFrameTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
        PerformanceV8Internal::clearFrameTimingsMethod(info);
    }

    static void setFrameTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        ExceptionState exceptionState(info.GetIsolate(), ExceptionState::ExecutionContext, "Performance", "setFrameTimingBufferSize");

        Performance* impl = V8Performance::toImpl(info.Holder());

        if (UNLIKELY(info.Length() < 1)) {
            exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
            return;
        }

        unsigned maxSize;
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;

        impl->setFrameTimingBufferSize(maxSize);
    }

    CORE_EXPORT void setFrameTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        UseCounter::count(currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
        PerformanceV8Internal::setFrameTimingBufferSizeMethod(info);
    }

    static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        Performance* impl = V8Performance::toImpl(info.Holder());

        ScriptState* scriptState = ScriptState::forReceiverObject(info);

        ScriptValue result = impl->toJSONForBinding(scriptState);
        v8SetReturnValue(info, result.v8Value());
    }

    CORE_EXPORT void toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
    {
        PerformanceV8Internal::toJSONMethod(info);
    }

} // namespace PerformanceV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PerformanceAccessors[] = {
    { "onresourcetimingbufferfull", PerformanceV8Internal::onresourcetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onresourcetimingbufferfullAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "timing", PerformanceV8Internal::timingAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "navigation", PerformanceV8Internal::navigationAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "memory", PerformanceV8Internal::memoryAttributeGetterCallback, 0, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

const V8DOMConfiguration::MethodConfiguration V8PerformanceMethods[] = {
    { "now", PerformanceV8Internal::nowMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getEntries", PerformanceV8Internal::getEntriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getEntriesByType", PerformanceV8Internal::getEntriesByTypeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "getEntriesByName", PerformanceV8Internal::getEntriesByNameMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clearResourceTimings", PerformanceV8Internal::clearResourceTimingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "setResourceTimingBufferSize", PerformanceV8Internal::setResourceTimingBufferSizeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "mark", PerformanceV8Internal::markMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clearMarks", PerformanceV8Internal::clearMarksMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "measure", PerformanceV8Internal::measureMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "clearMeasures", PerformanceV8Internal::clearMeasuresMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
    { "toJSON", PerformanceV8Internal::toJSONMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder },
};

static void installV8PerformanceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Performance::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8Performance::internalFieldCount);

    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceAccessors, WTF_ARRAY_LENGTH(V8PerformanceAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceMethods, WTF_ARRAY_LENGTH(V8PerformanceMethods));

    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessoronframetimingbufferfullConfiguration = { "onframetimingbufferfull", PerformanceV8Internal::onframetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onframetimingbufferfullAttributeSetterCallback, 0, 0, nullptr, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoronframetimingbufferfullConfiguration);
    }

    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration clearFrameTimingsMethodConfiguration = { "clearFrameTimings", PerformanceV8Internal::clearFrameTimingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, clearFrameTimingsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration setFrameTimingBufferSizeMethodConfiguration = { "setFrameTimingBufferSize", PerformanceV8Internal::setFrameTimingBufferSizeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder };
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, setFrameTimingBufferSizeMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Performance::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceTemplate);
}

bool V8Performance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Performance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Performance* V8Performance::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
