// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_constraints.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PeriodicWaveOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "imag",
    "real",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PeriodicWaveOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PeriodicWaveOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PeriodicWaveConstraints::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PeriodicWaveOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> imagValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&imagValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (imagValue.IsEmpty() || imagValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> imagCppValue = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, imagValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setImag(imagCppValue);
  }

  v8::Local<v8::Value> realValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&realValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (realValue.IsEmpty() || realValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> realCppValue = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, realValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setReal(realCppValue);
  }
}

v8::Local<v8::Value> PeriodicWaveOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PeriodicWaveOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PeriodicWaveOptions(const PeriodicWaveOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PeriodicWaveConstraints(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PeriodicWaveOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> imagValue;
  bool imagHasValueOrDefault = false;
  if (impl.hasImag()) {
    imagValue = ToV8(impl.imag(), creationContext, isolate);
    imagHasValueOrDefault = true;
  }
  if (imagHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), imagValue))) {
    return false;
  }

  v8::Local<v8::Value> realValue;
  bool realHasValueOrDefault = false;
  if (impl.hasReal()) {
    realValue = ToV8(impl.real(), creationContext, isolate);
    realHasValueOrDefault = true;
  }
  if (realHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), realValue))) {
    return false;
  }

  return true;
}

PeriodicWaveOptions NativeValueTraits<PeriodicWaveOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PeriodicWaveOptions impl;
  V8PeriodicWaveOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
