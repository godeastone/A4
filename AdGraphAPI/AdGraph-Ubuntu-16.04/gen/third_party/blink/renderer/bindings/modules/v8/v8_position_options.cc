// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_position_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PositionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "enableHighAccuracy",
    "maximumAge",
    "timeout",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PositionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PositionOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PositionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> enableHighAccuracyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&enableHighAccuracyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (enableHighAccuracyValue.IsEmpty() || enableHighAccuracyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool enableHighAccuracyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, enableHighAccuracyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEnableHighAccuracy(enableHighAccuracyCppValue);
  }

  v8::Local<v8::Value> maximumAgeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maximumAgeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maximumAgeValue.IsEmpty() || maximumAgeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t maximumAgeCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, maximumAgeValue, exceptionState, kClamp);
    if (exceptionState.HadException())
      return;
    impl.setMaximumAge(maximumAgeCppValue);
  }

  v8::Local<v8::Value> timeoutValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timeoutValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeoutValue.IsEmpty() || timeoutValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t timeoutCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, timeoutValue, exceptionState, kClamp);
    if (exceptionState.HadException())
      return;
    impl.setTimeout(timeoutCppValue);
  }
}

v8::Local<v8::Value> PositionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PositionOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PositionOptions(const PositionOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PositionOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> enableHighAccuracyValue;
  bool enableHighAccuracyHasValueOrDefault = false;
  if (impl.hasEnableHighAccuracy()) {
    enableHighAccuracyValue = v8::Boolean::New(isolate, impl.enableHighAccuracy());
    enableHighAccuracyHasValueOrDefault = true;
  } else {
    enableHighAccuracyValue = v8::Boolean::New(isolate, false);
    enableHighAccuracyHasValueOrDefault = true;
  }
  if (enableHighAccuracyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), enableHighAccuracyValue))) {
    return false;
  }

  v8::Local<v8::Value> maximumAgeValue;
  bool maximumAgeHasValueOrDefault = false;
  if (impl.hasMaximumAge()) {
    maximumAgeValue = v8::Integer::NewFromUnsigned(isolate, impl.maximumAge());
    maximumAgeHasValueOrDefault = true;
  } else {
    maximumAgeValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    maximumAgeHasValueOrDefault = true;
  }
  if (maximumAgeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maximumAgeValue))) {
    return false;
  }

  v8::Local<v8::Value> timeoutValue;
  bool timeoutHasValueOrDefault = false;
  if (impl.hasTimeout()) {
    timeoutValue = v8::Integer::NewFromUnsigned(isolate, impl.timeout());
    timeoutHasValueOrDefault = true;
  } else {
    timeoutValue = v8::Integer::NewFromUnsigned(isolate, 4294967295u);
    timeoutHasValueOrDefault = true;
  }
  if (timeoutHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), timeoutValue))) {
    return false;
  }

  return true;
}

PositionOptions NativeValueTraits<PositionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PositionOptions impl;
  V8PositionOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
