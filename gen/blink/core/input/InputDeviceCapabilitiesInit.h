// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef InputDeviceCapabilitiesInit_h
#define InputDeviceCapabilitiesInit_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT InputDeviceCapabilitiesInit : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    InputDeviceCapabilitiesInit();
    virtual ~InputDeviceCapabilitiesInit();
    InputDeviceCapabilitiesInit(const InputDeviceCapabilitiesInit&);
    InputDeviceCapabilitiesInit& operator=(const InputDeviceCapabilitiesInit&);

    bool hasFiresTouchEvents() const;
    bool firesTouchEvents() const;
    void setFiresTouchEvents(bool);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasFiresTouchEvents = false;
    bool m_firesTouchEvents;

    friend class V8InputDeviceCapabilitiesInit;
};

} // namespace blink

#endif // InputDeviceCapabilitiesInit_h
