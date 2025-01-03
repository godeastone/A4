// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollStateInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "deltaGranularity",
    "deltaX",
    "deltaXHint",
    "deltaY",
    "deltaYHint",
    "fromUserInput",
    "isBeginning",
    "isDirectManipulation",
    "isEnding",
    "isInInertialPhase",
    "positionX",
    "positionY",
    "shouldPropagate",
    "velocityX",
    "velocityY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ScrollStateInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollStateInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollStateInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deltaGranularityValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&deltaGranularityValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaGranularityValue.IsEmpty() || deltaGranularityValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaGranularityCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaGranularityValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaGranularity(deltaGranularityCppValue);
  }

  v8::Local<v8::Value> deltaXValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&deltaXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaXValue.IsEmpty() || deltaXValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaX(deltaXCppValue);
  }

  v8::Local<v8::Value> deltaXHintValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&deltaXHintValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaXHintValue.IsEmpty() || deltaXHintValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaXHintCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaXHintValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaXHint(deltaXHintCppValue);
  }

  v8::Local<v8::Value> deltaYValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&deltaYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaYValue.IsEmpty() || deltaYValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaY(deltaYCppValue);
  }

  v8::Local<v8::Value> deltaYHintValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&deltaYHintValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaYHintValue.IsEmpty() || deltaYHintValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaYHintCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaYHintValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaYHint(deltaYHintCppValue);
  }

  v8::Local<v8::Value> fromUserInputValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&fromUserInputValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fromUserInputValue.IsEmpty() || fromUserInputValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool fromUserInputCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, fromUserInputValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFromUserInput(fromUserInputCppValue);
  }

  v8::Local<v8::Value> isBeginningValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&isBeginningValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isBeginningValue.IsEmpty() || isBeginningValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isBeginningCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isBeginningValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsBeginning(isBeginningCppValue);
  }

  v8::Local<v8::Value> isDirectManipulationValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&isDirectManipulationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isDirectManipulationValue.IsEmpty() || isDirectManipulationValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isDirectManipulationCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isDirectManipulationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsDirectManipulation(isDirectManipulationCppValue);
  }

  v8::Local<v8::Value> isEndingValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&isEndingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isEndingValue.IsEmpty() || isEndingValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isEndingCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isEndingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsEnding(isEndingCppValue);
  }

  v8::Local<v8::Value> isInInertialPhaseValue;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&isInInertialPhaseValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isInInertialPhaseValue.IsEmpty() || isInInertialPhaseValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isInInertialPhaseCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isInInertialPhaseValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsInInertialPhase(isInInertialPhaseCppValue);
  }

  v8::Local<v8::Value> positionXValue;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&positionXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (positionXValue.IsEmpty() || positionXValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t positionXCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, positionXValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setPositionX(positionXCppValue);
  }

  v8::Local<v8::Value> positionYValue;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&positionYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (positionYValue.IsEmpty() || positionYValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t positionYCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, positionYValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setPositionY(positionYCppValue);
  }

  v8::Local<v8::Value> shouldPropagateValue;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&shouldPropagateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (shouldPropagateValue.IsEmpty() || shouldPropagateValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool shouldPropagateCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, shouldPropagateValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setShouldPropagate(shouldPropagateCppValue);
  }

  v8::Local<v8::Value> velocityXValue;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&velocityXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (velocityXValue.IsEmpty() || velocityXValue->IsUndefined()) {
    // Do nothing.
  } else {
    double velocityXCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, velocityXValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVelocityX(velocityXCppValue);
  }

  v8::Local<v8::Value> velocityYValue;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&velocityYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (velocityYValue.IsEmpty() || velocityYValue->IsUndefined()) {
    // Do nothing.
  } else {
    double velocityYCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, velocityYValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVelocityY(velocityYCppValue);
  }
}

