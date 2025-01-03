// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8EventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bubbles",
    "cancelable",
    "composed",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8EventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, EventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8EventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bubblesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bubblesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bubblesValue.IsEmpty() || bubblesValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool bubblesCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, bubblesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setBubbles(bubblesCppValue);
  }

  v8::Local<v8::Value> cancelableValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cancelableValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (cancelableValue.IsEmpty() || cancelableValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool cancelableCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, cancelableValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCancelable(cancelableCppValue);
  }

  v8::Local<v8::Value> composedValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&composedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (composedValue.IsEmpty() || composedValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool composedCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, composedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setComposed(composedCppValue);
  }
}

v8::Local<v8::Value> EventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8EventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8EventInit(const EventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8EventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bubblesValue;
  bool bubblesHasValueOrDefault = false;
  if (impl.hasBubbles()) {
    bubblesValue = v8::Boolean::New(isolate, impl.bubbles());
    bubblesHasValueOrDefault = true;
  } else {
    bubblesValue = v8::Boolean::New(isolate, false);
    bubblesHasValueOrDefault = true;
  }
  if (bubblesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bubblesValue))) {
    return false;
  }

  v8::Local<v8::Value> cancelableValue;
  bool cancelableHasValueOrDefault = false;
  if (impl.hasCancelable()) {
    cancelableValue = v8::Boolean::New(isolate, impl.cancelable());
    cancelableHasValueOrDefault = true;
  } else {
    cancelableValue = v8::Boolean::New(isolate, false);
    cancelableHasValueOrDefault = true;
  }
  if (cancelableHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), cancelableValue))) {
    return false;
  }

  v8::Local<v8::Value> composedValue;
  bool composedHasValueOrDefault = false;
  if (impl.hasComposed()) {
    composedValue = v8::Boolean::New(isolate, impl.composed());
    composedHasValueOrDefault = true;
  } else {
    composedValue = v8::Boolean::New(isolate, false);
    composedHasValueOrDefault = true;
  }
  if (composedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), composedValue))) {
    return false;
  }

  return true;
}

EventInit NativeValueTraits<EventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  EventInit impl;
  V8EventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
