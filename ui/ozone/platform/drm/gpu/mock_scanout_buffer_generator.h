// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_OZONE_PLATFORM_DRM_GPU_MOCK_SCANOUT_BUFFER_GENERATOR_H_
#define UI_OZONE_PLATFORM_DRM_GPU_MOCK_SCANOUT_BUFFER_GENERATOR_H_

#include "base/macros.h"

#include "ui/ozone/platform/drm/gpu/scanout_buffer.h"

namespace ui {

class MockScanoutBufferGenerator : public ScanoutBufferGenerator {
public:
    MockScanoutBufferGenerator();
    ~MockScanoutBufferGenerator() override;

    // ScanoutBufferGenerator:
    scoped_refptr<ScanoutBuffer> Create(const scoped_refptr<DrmDevice>& drm,
        gfx::BufferFormat format,
        const gfx::Size& size) override;

private:
    DISALLOW_COPY_AND_ASSIGN(MockScanoutBufferGenerator);
};

} // namespace ui

#endif // UI_OZONE_PLATFORM_DRM_GPU_MOCK_SCANOUT_BUFFER_GENERATOR_H_
