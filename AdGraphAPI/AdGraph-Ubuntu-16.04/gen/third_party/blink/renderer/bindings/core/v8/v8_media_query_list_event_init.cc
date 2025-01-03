// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaQueryListEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "matches",
    "media",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaQueryListEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaQueryListEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MediaQueryListEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> matchesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&matchesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (matchesValue.IsEmpty() || matchesValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool matchesCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, matchesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMatches(matchesCppValue);
  }

  v8::Local<v8::Value> mediaValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mediaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediaValue.IsEmpty() || mediaValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mediaCppValue = mediaValue;
    if (!mediaCppValue.Prepare(exceptionState))
      return;
    impl.setMedia(mediaCppValue);
  }
}

v8::Local<v8::Value> MediaQueryListEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaQueryListEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaQueryListEventInit(const MediaQueryListEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaQueryListEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> matchesValue;
  bool matchesHasValueOrDefault = false;
  if (impl.hasMatches()) {
    matchesValue = v8::Boolean::New(isolate, impl.matches());
    matchesHasValueOrDefault = true;
  } else {
    matchesValue = v8::Boolean::New(isolate, false);
    matchesHasValueOrDefault = true;
  }
  if (matchesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), matchesValue))) {
    return false;
  }

  v8::Local<v8::Value> mediaValue;
  bool mediaHasValueOrDefault = false;
  if (impl.hasMedia()) {
    mediaValue = V8String(isolate, impl.media());
    mediaHasValueOrDefault = true;
  } else {
    mediaValue = V8String(isolate, WTF::g_empty_string);
    mediaHasValueOrDefault = true;
  }
  if (mediaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), mediaValue))) {
    return false;
  }

  return true;
}

MediaQueryListEventInit NativeValueTraits<MediaQueryListEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaQueryListEventInit impl;
  V8MediaQueryListEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
