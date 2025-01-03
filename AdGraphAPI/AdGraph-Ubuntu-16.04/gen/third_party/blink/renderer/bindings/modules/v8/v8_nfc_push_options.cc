// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_nfc_push_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NFCPushOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "ignoreRead",
    "target",
    "timeout",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NFCPushOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NFCPushOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NFCPushOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ignoreReadValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&ignoreReadValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignoreReadValue.IsEmpty() || ignoreReadValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignoreReadCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignoreReadValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIgnoreRead(ignoreReadCppValue);
  }

  v8::Local<v8::Value> targetValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&targetValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (targetValue.IsEmpty() || targetValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> targetCppValue = targetValue;
    if (!targetCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "tag",
        "peer",
        "any",
    };
    if (!IsValidEnum(targetCppValue, validValues, arraysize(validValues), "NFCPushTarget", exceptionState))
      return;
    impl.setTarget(targetCppValue);
  }

  v8::Local<v8::Value> timeoutValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timeoutValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeoutValue.IsEmpty() || timeoutValue->IsUndefined()) {
    // Do nothing.
  } else {
    double timeoutCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, timeoutValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTimeout(timeoutCppValue);
  }
}

v8::Local<v8::Value> NFCPushOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NFCPushOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NFCPushOptions(const NFCPushOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NFCPushOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ignoreReadValue;
  bool ignoreReadHasValueOrDefault = false;
  if (impl.hasIgnoreRead()) {
    ignoreReadValue = v8::Boolean::New(isolate, impl.ignoreRead());
    ignoreReadHasValueOrDefault = true;
  } else {
    ignoreReadValue = v8::Boolean::New(isolate, true);
    ignoreReadHasValueOrDefault = true;
  }
  if (ignoreReadHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), ignoreReadValue))) {
    return false;
  }

  v8::Local<v8::Value> targetValue;
  bool targetHasValueOrDefault = false;
  if (impl.hasTarget()) {
    targetValue = V8String(isolate, impl.target());
    targetHasValueOrDefault = true;
  } else {
    targetValue = V8String(isolate, "any");
    targetHasValueOrDefault = true;
  }
  if (targetHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), targetValue))) {
    return false;
  }

  v8::Local<v8::Value> timeoutValue;
  bool timeoutHasValueOrDefault = false;
  if (impl.hasTimeout()) {
    timeoutValue = v8::Number::New(isolate, impl.timeout());
    timeoutHasValueOrDefault = true;
  }
  if (timeoutHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), timeoutValue))) {
    return false;
  }

  return true;
}

NFCPushOptions NativeValueTraits<NFCPushOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NFCPushOptions impl;
  V8NFCPushOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
