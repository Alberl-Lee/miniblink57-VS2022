/*
 * Copyright (C) 2011 Apple Inc. All rights reserved.
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

#include "modules/webgl/WebGLSharedObject.h"

#include "modules/webgl/WebGLContextGroup.h"
#include "modules/webgl/WebGLRenderingContextBase.h"

namespace blink {

WebGLSharedObject::WebGLSharedObject(WebGLRenderingContextBase* context)
    : WebGLObject(context)
    , m_contextGroup(this, context->contextGroup())
{
}

bool WebGLSharedObject::validate(const WebGLContextGroup* contextGroup,
    const WebGLRenderingContextBase*) const
{
    // The contexts and context groups no longer maintain references to all
    // the objects they ever created, so there's no way to invalidate them
    // eagerly during context loss. The invalidation is discovered lazily.
    return contextGroup == m_contextGroup && cachedNumberOfContextLosses() == contextGroup->numberOfContextLosses();
}

uint32_t WebGLSharedObject::currentNumberOfContextLosses() const
{
    return m_contextGroup->numberOfContextLosses();
}

gpu::gles2::GLES2Interface* WebGLSharedObject::getAGLInterface() const
{
    return m_contextGroup->getAGLInterface();
}

DEFINE_TRACE(WebGLSharedObject)
{
    visitor->trace(m_contextGroup);
    WebGLObject::trace(visitor);
}

DEFINE_TRACE_WRAPPERS(WebGLSharedObject)
{
    visitor->traceWrappers(m_contextGroup);
    WebGLObject::traceWrappers(visitor);
}

} // namespace blink
