// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_lock_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_abort_signal.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LockOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "ifAvailable",
    "mode",
    "signal",
    "steal",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8LockOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, LockOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LockOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ifAvailableValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&ifAvailableValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ifAvailableValue.IsEmpty() || ifAvailableValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool ifAvailableCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ifAvailableValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIfAvailable(ifAvailableCppValue);
  }

  v8::Local<v8::Value> modeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modeValue.IsEmpty() || modeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> modeCppValue = modeValue;
    if (!modeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "shared",
        "exclusive",
    };
    if (!IsValidEnum(modeCppValue, validValues, arraysize(validValues), "LockMode", exceptionState))
      return;
    impl.setMode(modeCppValue);
  }

  v8::Local<v8::Value> signalValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&signalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (signalValue.IsEmpty() || signalValue->IsUndefined()) {
    // Do nothing.
  } else if (signalValue->IsNull()) {
    impl.setSignalToNull();
  } else {
    AbortSignal* signalCppValue = V8AbortSignal::ToImplWithTypeCheck(isolate, signalValue);
    if (!signalCppValue) {
      exceptionState.ThrowTypeError("member signal is not of type AbortSignal.");
      return;
    }
    impl.setSignal(signalCppValue);
  }

  v8::Local<v8::Value> stealValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&stealValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stealValue.IsEmpty() || stealValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool stealCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, stealValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSteal(stealCppValue);
  }
}

v8::Local<v8::Value> LockOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LockOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LockOptions(const LockOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LockOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> ifAvailableValue;
  bool ifAvailableHasValueOrDefault = false;
  if (impl.hasIfAvailable()) {
    ifAvailableValue = v8::Boolean::New(isolate, impl.ifAvailable());
    ifAvailableHasValueOrDefault = true;
  } else {
    ifAvailableValue = v8::Boolean::New(isolate, false);
    ifAvailableHasValueOrDefault = true;
  }
  if (ifAvailableHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), ifAvailableValue))) {
    return false;
  }

  v8::Local<v8::Value> modeValue;
  bool modeHasValueOrDefault = false;
  if (impl.hasMode()) {
    modeValue = V8String(isolate, impl.mode());
    modeHasValueOrDefault = true;
  } else {
    modeValue = V8String(isolate, "exclusive");
    modeHasValueOrDefault = true;
  }
  if (modeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), modeValue))) {
    return false;
  }

  v8::Local<v8::Value> signalValue;
  bool signalHasValueOrDefault = false;
  if (impl.hasSignal()) {
    signalValue = ToV8(impl.signal(), creationContext, isolate);
    signalHasValueOrDefault = true;
  } else {
    signalValue = v8::Null(isolate);
    signalHasValueOrDefault = true;
  }
  if (signalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), signalValue))) {
    return false;
  }

  v8::Local<v8::Value> stealValue;
  bool stealHasValueOrDefault = false;
  if (impl.hasSteal()) {
    stealValue = v8::Boolean::New(isolate, impl.steal());
    stealHasValueOrDefault = true;
  } else {
    stealValue = v8::Boolean::New(isolate, false);
    stealHasValueOrDefault = true;
  }
  if (stealHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), stealValue))) {
    return false;
  }

  return true;
}

LockOptions NativeValueTraits<LockOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LockOptions impl;
  V8LockOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
