/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "GrBatchFontCache.h"
#include "GrContext.h"
#include "GrGpu.h"
#include "GrRectanizer.h"
#include "GrResourceProvider.h"
#include "GrSurfacePriv.h"
#include "SkString.h"

#include "SkDistanceFieldGen.h"

bool GrBatchFontCache::initAtlas(GrMaskFormat format)
{
    int index = MaskFormatToAtlasIndex(format);
    if (!fAtlases[index]) {
        GrPixelConfig config = MaskFormatToPixelConfig(format);
        int width = fAtlasConfigs[index].fWidth;
        int height = fAtlasConfigs[index].fHeight;
        int numPlotsX = fAtlasConfigs[index].numPlotsX();
        int numPlotsY = fAtlasConfigs[index].numPlotsY();

        fAtlases[index] = fContext->resourceProvider()->createAtlas(config, width, height,
            numPlotsX, numPlotsY,
            &GrBatchFontCache::HandleEviction,
            (void*)this);
        if (!fAtlases[index]) {
            return false;
        }
    }
    return true;
}

GrBatchFontCache::GrBatchFontCache(GrContext* context)
    : fContext(context)
    , fPreserveStrike(nullptr)
{
    for (int i = 0; i < kMaskFormatCount; ++i) {
        fAtlases[i] = nullptr;
    }

    // setup default atlas configs
    fAtlasConfigs[kA8_GrMaskFormat].fWidth = 2048;
    fAtlasConfigs[kA8_GrMaskFormat].fHeight = 2048;
    fAtlasConfigs[kA8_GrMaskFormat].fLog2Width = 11;
    fAtlasConfigs[kA8_GrMaskFormat].fLog2Height = 11;
    fAtlasConfigs[kA8_GrMaskFormat].fPlotWidth = 512;
    fAtlasConfigs[kA8_GrMaskFormat].fPlotHeight = 256;

    fAtlasConfigs[kA565_GrMaskFormat].fWidth = 1024;
    fAtlasConfigs[kA565_GrMaskFormat].fHeight = 2048;
    fAtlasConfigs[kA565_GrMaskFormat].fLog2Width = 10;
    fAtlasConfigs[kA565_GrMaskFormat].fLog2Height = 11;
    fAtlasConfigs[kA565_GrMaskFormat].fPlotWidth = 256;
    fAtlasConfigs[kA565_GrMaskFormat].fPlotHeight = 256;

    fAtlasConfigs[kARGB_GrMaskFormat].fWidth = 1024;
    fAtlasConfigs[kARGB_GrMaskFormat].fHeight = 2048;
    fAtlasConfigs[kARGB_GrMaskFormat].fLog2Width = 10;
    fAtlasConfigs[kARGB_GrMaskFormat].fLog2Height = 11;
    fAtlasConfigs[kARGB_GrMaskFormat].fPlotWidth = 256;
    fAtlasConfigs[kARGB_GrMaskFormat].fPlotHeight = 256;
}

GrBatchFontCache::~GrBatchFontCache()
{
    StrikeHash::Iter iter(&fCache);
    while (!iter.done()) {
        (*iter).fIsAbandoned = true;
        (*iter).unref();
        ++iter;
    }
    for (int i = 0; i < kMaskFormatCount; ++i) {
        delete fAtlases[i];
    }
}

void GrBatchFontCache::freeAll()
{
    StrikeHash::Iter iter(&fCache);
    while (!iter.done()) {
        (*iter).fIsAbandoned = true;
        (*iter).unref();
        ++iter;
    }
    fCache.rewind();
    for (int i = 0; i < kMaskFormatCount; ++i) {
        delete fAtlases[i];
        fAtlases[i] = nullptr;
    }
}

