// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_discard_data_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoDiscardDataOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allOrNone",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoDiscardDataOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoDiscardDataOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoDiscardDataOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allOrNoneValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&allOrNoneValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (allOrNoneValue.IsEmpty() || allOrNoneValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool allOrNoneCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, allOrNoneValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAllOrNone(allOrNoneCppValue);
  }
}

v8::Local<v8::Value> MojoDiscardDataOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoDiscardDataOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoDiscardDataOptions(const MojoDiscardDataOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoDiscardDataOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allOrNoneValue;
  bool allOrNoneHasValueOrDefault = false;
  if (impl.hasAllOrNone()) {
    allOrNoneValue = v8::Boolean::New(isolate, impl.allOrNone());
    allOrNoneHasValueOrDefault = true;
  } else {
    allOrNoneValue = v8::Boolean::New(isolate, false);
    allOrNoneHasValueOrDefault = true;
  }
  if (allOrNoneHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), allOrNoneValue))) {
    return false;
  }

  return true;
}

MojoDiscardDataOptions NativeValueTraits<MojoDiscardDataOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoDiscardDataOptions impl;
  V8MojoDiscardDataOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
