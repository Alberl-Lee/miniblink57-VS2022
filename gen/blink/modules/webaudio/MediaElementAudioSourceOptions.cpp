// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "MediaElementAudioSourceOptions.h"

#include "core/html/HTMLMediaElement.h"

namespace blink {

MediaElementAudioSourceOptions::MediaElementAudioSourceOptions()
{
}

MediaElementAudioSourceOptions::~MediaElementAudioSourceOptions() { }

MediaElementAudioSourceOptions::MediaElementAudioSourceOptions(const MediaElementAudioSourceOptions&) = default;

MediaElementAudioSourceOptions& MediaElementAudioSourceOptions::operator=(const MediaElementAudioSourceOptions&) = default;

bool MediaElementAudioSourceOptions::hasMediaElement() const
{
    return m_mediaElement;
}
HTMLMediaElement* MediaElementAudioSourceOptions::mediaElement() const
{
    return m_mediaElement;
}
void MediaElementAudioSourceOptions::setMediaElement(HTMLMediaElement* value)
{
    m_mediaElement = value;
}

DEFINE_TRACE(MediaElementAudioSourceOptions)
{
    visitor->trace(m_mediaElement);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
