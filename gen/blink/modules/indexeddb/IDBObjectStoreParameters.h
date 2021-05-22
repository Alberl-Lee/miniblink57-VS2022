// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef IDBObjectStoreParameters_h
#define IDBObjectStoreParameters_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/modules/v8/StringOrStringSequence.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT IDBObjectStoreParameters : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    IDBObjectStoreParameters();
    virtual ~IDBObjectStoreParameters();
    IDBObjectStoreParameters(const IDBObjectStoreParameters&);
    IDBObjectStoreParameters& operator=(const IDBObjectStoreParameters&);

    bool hasAutoIncrement() const;
    bool autoIncrement() const;
    void setAutoIncrement(bool);

    bool hasKeyPath() const;
    const StringOrStringSequence& keyPath() const;
    void setKeyPath(const StringOrStringSequence&);
    void setKeyPathToNull();

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasAutoIncrement = false;
    bool m_autoIncrement;
    StringOrStringSequence m_keyPath;

    friend class V8IDBObjectStoreParameters;
};

} // namespace blink

#endif // IDBObjectStoreParameters_h
