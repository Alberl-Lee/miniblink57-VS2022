// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/webgl/WebGLSharedPlatform3DObject.h"

#include "modules/webgl/WebGLRenderingContextBase.h"

namespace blink {

WebGLSharedPlatform3DObject::WebGLSharedPlatform3DObject(
    WebGLRenderingContextBase* ctx)
    : WebGLSharedObject(ctx)
    , m_object(0)
{
}

void WebGLSharedPlatform3DObject::setObject(GLuint object)
{
    // object==0 && deleted==false indicating an uninitialized state;
    ASSERT(!m_object && !isDeleted());
    m_object = object;
}

bool WebGLSharedPlatform3DObject::hasObject() const
{
    return m_object != 0;
}

} // namespace blink
