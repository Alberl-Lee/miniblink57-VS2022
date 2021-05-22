// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef TrackEventInit_h
#define TrackEventInit_h

#include "bindings/core/v8/VideoTrackOrAudioTrackOrTextTrack.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "core/html/track/AudioTrack.h"
#include "core/html/track/TextTrack.h"
#include "core/html/track/VideoTrack.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT TrackEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    TrackEventInit();
    virtual ~TrackEventInit();
    TrackEventInit(const TrackEventInit&);
    TrackEventInit& operator=(const TrackEventInit&);

    bool hasTrack() const;
    const VideoTrackOrAudioTrackOrTextTrack& track() const;
    void setTrack(const VideoTrackOrAudioTrackOrTextTrack&);
    void setTrackToNull();

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    VideoTrackOrAudioTrackOrTextTrack m_track;

    friend class V8TrackEventInit;
};

} // namespace blink

#endif // TrackEventInit_h
