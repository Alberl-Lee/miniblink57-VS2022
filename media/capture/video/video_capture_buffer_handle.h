// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_HANDLE_H_
#define MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_HANDLE_H_

#include "base/files/file.h"
#include "media/base/video_frame.h"
#include "media/capture/capture_export.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/gpu_memory_buffer.h"

namespace media {

// Abstraction of a pool's buffer data buffer and size for clients.
class CAPTURE_EXPORT VideoCaptureBufferHandle {
public:
    virtual ~VideoCaptureBufferHandle() { }
    virtual size_t mapped_size() const = 0;
    virtual uint8_t* data() = 0;
    virtual const uint8_t* data() const = 0;
};

} // namespace media

#endif // MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_HANDLE_H_
