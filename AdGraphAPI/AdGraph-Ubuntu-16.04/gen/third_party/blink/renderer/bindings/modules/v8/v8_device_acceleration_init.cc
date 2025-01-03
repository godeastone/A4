// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_acceleration_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DeviceAccelerationInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "x",
    "y",
    "z",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DeviceAccelerationInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DeviceAccelerationInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceAccelerationInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> xValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&xValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (xValue.IsEmpty() || xValue->IsUndefined()) {
    // Do nothing.
  } else if (xValue->IsNull()) {
    impl.setXToNull();
  } else {
    double xCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, xValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setX(xCppValue);
  }

  v8::Local<v8::Value> yValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&yValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (yValue.IsEmpty() || yValue->IsUndefined()) {
    // Do nothing.
  } else if (yValue->IsNull()) {
    impl.setYToNull();
  } else {
    double yCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, yValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setY(yCppValue);
  }

  v8::Local<v8::Value> zValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&zValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (zValue.IsEmpty() || zValue->IsUndefined()) {
    // Do nothing.
  } else if (zValue->IsNull()) {
    impl.setZToNull();
  } else {
    double zCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, zValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setZ(zCppValue);
  }
}

v8::Local<v8::Value> DeviceAccelerationInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DeviceAccelerationInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DeviceAccelerationInit(const DeviceAccelerationInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8DeviceAccelerationInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> xValue;
  bool xHasValueOrDefault = false;
  if (impl.hasX()) {
    xValue = v8::Number::New(isolate, impl.x());
    xHasValueOrDefault = true;
  } else {
    xValue = v8::Null(isolate);
    xHasValueOrDefault = true;
  }
  if (xHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), xValue))) {
    return false;
  }

  v8::Local<v8::Value> yValue;
  bool yHasValueOrDefault = false;
  if (impl.hasY()) {
    yValue = v8::Number::New(isolate, impl.y());
    yHasValueOrDefault = true;
  } else {
    yValue = v8::Null(isolate);
    yHasValueOrDefault = true;
  }
  if (yHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), yValue))) {
    return false;
  }

  v8::Local<v8::Value> zValue;
  bool zHasValueOrDefault = false;
  if (impl.hasZ()) {
    zValue = v8::Number::New(isolate, impl.z());
    zHasValueOrDefault = true;
  } else {
    zValue = v8::Null(isolate);
    zHasValueOrDefault = true;
  }
  if (zHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), zValue))) {
    return false;
  }

  return true;
}

DeviceAccelerationInit NativeValueTraits<DeviceAccelerationInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DeviceAccelerationInit impl;
  V8DeviceAccelerationInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
