// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef PaymentItem_h
#define PaymentItem_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "modules/payments/PaymentCurrencyAmount.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentItem : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    PaymentItem();
    virtual ~PaymentItem();
    PaymentItem(const PaymentItem&);
    PaymentItem& operator=(const PaymentItem&);

    bool hasAmount() const;
    const PaymentCurrencyAmount& amount() const;
    void setAmount(const PaymentCurrencyAmount&);

    bool hasLabel() const;
    String label() const;
    void setLabel(String);

    bool hasPending() const;
    bool pending() const;
    void setPending(bool);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasAmount = false;
    PaymentCurrencyAmount m_amount;
    String m_label;
    bool m_hasPending = false;
    bool m_pending;

    friend class V8PaymentItem;
};

} // namespace blink

#endif // PaymentItem_h
