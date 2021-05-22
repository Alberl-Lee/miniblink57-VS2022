// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.h.tmpl

// clang-format on
#ifndef V8PerformanceResourceTiming_h
#define V8PerformanceResourceTiming_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/timing/PerformanceResourceTiming.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8PerformanceResourceTiming {
    STATIC_ONLY(V8PerformanceResourceTiming);

public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static PerformanceResourceTiming* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<PerformanceResourceTiming>();
    }
    CORE_EXPORT static PerformanceResourceTiming* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template <typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<PerformanceResourceTiming>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<PerformanceResourceTiming>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
};

template <>
struct V8TypeOf<PerformanceResourceTiming> {
    typedef V8PerformanceResourceTiming Type;
};

} // namespace blink

#endif // V8PerformanceResourceTiming_h
