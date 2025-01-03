// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WaveShaperOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "curve",
    "oversample",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8WaveShaperOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WaveShaperOptions& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8WaveShaperOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> curveValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&curveValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (curveValue.IsEmpty() || curveValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> curveCppValue = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, curveValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCurve(curveCppValue);
  }

  v8::Local<v8::Value> oversampleValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&oversampleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (oversampleValue.IsEmpty() || oversampleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> oversampleCppValue = oversampleValue;
    if (!oversampleCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "2x",
        "4x",
    };
    if (!IsValidEnum(oversampleCppValue, validValues, arraysize(validValues), "OverSampleType", exceptionState))
      return;
    impl.setOversample(oversampleCppValue);
  }
}

v8::Local<v8::Value> WaveShaperOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WaveShaperOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WaveShaperOptions(const WaveShaperOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8WaveShaperOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> curveValue;
  bool curveHasValueOrDefault = false;
  if (impl.hasCurve()) {
    curveValue = ToV8(impl.curve(), creationContext, isolate);
    curveHasValueOrDefault = true;
  }
  if (curveHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), curveValue))) {
    return false;
  }

  v8::Local<v8::Value> oversampleValue;
  bool oversampleHasValueOrDefault = false;
  if (impl.hasOversample()) {
    oversampleValue = V8String(isolate, impl.oversample());
    oversampleHasValueOrDefault = true;
  } else {
    oversampleValue = V8String(isolate, "none");
    oversampleHasValueOrDefault = true;
  }
  if (oversampleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), oversampleValue))) {
    return false;
  }

  return true;
}

WaveShaperOptions NativeValueTraits<WaveShaperOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WaveShaperOptions impl;
  V8WaveShaperOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
