// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_analyser_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnalyserOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fftSize",
    "maxDecibels",
    "minDecibels",
    "smoothingTimeConstant",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AnalyserOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AnalyserOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AnalyserOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fftSizeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fftSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fftSizeValue.IsEmpty() || fftSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t fftSizeCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, fftSizeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setFftSize(fftSizeCppValue);
  }

  v8::Local<v8::Value> maxDecibelsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maxDecibelsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxDecibelsValue.IsEmpty() || maxDecibelsValue->IsUndefined()) {
    // Do nothing.
  } else {
    double maxDecibelsCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, maxDecibelsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMaxDecibels(maxDecibelsCppValue);
  }

  v8::Local<v8::Value> minDecibelsValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&minDecibelsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (minDecibelsValue.IsEmpty() || minDecibelsValue->IsUndefined()) {
    // Do nothing.
  } else {
    double minDecibelsCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, minDecibelsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMinDecibels(minDecibelsCppValue);
  }

  v8::Local<v8::Value> smoothingTimeConstantValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&smoothingTimeConstantValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (smoothingTimeConstantValue.IsEmpty() || smoothingTimeConstantValue->IsUndefined()) {
    // Do nothing.
  } else {
    double smoothingTimeConstantCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, smoothingTimeConstantValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSmoothingTimeConstant(smoothingTimeConstantCppValue);
  }
}

v8::Local<v8::Value> AnalyserOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnalyserOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnalyserOptions(const AnalyserOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnalyserOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fftSizeValue;
  bool fftSizeHasValueOrDefault = false;
  if (impl.hasFftSize()) {
    fftSizeValue = v8::Integer::NewFromUnsigned(isolate, impl.fftSize());
    fftSizeHasValueOrDefault = true;
  } else {
    fftSizeValue = v8::Integer::NewFromUnsigned(isolate, 2048u);
    fftSizeHasValueOrDefault = true;
  }
  if (fftSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), fftSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> maxDecibelsValue;
  bool maxDecibelsHasValueOrDefault = false;
  if (impl.hasMaxDecibels()) {
    maxDecibelsValue = v8::Number::New(isolate, impl.maxDecibels());
    maxDecibelsHasValueOrDefault = true;
  } else {
    maxDecibelsValue = v8::Number::New(isolate, -30);
    maxDecibelsHasValueOrDefault = true;
  }
  if (maxDecibelsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maxDecibelsValue))) {
    return false;
  }

  v8::Local<v8::Value> minDecibelsValue;
  bool minDecibelsHasValueOrDefault = false;
  if (impl.hasMinDecibels()) {
    minDecibelsValue = v8::Number::New(isolate, impl.minDecibels());
    minDecibelsHasValueOrDefault = true;
  } else {
    minDecibelsValue = v8::Number::New(isolate, -100);
    minDecibelsHasValueOrDefault = true;
  }
  if (minDecibelsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), minDecibelsValue))) {
    return false;
  }

  v8::Local<v8::Value> smoothingTimeConstantValue;
  bool smoothingTimeConstantHasValueOrDefault = false;
  if (impl.hasSmoothingTimeConstant()) {
    smoothingTimeConstantValue = v8::Number::New(isolate, impl.smoothingTimeConstant());
    smoothingTimeConstantHasValueOrDefault = true;
  } else {
    smoothingTimeConstantValue = v8::Number::New(isolate, 0.8);
    smoothingTimeConstantHasValueOrDefault = true;
  }
  if (smoothingTimeConstantHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), smoothingTimeConstantValue))) {
    return false;
  }

  return true;
}

AnalyserOptions NativeValueTraits<AnalyserOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AnalyserOptions impl;
  V8AnalyserOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
