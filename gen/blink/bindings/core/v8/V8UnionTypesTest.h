// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.h.tmpl

// clang-format on
#ifndef V8UnionTypesTest_h
#define V8UnionTypesTest_h

#include "bindings/core/v8/DoubleOrInternalEnum.h"
#include "bindings/core/v8/DoubleOrString.h"
#include "bindings/core/v8/DoubleOrStringOrStringArray.h"
#include "bindings/core/v8/DoubleOrStringOrStringSequence.h"
#include "bindings/core/v8/NodeListOrElement.h"
#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/testing/UnionTypesTest.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8UnionTypesTest {
    STATIC_ONLY(V8UnionTypesTest);

public:
    static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static UnionTypesTest* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<UnionTypesTest>();
    }
    static UnionTypesTest* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    static const WrapperTypeInfo wrapperTypeInfo;
    template <typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<UnionTypesTest>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<UnionTypesTest>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
};

template <>
struct V8TypeOf<UnionTypesTest> {
    typedef V8UnionTypesTest Type;
};

} // namespace blink

#endif // V8UnionTypesTest_h
