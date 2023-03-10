// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "MediaStreamEventInit.h"

#include "modules/mediastream/MediaStream.h"

namespace blink {

MediaStreamEventInit::MediaStreamEventInit()
{
}

MediaStreamEventInit::~MediaStreamEventInit() { }

MediaStreamEventInit::MediaStreamEventInit(const MediaStreamEventInit&) = default;

MediaStreamEventInit& MediaStreamEventInit::operator=(const MediaStreamEventInit&) = default;

bool MediaStreamEventInit::hasStream() const
{
    return m_stream;
}
MediaStream* MediaStreamEventInit::stream() const
{
    return m_stream;
}
void MediaStreamEventInit::setStream(MediaStream* value)
{
    m_stream = value;
}
void MediaStreamEventInit::setStreamToNull()
{
    m_stream = Member<MediaStream>();
}

DEFINE_TRACE(MediaStreamEventInit)
{
    visitor->trace(m_stream);
    EventInit::trace(visitor);
}

} // namespace blink
