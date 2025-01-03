// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_element_creation_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ElementCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "is",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ElementCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ElementCreationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ElementCreationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> isValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&isValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isValue.IsEmpty() || isValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> isCppValue = isValue;
    if (!isCppValue.Prepare(exceptionState))
      return;
    impl.setIs(isCppValue);
  }
}

v8::Local<v8::Value> ElementCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ElementCreationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ElementCreationOptions(const ElementCreationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ElementCreationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> isValue;
  bool isHasValueOrDefault = false;
  if (impl.hasIs()) {
    isValue = V8String(isolate, impl.is());
    isHasValueOrDefault = true;
  }
  if (isHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), isValue))) {
    return false;
  }

  return true;
}

ElementCreationOptions NativeValueTraits<ElementCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ElementCreationOptions impl;
  V8ElementCreationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
