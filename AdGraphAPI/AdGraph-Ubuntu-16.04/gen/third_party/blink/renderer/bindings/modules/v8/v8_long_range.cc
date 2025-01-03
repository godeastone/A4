// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_long_range.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8LongRangeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "max",
    "min",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8LongRange::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, LongRange& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8LongRangeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> maxValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&maxValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxValue.IsEmpty() || maxValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t maxCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, maxValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMax(maxCppValue);
  }

  v8::Local<v8::Value> minValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&minValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (minValue.IsEmpty() || minValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t minCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, minValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMin(minCppValue);
  }
}

v8::Local<v8::Value> LongRange::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8LongRange(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8LongRange(const LongRange& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8LongRangeKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> maxValue;
  bool maxHasValueOrDefault = false;
  if (impl.hasMax()) {
    maxValue = v8::Integer::New(isolate, impl.max());
    maxHasValueOrDefault = true;
  }
  if (maxHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), maxValue))) {
    return false;
  }

  v8::Local<v8::Value> minValue;
  bool minHasValueOrDefault = false;
  if (impl.hasMin()) {
    minValue = v8::Integer::New(isolate, impl.min());
    minHasValueOrDefault = true;
  }
  if (minHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), minValue))) {
    return false;
  }

  return true;
}

LongRange NativeValueTraits<LongRange>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LongRange impl;
  V8LongRange::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
