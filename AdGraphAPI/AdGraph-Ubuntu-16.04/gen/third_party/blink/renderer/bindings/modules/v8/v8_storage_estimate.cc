// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_storage_estimate.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8StorageEstimateKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "quota",
    "usage",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8StorageEstimate::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StorageEstimate& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8StorageEstimateKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> quotaValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&quotaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (quotaValue.IsEmpty() || quotaValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t quotaCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, quotaValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setQuota(quotaCppValue);
  }

  v8::Local<v8::Value> usageValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&usageValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (usageValue.IsEmpty() || usageValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t usageCppValue = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, usageValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setUsage(usageCppValue);
  }
}

v8::Local<v8::Value> StorageEstimate::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8StorageEstimate(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8StorageEstimate(const StorageEstimate& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8StorageEstimateKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> quotaValue;
  bool quotaHasValueOrDefault = false;
  if (impl.hasQuota()) {
    quotaValue = v8::Number::New(isolate, static_cast<double>(impl.quota()));
    quotaHasValueOrDefault = true;
  }
  if (quotaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), quotaValue))) {
    return false;
  }

  v8::Local<v8::Value> usageValue;
  bool usageHasValueOrDefault = false;
  if (impl.hasUsage()) {
    usageValue = v8::Number::New(isolate, static_cast<double>(impl.usage()));
    usageHasValueOrDefault = true;
  }
  if (usageHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), usageValue))) {
    return false;
  }

  return true;
}

StorageEstimate NativeValueTraits<StorageEstimate>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StorageEstimate impl;
  V8StorageEstimate::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