void GrBatchFontCache::HandleEviction(GrBatchAtlas::AtlasID id, void* ptr)
{
    GrBatchFontCache* fontCache = reinterpret_cast<GrBatchFontCache*>(ptr);

    StrikeHash::Iter iter(&fontCache->fCache);
    for (; !iter.done(); ++iter) {
        GrBatchTextStrike* strike = &*iter;
        strike->removeID(id);

        // clear out any empty strikes.  We will preserve the strike whose call to addToAtlas
        // triggered the eviction
        if (strike != fontCache->fPreserveStrike && 0 == strike->fAtlasedGlyphs) {
            fontCache->fCache.remove(GrBatchTextStrike::GetKey(*strike));
            strike->fIsAbandoned = true;
            strike->unref();
        }
    }
}

void GrBatchFontCache::dump() const
{
    static int gDumpCount = 0;
    for (int i = 0; i < kMaskFormatCount; ++i) {
        if (fAtlases[i]) {
            GrTexture* texture = fAtlases[i]->getTexture();
            if (texture) {
                SkString filename;
#ifdef SK_BUILD_FOR_ANDROID
                filename.printf("/sdcard/fontcache_%d%d.png", gDumpCount, i);
#else
                filename.printf("fontcache_%d%d.png", gDumpCount, i);
#endif
                texture->surfacePriv().savePixels(filename.c_str());
            }
        }
    }
    ++gDumpCount;
}

void GrBatchFontCache::setAtlasSizes_ForTesting(const GrBatchAtlasConfig configs[3])
{
    // delete any old atlases, this should be safe to do as long as we are not in the middle of a
    // flush
    for (int i = 0; i < kMaskFormatCount; i++) {
        if (fAtlases[i]) {
            delete fAtlases[i];
            fAtlases[i] = nullptr;
        }
    }
    memcpy(fAtlasConfigs, configs, sizeof(fAtlasConfigs));
}

///////////////////////////////////////////////////////////////////////////////

static inline GrMaskFormat get_packed_glyph_mask_format(const SkGlyph& glyph)
{
    SkMask::Format format = static_cast<SkMask::Format>(glyph.fMaskFormat);
    switch (format) {
    case SkMask::kBW_Format:
        // fall through to kA8 -- we store BW glyphs in our 8-bit cache
    case SkMask::kA8_Format:
        return kA8_GrMaskFormat;
    case SkMask::kLCD16_Format:
        return kA565_GrMaskFormat;
    case SkMask::kARGB32_Format:
        return kARGB_GrMaskFormat;
    default:
        SkDEBUGFAIL("unsupported SkMask::Format");
        return kA8_GrMaskFormat;
    }
}

static inline bool get_packed_glyph_bounds(SkGlyphCache* cache, const SkGlyph& glyph,
    SkIRect* bounds)
{
#if 1
    // crbug:510931
    // Retrieving the image from the cache can actually change the mask format.
    cache->findImage(glyph);
#endif
    bounds->setXYWH(glyph.fLeft, glyph.fTop, glyph.fWidth, glyph.fHeight);

    return true;
}

static inline bool get_packed_glyph_df_bounds(SkGlyphCache* cache, const SkGlyph& glyph,
    SkIRect* bounds)
{
#if 1
    // crbug:510931
    // Retrieving the image from the cache can actually change the mask format.
    cache->findImage(glyph);
#endif
    bounds->setXYWH(glyph.fLeft, glyph.fTop, glyph.fWidth, glyph.fHeight);
    bounds->outset(SK_DistanceFieldPad, SK_DistanceFieldPad);

    return true;
}

