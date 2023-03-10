// Copyright 2018 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_OBJECTS_JS_PROXY_INL_H_
#define V8_OBJECTS_JS_PROXY_INL_H_

#include "src/objects/js-proxy.h"

#include "src/objects-inl.h" // Needed for write barriers

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"

namespace v8 {
namespace internal {

    OBJECT_CONSTRUCTORS_IMPL(JSProxy, JSReceiver)

    CAST_ACCESSOR(JSProxy)

    ACCESSORS(JSProxy, target, Object, kTargetOffset)
    ACCESSORS(JSProxy, handler, Object, kHandlerOffset)

    bool JSProxy::IsRevoked() const { return !handler()->IsJSReceiver(); }

} // namespace internal
} // namespace v8

#include "src/objects/object-macros-undef.h"

#endif // V8_OBJECTS_JS_PROXY_INL_H_
