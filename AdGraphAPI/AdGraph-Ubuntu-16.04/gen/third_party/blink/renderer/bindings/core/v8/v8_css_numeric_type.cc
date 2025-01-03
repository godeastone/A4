// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_type.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CSSNumericTypeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "angle",
    "flex",
    "frequency",
    "length",
    "percent",
    "percentHint",
    "resolution",
    "time",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CSSNumericType::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CSSNumericType& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CSSNumericTypeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> angleValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&angleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (angleValue.IsEmpty() || angleValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t angleCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, angleValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setAngle(angleCppValue);
  }

  v8::Local<v8::Value> flexValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&flexValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (flexValue.IsEmpty() || flexValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t flexCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, flexValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setFlex(flexCppValue);
  }

  v8::Local<v8::Value> frequencyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&frequencyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frequencyValue.IsEmpty() || frequencyValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t frequencyCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, frequencyValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setFrequency(frequencyCppValue);
  }

  v8::Local<v8::Value> lengthValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&lengthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lengthValue.IsEmpty() || lengthValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t lengthCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, lengthValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLength(lengthCppValue);
  }

  v8::Local<v8::Value> percentValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&percentValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (percentValue.IsEmpty() || percentValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t percentCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, percentValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setPercent(percentCppValue);
  }

  v8::Local<v8::Value> percentHintValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&percentHintValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (percentHintValue.IsEmpty() || percentHintValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> percentHintCppValue = percentHintValue;
    if (!percentHintCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "length",
        "angle",
        "time",
        "frequency",
        "resolution",
        "flex",
        "percent",
        nullptr,
    };
    if (!IsValidEnum(percentHintCppValue, validValues, arraysize(validValues), "CSSNumericBaseType", exceptionState))
      return;
    impl.setPercentHint(percentHintCppValue);
  }

  v8::Local<v8::Value> resolutionValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&resolutionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (resolutionValue.IsEmpty() || resolutionValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t resolutionCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, resolutionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setResolution(resolutionCppValue);
  }

  v8::Local<v8::Value> timeValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&timeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeValue.IsEmpty() || timeValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t timeCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, timeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTime(timeCppValue);
  }
}

v8::Local<v8::Value> CSSNumericType::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CSSNumericType(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CSSNumericType(const CSSNumericType& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CSSNumericTypeKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> angleValue;
  bool angleHasValueOrDefault = false;
  if (impl.hasAngle()) {
    angleValue = v8::Integer::New(isolate, impl.angle());
    angleHasValueOrDefault = true;
  }
  if (angleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), angleValue))) {
    return false;
  }

  v8::Local<v8::Value> flexValue;
  bool flexHasValueOrDefault = false;
  if (impl.hasFlex()) {
    flexValue = v8::Integer::New(isolate, impl.flex());
    flexHasValueOrDefault = true;
  }
  if (flexHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), flexValue))) {
    return false;
  }

  v8::Local<v8::Value> frequencyValue;
  bool frequencyHasValueOrDefault = false;
  if (impl.hasFrequency()) {
    frequencyValue = v8::Integer::New(isolate, impl.frequency());
    frequencyHasValueOrDefault = true;
  }
  if (frequencyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), frequencyValue))) {
    return false;
  }

  v8::Local<v8::Value> lengthValue;
  bool lengthHasValueOrDefault = false;
  if (impl.hasLength()) {
    lengthValue = v8::Integer::New(isolate, impl.length());
    lengthHasValueOrDefault = true;
  }
  if (lengthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), lengthValue))) {
    return false;
  }

  v8::Local<v8::Value> percentValue;
  bool percentHasValueOrDefault = false;
  if (impl.hasPercent()) {
    percentValue = v8::Integer::New(isolate, impl.percent());
    percentHasValueOrDefault = true;
  }
  if (percentHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), percentValue))) {
    return false;
  }

  v8::Local<v8::Value> percentHintValue;
  bool percentHintHasValueOrDefault = false;
  if (impl.hasPercentHint()) {
    percentHintValue = V8String(isolate, impl.percentHint());
    percentHintHasValueOrDefault = true;
  }
  if (percentHintHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), percentHintValue))) {
    return false;
  }

  v8::Local<v8::Value> resolutionValue;
  bool resolutionHasValueOrDefault = false;
  if (impl.hasResolution()) {
    resolutionValue = v8::Integer::New(isolate, impl.resolution());
    resolutionHasValueOrDefault = true;
  }
  if (resolutionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), resolutionValue))) {
    return false;
  }

  v8::Local<v8::Value> timeValue;
  bool timeHasValueOrDefault = false;
  if (impl.hasTime()) {
    timeValue = v8::Integer::New(isolate, impl.time());
    timeHasValueOrDefault = true;
  }
  if (timeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), timeValue))) {
    return false;
  }

  return true;
}

CSSNumericType NativeValueTraits<CSSNumericType>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSNumericType impl;
  V8CSSNumericType::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
