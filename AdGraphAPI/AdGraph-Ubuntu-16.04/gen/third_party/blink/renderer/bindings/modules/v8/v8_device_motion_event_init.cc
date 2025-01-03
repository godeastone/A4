// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_acceleration_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_rotation_rate_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DeviceMotionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "acceleration",
    "accelerationIncludingGravity",
    "interval",
    "rotationRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DeviceMotionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DeviceMotionEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceMotionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> accelerationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&accelerationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (accelerationValue.IsEmpty() || accelerationValue->IsUndefined()) {
    // Do nothing.
  } else if (accelerationValue->IsNull()) {
    impl.setAccelerationToNull();
  } else {
    DeviceAccelerationInit accelerationCppValue;
    V8DeviceAccelerationInit::ToImpl(isolate, accelerationValue, accelerationCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAcceleration(accelerationCppValue);
  }

  v8::Local<v8::Value> accelerationIncludingGravityValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&accelerationIncludingGravityValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (accelerationIncludingGravityValue.IsEmpty() || accelerationIncludingGravityValue->IsUndefined()) {
    // Do nothing.
  } else if (accelerationIncludingGravityValue->IsNull()) {
    impl.setAccelerationIncludingGravityToNull();
  } else {
    DeviceAccelerationInit accelerationIncludingGravityCppValue;
    V8DeviceAccelerationInit::ToImpl(isolate, accelerationIncludingGravityValue, accelerationIncludingGravityCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAccelerationIncludingGravity(accelerationIncludingGravityCppValue);
  }

  v8::Local<v8::Value> intervalValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&intervalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (intervalValue.IsEmpty() || intervalValue->IsUndefined()) {
    // Do nothing.
  } else {
    double intervalCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, intervalValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setInterval(intervalCppValue);
  }

  v8::Local<v8::Value> rotationRateValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&rotationRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rotationRateValue.IsEmpty() || rotationRateValue->IsUndefined()) {
    // Do nothing.
  } else if (rotationRateValue->IsNull()) {
    impl.setRotationRateToNull();
  } else {
    DeviceRotationRateInit rotationRateCppValue;
    V8DeviceRotationRateInit::ToImpl(isolate, rotationRateValue, rotationRateCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRotationRate(rotationRateCppValue);
  }
}

v8::Local<v8::Value> DeviceMotionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DeviceMotionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DeviceMotionEventInit(const DeviceMotionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceMotionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> accelerationValue;
  bool accelerationHasValueOrDefault = false;
  if (impl.hasAcceleration()) {
    accelerationValue = ToV8(impl.acceleration(), creationContext, isolate);
    accelerationHasValueOrDefault = true;
  } else {
    accelerationValue = v8::Null(isolate);
    accelerationHasValueOrDefault = true;
  }
  if (accelerationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), accelerationValue))) {
    return false;
  }

  v8::Local<v8::Value> accelerationIncludingGravityValue;
  bool accelerationIncludingGravityHasValueOrDefault = false;
  if (impl.hasAccelerationIncludingGravity()) {
    accelerationIncludingGravityValue = ToV8(impl.accelerationIncludingGravity(), creationContext, isolate);
    accelerationIncludingGravityHasValueOrDefault = true;
  } else {
    accelerationIncludingGravityValue = v8::Null(isolate);
    accelerationIncludingGravityHasValueOrDefault = true;
  }
  if (accelerationIncludingGravityHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), accelerationIncludingGravityValue))) {
    return false;
  }

  v8::Local<v8::Value> intervalValue;
  bool intervalHasValueOrDefault = false;
  if (impl.hasInterval()) {
    intervalValue = v8::Number::New(isolate, impl.interval());
    intervalHasValueOrDefault = true;
  } else {
    intervalValue = v8::Number::New(isolate, 0);
    intervalHasValueOrDefault = true;
  }
  if (intervalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), intervalValue))) {
    return false;
  }

  v8::Local<v8::Value> rotationRateValue;
  bool rotationRateHasValueOrDefault = false;
  if (impl.hasRotationRate()) {
    rotationRateValue = ToV8(impl.rotationRate(), creationContext, isolate);
    rotationRateHasValueOrDefault = true;
  } else {
    rotationRateValue = v8::Null(isolate);
    rotationRateHasValueOrDefault = true;
  }
  if (rotationRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), rotationRateValue))) {
    return false;
  }

  return true;
}

DeviceMotionEventInit NativeValueTraits<DeviceMotionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DeviceMotionEventInit impl;
  V8DeviceMotionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
