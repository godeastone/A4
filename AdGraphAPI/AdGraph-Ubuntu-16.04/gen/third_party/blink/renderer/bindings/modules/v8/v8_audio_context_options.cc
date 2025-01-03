// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_context_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioContextOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "latencyHint",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioContextOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioContextOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioContextOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> latencyHintValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&latencyHintValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (latencyHintValue.IsEmpty() || latencyHintValue->IsUndefined()) {
    // Do nothing.
  } else {
    AudioContextLatencyCategoryOrDouble latencyHintCppValue;
    V8AudioContextLatencyCategoryOrDouble::ToImpl(isolate, latencyHintValue, latencyHintCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLatencyHint(latencyHintCppValue);
  }
}

v8::Local<v8::Value> AudioContextOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioContextOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioContextOptions(const AudioContextOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioContextOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> latencyHintValue;
  bool latencyHintHasValueOrDefault = false;
  if (impl.hasLatencyHint()) {
    latencyHintValue = ToV8(impl.latencyHint(), creationContext, isolate);
    latencyHintHasValueOrDefault = true;
  } else {
    latencyHintValue = ToV8(AudioContextLatencyCategoryOrDouble::FromAudioContextLatencyCategory("interactive"), creationContext, isolate);
    latencyHintHasValueOrDefault = true;
  }
  if (latencyHintHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), latencyHintValue))) {
    return false;
  }

  return true;
}

AudioContextOptions NativeValueTraits<AudioContextOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioContextOptions impl;
  V8AudioContextOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
