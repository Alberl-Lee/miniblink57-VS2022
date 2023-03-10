// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py.
// DO NOT MODIFY!

// This file has been generated from the Jinja2 template in
// third_party/WebKit/Source/bindings/templates/union_container.cpp.tmpl

// clang-format on
#include "ClientOrServiceWorkerOrMessagePort.h"

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8MessagePort.h"
#include "bindings/modules/v8/V8Client.h"
#include "bindings/modules/v8/V8ServiceWorker.h"
#include "core/workers/AbstractWorker.h"

namespace blink {

ClientOrServiceWorkerOrMessagePort::ClientOrServiceWorkerOrMessagePort()
    : m_type(SpecificTypeNone)
{
}

ServiceWorkerClient* ClientOrServiceWorkerOrMessagePort::getAsClient() const
{
    DCHECK(isClient());
    return m_client;
}

void ClientOrServiceWorkerOrMessagePort::setClient(ServiceWorkerClient* value)
{
    DCHECK(isNull());
    m_client = value;
    m_type = SpecificTypeClient;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::fromClient(ServiceWorkerClient* value)
{
    ClientOrServiceWorkerOrMessagePort container;
    container.setClient(value);
    return container;
}

ServiceWorker* ClientOrServiceWorkerOrMessagePort::getAsServiceWorker() const
{
    DCHECK(isServiceWorker());
    return m_serviceWorker;
}

void ClientOrServiceWorkerOrMessagePort::setServiceWorker(ServiceWorker* value)
{
    DCHECK(isNull());
    m_serviceWorker = value;
    m_type = SpecificTypeServiceWorker;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::fromServiceWorker(ServiceWorker* value)
{
    ClientOrServiceWorkerOrMessagePort container;
    container.setServiceWorker(value);
    return container;
}

MessagePort* ClientOrServiceWorkerOrMessagePort::getAsMessagePort() const
{
    DCHECK(isMessagePort());
    return m_messagePort;
}

void ClientOrServiceWorkerOrMessagePort::setMessagePort(MessagePort* value)
{
    DCHECK(isNull());
    m_messagePort = value;
    m_type = SpecificTypeMessagePort;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::fromMessagePort(MessagePort* value)
{
    ClientOrServiceWorkerOrMessagePort container;
    container.setMessagePort(value);
    return container;
}

ClientOrServiceWorkerOrMessagePort::ClientOrServiceWorkerOrMessagePort(const ClientOrServiceWorkerOrMessagePort&) = default;
ClientOrServiceWorkerOrMessagePort::~ClientOrServiceWorkerOrMessagePort() = default;
ClientOrServiceWorkerOrMessagePort& ClientOrServiceWorkerOrMessagePort::operator=(const ClientOrServiceWorkerOrMessagePort&) = default;

DEFINE_TRACE(ClientOrServiceWorkerOrMessagePort)
{
    visitor->trace(m_client);
    visitor->trace(m_serviceWorker);
    visitor->trace(m_messagePort);
}

void V8ClientOrServiceWorkerOrMessagePort::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ClientOrServiceWorkerOrMessagePort& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8Client::hasInstance(v8Value, isolate)) {
        ServiceWorkerClient* cppValue = V8Client::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setClient(cppValue);
        return;
    }

    if (V8ServiceWorker::hasInstance(v8Value, isolate)) {
        ServiceWorker* cppValue = V8ServiceWorker::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setServiceWorker(cppValue);
        return;
    }

    if (V8MessagePort::hasInstance(v8Value, isolate)) {
        MessagePort* cppValue = V8MessagePort::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setMessagePort(cppValue);
        return;
    }

    exceptionState.throwTypeError("The provided value is not of type '(Client or ServiceWorker or MessagePort)'");
}

v8::Local<v8::Value> ToV8(const ClientOrServiceWorkerOrMessagePort& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case ClientOrServiceWorkerOrMessagePort::SpecificTypeNone:
        return v8::Null(isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificTypeClient:
        return ToV8(impl.getAsClient(), creationContext, isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificTypeServiceWorker:
        return ToV8(impl.getAsServiceWorker(), creationContext, isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificTypeMessagePort:
        return ToV8(impl.getAsMessagePort(), creationContext, isolate);
    default:
        NOTREACHED();
    }
    return v8::Local<v8::Value>();
}

ClientOrServiceWorkerOrMessagePort NativeValueTraits<ClientOrServiceWorkerOrMessagePort>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ClientOrServiceWorkerOrMessagePort impl;
    V8ClientOrServiceWorkerOrMessagePort::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
