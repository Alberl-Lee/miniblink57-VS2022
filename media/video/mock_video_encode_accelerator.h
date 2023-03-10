// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_VIDEO_MOCK_VIDEO_ENCODE_ACCELERATOR_H_
#define MEDIA_VIDEO_MOCK_VIDEO_ENCODE_ACCELERATOR_H_

#include "media/video/video_encode_accelerator.h"

#include "base/macros.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace media {

class MockVideoEncodeAccelerator : public VideoEncodeAccelerator {
public:
    MockVideoEncodeAccelerator();
    virtual ~MockVideoEncodeAccelerator();

    MOCK_METHOD0(GetSupportedProfiles,
        VideoEncodeAccelerator::SupportedProfiles());
    MOCK_METHOD5(Initialize,
        bool(VideoPixelFormat input_format,
            const gfx::Size& input_visible_size,
            VideoCodecProfile output_profile,
            uint32_t initial_bitrate,
            VideoEncodeAccelerator::Client* client));
    MOCK_METHOD2(Encode,
        void(const scoped_refptr<VideoFrame>& frame,
            bool force_keyframe));
    MOCK_METHOD1(UseOutputBitstreamBuffer, void(const BitstreamBuffer& buffer));
    MOCK_METHOD2(RequestEncodingParametersChange,
        void(uint32_t bitrate, uint32_t framerate));
    MOCK_METHOD0(Destroy, void());

private:
    void DeleteThis();
    DISALLOW_COPY_AND_ASSIGN(MockVideoEncodeAccelerator);
};

} // namespace media

#endif // MEDIA_VIDEO_MOCK_VIDEO_ENCODE_ACCELERATOR_H_
