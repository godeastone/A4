// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentMethodDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "supportedMethods",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentMethodData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentMethodData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): supportedMethods.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentMethodDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&dataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (dataValue.IsEmpty() || dataValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue dataCppValue = ScriptValue(ScriptState::Current(isolate), dataValue);
    if (!dataCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member data is not an object.");
      return;
    }
    impl.setData(dataCppValue);
  }

  v8::Local<v8::Value> supportedMethodsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&supportedMethodsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (supportedMethodsValue.IsEmpty() || supportedMethodsValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member supportedMethods is undefined.");
    return;
  } else {
    StringOrStringSequence supportedMethodsCppValue;
    V8StringOrStringSequence::ToImpl(isolate, supportedMethodsValue, supportedMethodsCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSupportedMethods(supportedMethodsCppValue);
  }
}

v8::Local<v8::Value> PaymentMethodData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentMethodData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentMethodData(const PaymentMethodData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentMethodDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> dataValue;
  bool dataHasValueOrDefault = false;
  if (impl.hasData()) {
    DCHECK(impl.data().IsObject());
    dataValue = impl.data().V8Value();
    dataHasValueOrDefault = true;
  }
  if (dataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), dataValue))) {
    return false;
  }

  v8::Local<v8::Value> supportedMethodsValue;
  bool supportedMethodsHasValueOrDefault = false;
  if (impl.hasSupportedMethods()) {
    supportedMethodsValue = ToV8(impl.supportedMethods(), creationContext, isolate);
    supportedMethodsHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (supportedMethodsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), supportedMethodsValue))) {
    return false;
  }

  return true;
}

PaymentMethodData NativeValueTraits<PaymentMethodData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentMethodData impl;
  V8PaymentMethodData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
