// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef EventModifierInit_h
#define EventModifierInit_h

#include "core/CoreExport.h"
#include "core/events/UIEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT EventModifierInit : public UIEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    EventModifierInit();
    virtual ~EventModifierInit();
    EventModifierInit(const EventModifierInit&);
    EventModifierInit& operator=(const EventModifierInit&);

    bool hasAltKey() const;
    bool altKey() const;
    void setAltKey(bool);

    bool hasCtrlKey() const;
    bool ctrlKey() const;
    void setCtrlKey(bool);

    bool hasMetaKey() const;
    bool metaKey() const;
    void setMetaKey(bool);

    bool hasModifierAltGraph() const;
    bool modifierAltGraph() const;
    void setModifierAltGraph(bool);

    bool hasModifierCapsLock() const;
    bool modifierCapsLock() const;
    void setModifierCapsLock(bool);

    bool hasModifierFn() const;
    bool modifierFn() const;
    void setModifierFn(bool);

    bool hasModifierNumLock() const;
    bool modifierNumLock() const;
    void setModifierNumLock(bool);

    bool hasModifierScrollLock() const;
    bool modifierScrollLock() const;
    void setModifierScrollLock(bool);

    bool hasModifierSymbol() const;
    bool modifierSymbol() const;
    void setModifierSymbol(bool);

    bool hasShiftKey() const;
    bool shiftKey() const;
    void setShiftKey(bool);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasAltKey = false;
    bool m_altKey;
    bool m_hasCtrlKey = false;
    bool m_ctrlKey;
    bool m_hasMetaKey = false;
    bool m_metaKey;
    bool m_hasModifierAltGraph = false;
    bool m_modifierAltGraph;
    bool m_hasModifierCapsLock = false;
    bool m_modifierCapsLock;
    bool m_hasModifierFn = false;
    bool m_modifierFn;
    bool m_hasModifierNumLock = false;
    bool m_modifierNumLock;
    bool m_hasModifierScrollLock = false;
    bool m_modifierScrollLock;
    bool m_hasModifierSymbol = false;
    bool m_modifierSymbol;
    bool m_hasShiftKey = false;
    bool m_shiftKey;

    friend class V8EventModifierInit;
};

} // namespace blink

#endif // EventModifierInit_h
