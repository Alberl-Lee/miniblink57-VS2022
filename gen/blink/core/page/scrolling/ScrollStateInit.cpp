// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.cpp.tmpl

// clang-format on
#include "ScrollStateInit.h"

namespace blink {

ScrollStateInit::ScrollStateInit()
{
    setDeltaGranularity(0);
    setDeltaX(0);
    setDeltaY(0);
    setFromUserInput(false);
    setIsBeginning(false);
    setIsDirectManipulation(false);
    setIsEnding(false);
    setIsInInertialPhase(false);
    setPositionX(0);
    setPositionY(0);
    setShouldPropagate(true);
    setVelocityX(0);
    setVelocityY(0);
}

ScrollStateInit::~ScrollStateInit() { }

ScrollStateInit::ScrollStateInit(const ScrollStateInit&) = default;

ScrollStateInit& ScrollStateInit::operator=(const ScrollStateInit&) = default;

bool ScrollStateInit::hasDeltaGranularity() const
{
    return m_hasDeltaGranularity;
}
double ScrollStateInit::deltaGranularity() const
{
    DCHECK(m_hasDeltaGranularity);
    return m_deltaGranularity;
}
void ScrollStateInit::setDeltaGranularity(double value)
{
    m_deltaGranularity = value;
    m_hasDeltaGranularity = true;
}
bool ScrollStateInit::hasDeltaX() const
{
    return m_hasDeltaX;
}
double ScrollStateInit::deltaX() const
{
    DCHECK(m_hasDeltaX);
    return m_deltaX;
}
void ScrollStateInit::setDeltaX(double value)
{
    m_deltaX = value;
    m_hasDeltaX = true;
}
bool ScrollStateInit::hasDeltaY() const
{
    return m_hasDeltaY;
}
double ScrollStateInit::deltaY() const
{
    DCHECK(m_hasDeltaY);
    return m_deltaY;
}
void ScrollStateInit::setDeltaY(double value)
{
    m_deltaY = value;
    m_hasDeltaY = true;
}
bool ScrollStateInit::hasFromUserInput() const
{
    return m_hasFromUserInput;
}
bool ScrollStateInit::fromUserInput() const
{
    DCHECK(m_hasFromUserInput);
    return m_fromUserInput;
}
void ScrollStateInit::setFromUserInput(bool value)
{
    m_fromUserInput = value;
    m_hasFromUserInput = true;
}
bool ScrollStateInit::hasIsBeginning() const
{
    return m_hasIsBeginning;
}
bool ScrollStateInit::isBeginning() const
{
    DCHECK(m_hasIsBeginning);
    return m_isBeginning;
}
void ScrollStateInit::setIsBeginning(bool value)
{
    m_isBeginning = value;
    m_hasIsBeginning = true;
}
bool ScrollStateInit::hasIsDirectManipulation() const
{
    return m_hasIsDirectManipulation;
}
bool ScrollStateInit::isDirectManipulation() const
{
    DCHECK(m_hasIsDirectManipulation);
    return m_isDirectManipulation;
}
void ScrollStateInit::setIsDirectManipulation(bool value)
{
    m_isDirectManipulation = value;
    m_hasIsDirectManipulation = true;
}
bool ScrollStateInit::hasIsEnding() const
{
    return m_hasIsEnding;
}
bool ScrollStateInit::isEnding() const
{
    DCHECK(m_hasIsEnding);
    return m_isEnding;
}
void ScrollStateInit::setIsEnding(bool value)
{
    m_isEnding = value;
    m_hasIsEnding = true;
}
bool ScrollStateInit::hasIsInInertialPhase() const
{
    return m_hasIsInInertialPhase;
}
bool ScrollStateInit::isInInertialPhase() const
{
    DCHECK(m_hasIsInInertialPhase);
    return m_isInInertialPhase;
}
void ScrollStateInit::setIsInInertialPhase(bool value)
{
    m_isInInertialPhase = value;
    m_hasIsInInertialPhase = true;
}
bool ScrollStateInit::hasPositionX() const
{
    return m_hasPositionX;
}
int ScrollStateInit::positionX() const
{
    DCHECK(m_hasPositionX);
    return m_positionX;
}
void ScrollStateInit::setPositionX(int value)
{
    m_positionX = value;
    m_hasPositionX = true;
}
bool ScrollStateInit::hasPositionY() const
{
    return m_hasPositionY;
}
int ScrollStateInit::positionY() const
{
    DCHECK(m_hasPositionY);
    return m_positionY;
}
void ScrollStateInit::setPositionY(int value)
{
    m_positionY = value;
    m_hasPositionY = true;
}
bool ScrollStateInit::hasShouldPropagate() const
{
    return m_hasShouldPropagate;
}
bool ScrollStateInit::shouldPropagate() const
{
    DCHECK(m_hasShouldPropagate);
    return m_shouldPropagate;
}
void ScrollStateInit::setShouldPropagate(bool value)
{
    m_shouldPropagate = value;
    m_hasShouldPropagate = true;
}
bool ScrollStateInit::hasVelocityX() const
{
    return m_hasVelocityX;
}
double ScrollStateInit::velocityX() const
{
    DCHECK(m_hasVelocityX);
    return m_velocityX;
}
void ScrollStateInit::setVelocityX(double value)
{
    m_velocityX = value;
    m_hasVelocityX = true;
}
bool ScrollStateInit::hasVelocityY() const
{
    return m_hasVelocityY;
}
double ScrollStateInit::velocityY() const
{
    DCHECK(m_hasVelocityY);
    return m_velocityY;
}
void ScrollStateInit::setVelocityY(double value)
{
    m_velocityY = value;
    m_hasVelocityY = true;
}

DEFINE_TRACE(ScrollStateInit)
{
    IDLDictionaryBase::trace(visitor);
}

} // namespace blink
