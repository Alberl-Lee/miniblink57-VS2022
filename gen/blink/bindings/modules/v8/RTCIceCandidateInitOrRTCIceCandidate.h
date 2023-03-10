// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.h.tmpl

// clang-format on
#ifndef RTCIceCandidateInitOrRTCIceCandidate_h
#define RTCIceCandidateInitOrRTCIceCandidate_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/modules/v8/V8RTCIceCandidateInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class RTCIceCandidate;

class MODULES_EXPORT RTCIceCandidateInitOrRTCIceCandidate final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    RTCIceCandidateInitOrRTCIceCandidate();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isRTCIceCandidateInit() const { return m_type == SpecificTypeRTCIceCandidateInit; }
    const RTCIceCandidateInit& getAsRTCIceCandidateInit() const;
    void setRTCIceCandidateInit(const RTCIceCandidateInit&);
    static RTCIceCandidateInitOrRTCIceCandidate fromRTCIceCandidateInit(const RTCIceCandidateInit&);

    bool isRTCIceCandidate() const { return m_type == SpecificTypeRTCIceCandidate; }
    RTCIceCandidate* getAsRTCIceCandidate() const;
    void setRTCIceCandidate(RTCIceCandidate*);
    static RTCIceCandidateInitOrRTCIceCandidate fromRTCIceCandidate(RTCIceCandidate*);

    RTCIceCandidateInitOrRTCIceCandidate(const RTCIceCandidateInitOrRTCIceCandidate&);
    ~RTCIceCandidateInitOrRTCIceCandidate();
    RTCIceCandidateInitOrRTCIceCandidate& operator=(const RTCIceCandidateInitOrRTCIceCandidate&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeRTCIceCandidateInit,
        SpecificTypeRTCIceCandidate,
    };
    SpecificTypes m_type;

    RTCIceCandidateInit m_rTCIceCandidateInit;
    Member<RTCIceCandidate> m_rTCIceCandidate;

    friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8RTCIceCandidateInitOrRTCIceCandidate final {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, RTCIceCandidateInitOrRTCIceCandidate&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, RTCIceCandidateInitOrRTCIceCandidate& impl)
{
    v8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<RTCIceCandidateInitOrRTCIceCandidate> {
    MODULES_EXPORT static RTCIceCandidateInitOrRTCIceCandidate nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::RTCIceCandidateInitOrRTCIceCandidate);

#endif // RTCIceCandidateInitOrRTCIceCandidate_h
