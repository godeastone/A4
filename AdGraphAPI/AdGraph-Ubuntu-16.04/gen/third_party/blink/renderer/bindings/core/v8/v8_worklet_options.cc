// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WorkletOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "credentials",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8WorkletOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WorkletOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8WorkletOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credentialsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&credentialsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (credentialsValue.IsEmpty() || credentialsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credentialsCppValue = credentialsValue;
    if (!credentialsCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "omit",
        "same-origin",
        "include",
    };
    if (!IsValidEnum(credentialsCppValue, validValues, arraysize(validValues), "RequestCredentials", exceptionState))
      return;
    impl.setCredentials(credentialsCppValue);
  }
}

v8::Local<v8::Value> WorkletOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WorkletOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WorkletOptions(const WorkletOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8WorkletOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credentialsValue;
  bool credentialsHasValueOrDefault = false;
  if (impl.hasCredentials()) {
    credentialsValue = V8String(isolate, impl.credentials());
    credentialsHasValueOrDefault = true;
  } else {
    credentialsValue = V8String(isolate, "same-origin");
    credentialsHasValueOrDefault = true;
  }
  if (credentialsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), credentialsValue))) {
    return false;
  }

  return true;
}

WorkletOptions NativeValueTraits<WorkletOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WorkletOptions impl;
  V8WorkletOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
