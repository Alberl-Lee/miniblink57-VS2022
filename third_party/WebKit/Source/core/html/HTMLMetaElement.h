/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 1999 Antti Koivisto (koivisto@kde.org)
 * Copyright (C) 2003, 2010 Apple Inc. All rights reserved.
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

#ifndef HTMLMetaElement_h
#define HTMLMetaElement_h

#include "core/CoreExport.h"
#include "core/dom/ViewportDescription.h"
#include "core/html/HTMLElement.h"
#include "wtf/text/TextEncoding.h"

namespace blink {

enum ViewportErrorCode {
    UnrecognizedViewportArgumentKeyError,
    UnrecognizedViewportArgumentValueError,
    TruncatedViewportArgumentValueError,
    MaximumScaleTooLargeError,
    TargetDensityDpiUnsupported
};

class CORE_EXPORT HTMLMetaElement final : public HTMLElement {
    DEFINE_WRAPPERTYPEINFO();

public:
    DECLARE_NODE_FACTORY(HTMLMetaElement);

    static void getViewportDescriptionFromContentAttribute(
        const String& content,
        ViewportDescription&,
        Document*,
        bool viewportMetaZeroValuesQuirk);

    // Encoding computed from processing the http-equiv, charset and content
    // attributes.
    WTF::TextEncoding computeEncoding() const;

    const AtomicString& content() const;
    const AtomicString& httpEquiv() const;
    const AtomicString& name() const;

private:
    explicit HTMLMetaElement(Document&);

    static void processViewportKeyValuePair(Document*,
        bool reportWarnings,
        const String& key,
        const String& value,
        bool viewportMetaZeroValuesQuirk,
        void* data);
    static void parseContentAttribute(const String& content,
        void* data,
        Document*,
        bool viewportMetaZeroValuesQuirk);

    void parseAttribute(const AttributeModificationParams&) override;
    InsertionNotificationRequest insertedInto(ContainerNode*) override;
    void didNotifySubtreeInsertionsToDocument() override;

    static float parsePositiveNumber(Document*,
        bool reportWarnings,
        const String& key,
        const String& value,
        bool* ok = 0);

    static Length parseViewportValueAsLength(Document*,
        bool reportWarnings,
        const String& key,
        const String& value);
    static float parseViewportValueAsZoom(Document*,
        bool reportWarnings,
        const String& key,
        const String& value,
        bool& computedValueMatchesParsedValue,
        bool viewportMetaZeroValuesQuirk);
    static bool parseViewportValueAsUserZoom(
        Document*,
        bool reportWarnings,
        const String& key,
        const String& value,
        bool& computedValueMatchesParsedValue);
    static float parseViewportValueAsDPI(Document*,
        bool reportWarnings,
        const String& key,
        const String& value);

    static void reportViewportWarning(Document*,
        ViewportErrorCode,
        const String& replacement1,
        const String& replacement2);

    void process();
    void processViewportContentAttribute(const String& content,
        ViewportDescription::Type origin);
};

} // namespace blink

#endif // HTMLMetaElement_h
