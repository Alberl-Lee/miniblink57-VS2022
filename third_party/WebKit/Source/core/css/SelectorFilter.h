/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 2004-2005 Allan Sandfeld Jensen (kde@carewolf.com)
 * Copyright (C) 2006, 2007 Nicholas Shanks (webkit@nickshanks.com)
 * Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010, 2011 Apple Inc. All rights
 * reserved.
 * Copyright (C) 2007 Alexey Proskuryakov <ap@webkit.org>
 * Copyright (C) 2007, 2008 Eric Seidel <eric@webkit.org>
 * Copyright (C) 2008, 2009 Torch Mobile Inc. All rights reserved.
 * (http://www.torchmobile.com/)
 * Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 * Copyright (C) Research In Motion Limited 2011. All rights reserved.
 * Copyright (C) 2012 Google Inc. All rights reserved.
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
 */

#ifndef SelectorFilter_h
#define SelectorFilter_h

#include "core/dom/Element.h"
#include "wtf/BloomFilter.h"
#include "wtf/Vector.h"
#include <memory>

namespace blink {

class CSSSelector;

class SelectorFilter {
    WTF_MAKE_NONCOPYABLE(SelectorFilter);
    DISALLOW_NEW();

public:
    class ParentStackFrame {
        DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

    public:
        ParentStackFrame()
            : element(nullptr)
        {
        }
        explicit ParentStackFrame(Element& element)
            : element(&element)
        {
        }

        DECLARE_TRACE();

        Member<Element> element;
        Vector<unsigned, 4> identifierHashes;
    };

    SelectorFilter() { }

    void pushParent(Element& parent);
    void popParent(Element& parent);

    bool parentStackIsConsistent(const ContainerNode* parentNode) const
    {
        return !m_parentStack.isEmpty() && m_parentStack.back().element == parentNode;
    }

    template <unsigned maximumIdentifierCount>
    inline bool fastRejectSelector(const unsigned* identifierHashes) const;
    static void collectIdentifierHashes(const CSSSelector&,
        unsigned* identifierHashes,
        unsigned maximumIdentifierCount);

    DECLARE_TRACE();

private:
    void pushParentStackFrame(Element& parent);
    void popParentStackFrame();

    HeapVector<ParentStackFrame> m_parentStack;

    // With 100 unique strings in the filter, 2^12 slot table has false positive
    // rate of ~0.2%.
    using IdentifierFilter = BloomFilter<12>;
    std::unique_ptr<IdentifierFilter> m_ancestorIdentifierFilter;
};

template <unsigned maximumIdentifierCount>
inline bool SelectorFilter::fastRejectSelector(
    const unsigned* identifierHashes) const
{
    ASSERT(m_ancestorIdentifierFilter);
    for (unsigned n = 0; n < maximumIdentifierCount && identifierHashes[n]; ++n) {
        if (!m_ancestorIdentifierFilter->mayContain(identifierHashes[n]))
            return true;
    }
    return false;
}

} // namespace blink

WTF_ALLOW_INIT_WITH_MEM_FUNCTIONS(blink::SelectorFilter::ParentStackFrame);

#endif
