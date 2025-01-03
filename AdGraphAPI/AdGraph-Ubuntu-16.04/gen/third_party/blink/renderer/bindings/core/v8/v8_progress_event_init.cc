// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_progress_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ProgressEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "lengthComputable",
    "loaded",
    "total",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ProgressEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ProgressEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ProgressEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lengthComputableValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&lengthComputableValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (lengthComputableValue.IsEmpty() || lengthComputableValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool lengthComputableCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, lengthComputableValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLengthComputable(lengthComputableCppValue);
  }

  v8::Local<v8::Value> loadedValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&loadedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (loadedValue.IsEmpty() || loadedValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t loadedCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, loadedValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setLoaded(loadedCppValue);
  }

  v8::Local<v8::Value> totalValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&totalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (totalValue.IsEmpty() || totalValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t totalCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, totalValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTotal(totalCppValue);
  }
}

v8::Local<v8::Value> ProgressEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ProgressEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ProgressEventInit(const ProgressEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ProgressEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> lengthComputableValue;
  bool lengthComputableHasValueOrDefault = false;
  if (impl.hasLengthComputable()) {
    lengthComputableValue = v8::Boolean::New(isolate, impl.lengthComputable());
    lengthComputableHasValueOrDefault = true;
  } else {
    lengthComputableValue = v8::Boolean::New(isolate, false);
    lengthComputableHasValueOrDefault = true;
  }
  if (lengthComputableHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), lengthComputableValue))) {
    return false;
  }

  v8::Local<v8::Value> loadedValue;
  bool loadedHasValueOrDefault = false;
  if (impl.hasLoaded()) {
    loadedValue = v8::Number::New(isolate, static_cast<double>(impl.loaded()));
    loadedHasValueOrDefault = true;
  } else {
    loadedValue = v8::Number::New(isolate, static_cast<double>(0));
    loadedHasValueOrDefault = true;
  }
  if (loadedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), loadedValue))) {
    return false;
  }

  v8::Local<v8::Value> totalValue;
  bool totalHasValueOrDefault = false;
  if (impl.hasTotal()) {
    totalValue = v8::Number::New(isolate, static_cast<double>(impl.total()));
    totalHasValueOrDefault = true;
  } else {
    totalValue = v8::Number::New(isolate, static_cast<double>(0));
    totalHasValueOrDefault = true;
  }
  if (totalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), totalValue))) {
    return false;
  }

  return true;
}

ProgressEventInit NativeValueTraits<ProgressEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ProgressEventInit impl;
  V8ProgressEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
