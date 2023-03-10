// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef AudioBufferSourceOptions_h
#define AudioBufferSourceOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class AudioBuffer;

class MODULES_EXPORT AudioBufferSourceOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    AudioBufferSourceOptions();
    virtual ~AudioBufferSourceOptions();
    AudioBufferSourceOptions(const AudioBufferSourceOptions&);
    AudioBufferSourceOptions& operator=(const AudioBufferSourceOptions&);

    bool hasBuffer() const;
    AudioBuffer* buffer() const;
    void setBuffer(AudioBuffer*);
    void setBufferToNull();

    bool hasDetune() const;
    float detune() const;
    void setDetune(float);

    bool hasLoop() const;
    bool loop() const;
    void setLoop(bool);

    bool hasLoopEnd() const;
    double loopEnd() const;
    void setLoopEnd(double);

    bool hasLoopStart() const;
    double loopStart() const;
    void setLoopStart(double);

    bool hasPlaybackRate() const;
    float playbackRate() const;
    void setPlaybackRate(float);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Member<AudioBuffer> m_buffer;
    bool m_hasDetune = false;
    float m_detune;
    bool m_hasLoop = false;
    bool m_loop;
    bool m_hasLoopEnd = false;
    double m_loopEnd;
    bool m_hasLoopStart = false;
    double m_loopStart;
    bool m_hasPlaybackRate = false;
    float m_playbackRate;

    friend class V8AudioBufferSourceOptions;
};

} // namespace blink

#endif // AudioBufferSourceOptions_h
