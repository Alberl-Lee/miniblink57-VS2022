// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.h.tmpl

// clang-format on
#ifndef V8HTMLInputElement_h
#define V8HTMLInputElement_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/html/HTMLInputElement.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8HTMLInputElement {
    STATIC_ONLY(V8HTMLInputElement);

public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static HTMLInputElement* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<HTMLInputElement>();
    }
    CORE_EXPORT static HTMLInputElement* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static WrapperTypeInfo wrapperTypeInfo;
    template <typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<HTMLInputElement>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<HTMLInputElement>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    CORE_EXPORT static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, const DOMWrapperWorld&, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
    CORE_EXPORT static void updateWrapperTypeInfo(InstallTemplateFunction, PreparePrototypeAndInterfaceObjectFunction);
    CORE_EXPORT static void installV8HTMLInputElementTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interfaceTemplate);

private:
    static InstallTemplateFunction installV8HTMLInputElementTemplateFunction;
};

template <>
struct V8TypeOf<HTMLInputElement> {
    typedef V8HTMLInputElement Type;
};

} // namespace blink

#endif // V8HTMLInputElement_h
