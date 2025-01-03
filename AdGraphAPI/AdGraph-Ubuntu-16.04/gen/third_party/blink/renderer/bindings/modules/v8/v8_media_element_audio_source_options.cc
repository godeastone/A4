// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaElementAudioSourceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "mediaElement",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaElementAudioSourceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaElementAudioSourceOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): mediaElement.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaElementAudioSourceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mediaElementValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&mediaElementValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediaElementValue.IsEmpty() || mediaElementValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member mediaElement is undefined.");
    return;
  } else {
    HTMLMediaElement* mediaElementCppValue = V8HTMLMediaElement::ToImplWithTypeCheck(isolate, mediaElementValue);
    if (!mediaElementCppValue) {
      exceptionState.ThrowTypeError("member mediaElement is not of type HTMLMediaElement.");
      return;
    }
    impl.setMediaElement(mediaElementCppValue);
  }
}

v8::Local<v8::Value> MediaElementAudioSourceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaElementAudioSourceOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaElementAudioSourceOptions(const MediaElementAudioSourceOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaElementAudioSourceOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> mediaElementValue;
  bool mediaElementHasValueOrDefault = false;
  if (impl.hasMediaElement()) {
    mediaElementValue = ToV8(impl.mediaElement(), creationContext, isolate);
    mediaElementHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (mediaElementHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), mediaElementValue))) {
    return false;
  }

  return true;
}

MediaElementAudioSourceOptions NativeValueTraits<MediaElementAudioSourceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaElementAudioSourceOptions impl;
  V8MediaElementAudioSourceOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
