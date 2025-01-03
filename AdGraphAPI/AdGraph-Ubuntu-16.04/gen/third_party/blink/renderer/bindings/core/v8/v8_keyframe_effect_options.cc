// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_effect_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_effect_timing.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8KeyframeEffectOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "composite",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8KeyframeEffectOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, KeyframeEffectOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EffectTiming::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8KeyframeEffectOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compositeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&compositeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (compositeValue.IsEmpty() || compositeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> compositeCppValue = compositeValue;
    if (!compositeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "replace",
        "add",
        "accumulate",
    };
    if (!IsValidEnum(compositeCppValue, validValues, arraysize(validValues), "CompositeOperation", exceptionState))
      return;
    impl.setComposite(compositeCppValue);
  }
}

v8::Local<v8::Value> KeyframeEffectOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8KeyframeEffectOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8KeyframeEffectOptions(const KeyframeEffectOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EffectTiming(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8KeyframeEffectOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compositeValue;
  bool compositeHasValueOrDefault = false;
  if (impl.hasComposite()) {
    compositeValue = V8String(isolate, impl.composite());
    compositeHasValueOrDefault = true;
  } else {
    compositeValue = V8String(isolate, "replace");
    compositeHasValueOrDefault = true;
  }
  if (compositeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), compositeValue))) {
    return false;
  }

  return true;
}

KeyframeEffectOptions NativeValueTraits<KeyframeEffectOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  KeyframeEffectOptions impl;
  V8KeyframeEffectOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
