/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef GrVkTextureRenderTarget_DEFINED
#define GrVkTextureRenderTarget_DEFINED

#include "GrVkGpu.h"
#include "GrVkRenderTarget.h"
#include "GrVkTexture.h"

#ifdef SK_BUILD_FOR_WIN
// Windows gives bogus warnings about inheriting asTexture/asRenderTarget via dominance.
#pragma warning(push)
#pragma warning(disable : 4250)
#endif

class GrVkImageView;
struct GrVkImageInfo;

class GrVkTextureRenderTarget : public GrVkTexture, public GrVkRenderTarget {
public:
    static GrVkTextureRenderTarget* CreateNewTextureRenderTarget(GrVkGpu*, SkBudgeted,
        const GrSurfaceDesc&,
        const GrVkImage::ImageDesc&);

    static GrVkTextureRenderTarget* CreateWrappedTextureRenderTarget(GrVkGpu*,
        const GrSurfaceDesc&,
        GrWrapOwnership,
        const GrVkImageInfo*);

protected:
    void onAbandon() override
    {
        GrVkRenderTarget::onAbandon();
        GrVkTexture::onAbandon();
    }

    void onRelease() override
    {
        GrVkRenderTarget::onRelease();
        GrVkTexture::onRelease();
    }

private:
    GrVkTextureRenderTarget(GrVkGpu* gpu,
        SkBudgeted budgeted,
        const GrSurfaceDesc& desc,
        const GrVkImageInfo& info,
        const GrVkImageView* texView,
        const GrVkImageInfo& msaaInfo,
        const GrVkImageView* colorAttachmentView,
        const GrVkImageView* resolveAttachmentView)
        : GrSurface(gpu, desc)
        , GrVkImage(info, GrVkImage::kNot_Wrapped)
        , GrVkTexture(gpu, desc, info, texView, GrVkImage::kNot_Wrapped)
        , GrVkRenderTarget(gpu, desc, info, msaaInfo, colorAttachmentView,
              resolveAttachmentView, GrVkImage::kNot_Wrapped)
    {
        this->registerWithCache(budgeted);
    }

    GrVkTextureRenderTarget(GrVkGpu* gpu,
        SkBudgeted budgeted,
        const GrSurfaceDesc& desc,
        const GrVkImageInfo& info,
        const GrVkImageView* texView,
        const GrVkImageView* colorAttachmentView)
        : GrSurface(gpu, desc)
        , GrVkImage(info, GrVkImage::kNot_Wrapped)
        , GrVkTexture(gpu, desc, info, texView, GrVkImage::kNot_Wrapped)
        , GrVkRenderTarget(gpu, desc, info, colorAttachmentView, GrVkImage::kNot_Wrapped)
    {
        this->registerWithCache(budgeted);
    }
    GrVkTextureRenderTarget(GrVkGpu* gpu,
        const GrSurfaceDesc& desc,
        const GrVkImageInfo& info,
        const GrVkImageView* texView,
        const GrVkImageInfo& msaaInfo,
        const GrVkImageView* colorAttachmentView,
        const GrVkImageView* resolveAttachmentView,
        GrVkImage::Wrapped wrapped)
        : GrSurface(gpu, desc)
        , GrVkImage(info, wrapped)
        , GrVkTexture(gpu, desc, info, texView, wrapped)
        , GrVkRenderTarget(gpu, desc, info, msaaInfo, colorAttachmentView,
              resolveAttachmentView, wrapped)
    {
        this->registerWithCacheWrapped();
    }

    GrVkTextureRenderTarget(GrVkGpu* gpu,
        const GrSurfaceDesc& desc,
        const GrVkImageInfo& info,
        const GrVkImageView* texView,
        const GrVkImageView* colorAttachmentView,
        GrVkImage::Wrapped wrapped)
        : GrSurface(gpu, desc)
        , GrVkImage(info, wrapped)
        , GrVkTexture(gpu, desc, info, texView, wrapped)
        , GrVkRenderTarget(gpu, desc, info, colorAttachmentView, wrapped)
    {
        this->registerWithCacheWrapped();
    }

    static GrVkTextureRenderTarget* Create(GrVkGpu*,
        const GrSurfaceDesc&,
        const GrVkImageInfo&,
        SkBudgeted budgeted,
        GrVkImage::Wrapped wrapped);

    // GrGLRenderTarget accounts for the texture's memory and any MSAA renderbuffer's memory.
    size_t onGpuMemorySize() const override
    {
        return GrVkRenderTarget::onGpuMemorySize();
    }
};

#endif
