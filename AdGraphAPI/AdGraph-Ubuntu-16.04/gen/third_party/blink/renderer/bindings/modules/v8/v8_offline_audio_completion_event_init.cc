// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_offline_audio_completion_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OfflineAudioCompletionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "renderedBuffer",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8OfflineAudioCompletionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, OfflineAudioCompletionEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): renderedBuffer.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8OfflineAudioCompletionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> renderedBufferValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&renderedBufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (renderedBufferValue.IsEmpty() || renderedBufferValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member renderedBuffer is undefined.");
    return;
  } else {
    AudioBuffer* renderedBufferCppValue = V8AudioBuffer::ToImplWithTypeCheck(isolate, renderedBufferValue);
    if (!renderedBufferCppValue) {
      exceptionState.ThrowTypeError("member renderedBuffer is not of type AudioBuffer.");
      return;
    }
    impl.setRenderedBuffer(renderedBufferCppValue);
  }
}

v8::Local<v8::Value> OfflineAudioCompletionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OfflineAudioCompletionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OfflineAudioCompletionEventInit(const OfflineAudioCompletionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8OfflineAudioCompletionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> renderedBufferValue;
  bool renderedBufferHasValueOrDefault = false;
  if (impl.hasRenderedBuffer()) {
    renderedBufferValue = ToV8(impl.renderedBuffer(), creationContext, isolate);
    renderedBufferHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (renderedBufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), renderedBufferValue))) {
    return false;
  }

  return true;
}

OfflineAudioCompletionEventInit NativeValueTraits<OfflineAudioCompletionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OfflineAudioCompletionEventInit impl;
  V8OfflineAudioCompletionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
