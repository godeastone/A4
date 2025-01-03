// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_rotation_rate_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DeviceRotationRateInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "beta",
    "gamma",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DeviceRotationRateInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DeviceRotationRateInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceRotationRateInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alphaValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alphaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (alphaValue.IsEmpty() || alphaValue->IsUndefined()) {
    // Do nothing.
  } else if (alphaValue->IsNull()) {
    impl.setAlphaToNull();
  } else {
    double alphaCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, alphaValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAlpha(alphaCppValue);
  }

  v8::Local<v8::Value> betaValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&betaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (betaValue.IsEmpty() || betaValue->IsUndefined()) {
    // Do nothing.
  } else if (betaValue->IsNull()) {
    impl.setBetaToNull();
  } else {
    double betaCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, betaValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setBeta(betaCppValue);
  }

  v8::Local<v8::Value> gammaValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&gammaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (gammaValue.IsEmpty() || gammaValue->IsUndefined()) {
    // Do nothing.
  } else if (gammaValue->IsNull()) {
    impl.setGammaToNull();
  } else {
    double gammaCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, gammaValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setGamma(gammaCppValue);
  }
}

v8::Local<v8::Value> DeviceRotationRateInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DeviceRotationRateInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DeviceRotationRateInit(const DeviceRotationRateInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DeviceRotationRateInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alphaValue;
  bool alphaHasValueOrDefault = false;
  if (impl.hasAlpha()) {
    alphaValue = v8::Number::New(isolate, impl.alpha());
    alphaHasValueOrDefault = true;
  } else {
    alphaValue = v8::Null(isolate);
    alphaHasValueOrDefault = true;
  }
  if (alphaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), alphaValue))) {
    return false;
  }

  v8::Local<v8::Value> betaValue;
  bool betaHasValueOrDefault = false;
  if (impl.hasBeta()) {
    betaValue = v8::Number::New(isolate, impl.beta());
    betaHasValueOrDefault = true;
  } else {
    betaValue = v8::Null(isolate);
    betaHasValueOrDefault = true;
  }
  if (betaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), betaValue))) {
    return false;
  }

  v8::Local<v8::Value> gammaValue;
  bool gammaHasValueOrDefault = false;
  if (impl.hasGamma()) {
    gammaValue = v8::Number::New(isolate, impl.gamma());
    gammaHasValueOrDefault = true;
  } else {
    gammaValue = v8::Null(isolate);
    gammaHasValueOrDefault = true;
  }
  if (gammaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), gammaValue))) {
    return false;
  }

  return true;
}

DeviceRotationRateInit NativeValueTraits<DeviceRotationRateInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DeviceRotationRateInit impl;
  V8DeviceRotationRateInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
