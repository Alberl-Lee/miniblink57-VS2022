// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "MediaTrackConstraintSet.h"

#include "bindings/modules/v8/BooleanOrConstrainBooleanParameters.h"
#include "bindings/modules/v8/DoubleOrConstrainDoubleRange.h"
#include "bindings/modules/v8/LongOrConstrainLongRange.h"
#include "bindings/modules/v8/StringOrStringSequenceOrConstrainDOMStringParameters.h"

namespace blink {

MediaTrackConstraintSet::MediaTrackConstraintSet()
{
}

MediaTrackConstraintSet::~MediaTrackConstraintSet() { }

MediaTrackConstraintSet::MediaTrackConstraintSet(const MediaTrackConstraintSet&) = default;

MediaTrackConstraintSet& MediaTrackConstraintSet::operator=(const MediaTrackConstraintSet&) = default;

bool MediaTrackConstraintSet::hasAspectRatio() const
{
    return !m_aspectRatio.isNull();
}
const DoubleOrConstrainDoubleRange& MediaTrackConstraintSet::aspectRatio() const
{
    return m_aspectRatio;
}
void MediaTrackConstraintSet::setAspectRatio(const DoubleOrConstrainDoubleRange& value)
{
    m_aspectRatio = value;
}
bool MediaTrackConstraintSet::hasChannelCount() const
{
    return !m_channelCount.isNull();
}
const LongOrConstrainLongRange& MediaTrackConstraintSet::channelCount() const
{
    return m_channelCount;
}
void MediaTrackConstraintSet::setChannelCount(const LongOrConstrainLongRange& value)
{
    m_channelCount = value;
}
bool MediaTrackConstraintSet::hasDeviceId() const
{
    return !m_deviceId.isNull();
}
const StringOrStringSequenceOrConstrainDOMStringParameters& MediaTrackConstraintSet::deviceId() const
{
    return m_deviceId;
}
void MediaTrackConstraintSet::setDeviceId(const StringOrStringSequenceOrConstrainDOMStringParameters& value)
{
    m_deviceId = value;
}
bool MediaTrackConstraintSet::hasEchoCancellation() const
{
    return !m_echoCancellation.isNull();
}
const BooleanOrConstrainBooleanParameters& MediaTrackConstraintSet::echoCancellation() const
{
    return m_echoCancellation;
}
void MediaTrackConstraintSet::setEchoCancellation(const BooleanOrConstrainBooleanParameters& value)
{
    m_echoCancellation = value;
}
bool MediaTrackConstraintSet::hasFacingMode() const
{
    return !m_facingMode.isNull();
}
const StringOrStringSequenceOrConstrainDOMStringParameters& MediaTrackConstraintSet::facingMode() const
{
    return m_facingMode;
}
void MediaTrackConstraintSet::setFacingMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value)
{
    m_facingMode = value;
}
bool MediaTrackConstraintSet::hasFrameRate() const
{
    return !m_frameRate.isNull();
}
const DoubleOrConstrainDoubleRange& MediaTrackConstraintSet::frameRate() const
{
    return m_frameRate;
}
void MediaTrackConstraintSet::setFrameRate(const DoubleOrConstrainDoubleRange& value)
{
    m_frameRate = value;
}
bool MediaTrackConstraintSet::hasGroupId() const
{
    return !m_groupId.isNull();
}
const StringOrStringSequenceOrConstrainDOMStringParameters& MediaTrackConstraintSet::groupId() const
{
    return m_groupId;
}
void MediaTrackConstraintSet::setGroupId(const StringOrStringSequenceOrConstrainDOMStringParameters& value)
{
    m_groupId = value;
}
bool MediaTrackConstraintSet::hasHeight() const
{
    return !m_height.isNull();
}
const LongOrConstrainLongRange& MediaTrackConstraintSet::height() const
{
    return m_height;
}
void MediaTrackConstraintSet::setHeight(const LongOrConstrainLongRange& value)
{
    m_height = value;
}
bool MediaTrackConstraintSet::hasLatency() const
{
    return !m_latency.isNull();
}
const DoubleOrConstrainDoubleRange& MediaTrackConstraintSet::latency() const
{
    return m_latency;
}
void MediaTrackConstraintSet::setLatency(const DoubleOrConstrainDoubleRange& value)
{
    m_latency = value;
}
bool MediaTrackConstraintSet::hasMandatory() const
{
    return !m_mandatory.isUndefinedOrNull();
}
Dictionary MediaTrackConstraintSet::mandatory() const
{
    return m_mandatory;
}
void MediaTrackConstraintSet::setMandatory(Dictionary value)
{
    m_mandatory = value;
}
bool MediaTrackConstraintSet::hasOptional() const
{
    return m_hasOptional;
}
const Vector<Dictionary>& MediaTrackConstraintSet::optional() const
{
    DCHECK(m_hasOptional);
    return m_optional;
}
void MediaTrackConstraintSet::setOptional(const Vector<Dictionary>& value)
{
    m_optional = value;
    m_hasOptional = true;
}
bool MediaTrackConstraintSet::hasSampleRate() const
{
    return !m_sampleRate.isNull();
}
const LongOrConstrainLongRange& MediaTrackConstraintSet::sampleRate() const
{
    return m_sampleRate;
}
void MediaTrackConstraintSet::setSampleRate(const LongOrConstrainLongRange& value)
{
    m_sampleRate = value;
}
bool MediaTrackConstraintSet::hasSampleSize() const
{
    return !m_sampleSize.isNull();
}
const LongOrConstrainLongRange& MediaTrackConstraintSet::sampleSize() const
{
    return m_sampleSize;
}
void MediaTrackConstraintSet::setSampleSize(const LongOrConstrainLongRange& value)
{
    m_sampleSize = value;
}
bool MediaTrackConstraintSet::hasVolume() const
{
    return !m_volume.isNull();
}
const DoubleOrConstrainDoubleRange& MediaTrackConstraintSet::volume() const
{
    return m_volume;
}
void MediaTrackConstraintSet::setVolume(const DoubleOrConstrainDoubleRange& value)
{
    m_volume = value;
}
bool MediaTrackConstraintSet::hasWidth() const
{
    return !m_width.isNull();
}
const LongOrConstrainLongRange& MediaTrackConstraintSet::width() const
{
    return m_width;
}
void MediaTrackConstraintSet::setWidth(const LongOrConstrainLongRange& value)
{
    m_width = value;
}

DEFINE_TRACE(MediaTrackConstraintSet)
{
    visitor->trace(m_aspectRatio);
    visitor->trace(m_channelCount);
    visitor->trace(m_deviceId);
    visitor->trace(m_echoCancellation);
    visitor->trace(m_facingMode);
    visitor->trace(m_frameRate);
    visitor->trace(m_groupId);
    visitor->trace(m_height);
    visitor->trace(m_latency);
    visitor->trace(m_sampleRate);
    visitor->trace(m_sampleSize);
    visitor->trace(m_volume);
    visitor->trace(m_width);
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
