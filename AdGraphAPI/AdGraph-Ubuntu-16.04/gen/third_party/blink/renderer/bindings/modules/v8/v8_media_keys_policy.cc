// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_keys_policy.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeysPolicyKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "minHdcpVersion",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaKeysPolicy::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeysPolicy& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeysPolicyKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> minHdcpVersionValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&minHdcpVersionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (minHdcpVersionValue.IsEmpty() || minHdcpVersionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> minHdcpVersionCppValue = minHdcpVersionValue;
    if (!minHdcpVersionCppValue.Prepare(exceptionState))
      return;
    impl.setMinHdcpVersion(minHdcpVersionCppValue);
  }
}

v8::Local<v8::Value> MediaKeysPolicy::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeysPolicy(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeysPolicy(const MediaKeysPolicy& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeysPolicyKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> minHdcpVersionValue;
  bool minHdcpVersionHasValueOrDefault = false;
  if (impl.hasMinHdcpVersion()) {
    minHdcpVersionValue = V8String(isolate, impl.minHdcpVersion());
    minHdcpVersionHasValueOrDefault = true;
  } else {
    minHdcpVersionValue = V8String(isolate, WTF::g_empty_string);
    minHdcpVersionHasValueOrDefault = true;
  }
  if (minHdcpVersionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), minHdcpVersionValue))) {
    return false;
  }

  return true;
}

MediaKeysPolicy NativeValueTraits<MediaKeysPolicy>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaKeysPolicy impl;
  V8MediaKeysPolicy::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
