// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_configuration.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audio",
    "video",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audioValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audioValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (audioValue.IsEmpty() || audioValue->IsUndefined()) {
    // Do nothing.
  } else {
    AudioConfiguration audioCppValue;
    V8AudioConfiguration::ToImpl(isolate, audioValue, audioCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAudio(audioCppValue);
  }

  v8::Local<v8::Value> videoValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&videoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (videoValue.IsEmpty() || videoValue->IsUndefined()) {
    // Do nothing.
  } else {
    VideoConfiguration videoCppValue;
    V8VideoConfiguration::ToImpl(isolate, videoValue, videoCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVideo(videoCppValue);
  }
}

v8::Local<v8::Value> MediaConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaConfiguration(const MediaConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audioValue;
  bool audioHasValueOrDefault = false;
  if (impl.hasAudio()) {
    audioValue = ToV8(impl.audio(), creationContext, isolate);
    audioHasValueOrDefault = true;
  }
  if (audioHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), audioValue))) {
    return false;
  }

  v8::Local<v8::Value> videoValue;
  bool videoHasValueOrDefault = false;
  if (impl.hasVideo()) {
    videoValue = ToV8(impl.video(), creationContext, isolate);
    videoHasValueOrDefault = true;
  }
  if (videoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), videoValue))) {
    return false;
  }

  return true;
}

MediaConfiguration NativeValueTraits<MediaConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaConfiguration impl;
  V8MediaConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
