// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_panner_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PannerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "coneInnerAngle",
    "coneOuterAngle",
    "coneOuterGain",
    "distanceModel",
    "maxDistance",
    "orientationX",
    "orientationY",
    "orientationZ",
    "panningModel",
    "positionX",
    "positionY",
    "positionZ",
    "refDistance",
    "rolloffFactor",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PannerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PannerOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8PannerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> coneInnerAngleValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&coneInnerAngleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (coneInnerAngleValue.IsEmpty() || coneInnerAngleValue->IsUndefined()) {
    // Do nothing.
  } else {
    double coneInnerAngleCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, coneInnerAngleValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setConeInnerAngle(coneInnerAngleCppValue);
  }

  v8::Local<v8::Value> coneOuterAngleValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&coneOuterAngleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (coneOuterAngleValue.IsEmpty() || coneOuterAngleValue->IsUndefined()) {
    // Do nothing.
  } else {
    double coneOuterAngleCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, coneOuterAngleValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setConeOuterAngle(coneOuterAngleCppValue);
  }

  v8::Local<v8::Value> coneOuterGainValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&coneOuterGainValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (coneOuterGainValue.IsEmpty() || coneOuterGainValue->IsUndefined()) {
    // Do nothing.
  } else {
    double coneOuterGainCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, coneOuterGainValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setConeOuterGain(coneOuterGainCppValue);
  }

  v8::Local<v8::Value> distanceModelValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&distanceModelValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (distanceModelValue.IsEmpty() || distanceModelValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> distanceModelCppValue = distanceModelValue;
    if (!distanceModelCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "linear",
        "inverse",
        "exponential",
    };
    if (!IsValidEnum(distanceModelCppValue, validValues, arraysize(validValues), "DistanceModelType", exceptionState))
      return;
    impl.setDistanceModel(distanceModelCppValue);
  }

  v8::Local<v8::Value> maxDistanceValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&maxDistanceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxDistanceValue.IsEmpty() || maxDistanceValue->IsUndefined()) {
    // Do nothing.
  } else {
    double maxDistanceCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, maxDistanceValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMaxDistance(maxDistanceCppValue);
  }

  v8::Local<v8::Value> orientationXValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&orientationXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientationXValue.IsEmpty() || orientationXValue->IsUndefined()) {
    // Do nothing.
  } else {
    float orientationXCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientationXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOrientationX(orientationXCppValue);
  }

  v8::Local<v8::Value> orientationYValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&orientationYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientationYValue.IsEmpty() || orientationYValue->IsUndefined()) {
    // Do nothing.
  } else {
    float orientationYCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientationYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOrientationY(orientationYCppValue);
  }

  v8::Local<v8::Value> orientationZValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&orientationZValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (orientationZValue.IsEmpty() || orientationZValue->IsUndefined()) {
    // Do nothing.
  } else {
    float orientationZCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, orientationZValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOrientationZ(orientationZCppValue);
  }

  v8::Local<v8::Value> panningModelValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&panningModelValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (panningModelValue.IsEmpty() || panningModelValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> panningModelCppValue = panningModelValue;
    if (!panningModelCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "equalpower",
        "HRTF",
    };
    if (!IsValidEnum(panningModelCppValue, validValues, arraysize(validValues), "PanningModelType", exceptionState))
      return;
    impl.setPanningModel(panningModelCppValue);
  }

  v8::Local<v8::Value> positionXValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&positionXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (positionXValue.IsEmpty() || positionXValue->IsUndefined()) {
    // Do nothing.
  } else {
    float positionXCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, positionXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPositionX(positionXCppValue);
  }

  v8::Local<v8::Value> positionYValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&positionYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (positionYValue.IsEmpty() || positionYValue->IsUndefined()) {
    // Do nothing.
  } else {
    float positionYCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, positionYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPositionY(positionYCppValue);
  }

  v8::Local<v8::Value> positionZValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&positionZValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (positionZValue.IsEmpty() || positionZValue->IsUndefined()) {
    // Do nothing.
  } else {
    float positionZCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, positionZValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPositionZ(positionZCppValue);
  }

  v8::Local<v8::Value> refDistanceValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&refDistanceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (refDistanceValue.IsEmpty() || refDistanceValue->IsUndefined()) {
    // Do nothing.
  } else {
    double refDistanceCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, refDistanceValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRefDistance(refDistanceCppValue);
  }

  v8::Local<v8::Value> rolloffFactorValue;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&rolloffFactorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rolloffFactorValue.IsEmpty() || rolloffFactorValue->IsUndefined()) {
    // Do nothing.
  } else {
    double rolloffFactorCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, rolloffFactorValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRolloffFactor(rolloffFactorCppValue);
  }
}

