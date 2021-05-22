// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef DOMQuadInit_h
#define DOMQuadInit_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "core/CoreExport.h"
#include "core/dom/DOMPointInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT DOMQuadInit : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    DOMQuadInit();
    virtual ~DOMQuadInit();
    DOMQuadInit(const DOMQuadInit&);
    DOMQuadInit& operator=(const DOMQuadInit&);

    bool hasP1() const;
    const DOMPointInit& p1() const;
    void setP1(const DOMPointInit&);

    bool hasP2() const;
    const DOMPointInit& p2() const;
    void setP2(const DOMPointInit&);

    bool hasP3() const;
    const DOMPointInit& p3() const;
    void setP3(const DOMPointInit&);

    bool hasP4() const;
    const DOMPointInit& p4() const;
    void setP4(const DOMPointInit&);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasP1 = false;
    DOMPointInit m_p1;
    bool m_hasP2 = false;
    DOMPointInit m_p2;
    bool m_hasP3 = false;
    DOMPointInit m_p3;
    bool m_hasP4 = false;
    DOMPointInit m_p4;

    friend class V8DOMQuadInit;
};

} // namespace blink

#endif // DOMQuadInit_h
