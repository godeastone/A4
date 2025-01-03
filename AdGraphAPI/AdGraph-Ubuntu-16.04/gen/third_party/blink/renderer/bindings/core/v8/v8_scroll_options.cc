// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "behavior",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ScrollOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> behaviorValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&behaviorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (behaviorValue.IsEmpty() || behaviorValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> behaviorCppValue = behaviorValue;
    if (!behaviorCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "auto",
        "instant",
        "smooth",
    };
    if (!IsValidEnum(behaviorCppValue, validValues, arraysize(validValues), "ScrollBehavior", exceptionState))
      return;
    impl.setBehavior(behaviorCppValue);
  }
}

v8::Local<v8::Value> ScrollOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollOptions(const ScrollOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ScrollOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> behaviorValue;
  bool behaviorHasValueOrDefault = false;
  if (impl.hasBehavior()) {
    behaviorValue = V8String(isolate, impl.behavior());
    behaviorHasValueOrDefault = true;
  } else {
    behaviorValue = V8String(isolate, "auto");
    behaviorHasValueOrDefault = true;
  }
  if (behaviorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), behaviorValue))) {
    return false;
  }

  return true;
}

ScrollOptions NativeValueTraits<ScrollOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollOptions impl;
  V8ScrollOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
