// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "RenderingContext.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/modules/v8/CSSImageValueOrHTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrImageBitmapOrOffscreenCanvas.h"
#include "bindings/modules/v8/StringOrCanvasGradientOrCanvasPattern.h"
#include "bindings/modules/v8/V8CanvasRenderingContext2D.h"
#include "bindings/modules/v8/V8ImageBitmapRenderingContext.h"
// #include "bindings/modules/v8/V8WebGL2RenderingContext.h"
// #include "bindings/modules/v8/V8WebGLRenderingContext.h"

namespace blink {

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext()
    : m_type(SpecificTypeNone)
{
}

CanvasRenderingContext2D* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::getAsCanvasRenderingContext2D() const
{
    DCHECK(isCanvasRenderingContext2D());
    return m_canvasRenderingContext2D;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::setCanvasRenderingContext2D(CanvasRenderingContext2D* value)
{
    DCHECK(isNull());
    m_canvasRenderingContext2D = value;
    m_type = SpecificTypeCanvasRenderingContext2D;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::fromCanvasRenderingContext2D(CanvasRenderingContext2D* value)
{
    CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext container;
    container.setCanvasRenderingContext2D(value);
    return container;
}

WebGLRenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::getAsWebGLRenderingContext() const
{
    DCHECK(isWebGLRenderingContext());
    return m_webGLRenderingContext;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::setWebGLRenderingContext(WebGLRenderingContext* value)
{
    DCHECK(isNull());
    m_webGLRenderingContext = value;
    m_type = SpecificTypeWebGLRenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::fromWebGLRenderingContext(WebGLRenderingContext* value)
{
    CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext container;
    container.setWebGLRenderingContext(value);
    return container;
}

WebGL2RenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::getAsWebGL2RenderingContext() const
{
    DCHECK(isWebGL2RenderingContext());
    return m_webGL2RenderingContext;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::setWebGL2RenderingContext(WebGL2RenderingContext* value)
{
    DCHECK(isNull());
    m_webGL2RenderingContext = value;
    m_type = SpecificTypeWebGL2RenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::fromWebGL2RenderingContext(WebGL2RenderingContext* value)
{
    CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext container;
    container.setWebGL2RenderingContext(value);
    return container;
}

ImageBitmapRenderingContext* CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::getAsImageBitmapRenderingContext() const
{
    DCHECK(isImageBitmapRenderingContext());
    return m_imageBitmapRenderingContext;
}

void CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::setImageBitmapRenderingContext(ImageBitmapRenderingContext* value)
{
    DCHECK(isNull());
    m_imageBitmapRenderingContext = value;
    m_type = SpecificTypeImageBitmapRenderingContext;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::fromImageBitmapRenderingContext(ImageBitmapRenderingContext* value)
{
    CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext container;
    container.setImageBitmapRenderingContext(value);
    return container;
}

CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext&) = default;
CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::~CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext() = default;
CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext& CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::operator=(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext&) = default;

DEFINE_TRACE(CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext)
{
    visitor->trace(m_canvasRenderingContext2D);
//     visitor->trace(m_webGLRenderingContext);
//     visitor->trace(m_webGL2RenderingContext);
    visitor->trace(m_imageBitmapRenderingContext);
}

// void V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
// {
//     if (v8Value.IsEmpty())
//         return;
// 
//     if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
//         return;
// 
//     if (V8CanvasRenderingContext2D::hasInstance(v8Value, isolate)) {
//         CanvasRenderingContext2D* cppValue = V8CanvasRenderingContext2D::toImpl(v8::Local<v8::Object>::Cast(v8Value));
//         impl.setCanvasRenderingContext2D(cppValue);
//         return;
//     }
// 
//     if (V8WebGLRenderingContext::hasInstance(v8Value, isolate)) {
//         WebGLRenderingContext* cppValue = V8WebGLRenderingContext::toImpl(v8::Local<v8::Object>::Cast(v8Value));
//         impl.setWebGLRenderingContext(cppValue);
//         return;
//     }
// 
//     if (V8WebGL2RenderingContext::hasInstance(v8Value, isolate)) {
//         WebGL2RenderingContext* cppValue = V8WebGL2RenderingContext::toImpl(v8::Local<v8::Object>::Cast(v8Value));
//         impl.setWebGL2RenderingContext(cppValue);
//         return;
//     }
// 
//     if (V8ImageBitmapRenderingContext::hasInstance(v8Value, isolate)) {
//         ImageBitmapRenderingContext* cppValue = V8ImageBitmapRenderingContext::toImpl(v8::Local<v8::Object>::Cast(v8Value));
//         impl.setImageBitmapRenderingContext(cppValue);
//         return;
//     }
// 
//     exceptionState.throwTypeError("The provided value is not of type '(CanvasRenderingContext2D or WebGLRenderingContext or WebGL2RenderingContext or ImageBitmapRenderingContext)'");
// }

v8::Local<v8::Value> ToV8(const CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::SpecificTypeNone:
        return v8::Null(isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::SpecificTypeCanvasRenderingContext2D:
        return ToV8(impl.getAsCanvasRenderingContext2D(), creationContext, isolate);
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::SpecificTypeWebGLRenderingContext:
        //return ToV8(impl.getAsWebGLRenderingContext(), creationContext, isolate);
        DebugBreak();
        return v8::Local<v8::Value>();
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::SpecificTypeWebGL2RenderingContext:
        //return ToV8(impl.getAsWebGL2RenderingContext(), creationContext, isolate);
        DebugBreak();
        return v8::Local<v8::Value>();
    case CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::SpecificTypeImageBitmapRenderingContext:
        return ToV8(impl.getAsImageBitmapRenderingContext(), creationContext, isolate);
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

// CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext NativeValueTraits<CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
// {
//     CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext impl;
//     V8CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrImageBitmapRenderingContext::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
//     return impl;
// }

} // namespace blink
