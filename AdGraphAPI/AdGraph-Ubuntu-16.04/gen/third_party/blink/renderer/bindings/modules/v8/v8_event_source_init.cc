// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_event_source_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EventSourceInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "withCredentials",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8EventSourceInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, EventSourceInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8EventSourceInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> withCredentialsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&withCredentialsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (withCredentialsValue.IsEmpty() || withCredentialsValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool withCredentialsCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, withCredentialsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWithCredentials(withCredentialsCppValue);
  }
}

v8::Local<v8::Value> EventSourceInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EventSourceInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EventSourceInit(const EventSourceInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8EventSourceInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> withCredentialsValue;
  bool withCredentialsHasValueOrDefault = false;
  if (impl.hasWithCredentials()) {
    withCredentialsValue = v8::Boolean::New(isolate, impl.withCredentials());
    withCredentialsHasValueOrDefault = true;
  } else {
    withCredentialsValue = v8::Boolean::New(isolate, false);
    withCredentialsHasValueOrDefault = true;
  }
  if (withCredentialsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), withCredentialsValue))) {
    return false;
  }

  return true;
}

EventSourceInit NativeValueTraits<EventSourceInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EventSourceInit impl;
  V8EventSourceInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
