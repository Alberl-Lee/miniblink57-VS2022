/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "public/web/WebArrayBuffer.h"

#include "core/dom/DOMArrayBuffer.h"

namespace blink {

WebArrayBuffer WebArrayBuffer::create(unsigned numElements,
    unsigned elementByteSize)
{
    return WebArrayBuffer(DOMArrayBuffer::create(numElements, elementByteSize));
}

void WebArrayBuffer::reset()
{
    m_private.reset();
}

void WebArrayBuffer::assign(const WebArrayBuffer& other)
{
    m_private = other.m_private;
}

void* WebArrayBuffer::data() const
{
    if (!isNull())
        return const_cast<void*>(m_private->data());
    return 0;
}

unsigned WebArrayBuffer::byteLength() const
{
    if (!isNull())
        return m_private->byteLength();
    return 0;
}

WebArrayBuffer::WebArrayBuffer(DOMArrayBuffer* buffer)
    : m_private(buffer)
{
}

WebArrayBuffer& WebArrayBuffer::operator=(DOMArrayBuffer* buffer)
{
    m_private = buffer;
    return *this;
}

WebArrayBuffer::operator DOMArrayBuffer*() const
{
    return m_private.get();
}

} // namespace blink
