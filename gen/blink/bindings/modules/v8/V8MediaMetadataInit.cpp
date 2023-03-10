// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_v8.cpp.tmpl

// clang-format on
#include "V8MediaMetadataInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/modules/v8/V8MediaImage.h"

namespace blink {

void V8MediaMetadataInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaMetadataInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> albumValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "album")).ToLocal(&albumValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (albumValue.IsEmpty() || albumValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> album = albumValue;
        if (!album.prepare(exceptionState))
            return;
        impl.setAlbum(album);
    }

    v8::Local<v8::Value> artistValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "artist")).ToLocal(&artistValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (artistValue.IsEmpty() || artistValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> artist = artistValue;
        if (!artist.prepare(exceptionState))
            return;
        impl.setArtist(artist);
    }

    v8::Local<v8::Value> artworkValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "artwork")).ToLocal(&artworkValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (artworkValue.IsEmpty() || artworkValue->IsUndefined()) {
        // Do nothing.
    } else {
        HeapVector<MediaImage> artwork = toImplArray<HeapVector<MediaImage>>(artworkValue, 0, isolate, exceptionState);
        if (exceptionState.hadException())
            return;
        impl.setArtwork(artwork);
    }

    v8::Local<v8::Value> titleValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "title")).ToLocal(&titleValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (titleValue.IsEmpty() || titleValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> title = titleValue;
        if (!title.prepare(exceptionState))
            return;
        impl.setTitle(title);
    }
}

v8::Local<v8::Value> MediaMetadataInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MediaMetadataInit(*this, v8Object, creationContext, isolate))
        return v8::Undefined(isolate);
    return v8Object;
}

bool toV8MediaMetadataInit(const MediaMetadataInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasAlbum()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "album"), v8String(isolate, impl.album()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "album"), v8String(isolate, String("")))))
            return false;
    }

    if (impl.hasArtist()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "artist"), v8String(isolate, impl.artist()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "artist"), v8String(isolate, String("")))))
            return false;
    }

    if (impl.hasArtwork()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "artwork"), ToV8(impl.artwork(), creationContext, isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "artwork"), ToV8(HeapVector<MediaImage>(), creationContext, isolate))))
            return false;
    }

    if (impl.hasTitle()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "title"), v8String(isolate, impl.title()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "title"), v8String(isolate, String("")))))
            return false;
    }

    return true;
}

MediaMetadataInit NativeValueTraits<MediaMetadataInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MediaMetadataInit impl;
    V8MediaMetadataInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
