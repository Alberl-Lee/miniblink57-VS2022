/*
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef VTTRegionList_h
#define VTTRegionList_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "core/html/track/vtt/VTTRegion.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"

namespace blink {

class VTTRegionList final : public GarbageCollected<VTTRegionList>,
                            public ScriptWrappable {
    DEFINE_WRAPPERTYPEINFO();

public:
    static VTTRegionList* create() { return new VTTRegionList; }

    unsigned long length() const;

    VTTRegion* item(unsigned index) const;
    VTTRegion* getRegionById(const String&) const;

    void add(VTTRegion*);
    bool remove(VTTRegion*);

    DECLARE_TRACE();

private:
    VTTRegionList();

    HeapVector<Member<VTTRegion>> m_list;
};

} // namespace blink

#endif // VTTRegionList_h