// expands each bit in a bitmask to 0 or ~0 of type INT_TYPE. Used to expand a BW glyph mask to
// A8, RGB565, or RGBA8888.
template <typename INT_TYPE>
static void expand_bits(INT_TYPE* dst,
    const uint8_t* src,
    int width,
    int height,
    int dstRowBytes,
    int srcRowBytes)
{
    for (int i = 0; i < height; ++i) {
        int rowWritesLeft = width;
        const uint8_t* s = src;
        INT_TYPE* d = dst;
        while (rowWritesLeft > 0) {
            unsigned mask = *s++;
            for (int i = 7; i >= 0 && rowWritesLeft; --i, --rowWritesLeft) {
                *d++ = (mask & (1 << i)) ? (INT_TYPE)(~0UL) : 0;
            }
        }
        dst = reinterpret_cast<INT_TYPE*>(reinterpret_cast<intptr_t>(dst) + dstRowBytes);
        src += srcRowBytes;
    }
}

static bool get_packed_glyph_image(SkGlyphCache* cache, const SkGlyph& glyph, int width,
    int height, int dstRB, GrMaskFormat expectedMaskFormat,
    void* dst)
{
    SkASSERT(glyph.fWidth == width);
    SkASSERT(glyph.fHeight == height);
    const void* src = cache->findImage(glyph);
    if (nullptr == src) {
        return false;
    }

    // crbug:510931
    // Retrieving the image from the cache can actually change the mask format.  This case is very
    // uncommon so for now we just draw a clear box for these glyphs.
    if (get_packed_glyph_mask_format(glyph) != expectedMaskFormat) {
        const int bpp = GrMaskFormatBytesPerPixel(expectedMaskFormat);
        for (int y = 0; y < height; y++) {
            sk_bzero(dst, width * bpp);
            dst = (char*)dst + dstRB;
        }
        return true;
    }

    int srcRB = glyph.rowBytes();
    // The windows font host sometimes has BW glyphs in a non-BW strike. So it is important here to
    // check the glyph's format, not the strike's format, and to be able to convert to any of the
    // GrMaskFormats.
    if (SkMask::kBW_Format == glyph.fMaskFormat) {
        // expand bits to our mask type
        const uint8_t* bits = reinterpret_cast<const uint8_t*>(src);
        switch (expectedMaskFormat) {
        case kA8_GrMaskFormat: {
            uint8_t* bytes = reinterpret_cast<uint8_t*>(dst);
            expand_bits(bytes, bits, width, height, dstRB, srcRB);
            break;
        }
        case kA565_GrMaskFormat: {
            uint16_t* rgb565 = reinterpret_cast<uint16_t*>(dst);
            expand_bits(rgb565, bits, width, height, dstRB, srcRB);
            break;
        }
        default:
            SkFAIL("Invalid GrMaskFormat");
        }
    } else if (srcRB == dstRB) {
        memcpy(dst, src, dstRB * height);
    } else {
        const int bbp = GrMaskFormatBytesPerPixel(expectedMaskFormat);
        for (int y = 0; y < height; y++) {
            memcpy(dst, src, width * bbp);
            src = (const char*)src + srcRB;
            dst = (char*)dst + dstRB;
        }
    }
    return true;
}

static bool get_packed_glyph_df_image(SkGlyphCache* cache, const SkGlyph& glyph,
    int width, int height, void* dst)
{
    SkASSERT(glyph.fWidth + 2 * SK_DistanceFieldPad == width);
    SkASSERT(glyph.fHeight + 2 * SK_DistanceFieldPad == height);
    const void* image = cache->findImage(glyph);
    if (nullptr == image) {
        return false;
    }
    // now generate the distance field
    SkASSERT(dst);
    SkMask::Format maskFormat = static_cast<SkMask::Format>(glyph.fMaskFormat);
    if (SkMask::kA8_Format == maskFormat) {
        // make the distance field from the image
        SkGenerateDistanceFieldFromA8Image((unsigned char*)dst,
            (unsigned char*)image,
            glyph.fWidth, glyph.fHeight,
            glyph.rowBytes());
    } else if (SkMask::kBW_Format == maskFormat) {
        // make the distance field from the image
        SkGenerateDistanceFieldFromBWImage((unsigned char*)dst,
            (unsigned char*)image,
            glyph.fWidth, glyph.fHeight,
            glyph.rowBytes());
    } else {
        return false;
    }

    return true;
}

