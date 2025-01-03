// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle_signals.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoHandleSignalsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "peerClosed",
    "readable",
    "writable",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoHandleSignals::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoHandleSignals& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoHandleSignalsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> peerClosedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&peerClosedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (peerClosedValue.IsEmpty() || peerClosedValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool peerClosedCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, peerClosedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPeerClosed(peerClosedCppValue);
  }

  v8::Local<v8::Value> readableValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&readableValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (readableValue.IsEmpty() || readableValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool readableCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, readableValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setReadable(readableCppValue);
  }

  v8::Local<v8::Value> writableValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&writableValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (writableValue.IsEmpty() || writableValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool writableCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, writableValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWritable(writableCppValue);
  }
}

v8::Local<v8::Value> MojoHandleSignals::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoHandleSignals(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoHandleSignals(const MojoHandleSignals& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoHandleSignalsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> peerClosedValue;
  bool peerClosedHasValueOrDefault = false;
  if (impl.hasPeerClosed()) {
    peerClosedValue = v8::Boolean::New(isolate, impl.peerClosed());
    peerClosedHasValueOrDefault = true;
  } else {
    peerClosedValue = v8::Boolean::New(isolate, false);
    peerClosedHasValueOrDefault = true;
  }
  if (peerClosedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), peerClosedValue))) {
    return false;
  }

  v8::Local<v8::Value> readableValue;
  bool readableHasValueOrDefault = false;
  if (impl.hasReadable()) {
    readableValue = v8::Boolean::New(isolate, impl.readable());
    readableHasValueOrDefault = true;
  } else {
    readableValue = v8::Boolean::New(isolate, false);
    readableHasValueOrDefault = true;
  }
  if (readableHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), readableValue))) {
    return false;
  }

  v8::Local<v8::Value> writableValue;
  bool writableHasValueOrDefault = false;
  if (impl.hasWritable()) {
    writableValue = v8::Boolean::New(isolate, impl.writable());
    writableHasValueOrDefault = true;
  } else {
    writableValue = v8::Boolean::New(isolate, false);
    writableHasValueOrDefault = true;
  }
  if (writableHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), writableValue))) {
    return false;
  }

  return true;
}

MojoHandleSignals NativeValueTraits<MojoHandleSignals>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoHandleSignals impl;
  V8MojoHandleSignals::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
