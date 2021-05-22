// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "MediaTrackSettings.h"

namespace blink {

MediaTrackSettings::MediaTrackSettings()
{
}

MediaTrackSettings::~MediaTrackSettings() { }

MediaTrackSettings::MediaTrackSettings(const MediaTrackSettings&) = default;

MediaTrackSettings& MediaTrackSettings::operator=(const MediaTrackSettings&) = default;

bool MediaTrackSettings::hasAspectRatio() const
{
    return m_hasAspectRatio;
}
double MediaTrackSettings::aspectRatio() const
{
    DCHECK(m_hasAspectRatio);
    return m_aspectRatio;
}
void MediaTrackSettings::setAspectRatio(double value)
{
    m_aspectRatio = value;
    m_hasAspectRatio = true;
}
bool MediaTrackSettings::hasChannelCount() const
{
    return m_hasChannelCount;
}
int MediaTrackSettings::channelCount() const
{
    DCHECK(m_hasChannelCount);
    return m_channelCount;
}
void MediaTrackSettings::setChannelCount(int value)
{
    m_channelCount = value;
    m_hasChannelCount = true;
}
bool MediaTrackSettings::hasDeviceId() const
{
    return !m_deviceId.isNull();
}
String MediaTrackSettings::deviceId() const
{
    return m_deviceId;
}
void MediaTrackSettings::setDeviceId(String value)
{
    m_deviceId = value;
}
bool MediaTrackSettings::hasEchoCancellation() const
{
    return m_hasEchoCancellation;
}
bool MediaTrackSettings::echoCancellation() const
{
    DCHECK(m_hasEchoCancellation);
    return m_echoCancellation;
}
void MediaTrackSettings::setEchoCancellation(bool value)
{
    m_echoCancellation = value;
    m_hasEchoCancellation = true;
}
bool MediaTrackSettings::hasFacingMode() const
{
    return !m_facingMode.isNull();
}
String MediaTrackSettings::facingMode() const
{
    return m_facingMode;
}
void MediaTrackSettings::setFacingMode(String value)
{
    m_facingMode = value;
}
bool MediaTrackSettings::hasFrameRate() const
{
    return m_hasFrameRate;
}
double MediaTrackSettings::frameRate() const
{
    DCHECK(m_hasFrameRate);
    return m_frameRate;
}
void MediaTrackSettings::setFrameRate(double value)
{
    m_frameRate = value;
    m_hasFrameRate = true;
}
bool MediaTrackSettings::hasGroupId() const
{
    return !m_groupId.isNull();
}
String MediaTrackSettings::groupId() const
{
    return m_groupId;
}
void MediaTrackSettings::setGroupId(String value)
{
    m_groupId = value;
}
bool MediaTrackSettings::hasHeight() const
{
    return m_hasHeight;
}
int MediaTrackSettings::height() const
{
    DCHECK(m_hasHeight);
    return m_height;
}
void MediaTrackSettings::setHeight(int value)
{
    m_height = value;
    m_hasHeight = true;
}
bool MediaTrackSettings::hasLatency() const
{
    return m_hasLatency;
}
double MediaTrackSettings::latency() const
{
    DCHECK(m_hasLatency);
    return m_latency;
}
void MediaTrackSettings::setLatency(double value)
{
    m_latency = value;
    m_hasLatency = true;
}
bool MediaTrackSettings::hasSampleRate() const
{
    return m_hasSampleRate;
}
int MediaTrackSettings::sampleRate() const
{
    DCHECK(m_hasSampleRate);
    return m_sampleRate;
}
void MediaTrackSettings::setSampleRate(int value)
{
    m_sampleRate = value;
    m_hasSampleRate = true;
}
bool MediaTrackSettings::hasSampleSize() const
{
    return m_hasSampleSize;
}
int MediaTrackSettings::sampleSize() const
{
    DCHECK(m_hasSampleSize);
    return m_sampleSize;
}
void MediaTrackSettings::setSampleSize(int value)
{
    m_sampleSize = value;
    m_hasSampleSize = true;
}
bool MediaTrackSettings::hasVolume() const
{
    return m_hasVolume;
}
double MediaTrackSettings::volume() const
{
    DCHECK(m_hasVolume);
    return m_volume;
}
void MediaTrackSettings::setVolume(double value)
{
    m_volume = value;
    m_hasVolume = true;
}
bool MediaTrackSettings::hasWidth() const
{
    return m_hasWidth;
}
int MediaTrackSettings::width() const
{
    DCHECK(m_hasWidth);
    return m_width;
}
void MediaTrackSettings::setWidth(int value)
{
    m_width = value;
    m_hasWidth = true;
}

DEFINE_TRACE(MediaTrackSettings)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
