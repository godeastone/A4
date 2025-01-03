// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PerformanceObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "entryTypes",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PerformanceObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PerformanceObserverInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): entryTypes.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> entryTypesValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&entryTypesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (entryTypesValue.IsEmpty() || entryTypesValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member entryTypes is undefined.");
    return;
  } else {
    Vector<String> entryTypesCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, entryTypesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEntryTypes(entryTypesCppValue);
  }
}

v8::Local<v8::Value> PerformanceObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PerformanceObserverInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PerformanceObserverInit(const PerformanceObserverInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceObserverInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> entryTypesValue;
  bool entryTypesHasValueOrDefault = false;
  if (impl.hasEntryTypes()) {
    entryTypesValue = ToV8(impl.entryTypes(), creationContext, isolate);
    entryTypesHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (entryTypesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), entryTypesValue))) {
    return false;
  }

  return true;
}

PerformanceObserverInit NativeValueTraits<PerformanceObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PerformanceObserverInit impl;
  V8PerformanceObserverInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