v8::Local<v8::Value> ScrollStateInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollStateInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollStateInit(const ScrollStateInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ScrollStateInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deltaGranularityValue;
  bool deltaGranularityHasValueOrDefault = false;
  if (impl.hasDeltaGranularity()) {
    deltaGranularityValue = v8::Number::New(isolate, impl.deltaGranularity());
    deltaGranularityHasValueOrDefault = true;
  } else {
    deltaGranularityValue = v8::Number::New(isolate, 0);
    deltaGranularityHasValueOrDefault = true;
  }
  if (deltaGranularityHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), deltaGranularityValue))) {
    return false;
  }

  v8::Local<v8::Value> deltaXValue;
  bool deltaXHasValueOrDefault = false;
  if (impl.hasDeltaX()) {
    deltaXValue = v8::Number::New(isolate, impl.deltaX());
    deltaXHasValueOrDefault = true;
  } else {
    deltaXValue = v8::Number::New(isolate, 0);
    deltaXHasValueOrDefault = true;
  }
  if (deltaXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), deltaXValue))) {
    return false;
  }

  v8::Local<v8::Value> deltaXHintValue;
  bool deltaXHintHasValueOrDefault = false;
  if (impl.hasDeltaXHint()) {
    deltaXHintValue = v8::Number::New(isolate, impl.deltaXHint());
    deltaXHintHasValueOrDefault = true;
  } else {
    deltaXHintValue = v8::Number::New(isolate, 0);
    deltaXHintHasValueOrDefault = true;
  }
  if (deltaXHintHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), deltaXHintValue))) {
    return false;
  }

  v8::Local<v8::Value> deltaYValue;
  bool deltaYHasValueOrDefault = false;
  if (impl.hasDeltaY()) {
    deltaYValue = v8::Number::New(isolate, impl.deltaY());
    deltaYHasValueOrDefault = true;
  } else {
    deltaYValue = v8::Number::New(isolate, 0);
    deltaYHasValueOrDefault = true;
  }
  if (deltaYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), deltaYValue))) {
    return false;
  }

  v8::Local<v8::Value> deltaYHintValue;
  bool deltaYHintHasValueOrDefault = false;
  if (impl.hasDeltaYHint()) {
    deltaYHintValue = v8::Number::New(isolate, impl.deltaYHint());
    deltaYHintHasValueOrDefault = true;
  } else {
    deltaYHintValue = v8::Number::New(isolate, 0);
    deltaYHintHasValueOrDefault = true;
  }
  if (deltaYHintHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), deltaYHintValue))) {
    return false;
  }

  v8::Local<v8::Value> fromUserInputValue;
  bool fromUserInputHasValueOrDefault = false;
  if (impl.hasFromUserInput()) {
    fromUserInputValue = v8::Boolean::New(isolate, impl.fromUserInput());
    fromUserInputHasValueOrDefault = true;
  } else {
    fromUserInputValue = v8::Boolean::New(isolate, false);
    fromUserInputHasValueOrDefault = true;
  }
  if (fromUserInputHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), fromUserInputValue))) {
    return false;
  }

  v8::Local<v8::Value> isBeginningValue;
  bool isBeginningHasValueOrDefault = false;
  if (impl.hasIsBeginning()) {
    isBeginningValue = v8::Boolean::New(isolate, impl.isBeginning());
    isBeginningHasValueOrDefault = true;
  } else {
    isBeginningValue = v8::Boolean::New(isolate, false);
    isBeginningHasValueOrDefault = true;
  }
  if (isBeginningHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), isBeginningValue))) {
    return false;
  }

  v8::Local<v8::Value> isDirectManipulationValue;
  bool isDirectManipulationHasValueOrDefault = false;
  if (impl.hasIsDirectManipulation()) {
    isDirectManipulationValue = v8::Boolean::New(isolate, impl.isDirectManipulation());
    isDirectManipulationHasValueOrDefault = true;
  } else {
    isDirectManipulationValue = v8::Boolean::New(isolate, false);
    isDirectManipulationHasValueOrDefault = true;
  }
  if (isDirectManipulationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), isDirectManipulationValue))) {
    return false;
  }

  v8::Local<v8::Value> isEndingValue;
  bool isEndingHasValueOrDefault = false;
  if (impl.hasIsEnding()) {
    isEndingValue = v8::Boolean::New(isolate, impl.isEnding());
    isEndingHasValueOrDefault = true;
  } else {
    isEndingValue = v8::Boolean::New(isolate, false);
    isEndingHasValueOrDefault = true;
  }
  if (isEndingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), isEndingValue))) {
    return false;
  }

  v8::Local<v8::Value> isInInertialPhaseValue;
  bool isInInertialPhaseHasValueOrDefault = false;
  if (impl.hasIsInInertialPhase()) {
    isInInertialPhaseValue = v8::Boolean::New(isolate, impl.isInInertialPhase());
    isInInertialPhaseHasValueOrDefault = true;
  } else {
    isInInertialPhaseValue = v8::Boolean::New(isolate, false);
    isInInertialPhaseHasValueOrDefault = true;
  }
  if (isInInertialPhaseHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[9].Get(isolate), isInInertialPhaseValue))) {
    return false;
  }

  v8::Local<v8::Value> positionXValue;
  bool positionXHasValueOrDefault = false;
  if (impl.hasPositionX()) {
    positionXValue = v8::Integer::New(isolate, impl.positionX());
    positionXHasValueOrDefault = true;
  } else {
    positionXValue = v8::Integer::New(isolate, 0);
    positionXHasValueOrDefault = true;
  }
  if (positionXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[10].Get(isolate), positionXValue))) {
    return false;
  }

  v8::Local<v8::Value> positionYValue;
  bool positionYHasValueOrDefault = false;
  if (impl.hasPositionY()) {
    positionYValue = v8::Integer::New(isolate, impl.positionY());
    positionYHasValueOrDefault = true;
  } else {
    positionYValue = v8::Integer::New(isolate, 0);
    positionYHasValueOrDefault = true;
  }
  if (positionYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[11].Get(isolate), positionYValue))) {
    return false;
  }

  v8::Local<v8::Value> shouldPropagateValue;
  bool shouldPropagateHasValueOrDefault = false;
  if (impl.hasShouldPropagate()) {
    shouldPropagateValue = v8::Boolean::New(isolate, impl.shouldPropagate());
    shouldPropagateHasValueOrDefault = true;
  } else {
    shouldPropagateValue = v8::Boolean::New(isolate, true);
    shouldPropagateHasValueOrDefault = true;
  }
  if (shouldPropagateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[12].Get(isolate), shouldPropagateValue))) {
    return false;
  }

  v8::Local<v8::Value> velocityXValue;
  bool velocityXHasValueOrDefault = false;
  if (impl.hasVelocityX()) {
    velocityXValue = v8::Number::New(isolate, impl.velocityX());
    velocityXHasValueOrDefault = true;
  } else {
    velocityXValue = v8::Number::New(isolate, 0);
    velocityXHasValueOrDefault = true;
  }
  if (velocityXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[13].Get(isolate), velocityXValue))) {
    return false;
  }

  v8::Local<v8::Value> velocityYValue;
  bool velocityYHasValueOrDefault = false;
  if (impl.hasVelocityY()) {
    velocityYValue = v8::Number::New(isolate, impl.velocityY());
    velocityYHasValueOrDefault = true;
  } else {
    velocityYValue = v8::Number::New(isolate, 0);
    velocityYHasValueOrDefault = true;
  }
  if (velocityYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[14].Get(isolate), velocityYValue))) {
    return false;
  }

  return true;
}

ScrollStateInit NativeValueTraits<ScrollStateInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollStateInit impl;
  V8ScrollStateInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
