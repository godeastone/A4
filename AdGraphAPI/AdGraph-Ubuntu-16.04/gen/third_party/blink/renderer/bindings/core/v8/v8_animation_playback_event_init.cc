// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_playback_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnimationPlaybackEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "currentTime",
    "timelineTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AnimationPlaybackEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AnimationPlaybackEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationPlaybackEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> currentTimeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&currentTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (currentTimeValue.IsEmpty() || currentTimeValue->IsUndefined()) {
    // Do nothing.
  } else if (currentTimeValue->IsNull()) {
    impl.setCurrentTimeToNull();
  } else {
    double currentTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, currentTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCurrentTime(currentTimeCppValue);
  }

  v8::Local<v8::Value> timelineTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&timelineTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timelineTimeValue.IsEmpty() || timelineTimeValue->IsUndefined()) {
    // Do nothing.
  } else if (timelineTimeValue->IsNull()) {
    impl.setTimelineTimeToNull();
  } else {
    double timelineTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, timelineTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTimelineTime(timelineTimeCppValue);
  }
}

v8::Local<v8::Value> AnimationPlaybackEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnimationPlaybackEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnimationPlaybackEventInit(const AnimationPlaybackEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationPlaybackEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> currentTimeValue;
  bool currentTimeHasValueOrDefault = false;
  if (impl.hasCurrentTime()) {
    currentTimeValue = v8::Number::New(isolate, impl.currentTime());
    currentTimeHasValueOrDefault = true;
  } else {
    currentTimeValue = v8::Null(isolate);
    currentTimeHasValueOrDefault = true;
  }
  if (currentTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), currentTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> timelineTimeValue;
  bool timelineTimeHasValueOrDefault = false;
  if (impl.hasTimelineTime()) {
    timelineTimeValue = v8::Number::New(isolate, impl.timelineTime());
    timelineTimeHasValueOrDefault = true;
  } else {
    timelineTimeValue = v8::Null(isolate);
    timelineTimeHasValueOrDefault = true;
  }
  if (timelineTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), timelineTimeValue))) {
    return false;
  }

  return true;
}

AnimationPlaybackEventInit NativeValueTraits<AnimationPlaybackEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AnimationPlaybackEventInit impl;
  V8AnimationPlaybackEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
