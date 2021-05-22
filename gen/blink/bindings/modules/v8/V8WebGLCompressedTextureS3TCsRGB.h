// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/interface.h.tmpl

// clang-format on
#ifndef V8WebGLCompressedTextureS3TCsRGB_h
#define V8WebGLCompressedTextureS3TCsRGB_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "modules/ModulesExport.h"
#include "modules/webgl/WebGLCompressedTextureS3TCsRGB.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8WebGLCompressedTextureS3TCsRGB {
    STATIC_ONLY(V8WebGLCompressedTextureS3TCsRGB);

public:
    MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
    static WebGLCompressedTextureS3TCsRGB* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<WebGLCompressedTextureS3TCsRGB>();
    }
    MODULES_EXPORT static WebGLCompressedTextureS3TCsRGB* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    template <typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<WebGLCompressedTextureS3TCsRGB>());
    }
    static void traceWrappers(WrapperVisitor* visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->traceWrappers(scriptWrappable->toImpl<WebGLCompressedTextureS3TCsRGB>());
    }
    static void visitDOMWrapper(v8::Isolate*, ScriptWrappable*, const v8::Persistent<v8::Object>&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
};

template <>
struct V8TypeOf<WebGLCompressedTextureS3TCsRGB> {
    typedef V8WebGLCompressedTextureS3TCsRGB Type;
};

} // namespace blink

#endif // V8WebGLCompressedTextureS3TCsRGB_h
