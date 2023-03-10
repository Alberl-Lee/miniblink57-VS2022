// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.h.tmpl

// clang-format on
#ifndef NodeListOrElement_h
#define NodeListOrElement_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class Element;
class NodeList;

class CORE_EXPORT NodeListOrElement final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();

public:
    NodeListOrElement();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isNodeList() const { return m_type == SpecificTypeNodeList; }
    NodeList* getAsNodeList() const;
    void setNodeList(NodeList*);
    static NodeListOrElement fromNodeList(NodeList*);

    bool isElement() const { return m_type == SpecificTypeElement; }
    Element* getAsElement() const;
    void setElement(Element*);
    static NodeListOrElement fromElement(Element*);

    NodeListOrElement(const NodeListOrElement&);
    ~NodeListOrElement();
    NodeListOrElement& operator=(const NodeListOrElement&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeNodeList,
        SpecificTypeElement,
    };
    SpecificTypes m_type;

    Member<NodeList> m_nodeList;
    Member<Element> m_element;

    friend CORE_EXPORT v8::Local<v8::Value> ToV8(const NodeListOrElement&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8NodeListOrElement final {
public:
    CORE_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, NodeListOrElement&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const NodeListOrElement&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, NodeListOrElement& impl)
{
    v8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<NodeListOrElement> {
    CORE_EXPORT static NodeListOrElement nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::NodeListOrElement);

#endif // NodeListOrElement_h
