// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_processing_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioProcessingEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "inputBuffer",
    "outputBuffer",
    "playbackTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioProcessingEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioProcessingEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): inputBuffer, outputBuffer, playbackTime.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioProcessingEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> inputBufferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&inputBufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (inputBufferValue.IsEmpty() || inputBufferValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member inputBuffer is undefined.");
    return;
  } else {
    AudioBuffer* inputBufferCppValue = V8AudioBuffer::ToImplWithTypeCheck(isolate, inputBufferValue);
    if (!inputBufferCppValue) {
      exceptionState.ThrowTypeError("member inputBuffer is not of type AudioBuffer.");
      return;
    }
    impl.setInputBuffer(inputBufferCppValue);
  }

  v8::Local<v8::Value> outputBufferValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&outputBufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (outputBufferValue.IsEmpty() || outputBufferValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member outputBuffer is undefined.");
    return;
  } else {
    AudioBuffer* outputBufferCppValue = V8AudioBuffer::ToImplWithTypeCheck(isolate, outputBufferValue);
    if (!outputBufferCppValue) {
      exceptionState.ThrowTypeError("member outputBuffer is not of type AudioBuffer.");
      return;
    }
    impl.setOutputBuffer(outputBufferCppValue);
  }

  v8::Local<v8::Value> playbackTimeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&playbackTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (playbackTimeValue.IsEmpty() || playbackTimeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member playbackTime is undefined.");
    return;
  } else {
    double playbackTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, playbackTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPlaybackTime(playbackTimeCppValue);
  }
}

v8::Local<v8::Value> AudioProcessingEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioProcessingEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioProcessingEventInit(const AudioProcessingEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AudioProcessingEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> inputBufferValue;
  bool inputBufferHasValueOrDefault = false;
  if (impl.hasInputBuffer()) {
    inputBufferValue = ToV8(impl.inputBuffer(), creationContext, isolate);
    inputBufferHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (inputBufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), inputBufferValue))) {
    return false;
  }

  v8::Local<v8::Value> outputBufferValue;
  bool outputBufferHasValueOrDefault = false;
  if (impl.hasOutputBuffer()) {
    outputBufferValue = ToV8(impl.outputBuffer(), creationContext, isolate);
    outputBufferHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (outputBufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), outputBufferValue))) {
    return false;
  }

  v8::Local<v8::Value> playbackTimeValue;
  bool playbackTimeHasValueOrDefault = false;
  if (impl.hasPlaybackTime()) {
    playbackTimeValue = v8::Number::New(isolate, impl.playbackTime());
    playbackTimeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (playbackTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), playbackTimeValue))) {
    return false;
  }

  return true;
}

AudioProcessingEventInit NativeValueTraits<AudioProcessingEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioProcessingEventInit impl;
  V8AudioProcessingEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
