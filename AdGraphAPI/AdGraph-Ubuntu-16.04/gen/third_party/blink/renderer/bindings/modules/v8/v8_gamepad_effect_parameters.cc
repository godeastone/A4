// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad_effect_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GamepadEffectParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "duration",
    "startDelay",
    "strongMagnitude",
    "weakMagnitude",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8GamepadEffectParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, GamepadEffectParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GamepadEffectParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> durationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&durationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (durationValue.IsEmpty() || durationValue->IsUndefined()) {
    // Do nothing.
  } else {
    double durationCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, durationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDuration(durationCppValue);
  }

  v8::Local<v8::Value> startDelayValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&startDelayValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (startDelayValue.IsEmpty() || startDelayValue->IsUndefined()) {
    // Do nothing.
  } else {
    double startDelayCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, startDelayValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStartDelay(startDelayCppValue);
  }

  v8::Local<v8::Value> strongMagnitudeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&strongMagnitudeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (strongMagnitudeValue.IsEmpty() || strongMagnitudeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double strongMagnitudeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, strongMagnitudeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStrongMagnitude(strongMagnitudeCppValue);
  }

  v8::Local<v8::Value> weakMagnitudeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&weakMagnitudeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (weakMagnitudeValue.IsEmpty() || weakMagnitudeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double weakMagnitudeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, weakMagnitudeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setWeakMagnitude(weakMagnitudeCppValue);
  }
}

v8::Local<v8::Value> GamepadEffectParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GamepadEffectParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GamepadEffectParameters(const GamepadEffectParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GamepadEffectParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> durationValue;
  bool durationHasValueOrDefault = false;
  if (impl.hasDuration()) {
    durationValue = v8::Number::New(isolate, impl.duration());
    durationHasValueOrDefault = true;
  } else {
    durationValue = v8::Number::New(isolate, 0);
    durationHasValueOrDefault = true;
  }
  if (durationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), durationValue))) {
    return false;
  }

  v8::Local<v8::Value> startDelayValue;
  bool startDelayHasValueOrDefault = false;
  if (impl.hasStartDelay()) {
    startDelayValue = v8::Number::New(isolate, impl.startDelay());
    startDelayHasValueOrDefault = true;
  } else {
    startDelayValue = v8::Number::New(isolate, 0);
    startDelayHasValueOrDefault = true;
  }
  if (startDelayHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), startDelayValue))) {
    return false;
  }

  v8::Local<v8::Value> strongMagnitudeValue;
  bool strongMagnitudeHasValueOrDefault = false;
  if (impl.hasStrongMagnitude()) {
    strongMagnitudeValue = v8::Number::New(isolate, impl.strongMagnitude());
    strongMagnitudeHasValueOrDefault = true;
  } else {
    strongMagnitudeValue = v8::Number::New(isolate, 0);
    strongMagnitudeHasValueOrDefault = true;
  }
  if (strongMagnitudeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), strongMagnitudeValue))) {
    return false;
  }

  v8::Local<v8::Value> weakMagnitudeValue;
  bool weakMagnitudeHasValueOrDefault = false;
  if (impl.hasWeakMagnitude()) {
    weakMagnitudeValue = v8::Number::New(isolate, impl.weakMagnitude());
    weakMagnitudeHasValueOrDefault = true;
  } else {
    weakMagnitudeValue = v8::Number::New(isolate, 0);
    weakMagnitudeHasValueOrDefault = true;
  }
  if (weakMagnitudeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), weakMagnitudeValue))) {
    return false;
  }

  return true;
}

GamepadEffectParameters NativeValueTraits<GamepadEffectParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  GamepadEffectParameters impl;
  V8GamepadEffectParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
