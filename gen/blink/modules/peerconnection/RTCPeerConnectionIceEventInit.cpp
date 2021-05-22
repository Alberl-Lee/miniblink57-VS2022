// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "RTCPeerConnectionIceEventInit.h"

#include "modules/peerconnection/RTCIceCandidate.h"

namespace blink {

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit()
{
}

RTCPeerConnectionIceEventInit::~RTCPeerConnectionIceEventInit() { }

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit(const RTCPeerConnectionIceEventInit&) = default;

RTCPeerConnectionIceEventInit& RTCPeerConnectionIceEventInit::operator=(const RTCPeerConnectionIceEventInit&) = default;

bool RTCPeerConnectionIceEventInit::hasCandidate() const
{
    return m_candidate;
}
RTCIceCandidate* RTCPeerConnectionIceEventInit::candidate() const
{
    return m_candidate;
}
void RTCPeerConnectionIceEventInit::setCandidate(RTCIceCandidate* value)
{
    m_candidate = value;
}
void RTCPeerConnectionIceEventInit::setCandidateToNull()
{
    m_candidate = Member<RTCIceCandidate>();
}

DEFINE_TRACE(RTCPeerConnectionIceEventInit)
{
    visitor->trace(m_candidate);
    EventInit::trace(visitor);
}

} // namespace blink
