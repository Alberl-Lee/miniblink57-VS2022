/*
 * Copyright 2015 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "SkCodecImageGenerator.h"
#include "SkData.h"

SkImageGenerator* SkImageGenerator::NewFromEncodedImpl(SkData* data)
{
    return SkCodecImageGenerator::NewFromEncodedCodec(data);
}
