// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef ImageBitmapOptions_h
#define ImageBitmapOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT ImageBitmapOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    ImageBitmapOptions();
    virtual ~ImageBitmapOptions();
    ImageBitmapOptions(const ImageBitmapOptions&);
    ImageBitmapOptions& operator=(const ImageBitmapOptions&);

    bool hasColorSpaceConversion() const;
    String colorSpaceConversion() const;
    void setColorSpaceConversion(String);

    bool hasImageOrientation() const;
    String imageOrientation() const;
    void setImageOrientation(String);

    bool hasPremultiplyAlpha() const;
    String premultiplyAlpha() const;
    void setPremultiplyAlpha(String);

    bool hasResizeHeight() const;
    unsigned resizeHeight() const;
    void setResizeHeight(unsigned);

    bool hasResizeQuality() const;
    String resizeQuality() const;
    void setResizeQuality(String);

    bool hasResizeWidth() const;
    unsigned resizeWidth() const;
    void setResizeWidth(unsigned);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_colorSpaceConversion;
    String m_imageOrientation;
    String m_premultiplyAlpha;
    bool m_hasResizeHeight = false;
    unsigned m_resizeHeight;
    String m_resizeQuality;
    bool m_hasResizeWidth = false;
    unsigned m_resizeWidth;

    friend class V8ImageBitmapOptions;
};

} // namespace blink

#endif // ImageBitmapOptions_h
