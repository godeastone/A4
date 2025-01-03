// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_effect_timing.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EffectTimingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delay",
    "direction",
    "duration",
    "easing",
    "endDelay",
    "fill",
    "iterationStart",
    "iterations",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8EffectTiming::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, EffectTiming& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8EffectTimingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delayValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delayValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (delayValue.IsEmpty() || delayValue->IsUndefined()) {
    // Do nothing.
  } else {
    double delayCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, delayValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDelay(delayCppValue);
  }

  v8::Local<v8::Value> directionValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&directionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (directionValue.IsEmpty() || directionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> directionCppValue = directionValue;
    if (!directionCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "normal",
        "reverse",
        "alternate",
        "alternate-reverse",
    };
    if (!IsValidEnum(directionCppValue, validValues, arraysize(validValues), "PlaybackDirection", exceptionState))
      return;
    impl.setDirection(directionCppValue);
  }

  v8::Local<v8::Value> durationValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&durationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (durationValue.IsEmpty() || durationValue->IsUndefined()) {
    // Do nothing.
  } else {
    UnrestrictedDoubleOrString durationCppValue;
    V8UnrestrictedDoubleOrString::ToImpl(isolate, durationValue, durationCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDuration(durationCppValue);
  }

  v8::Local<v8::Value> easingValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&easingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (easingValue.IsEmpty() || easingValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> easingCppValue = easingValue;
    if (!easingCppValue.Prepare(exceptionState))
      return;
    impl.setEasing(easingCppValue);
  }

  v8::Local<v8::Value> endDelayValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&endDelayValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (endDelayValue.IsEmpty() || endDelayValue->IsUndefined()) {
    // Do nothing.
  } else {
    double endDelayCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, endDelayValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEndDelay(endDelayCppValue);
  }

  v8::Local<v8::Value> fillValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&fillValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fillValue.IsEmpty() || fillValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fillCppValue = fillValue;
    if (!fillCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "forwards",
        "backwards",
        "both",
        "auto",
    };
    if (!IsValidEnum(fillCppValue, validValues, arraysize(validValues), "FillMode", exceptionState))
      return;
    impl.setFill(fillCppValue);
  }

  v8::Local<v8::Value> iterationStartValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&iterationStartValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iterationStartValue.IsEmpty() || iterationStartValue->IsUndefined()) {
    // Do nothing.
  } else {
    double iterationStartCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, iterationStartValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIterationStart(iterationStartCppValue);
  }

  v8::Local<v8::Value> iterationsValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&iterationsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iterationsValue.IsEmpty() || iterationsValue->IsUndefined()) {
    // Do nothing.
  } else {
    double iterationsCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, iterationsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIterations(iterationsCppValue);
  }
}

v8::Local<v8::Value> EffectTiming::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EffectTiming(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EffectTiming(const EffectTiming& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8EffectTimingKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delayValue;
  bool delayHasValueOrDefault = false;
  if (impl.hasDelay()) {
    delayValue = v8::Number::New(isolate, impl.delay());
    delayHasValueOrDefault = true;
  } else {
    delayValue = v8::Number::New(isolate, 0);
    delayHasValueOrDefault = true;
  }
  if (delayHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), delayValue))) {
    return false;
  }

  v8::Local<v8::Value> directionValue;
  bool directionHasValueOrDefault = false;
  if (impl.hasDirection()) {
    directionValue = V8String(isolate, impl.direction());
    directionHasValueOrDefault = true;
  } else {
    directionValue = V8String(isolate, "normal");
    directionHasValueOrDefault = true;
  }
  if (directionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), directionValue))) {
    return false;
  }

  v8::Local<v8::Value> durationValue;
  bool durationHasValueOrDefault = false;
  if (impl.hasDuration()) {
    durationValue = ToV8(impl.duration(), creationContext, isolate);
    durationHasValueOrDefault = true;
  } else {
    durationValue = ToV8(UnrestrictedDoubleOrString::FromString("auto"), creationContext, isolate);
    durationHasValueOrDefault = true;
  }
  if (durationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), durationValue))) {
    return false;
  }

  v8::Local<v8::Value> easingValue;
  bool easingHasValueOrDefault = false;
  if (impl.hasEasing()) {
    easingValue = V8String(isolate, impl.easing());
    easingHasValueOrDefault = true;
  } else {
    easingValue = V8String(isolate, "linear");
    easingHasValueOrDefault = true;
  }
  if (easingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), easingValue))) {
    return false;
  }

  v8::Local<v8::Value> endDelayValue;
  bool endDelayHasValueOrDefault = false;
  if (impl.hasEndDelay()) {
    endDelayValue = v8::Number::New(isolate, impl.endDelay());
    endDelayHasValueOrDefault = true;
  } else {
    endDelayValue = v8::Number::New(isolate, 0);
    endDelayHasValueOrDefault = true;
  }
  if (endDelayHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), endDelayValue))) {
    return false;
  }

  v8::Local<v8::Value> fillValue;
  bool fillHasValueOrDefault = false;
  if (impl.hasFill()) {
    fillValue = V8String(isolate, impl.fill());
    fillHasValueOrDefault = true;
  } else {
    fillValue = V8String(isolate, "auto");
    fillHasValueOrDefault = true;
  }
  if (fillHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), fillValue))) {
    return false;
  }

  v8::Local<v8::Value> iterationStartValue;
  bool iterationStartHasValueOrDefault = false;
  if (impl.hasIterationStart()) {
    iterationStartValue = v8::Number::New(isolate, impl.iterationStart());
    iterationStartHasValueOrDefault = true;
  } else {
    iterationStartValue = v8::Number::New(isolate, 0);
    iterationStartHasValueOrDefault = true;
  }
  if (iterationStartHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), iterationStartValue))) {
    return false;
  }

  v8::Local<v8::Value> iterationsValue;
  bool iterationsHasValueOrDefault = false;
  if (impl.hasIterations()) {
    iterationsValue = v8::Number::New(isolate, impl.iterations());
    iterationsHasValueOrDefault = true;
  } else {
    iterationsValue = v8::Number::New(isolate, 1);
    iterationsHasValueOrDefault = true;
  }
  if (iterationsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), iterationsValue))) {
    return false;
  }

  return true;
}

EffectTiming NativeValueTraits<EffectTiming>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EffectTiming impl;
  V8EffectTiming::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
