// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_wheel_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WheelEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "deltaMode",
    "deltaX",
    "deltaY",
    "deltaZ",
    "wheelDeltaX",
    "wheelDeltaY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8WheelEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WheelEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MouseEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8WheelEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deltaModeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&deltaModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaModeValue.IsEmpty() || deltaModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t deltaModeCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, deltaModeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setDeltaMode(deltaModeCppValue);
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

  v8::Local<v8::Value> deltaYValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&deltaYValue)) {
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

  v8::Local<v8::Value> deltaZValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&deltaZValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (deltaZValue.IsEmpty() || deltaZValue->IsUndefined()) {
    // Do nothing.
  } else {
    double deltaZCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, deltaZValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDeltaZ(deltaZCppValue);
  }

  v8::Local<v8::Value> wheelDeltaXValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&wheelDeltaXValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (wheelDeltaXValue.IsEmpty() || wheelDeltaXValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t wheelDeltaXCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, wheelDeltaXValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setWheelDeltaX(wheelDeltaXCppValue);
  }

  v8::Local<v8::Value> wheelDeltaYValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&wheelDeltaYValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (wheelDeltaYValue.IsEmpty() || wheelDeltaYValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t wheelDeltaYCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, wheelDeltaYValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setWheelDeltaY(wheelDeltaYCppValue);
  }
}

v8::Local<v8::Value> WheelEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WheelEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WheelEventInit(const WheelEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MouseEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8WheelEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> deltaModeValue;
  bool deltaModeHasValueOrDefault = false;
  if (impl.hasDeltaMode()) {
    deltaModeValue = v8::Integer::NewFromUnsigned(isolate, impl.deltaMode());
    deltaModeHasValueOrDefault = true;
  } else {
    deltaModeValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    deltaModeHasValueOrDefault = true;
  }
  if (deltaModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), deltaModeValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), deltaYValue))) {
    return false;
  }

  v8::Local<v8::Value> deltaZValue;
  bool deltaZHasValueOrDefault = false;
  if (impl.hasDeltaZ()) {
    deltaZValue = v8::Number::New(isolate, impl.deltaZ());
    deltaZHasValueOrDefault = true;
  } else {
    deltaZValue = v8::Number::New(isolate, 0);
    deltaZHasValueOrDefault = true;
  }
  if (deltaZHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), deltaZValue))) {
    return false;
  }

  v8::Local<v8::Value> wheelDeltaXValue;
  bool wheelDeltaXHasValueOrDefault = false;
  if (impl.hasWheelDeltaX()) {
    wheelDeltaXValue = v8::Integer::New(isolate, impl.wheelDeltaX());
    wheelDeltaXHasValueOrDefault = true;
  } else {
    wheelDeltaXValue = v8::Integer::New(isolate, 0);
    wheelDeltaXHasValueOrDefault = true;
  }
  if (wheelDeltaXHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), wheelDeltaXValue))) {
    return false;
  }

  v8::Local<v8::Value> wheelDeltaYValue;
  bool wheelDeltaYHasValueOrDefault = false;
  if (impl.hasWheelDeltaY()) {
    wheelDeltaYValue = v8::Integer::New(isolate, impl.wheelDeltaY());
    wheelDeltaYHasValueOrDefault = true;
  } else {
    wheelDeltaYValue = v8::Integer::New(isolate, 0);
    wheelDeltaYHasValueOrDefault = true;
  }
  if (wheelDeltaYHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), wheelDeltaYValue))) {
    return false;
  }

  return true;
}

WheelEventInit NativeValueTraits<WheelEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WheelEventInit impl;
  V8WheelEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
