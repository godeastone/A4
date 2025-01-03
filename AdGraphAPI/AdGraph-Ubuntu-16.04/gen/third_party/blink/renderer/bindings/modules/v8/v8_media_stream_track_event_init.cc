// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaStreamTrackEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "track",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaStreamTrackEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaStreamTrackEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): track.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamTrackEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> trackValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&trackValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (trackValue.IsEmpty() || trackValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member track is undefined.");
    return;
  } else {
    MediaStreamTrack* trackCppValue = V8MediaStreamTrack::ToImplWithTypeCheck(isolate, trackValue);
    if (!trackCppValue) {
      exceptionState.ThrowTypeError("member track is not of type MediaStreamTrack.");
      return;
    }
    impl.setTrack(trackCppValue);
  }
}

v8::Local<v8::Value> MediaStreamTrackEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaStreamTrackEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaStreamTrackEventInit(const MediaStreamTrackEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaStreamTrackEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> trackValue;
  bool trackHasValueOrDefault = false;
  if (impl.hasTrack()) {
    trackValue = ToV8(impl.track(), creationContext, isolate);
    trackHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (trackHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), trackValue))) {
    return false;
  }

  return true;
}

MediaStreamTrackEventInit NativeValueTraits<MediaStreamTrackEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaStreamTrackEventInit impl;
  V8MediaStreamTrackEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
