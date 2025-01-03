// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_add_event_listener_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_listener_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AddEventListenerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "once",
    "passive",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AddEventListenerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AddEventListenerOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventListenerOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8AddEventListenerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> onceValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&onceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (onceValue.IsEmpty() || onceValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool onceCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, onceValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOnce(onceCppValue);
  }

  v8::Local<v8::Value> passiveValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&passiveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (passiveValue.IsEmpty() || passiveValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool passiveCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, passiveValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPassive(passiveCppValue);
  }
}

v8::Local<v8::Value> AddEventListenerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AddEventListenerOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AddEventListenerOptions(const AddEventListenerOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventListenerOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AddEventListenerOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> onceValue;
  bool onceHasValueOrDefault = false;
  if (impl.hasOnce()) {
    onceValue = v8::Boolean::New(isolate, impl.once());
    onceHasValueOrDefault = true;
  } else {
    onceValue = v8::Boolean::New(isolate, false);
    onceHasValueOrDefault = true;
  }
  if (onceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), onceValue))) {
    return false;
  }

  v8::Local<v8::Value> passiveValue;
  bool passiveHasValueOrDefault = false;
  if (impl.hasPassive()) {
    passiveValue = v8::Boolean::New(isolate, impl.passive());
    passiveHasValueOrDefault = true;
  }
  if (passiveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), passiveValue))) {
    return false;
  }

  return true;
}

AddEventListenerOptions NativeValueTraits<AddEventListenerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AddEventListenerOptions impl;
  V8AddEventListenerOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