///////////////////////////////////////////////////////////////////////////////

/*
    The text strike is specific to a given font/style/matrix setup, which is
    represented by the GrHostFontScaler object we are given in getGlyph().

    We map a 32bit glyphID to a GrGlyph record, which in turn points to a
    atlas and a position within that texture.
 */

GrBatchTextStrike::GrBatchTextStrike(GrBatchFontCache* owner, const SkDescriptor& key)
    : fFontScalerKey(key)
    , fPool(9 /*start allocations at 512 bytes*/)
    , fBatchFontCache(owner) // no need to ref, it won't go away before we do
    , fAtlasedGlyphs(0)
    , fIsAbandoned(false)
{
}

GrBatchTextStrike::~GrBatchTextStrike()
{
    SkTDynamicHash<GrGlyph, GrGlyph::PackedID>::Iter iter(&fCache);
    while (!iter.done()) {
        (*iter).reset();
        ++iter;
    }
}

GrGlyph* GrBatchTextStrike::generateGlyph(const SkGlyph& skGlyph, GrGlyph::PackedID packed,
    SkGlyphCache* cache)
{
    SkIRect bounds;
    if (GrGlyph::kDistance_MaskStyle == GrGlyph::UnpackMaskStyle(packed)) {
        if (!get_packed_glyph_df_bounds(cache, skGlyph, &bounds)) {
            return nullptr;
        }
    } else {
        if (!get_packed_glyph_bounds(cache, skGlyph, &bounds)) {
            return nullptr;
        }
    }
    GrMaskFormat format = get_packed_glyph_mask_format(skGlyph);

    GrGlyph* glyph = (GrGlyph*)fPool.alloc(sizeof(GrGlyph));
    glyph->init(packed, bounds, format);
    fCache.add(glyph);
    return glyph;
}

void GrBatchTextStrike::removeID(GrBatchAtlas::AtlasID id)
{
    SkTDynamicHash<GrGlyph, GrGlyph::PackedID>::Iter iter(&fCache);
    while (!iter.done()) {
        if (id == (*iter).fID) {
            (*iter).fID = GrBatchAtlas::kInvalidAtlasID;
            fAtlasedGlyphs--;
            SkASSERT(fAtlasedGlyphs >= 0);
        }
        ++iter;
    }
}

bool GrBatchTextStrike::addGlyphToAtlas(GrDrawBatch::Target* target,
    GrGlyph* glyph,
    SkGlyphCache* cache,
    GrMaskFormat expectedMaskFormat)
{
    SkASSERT(glyph);
    SkASSERT(cache);
    SkASSERT(fCache.find(glyph->fPackedID));

    int bytesPerPixel = GrMaskFormatBytesPerPixel(expectedMaskFormat);

    size_t size = glyph->fBounds.area() * bytesPerPixel;
    SkAutoSMalloc<1024> storage(size);

    const SkGlyph& skGlyph = GrToSkGlyph(cache, glyph->fPackedID);
    if (GrGlyph::kDistance_MaskStyle == GrGlyph::UnpackMaskStyle(glyph->fPackedID)) {
        if (!get_packed_glyph_df_image(cache, skGlyph, glyph->width(), glyph->height(),
                storage.get())) {
            return false;
        }
    } else {
        if (!get_packed_glyph_image(cache, skGlyph, glyph->width(), glyph->height(),
                glyph->width() * bytesPerPixel, expectedMaskFormat,
                storage.get())) {
            return false;
        }
    }

    bool success = fBatchFontCache->addToAtlas(this, &glyph->fID, target, expectedMaskFormat,
        glyph->width(), glyph->height(),
        storage.get(), &glyph->fAtlasLocation);
    if (success) {
        SkASSERT(GrBatchAtlas::kInvalidAtlasID != glyph->fID);
        fAtlasedGlyphs++;
    }
    return success;
}
