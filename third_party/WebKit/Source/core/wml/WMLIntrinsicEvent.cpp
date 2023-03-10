/**
 * Copyright (C) 2008 Torch Mobile Inc. All rights reserved. (http://www.torchmobile.com/)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#include "config.h"

#if ENABLE_WML
#include "WMLIntrinsicEvent.h"

#include "WMLTaskElement.h"
#include "core/HTMLNames.h"
#include "core/WMLElementFactory.h"
#include "core/WMLNames.h"
//#include "bindings/v8/ExceptionState.h"

namespace blink {

using namespace WMLNames;

static WMLTaskElement* createTaskElement(Document* document)
{
    return (WMLTaskElement*)(WMLElementFactory::createWMLElement(goTag.localName(), *document, CreatedByCreateElement));
}

WMLIntrinsicEvent::WMLIntrinsicEvent(Document* document, const String& targetURL)
    : m_taskElement(createTaskElement(document))
{
    //TrackExceptionState es;
    m_taskElement->setAttribute(HTMLNames::hrefAttr, WTF::AtomicString(targetURL));
}

WMLIntrinsicEvent::WMLIntrinsicEvent(WMLTaskElement* taskElement)
    : m_taskElement(taskElement)
{
}

DEFINE_TRACE(WMLIntrinsicEvent)
{
    visitor->trace(m_taskElement);
}

}

#endif
