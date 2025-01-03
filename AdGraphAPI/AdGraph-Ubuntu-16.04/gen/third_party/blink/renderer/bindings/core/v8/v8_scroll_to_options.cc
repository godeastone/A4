// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_to_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ScrollToOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "left",
    "top",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ScrollToOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ScrollToOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ScrollOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollToOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> leftValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&leftValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (leftValue.IsEmpty() || leftValue->IsUndefined()) {
    // Do nothing.
  } else {
    double leftCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, leftValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLeft(leftCppValue);
  }

  v8::Local<v8::Value> topValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&topValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (topValue.IsEmpty() || topValue->IsUndefined()) {
    // Do nothing.
  } else {
    double topCppValue = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, topValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTop(topCppValue);
  }
}

v8::Local<v8::Value> ScrollToOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ScrollToOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ScrollToOptions(const ScrollToOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ScrollOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ScrollToOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> leftValue;
  bool leftHasValueOrDefault = false;
  if (impl.hasLeft()) {
    leftValue = v8::Number::New(isolate, impl.left());
    leftHasValueOrDefault = true;
  }
  if (leftHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), leftValue))) {
    return false;
  }

  v8::Local<v8::Value> topValue;
  bool topHasValueOrDefault = false;
  if (impl.hasTop()) {
    topValue = v8::Number::New(isolate, impl.top());
    topHasValueOrDefault = true;
  }
  if (topHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), topValue))) {
    return false;
  }

  return true;
}

ScrollToOptions NativeValueTraits<ScrollToOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ScrollToOptions impl;
  V8ScrollToOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
