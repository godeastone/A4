// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_biquad_filter_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BiquadFilterOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "Q",
    "detune",
    "frequency",
    "gain",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BiquadFilterOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BiquadFilterOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8BiquadFilterOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> QValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&QValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (QValue.IsEmpty() || QValue->IsUndefined()) {
    // Do nothing.
  } else {
    float QCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, QValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setQ(QCppValue);
  }

  v8::Local<v8::Value> detuneValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&detuneValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (detuneValue.IsEmpty() || detuneValue->IsUndefined()) {
    // Do nothing.
  } else {
    float detuneCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, detuneValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDetune(detuneCppValue);
  }

  v8::Local<v8::Value> frequencyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&frequencyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (frequencyValue.IsEmpty() || frequencyValue->IsUndefined()) {
    // Do nothing.
  } else {
    float frequencyCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, frequencyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFrequency(frequencyCppValue);
  }

  v8::Local<v8::Value> gainValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&gainValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (gainValue.IsEmpty() || gainValue->IsUndefined()) {
    // Do nothing.
  } else {
    float gainCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, gainValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setGain(gainCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "lowpass",
        "highpass",
        "bandpass",
        "lowshelf",
        "highshelf",
        "peaking",
        "notch",
        "allpass",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "BiquadFilterType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> BiquadFilterOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BiquadFilterOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BiquadFilterOptions(const BiquadFilterOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BiquadFilterOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> QValue;
  bool QHasValueOrDefault = false;
  if (impl.hasQ()) {
    QValue = v8::Number::New(isolate, impl.Q());
    QHasValueOrDefault = true;
  } else {
    QValue = v8::Number::New(isolate, 1);
    QHasValueOrDefault = true;
  }
  if (QHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), QValue))) {
    return false;
  }

  v8::Local<v8::Value> detuneValue;
  bool detuneHasValueOrDefault = false;
  if (impl.hasDetune()) {
    detuneValue = v8::Number::New(isolate, impl.detune());
    detuneHasValueOrDefault = true;
  } else {
    detuneValue = v8::Number::New(isolate, 0);
    detuneHasValueOrDefault = true;
  }
  if (detuneHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), detuneValue))) {
    return false;
  }

  v8::Local<v8::Value> frequencyValue;
  bool frequencyHasValueOrDefault = false;
  if (impl.hasFrequency()) {
    frequencyValue = v8::Number::New(isolate, impl.frequency());
    frequencyHasValueOrDefault = true;
  } else {
    frequencyValue = v8::Number::New(isolate, 350);
    frequencyHasValueOrDefault = true;
  }
  if (frequencyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), frequencyValue))) {
    return false;
  }

  v8::Local<v8::Value> gainValue;
  bool gainHasValueOrDefault = false;
  if (impl.hasGain()) {
    gainValue = v8::Number::New(isolate, impl.gain());
    gainHasValueOrDefault = true;
  } else {
    gainValue = v8::Number::New(isolate, 0);
    gainHasValueOrDefault = true;
  }
  if (gainHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), gainValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    typeValue = V8String(isolate, "lowpass");
    typeHasValueOrDefault = true;
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

BiquadFilterOptions NativeValueTraits<BiquadFilterOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BiquadFilterOptions impl;
  V8BiquadFilterOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
