// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_dynamics_compressor_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DynamicsCompressorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attack",
    "knee",
    "ratio",
    "release",
    "threshold",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DynamicsCompressorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DynamicsCompressorOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DynamicsCompressorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attackValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attackValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (attackValue.IsEmpty() || attackValue->IsUndefined()) {
    // Do nothing.
  } else {
    float attackCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, attackValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAttack(attackCppValue);
  }

  v8::Local<v8::Value> kneeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&kneeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (kneeValue.IsEmpty() || kneeValue->IsUndefined()) {
    // Do nothing.
  } else {
    float kneeCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, kneeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setKnee(kneeCppValue);
  }

  v8::Local<v8::Value> ratioValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&ratioValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (ratioValue.IsEmpty() || ratioValue->IsUndefined()) {
    // Do nothing.
  } else {
    float ratioCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, ratioValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRatio(ratioCppValue);
  }

  v8::Local<v8::Value> releaseValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&releaseValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (releaseValue.IsEmpty() || releaseValue->IsUndefined()) {
    // Do nothing.
  } else {
    float releaseCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, releaseValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRelease(releaseCppValue);
  }

  v8::Local<v8::Value> thresholdValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&thresholdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (thresholdValue.IsEmpty() || thresholdValue->IsUndefined()) {
    // Do nothing.
  } else {
    float thresholdCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, thresholdValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setThreshold(thresholdCppValue);
  }
}

v8::Local<v8::Value> DynamicsCompressorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DynamicsCompressorOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DynamicsCompressorOptions(const DynamicsCompressorOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DynamicsCompressorOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attackValue;
  bool attackHasValueOrDefault = false;
  if (impl.hasAttack()) {
    attackValue = v8::Number::New(isolate, impl.attack());
    attackHasValueOrDefault = true;
  } else {
    attackValue = v8::Number::New(isolate, 0.003);
    attackHasValueOrDefault = true;
  }
  if (attackHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), attackValue))) {
    return false;
  }

  v8::Local<v8::Value> kneeValue;
  bool kneeHasValueOrDefault = false;
  if (impl.hasKnee()) {
    kneeValue = v8::Number::New(isolate, impl.knee());
    kneeHasValueOrDefault = true;
  } else {
    kneeValue = v8::Number::New(isolate, 30);
    kneeHasValueOrDefault = true;
  }
  if (kneeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), kneeValue))) {
    return false;
  }

  v8::Local<v8::Value> ratioValue;
  bool ratioHasValueOrDefault = false;
  if (impl.hasRatio()) {
    ratioValue = v8::Number::New(isolate, impl.ratio());
    ratioHasValueOrDefault = true;
  } else {
    ratioValue = v8::Number::New(isolate, 12);
    ratioHasValueOrDefault = true;
  }
  if (ratioHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), ratioValue))) {
    return false;
  }

  v8::Local<v8::Value> releaseValue;
  bool releaseHasValueOrDefault = false;
  if (impl.hasRelease()) {
    releaseValue = v8::Number::New(isolate, impl.release());
    releaseHasValueOrDefault = true;
  } else {
    releaseValue = v8::Number::New(isolate, 0.25);
    releaseHasValueOrDefault = true;
  }
  if (releaseHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), releaseValue))) {
    return false;
  }

  v8::Local<v8::Value> thresholdValue;
  bool thresholdHasValueOrDefault = false;
  if (impl.hasThreshold()) {
    thresholdValue = v8::Number::New(isolate, impl.threshold());
    thresholdHasValueOrDefault = true;
  } else {
    thresholdValue = v8::Number::New(isolate, -24);
    thresholdHasValueOrDefault = true;
  }
  if (thresholdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), thresholdValue))) {
    return false;
  }

  return true;
}

DynamicsCompressorOptions NativeValueTraits<DynamicsCompressorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DynamicsCompressorOptions impl;
  V8DynamicsCompressorOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
