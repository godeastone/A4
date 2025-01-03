// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_tokenization.h"

#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AndroidPayTokenizationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "parameters",
    "tokenizationType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AndroidPayTokenization::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AndroidPayTokenization& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayTokenizationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> parametersValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&parametersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (parametersValue.IsEmpty() || parametersValue->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary parametersCppValue = NativeValueTraits<Dictionary>::NativeValue(isolate, parametersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    if (!parametersCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member parameters is not an object.");
      return;
    }
    impl.setParameters(parametersCppValue);
  }

  v8::Local<v8::Value> tokenizationTypeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&tokenizationTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tokenizationTypeValue.IsEmpty() || tokenizationTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tokenizationTypeCppValue = tokenizationTypeValue;
    if (!tokenizationTypeCppValue.Prepare(exceptionState))
      return;
    impl.setTokenizationType(tokenizationTypeCppValue);
  }
}

v8::Local<v8::Value> AndroidPayTokenization::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AndroidPayTokenization(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AndroidPayTokenization(const AndroidPayTokenization& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayTokenizationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> parametersValue;
  bool parametersHasValueOrDefault = false;
  if (impl.hasParameters()) {
    DCHECK(impl.parameters().IsObject());
    parametersValue = impl.parameters().V8Value();
    parametersHasValueOrDefault = true;
  }
  if (parametersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), parametersValue))) {
    return false;
  }

  v8::Local<v8::Value> tokenizationTypeValue;
  bool tokenizationTypeHasValueOrDefault = false;
  if (impl.hasTokenizationType()) {
    tokenizationTypeValue = V8String(isolate, impl.tokenizationType());
    tokenizationTypeHasValueOrDefault = true;
  }
  if (tokenizationTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), tokenizationTypeValue))) {
    return false;
  }

  return true;
}

AndroidPayTokenization NativeValueTraits<AndroidPayTokenization>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AndroidPayTokenization impl;
  V8AndroidPayTokenization::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
