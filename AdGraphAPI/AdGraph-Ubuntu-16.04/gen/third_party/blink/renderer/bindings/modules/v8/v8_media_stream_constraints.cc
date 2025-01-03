// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_constraints.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaStreamConstraintsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audio",
    "video",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaStreamConstraints::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaStreamConstraints& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamConstraintsKeys(isolate);
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
    BooleanOrMediaTrackConstraints audioCppValue;
    V8BooleanOrMediaTrackConstraints::ToImpl(isolate, audioValue, audioCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
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
    BooleanOrMediaTrackConstraints videoCppValue;
    V8BooleanOrMediaTrackConstraints::ToImpl(isolate, videoValue, videoCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setVideo(videoCppValue);
  }
}

v8::Local<v8::Value> MediaStreamConstraints::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaStreamConstraints(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaStreamConstraints(const MediaStreamConstraints& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamConstraintsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audioValue;
  bool audioHasValueOrDefault = false;
  if (impl.hasAudio()) {
    audioValue = ToV8(impl.audio(), creationContext, isolate);
    audioHasValueOrDefault = true;
  } else {
    audioValue = ToV8(BooleanOrMediaTrackConstraints::FromBoolean(false), creationContext, isolate);
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
  } else {
    videoValue = ToV8(BooleanOrMediaTrackConstraints::FromBoolean(false), creationContext, isolate);
    videoHasValueOrDefault = true;
  }
  if (videoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), videoValue))) {
    return false;
  }

  return true;
}

MediaStreamConstraints NativeValueTraits<MediaStreamConstraints>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaStreamConstraints impl;
  V8MediaStreamConstraints::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
