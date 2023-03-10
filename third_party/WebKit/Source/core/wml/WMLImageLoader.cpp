/*
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
#include "WMLImageLoader.h"

#include "WMLImageElement.h"
#include "core/HTMLNames.h"
#include "core/WMLNames.h"
#include "core/html/parser/HTMLParserIdioms.h"

namespace blink {

using namespace WMLNames;

WMLImageLoader::WMLImageLoader(WMLImageElement* element)
    : ImageLoader(element)
{
}

WMLImageLoader::~WMLImageLoader()
{
}

void WMLImageLoader::dispatchLoadEvent()
{
    // WML doesn't fire any events.
}

String WMLImageLoader::sourceURI(const AtomicString& attr) const
{
    return KURL(element()->baseURI(), stripLeadingAndTrailingHTMLSpaces(attr));
}

void WMLImageLoader::imageNotifyFinished(ImageResourceContent* image)
{
    //ResourceClient::notifyFinished(image);
    ImageLoader::imageNotifyFinished(image);

    if (!image->errorOccurred())
        return;

    WMLImageElement* imageElement = static_cast<WMLImageElement*>(element());
    ASSERT(imageElement);

    // Loading both 'localsrc' and 'src' failed. Ignore this image.
    if (imageElement->useFallbackAttribute())
        return;

    if (!imageElement->hasAttribute(localsrcAttr) && !imageElement->hasAttribute(HTMLNames::srcAttr))
        return;

    imageElement->setUseFallbackAttribute(true);
    updateFromElement(ImageLoader::UpdateIgnorePreviousError);
}

String WMLImageLoader::debugName() const
{
    return "WMLImageLoader";
}

}

#endif
