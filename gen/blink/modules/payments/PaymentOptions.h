// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef PaymentOptions_h
#define PaymentOptions_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentOptions : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    PaymentOptions();
    virtual ~PaymentOptions();
    PaymentOptions(const PaymentOptions&);
    PaymentOptions& operator=(const PaymentOptions&);

    bool hasRequestPayerEmail() const;
    bool requestPayerEmail() const;
    void setRequestPayerEmail(bool);

    bool hasRequestPayerName() const;
    bool requestPayerName() const;
    void setRequestPayerName(bool);

    bool hasRequestPayerPhone() const;
    bool requestPayerPhone() const;
    void setRequestPayerPhone(bool);

    bool hasRequestShipping() const;
    bool requestShipping() const;
    void setRequestShipping(bool);

    bool hasShippingType() const;
    String shippingType() const;
    void setShippingType(String);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasRequestPayerEmail = false;
    bool m_requestPayerEmail;
    bool m_hasRequestPayerName = false;
    bool m_requestPayerName;
    bool m_hasRequestPayerPhone = false;
    bool m_requestPayerPhone;
    bool m_hasRequestShipping = false;
    bool m_requestShipping;
    String m_shippingType;

    friend class V8PaymentOptions;
};

} // namespace blink

#endif // PaymentOptions_h
