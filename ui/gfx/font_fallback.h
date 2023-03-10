// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_FONT_FALLBACK_H_
#define UI_GFX_FONT_FALLBACK_H_

#include <vector>

#include "ui/gfx/font.h"
#include "ui/gfx/gfx_export.h"

namespace gfx {

class Font;

// Given a font, returns the fonts that are suitable for fallback.
GFX_EXPORT std::vector<Font> GetFallbackFonts(const Font& font);

} // namespace gfx

#endif // UI_GFX_FONT_FALLBACK_H_
