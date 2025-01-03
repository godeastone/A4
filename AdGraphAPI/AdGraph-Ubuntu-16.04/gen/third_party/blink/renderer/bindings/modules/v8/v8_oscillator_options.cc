// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_oscillator_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OscillatorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detune",
    "frequency",
    "periodicWave",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8OscillatorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, OscillatorOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8OscillatorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detuneValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detuneValue)) {
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
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&frequencyValue)) {
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

  v8::Local<v8::Value> periodicWaveValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&periodicWaveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (periodicWaveValue.IsEmpty() || periodicWaveValue->IsUndefined()) {
    // Do nothing.
  } else if (periodicWaveValue->IsNull()) {
    impl.setPeriodicWaveToNull();
  } else {
    PeriodicWave* periodicWaveCppValue = V8PeriodicWave::ToImplWithTypeCheck(isolate, periodicWaveValue);
    if (!periodicWaveCppValue) {
      exceptionState.ThrowTypeError("member periodicWave is not of type PeriodicWave.");
      return;
    }
    impl.setPeriodicWave(periodicWaveCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&typeValue)) {
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
        "sine",
        "square",
        "sawtooth",
        "triangle",
        "custom",
    };
    if (!IsValidEnum(typeCppValue, validValues, arraysize(validValues), "OscillatorType", exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> OscillatorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OscillatorOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OscillatorOptions(const OscillatorOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8OscillatorOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), detuneValue))) {
    return false;
  }

  v8::Local<v8::Value> frequencyValue;
  bool frequencyHasValueOrDefault = false;
  if (impl.hasFrequency()) {
    frequencyValue = v8::Number::New(isolate, impl.frequency());
    frequencyHasValueOrDefault = true;
  } else {
    frequencyValue = v8::Number::New(isolate, 440);
    frequencyHasValueOrDefault = true;
  }
  if (frequencyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), frequencyValue))) {
    return false;
  }

  v8::Local<v8::Value> periodicWaveValue;
  bool periodicWaveHasValueOrDefault = false;
  if (impl.hasPeriodicWave()) {
    periodicWaveValue = ToV8(impl.periodicWave(), creationContext, isolate);
    periodicWaveHasValueOrDefault = true;
  } else {
    periodicWaveValue = v8::Null(isolate);
    periodicWaveHasValueOrDefault = true;
  }
  if (periodicWaveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), periodicWaveValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    typeValue = V8String(isolate, "sine");
    typeHasValueOrDefault = true;
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

OscillatorOptions NativeValueTraits<OscillatorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OscillatorOptions impl;
  V8OscillatorOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
