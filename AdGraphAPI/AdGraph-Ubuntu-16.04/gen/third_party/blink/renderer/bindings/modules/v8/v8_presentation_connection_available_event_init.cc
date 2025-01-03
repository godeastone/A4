// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection_available_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_presentation_connection.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PresentationConnectionAvailableEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "connection",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PresentationConnectionAvailableEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PresentationConnectionAvailableEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): connection.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PresentationConnectionAvailableEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> connectionValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&connectionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (connectionValue.IsEmpty() || connectionValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member connection is undefined.");
    return;
  } else {
    PresentationConnection* connectionCppValue = V8PresentationConnection::ToImplWithTypeCheck(isolate, connectionValue);
    if (!connectionCppValue) {
      exceptionState.ThrowTypeError("member connection is not of type PresentationConnection.");
      return;
    }
    impl.setConnection(connectionCppValue);
  }
}

v8::Local<v8::Value> PresentationConnectionAvailableEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PresentationConnectionAvailableEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PresentationConnectionAvailableEventInit(const PresentationConnectionAvailableEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PresentationConnectionAvailableEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> connectionValue;
  bool connectionHasValueOrDefault = false;
  if (impl.hasConnection()) {
    connectionValue = ToV8(impl.connection(), creationContext, isolate);
    connectionHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (connectionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), connectionValue))) {
    return false;
  }

  return true;
}

PresentationConnectionAvailableEventInit NativeValueTraits<PresentationConnectionAvailableEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PresentationConnectionAvailableEventInit impl;
  V8PresentationConnectionAvailableEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
