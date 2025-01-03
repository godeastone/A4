// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer_source_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioBufferSourceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "detune",
    "loop",
    "loopEnd",
    "loopStart",
    "playbackRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioBufferSourceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioBufferSourceOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioBufferSourceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bufferValue.IsEmpty() || bufferValue->IsUndefined()) {
    // Do nothing.
  } else if (bufferValue->IsNull()) {
    impl.setBufferToNull();
  } else {
    AudioBuffer* bufferCppValue = V8AudioBuffer::ToImplWithTypeCheck(isolate, bufferValue);
    if (!bufferCppValue) {
      exceptionState.ThrowTypeError("member buffer is not of type AudioBuffer.");
      return;
    }
    impl.setBuffer(bufferCppValue);
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

  v8::Local<v8::Value> loopValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&loopValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (loopValue.IsEmpty() || loopValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool loopCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, loopValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLoop(loopCppValue);
  }

  v8::Local<v8::Value> loopEndValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&loopEndValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (loopEndValue.IsEmpty() || loopEndValue->IsUndefined()) {
    // Do nothing.
  } else {
    double loopEndCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, loopEndValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLoopEnd(loopEndCppValue);
  }

  v8::Local<v8::Value> loopStartValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&loopStartValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (loopStartValue.IsEmpty() || loopStartValue->IsUndefined()) {
    // Do nothing.
  } else {
    double loopStartCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, loopStartValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLoopStart(loopStartCppValue);
  }

  v8::Local<v8::Value> playbackRateValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&playbackRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (playbackRateValue.IsEmpty() || playbackRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    float playbackRateCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, playbackRateValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPlaybackRate(playbackRateCppValue);
  }
}

v8::Local<v8::Value> AudioBufferSourceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioBufferSourceOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioBufferSourceOptions(const AudioBufferSourceOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioBufferSourceOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bufferValue;
  bool bufferHasValueOrDefault = false;
  if (impl.hasBuffer()) {
    bufferValue = ToV8(impl.buffer(), creationContext, isolate);
    bufferHasValueOrDefault = true;
  } else {
    bufferValue = v8::Null(isolate);
    bufferHasValueOrDefault = true;
  }
  if (bufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bufferValue))) {
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

  v8::Local<v8::Value> loopValue;
  bool loopHasValueOrDefault = false;
  if (impl.hasLoop()) {
    loopValue = v8::Boolean::New(isolate, impl.loop());
    loopHasValueOrDefault = true;
  } else {
    loopValue = v8::Boolean::New(isolate, false);
    loopHasValueOrDefault = true;
  }
  if (loopHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), loopValue))) {
    return false;
  }

  v8::Local<v8::Value> loopEndValue;
  bool loopEndHasValueOrDefault = false;
  if (impl.hasLoopEnd()) {
    loopEndValue = v8::Number::New(isolate, impl.loopEnd());
    loopEndHasValueOrDefault = true;
  } else {
    loopEndValue = v8::Number::New(isolate, 0);
    loopEndHasValueOrDefault = true;
  }
  if (loopEndHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), loopEndValue))) {
    return false;
  }

  v8::Local<v8::Value> loopStartValue;
  bool loopStartHasValueOrDefault = false;
  if (impl.hasLoopStart()) {
    loopStartValue = v8::Number::New(isolate, impl.loopStart());
    loopStartHasValueOrDefault = true;
  } else {
    loopStartValue = v8::Number::New(isolate, 0);
    loopStartHasValueOrDefault = true;
  }
  if (loopStartHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), loopStartValue))) {
    return false;
  }

  v8::Local<v8::Value> playbackRateValue;
  bool playbackRateHasValueOrDefault = false;
  if (impl.hasPlaybackRate()) {
    playbackRateValue = v8::Number::New(isolate, impl.playbackRate());
    playbackRateHasValueOrDefault = true;
  } else {
    playbackRateValue = v8::Number::New(isolate, 1);
    playbackRateHasValueOrDefault = true;
  }
  if (playbackRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), playbackRateValue))) {
    return false;
  }

  return true;
}

AudioBufferSourceOptions NativeValueTraits<AudioBufferSourceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioBufferSourceOptions impl;
  V8AudioBufferSourceOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
