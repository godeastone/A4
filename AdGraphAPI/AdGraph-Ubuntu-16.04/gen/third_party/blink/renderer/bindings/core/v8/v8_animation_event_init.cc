// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnimationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "animationName",
    "elapsedTime",
    "pseudoElement",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AnimationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AnimationEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> animationNameValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&animationNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (animationNameValue.IsEmpty() || animationNameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> animationNameCppValue = animationNameValue;
    if (!animationNameCppValue.Prepare(exceptionState))
      return;
    impl.setAnimationName(animationNameCppValue);
  }

  v8::Local<v8::Value> elapsedTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&elapsedTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (elapsedTimeValue.IsEmpty() || elapsedTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double elapsedTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, elapsedTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setElapsedTime(elapsedTimeCppValue);
  }

  v8::Local<v8::Value> pseudoElementValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&pseudoElementValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pseudoElementValue.IsEmpty() || pseudoElementValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pseudoElementCppValue = pseudoElementValue;
    if (!pseudoElementCppValue.Prepare(exceptionState))
      return;
    impl.setPseudoElement(pseudoElementCppValue);
  }
}

v8::Local<v8::Value> AnimationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnimationEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnimationEventInit(const AnimationEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> animationNameValue;
  bool animationNameHasValueOrDefault = false;
  if (impl.hasAnimationName()) {
    animationNameValue = V8String(isolate, impl.animationName());
    animationNameHasValueOrDefault = true;
  } else {
    animationNameValue = V8String(isolate, WTF::g_empty_string);
    animationNameHasValueOrDefault = true;
  }
  if (animationNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), animationNameValue))) {
    return false;
  }

  v8::Local<v8::Value> elapsedTimeValue;
  bool elapsedTimeHasValueOrDefault = false;
  if (impl.hasElapsedTime()) {
    elapsedTimeValue = v8::Number::New(isolate, impl.elapsedTime());
    elapsedTimeHasValueOrDefault = true;
  } else {
    elapsedTimeValue = v8::Number::New(isolate, 0);
    elapsedTimeHasValueOrDefault = true;
  }
  if (elapsedTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), elapsedTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> pseudoElementValue;
  bool pseudoElementHasValueOrDefault = false;
  if (impl.hasPseudoElement()) {
    pseudoElementValue = V8String(isolate, impl.pseudoElement());
    pseudoElementHasValueOrDefault = true;
  } else {
    pseudoElementValue = V8String(isolate, WTF::g_empty_string);
    pseudoElementHasValueOrDefault = true;
  }
  if (pseudoElementHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), pseudoElementValue))) {
    return false;
  }

  return true;
}

AnimationEventInit NativeValueTraits<AnimationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AnimationEventInit impl;
  V8AnimationEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
