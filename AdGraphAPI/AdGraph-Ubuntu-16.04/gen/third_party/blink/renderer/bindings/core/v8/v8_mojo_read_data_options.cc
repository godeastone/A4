// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_data_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoReadDataOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allOrNone",
    "peek",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MojoReadDataOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MojoReadDataOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadDataOptionsKeys(isolate);
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

  v8::Local<v8::Value> peekValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&peekValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (peekValue.IsEmpty() || peekValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool peekCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, peekValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPeek(peekCppValue);
  }
}

v8::Local<v8::Value> MojoReadDataOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoReadDataOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoReadDataOptions(const MojoReadDataOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadDataOptionsKeys(isolate);
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

  v8::Local<v8::Value> peekValue;
  bool peekHasValueOrDefault = false;
  if (impl.hasPeek()) {
    peekValue = v8::Boolean::New(isolate, impl.peek());
    peekHasValueOrDefault = true;
  } else {
    peekValue = v8::Boolean::New(isolate, false);
    peekHasValueOrDefault = true;
  }
  if (peekHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), peekValue))) {
    return false;
  }

  return true;
}

MojoReadDataOptions NativeValueTraits<MojoReadDataOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MojoReadDataOptions impl;
  V8MojoReadDataOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
