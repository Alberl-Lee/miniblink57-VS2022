// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef ShareData_h
#define ShareData_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT ShareData : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    ShareData();
    virtual ~ShareData();
    ShareData(const ShareData&);
    ShareData& operator=(const ShareData&);

    bool hasText() const;
    String text() const;
    void setText(String);
    void setTextToNull();

    bool hasTitle() const;
    String title() const;
    void setTitle(String);
    void setTitleToNull();

    bool hasURL() const;
    String url() const;
    void setURL(String);
    void setURLToNull();

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    String m_text;
    String m_title;
    String m_url;

    friend class V8ShareData;
};

} // namespace blink

#endif // ShareData_h
