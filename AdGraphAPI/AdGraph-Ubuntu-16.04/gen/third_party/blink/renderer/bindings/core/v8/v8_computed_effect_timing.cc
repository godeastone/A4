// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_effect_timing.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_effect_timing.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ComputedEffectTimingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "activeDuration",
    "currentIteration",
    "endTime",
    "localTime",
    "progress",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ComputedEffectTiming::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ComputedEffectTiming& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EffectTiming::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ComputedEffectTimingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> activeDurationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&activeDurationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (activeDurationValue.IsEmpty() || activeDurationValue->IsUndefined()) {
    // Do nothing.
  } else {
    double activeDurationCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, activeDurationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setActiveDuration(activeDurationCppValue);
  }

  v8::Local<v8::Value> currentIterationValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&currentIterationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (currentIterationValue.IsEmpty() || currentIterationValue->IsUndefined()) {
    // Do nothing.
  } else if (currentIterationValue->IsNull()) {
    impl.setCurrentIterationToNull();
  } else {
    double currentIterationCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, currentIterationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCurrentIteration(currentIterationCppValue);
  }

  v8::Local<v8::Value> endTimeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&endTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (endTimeValue.IsEmpty() || endTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double endTimeCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, endTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEndTime(endTimeCppValue);
  }

  v8::Local<v8::Value> localTimeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&localTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (localTimeValue.IsEmpty() || localTimeValue->IsUndefined()) {
    // Do nothing.
  } else if (localTimeValue->IsNull()) {
    impl.setLocalTimeToNull();
  } else {
    double localTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, localTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLocalTime(localTimeCppValue);
  }

  v8::Local<v8::Value> progressValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&progressValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (progressValue.IsEmpty() || progressValue->IsUndefined()) {
    // Do nothing.
  } else if (progressValue->IsNull()) {
    impl.setProgressToNull();
  } else {
    double progressCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, progressValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setProgress(progressCppValue);
  }
}

v8::Local<v8::Value> ComputedEffectTiming::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ComputedEffectTiming(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ComputedEffectTiming(const ComputedEffectTiming& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EffectTiming(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ComputedEffectTimingKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> activeDurationValue;
  bool activeDurationHasValueOrDefault = false;
  if (impl.hasActiveDuration()) {
    activeDurationValue = v8::Number::New(isolate, impl.activeDuration());
    activeDurationHasValueOrDefault = true;
  }
  if (activeDurationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), activeDurationValue))) {
    return false;
  }

  v8::Local<v8::Value> currentIterationValue;
  bool currentIterationHasValueOrDefault = false;
  if (impl.hasCurrentIteration()) {
    currentIterationValue = v8::Number::New(isolate, impl.currentIteration());
    currentIterationHasValueOrDefault = true;
  } else {
    currentIterationValue = v8::Null(isolate);
    currentIterationHasValueOrDefault = true;
  }
  if (currentIterationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), currentIterationValue))) {
    return false;
  }

  v8::Local<v8::Value> endTimeValue;
  bool endTimeHasValueOrDefault = false;
  if (impl.hasEndTime()) {
    endTimeValue = v8::Number::New(isolate, impl.endTime());
    endTimeHasValueOrDefault = true;
  }
  if (endTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), endTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> localTimeValue;
  bool localTimeHasValueOrDefault = false;
  if (impl.hasLocalTime()) {
    localTimeValue = v8::Number::New(isolate, impl.localTime());
    localTimeHasValueOrDefault = true;
  } else {
    localTimeValue = v8::Null(isolate);
    localTimeHasValueOrDefault = true;
  }
  if (localTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), localTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> progressValue;
  bool progressHasValueOrDefault = false;
  if (impl.hasProgress()) {
    progressValue = v8::Number::New(isolate, impl.progress());
    progressHasValueOrDefault = true;
  } else {
    progressValue = v8::Null(isolate);
    progressHasValueOrDefault = true;
  }
  if (progressHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), progressValue))) {
    return false;
  }

  return true;
}

ComputedEffectTiming NativeValueTraits<ComputedEffectTiming>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ComputedEffectTiming impl;
  V8ComputedEffectTiming::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
