// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/callback_interface.cpp.tmpl

// clang-format on
#include "V8DatabaseCallback.h"

#include "bindings/core/v8/ScriptController.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/modules/v8/V8Database.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

V8DatabaseCallback::V8DatabaseCallback(v8::Local<v8::Function> callback, ScriptState* scriptState)
    : m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8DatabaseCallback::~V8DatabaseCallback() { }

DEFINE_TRACE(V8DatabaseCallback)
{
    DatabaseCallback::trace(visitor);
}

bool V8DatabaseCallback::handleEvent(Database* database)
{
    ExecutionContext* executionContext = m_scriptState->getExecutionContext();
    if (!executionContext || executionContext->isContextSuspended() || executionContext->isContextDestroyed())
        return true;
    if (!m_scriptState->contextIsValid())
        return true;
    ScriptState::Scope scope(m_scriptState.get());
    v8::Local<v8::Value> databaseHandle = ToV8(database, m_scriptState->context()->Global(), m_scriptState->isolate());
    v8::Local<v8::Value> argv[] = { databaseHandle };

    v8::TryCatch exceptionCatcher(m_scriptState->isolate());
    exceptionCatcher.SetVerbose(true);
    V8ScriptRunner::callFunction(m_callback.newLocal(m_scriptState->isolate()), m_scriptState->getExecutionContext(), v8::Undefined(m_scriptState->isolate()), 1, argv, m_scriptState->isolate());
    return !exceptionCatcher.HasCaught();
}

} // namespace blink
