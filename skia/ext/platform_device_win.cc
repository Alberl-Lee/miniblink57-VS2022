// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "skia/ext/platform_device.h"

#include "skia/ext/skia_utils_win.h"
#include "third_party/skia/include/core/SkMatrix.h"
#include "third_party/skia/include/core/SkPath.h"
#include "third_party/skia/include/core/SkRect.h"

namespace skia {

PlatformSurface PlatformDevice::BeginPlatformPaint(const SkMatrix& transform, const SkIRect& clip_bounds)
{
    return 0;
}

PlatformSurface PlatformDevice::BeginPlatformPaint(void* hWnd)
{
    return 0;
}

void PlatformDevice::EndPlatformPaint()
{
    // We don't clear the DC here since it will be likely to be used again.
    // Flushing will be done in onAccessBitmap.
}

} // namespace skia