v8::Local<v8::Value> PannerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PannerOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PannerOptions(const PannerOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PannerOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> coneInnerAngleValue;
  bool coneInnerAngleHasValueOrDefault = false;
  if (impl.hasConeInnerAngle()) {
    coneInnerAngleValue = v8::Number::New(isolate, impl.coneInnerAngle());
    coneInnerAngleHasValueOrDefault = true;
  } else {
    coneInnerAngleValue = v8::Number::New(isolate, 360);
    coneInnerAngleHasValueOrDefault = true;
  }
  if (coneInnerAngleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), coneInnerAngleValue))) {
    return false;
  }

  v8::Local<v8::Value> coneOuterAngleValue;
  bool coneOuterAngleHasValueOrDefault = false;
  if (impl.hasConeOuterAngle()) {
    coneOuterAngleValue = v8::Number::New(isolate, impl.coneOuterAngle());
    coneOuterAngleHasValueOrDefault = true;
  } else {
    coneOuterAngleValue = v8::Number::New(isolate, 360);
    coneOuterAngleHasValueOrDefault = true;
  }
  if (coneOuterAngleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), coneOuterAngleValue))) {
    return false;
  }

  v8::Local<v8::Value> coneOuterGainValue;
  bool coneOuterGainHasValueOrDefault = false;
  if (impl.hasConeOuterGain()) {
    coneOuterGainValue = v8::Number::New(isolate, impl.coneOuterGain());
    coneOuterGainHasValueOrDefault = true;
  } else {
    coneOuterGainValue = v8::Number::New(isolate, 0);
    coneOuterGainHasValueOrDefault = true;
  }
  if (coneOuterGainHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), coneOuterGainValue))) {
    return false;
  }

  v8::Local<v8::Value> distanceModelValue;
  bool distanceModelHasValueOrDefault = false;
  if (impl.hasDistanceModel()) {
    distanceModelValue = V8String(isolate, impl.distanceModel());
    distanceModelHasValueOrDefault = true;
  } else {
    distanceModelValue = V8String(isolate, "inverse");
    distanceModelHasValueOrDefault = true;
  }
  if (distanceModelHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), distanceModelValue))) {
    return false;
  }

  v8::Local<v8::Value> maxDistanceValue;
  bool maxDistanceHasValueOrDefault = false;
  if (impl.hasMaxDistance()) {
    maxDistanceValue = v8::Number::New(isolate, impl.maxDistance());
    maxDistanceHasValueOrDefault = true;
  } else {
    maxDistanceValue = v8::Number::New(isolate, 10000);
    maxDistanceHasValueOrDefault = true;
  }
  if (maxDistanceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), maxDistanceValue))) {
    return false;
  }

  v8::Local<v8::Value> orientationXValue;
  bool orientationXHasValueOrDefault = false;
  if (impl.hasOrientationX()) {
    orientationXValue = v8::Number::New(isolate, impl.orientationX());
    orientationXHasValueOrDefault = true;
  } else {
    orientationXValue = v8::Number::New(isolate, 1);
    orientationXHasValueOrDefault = true;
  }
  if (orientationXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), orientationXValue))) {
    return false;
  }

  v8::Local<v8::Value> orientationYValue;
  bool orientationYHasValueOrDefault = false;
  if (impl.hasOrientationY()) {
    orientationYValue = v8::Number::New(isolate, impl.orientationY());
    orientationYHasValueOrDefault = true;
  } else {
    orientationYValue = v8::Number::New(isolate, 0);
    orientationYHasValueOrDefault = true;
  }
  if (orientationYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), orientationYValue))) {
    return false;
  }

  v8::Local<v8::Value> orientationZValue;
  bool orientationZHasValueOrDefault = false;
  if (impl.hasOrientationZ()) {
    orientationZValue = v8::Number::New(isolate, impl.orientationZ());
    orientationZHasValueOrDefault = true;
  } else {
    orientationZValue = v8::Number::New(isolate, 0);
    orientationZHasValueOrDefault = true;
  }
  if (orientationZHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), orientationZValue))) {
    return false;
  }

  v8::Local<v8::Value> panningModelValue;
  bool panningModelHasValueOrDefault = false;
  if (impl.hasPanningModel()) {
    panningModelValue = V8String(isolate, impl.panningModel());
    panningModelHasValueOrDefault = true;
  } else {
    panningModelValue = V8String(isolate, "equalpower");
    panningModelHasValueOrDefault = true;
  }
  if (panningModelHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), panningModelValue))) {
    return false;
  }

  v8::Local<v8::Value> positionXValue;
  bool positionXHasValueOrDefault = false;
  if (impl.hasPositionX()) {
    positionXValue = v8::Number::New(isolate, impl.positionX());
    positionXHasValueOrDefault = true;
  } else {
    positionXValue = v8::Number::New(isolate, 0);
    positionXHasValueOrDefault = true;
  }
  if (positionXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), positionXValue))) {
    return false;
  }

  v8::Local<v8::Value> positionYValue;
  bool positionYHasValueOrDefault = false;
  if (impl.hasPositionY()) {
    positionYValue = v8::Number::New(isolate, impl.positionY());
    positionYHasValueOrDefault = true;
  } else {
    positionYValue = v8::Number::New(isolate, 0);
    positionYHasValueOrDefault = true;
  }
  if (positionYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), positionYValue))) {
    return false;
  }

  v8::Local<v8::Value> positionZValue;
  bool positionZHasValueOrDefault = false;
  if (impl.hasPositionZ()) {
    positionZValue = v8::Number::New(isolate, impl.positionZ());
    positionZHasValueOrDefault = true;
  } else {
    positionZValue = v8::Number::New(isolate, 0);
    positionZHasValueOrDefault = true;
  }
  if (positionZHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), positionZValue))) {
    return false;
  }

  v8::Local<v8::Value> refDistanceValue;
  bool refDistanceHasValueOrDefault = false;
  if (impl.hasRefDistance()) {
    refDistanceValue = v8::Number::New(isolate, impl.refDistance());
    refDistanceHasValueOrDefault = true;
  } else {
    refDistanceValue = v8::Number::New(isolate, 1);
    refDistanceHasValueOrDefault = true;
  }
  if (refDistanceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), refDistanceValue))) {
    return false;
  }

  v8::Local<v8::Value> rolloffFactorValue;
  bool rolloffFactorHasValueOrDefault = false;
  if (impl.hasRolloffFactor()) {
    rolloffFactorValue = v8::Number::New(isolate, impl.rolloffFactor());
    rolloffFactorHasValueOrDefault = true;
  } else {
    rolloffFactorValue = v8::Number::New(isolate, 1);
    rolloffFactorHasValueOrDefault = true;
  }
  if (rolloffFactorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), rolloffFactorValue))) {
    return false;
  }

  return true;
}

PannerOptions NativeValueTraits<PannerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PannerOptions impl;
  V8PannerOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
