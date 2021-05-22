// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/dictionary_impl.h.tmpl

// clang-format on
#ifndef ForeignFetchResponse_h
#define ForeignFetchResponse_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class Response;

class MODULES_EXPORT ForeignFetchResponse : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    ForeignFetchResponse();
    virtual ~ForeignFetchResponse();
    ForeignFetchResponse(const ForeignFetchResponse&);
    ForeignFetchResponse& operator=(const ForeignFetchResponse&);

    bool hasHeaders() const;
    const Vector<String>& headers() const;
    void setHeaders(const Vector<String>&);

    bool hasOrigin() const;
    String origin() const;
    void setOrigin(String);

    bool hasResponse() const;
    Response* response() const;
    void setResponse(Response*);

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    bool m_hasHeaders = false;
    Vector<String> m_headers;
    String m_origin;
    Member<Response> m_response;

    friend class V8ForeignFetchResponse;
};

} // namespace blink

#endif // ForeignFetchResponse_h
