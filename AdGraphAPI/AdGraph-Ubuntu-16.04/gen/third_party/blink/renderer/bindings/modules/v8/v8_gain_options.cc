// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gain_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GainOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "gain",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8GainOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, GainOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8GainOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> gainValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&gainValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (gainValue.IsEmpty() || gainValue->IsUndefined()) {
    // Do nothing.
  } else {
    float gainCppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, gainValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setGain(gainCppValue);
  }
}

v8::Local<v8::Value> GainOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GainOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GainOptions(const GainOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8GainOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> gainValue;
  bool gainHasValueOrDefault = false;
  if (impl.hasGain()) {
    gainValue = v8::Number::New(isolate, impl.gain());
    gainHasValueOrDefault = true;
  } else {
    gainValue = v8::Number::New(isolate, 1);
    gainHasValueOrDefault = true;
  }
  if (gainHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), gainValue))) {
    return false;
  }

  return true;
}

GainOptions NativeValueTraits<GainOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  GainOptions impl;
  V8GainOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
