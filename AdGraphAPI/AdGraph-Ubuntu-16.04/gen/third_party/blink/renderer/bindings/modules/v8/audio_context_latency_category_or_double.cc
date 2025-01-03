// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/audio_context_latency_category_or_double.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

AudioContextLatencyCategoryOrDouble::AudioContextLatencyCategoryOrDouble() : type_(SpecificType::kNone) {}

const String& AudioContextLatencyCategoryOrDouble::GetAsAudioContextLatencyCategory() const {
  DCHECK(IsAudioContextLatencyCategory());
  return audio_context_latency_category_;
}

void AudioContextLatencyCategoryOrDouble::SetAudioContextLatencyCategory(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "balanced",
      "interactive",
      "playback",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "AudioContextLatencyCategory", exceptionState)) {
    NOTREACHED();
    return;
  }
  audio_context_latency_category_ = value;
  type_ = SpecificType::kAudioContextLatencyCategory;
}

AudioContextLatencyCategoryOrDouble AudioContextLatencyCategoryOrDouble::FromAudioContextLatencyCategory(const String& value) {
  AudioContextLatencyCategoryOrDouble container;
  container.SetAudioContextLatencyCategory(value);
  return container;
}

double AudioContextLatencyCategoryOrDouble::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void AudioContextLatencyCategoryOrDouble::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

AudioContextLatencyCategoryOrDouble AudioContextLatencyCategoryOrDouble::FromDouble(double value) {
  AudioContextLatencyCategoryOrDouble container;
  container.SetDouble(value);
  return container;
}

AudioContextLatencyCategoryOrDouble::AudioContextLatencyCategoryOrDouble(const AudioContextLatencyCategoryOrDouble&) = default;
AudioContextLatencyCategoryOrDouble::~AudioContextLatencyCategoryOrDouble() = default;
AudioContextLatencyCategoryOrDouble& AudioContextLatencyCategoryOrDouble::operator=(const AudioContextLatencyCategoryOrDouble&) = default;

void AudioContextLatencyCategoryOrDouble::Trace(blink::Visitor* visitor) {
}

void V8AudioContextLatencyCategoryOrDouble::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioContextLatencyCategoryOrDouble& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (v8Value->IsNumber()) {
    double cppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetDouble(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "balanced",
        "interactive",
        "playback",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "AudioContextLatencyCategory", exceptionState))
      return;
    impl.SetAudioContextLatencyCategory(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const AudioContextLatencyCategoryOrDouble& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case AudioContextLatencyCategoryOrDouble::SpecificType::kNone:
      return v8::Null(isolate);
    case AudioContextLatencyCategoryOrDouble::SpecificType::kAudioContextLatencyCategory:
      return V8String(isolate, impl.GetAsAudioContextLatencyCategory());
    case AudioContextLatencyCategoryOrDouble::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

AudioContextLatencyCategoryOrDouble NativeValueTraits<AudioContextLatencyCategoryOrDouble>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioContextLatencyCategoryOrDouble impl;
  V8AudioContextLatencyCategoryOrDouble::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
