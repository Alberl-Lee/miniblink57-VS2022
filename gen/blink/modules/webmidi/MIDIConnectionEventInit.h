// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef MIDIConnectionEventInit_h
#define MIDIConnectionEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MIDIPort;

class MODULES_EXPORT MIDIConnectionEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    MIDIConnectionEventInit();
    virtual ~MIDIConnectionEventInit();
    MIDIConnectionEventInit(const MIDIConnectionEventInit&);
    MIDIConnectionEventInit& operator=(const MIDIConnectionEventInit&);

    bool hasPort() const;
    MIDIPort* port() const;
    void setPort(MIDIPort*);
    void setPortToNull();

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Member<MIDIPort> m_port;

    friend class V8MIDIConnectionEventInit;
};

} // namespace blink

#endif // MIDIConnectionEventInit_h
