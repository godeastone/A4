// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_method_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_tokenization.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AndroidPayMethodDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allowedCardNetworks",
    "apiVersion",
    "environment",
    "merchantId",
    "merchantName",
    "minGooglePlayServicesVersion",
    "paymentMethodTokenizationParameters",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AndroidPayMethodData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AndroidPayMethodData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayMethodDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allowedCardNetworksValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&allowedCardNetworksValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (allowedCardNetworksValue.IsEmpty() || allowedCardNetworksValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> allowedCardNetworksCppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, allowedCardNetworksValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAllowedCardNetworks(allowedCardNetworksCppValue);
  }

  v8::Local<v8::Value> apiVersionValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&apiVersionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (apiVersionValue.IsEmpty() || apiVersionValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t apiVersionCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, apiVersionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setApiVersion(apiVersionCppValue);
  }

  v8::Local<v8::Value> environmentValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&environmentValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (environmentValue.IsEmpty() || environmentValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> environmentCppValue = environmentValue;
    if (!environmentCppValue.Prepare(exceptionState))
      return;
    impl.setEnvironment(environmentCppValue);
  }

  v8::Local<v8::Value> merchantIdValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&merchantIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (merchantIdValue.IsEmpty() || merchantIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> merchantIdCppValue = merchantIdValue;
    if (!merchantIdCppValue.Prepare(exceptionState))
      return;
    impl.setMerchantId(merchantIdCppValue);
  }

  v8::Local<v8::Value> merchantNameValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&merchantNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (merchantNameValue.IsEmpty() || merchantNameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> merchantNameCppValue = merchantNameValue;
    if (!merchantNameCppValue.Prepare(exceptionState))
      return;
    impl.setMerchantName(merchantNameCppValue);
  }

  v8::Local<v8::Value> minGooglePlayServicesVersionValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&minGooglePlayServicesVersionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (minGooglePlayServicesVersionValue.IsEmpty() || minGooglePlayServicesVersionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> minGooglePlayServicesVersionCppValue = minGooglePlayServicesVersionValue;
    if (!minGooglePlayServicesVersionCppValue.Prepare(exceptionState))
      return;
    impl.setMinGooglePlayServicesVersion(minGooglePlayServicesVersionCppValue);
  }

  v8::Local<v8::Value> paymentMethodTokenizationParametersValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&paymentMethodTokenizationParametersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (paymentMethodTokenizationParametersValue.IsEmpty() || paymentMethodTokenizationParametersValue->IsUndefined()) {
    // Do nothing.
  } else {
    AndroidPayTokenization paymentMethodTokenizationParametersCppValue;
    V8AndroidPayTokenization::ToImpl(isolate, paymentMethodTokenizationParametersValue, paymentMethodTokenizationParametersCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPaymentMethodTokenizationParameters(paymentMethodTokenizationParametersCppValue);
  }
}

v8::Local<v8::Value> AndroidPayMethodData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AndroidPayMethodData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AndroidPayMethodData(const AndroidPayMethodData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayMethodDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allowedCardNetworksValue;
  bool allowedCardNetworksHasValueOrDefault = false;
  if (impl.hasAllowedCardNetworks()) {
    allowedCardNetworksValue = ToV8(impl.allowedCardNetworks(), creationContext, isolate);
    allowedCardNetworksHasValueOrDefault = true;
  }
  if (allowedCardNetworksHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), allowedCardNetworksValue))) {
    return false;
  }

  v8::Local<v8::Value> apiVersionValue;
  bool apiVersionHasValueOrDefault = false;
  if (impl.hasApiVersion()) {
    apiVersionValue = v8::Integer::New(isolate, impl.apiVersion());
    apiVersionHasValueOrDefault = true;
  }
  if (apiVersionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), apiVersionValue))) {
    return false;
  }

  v8::Local<v8::Value> environmentValue;
  bool environmentHasValueOrDefault = false;
  if (impl.hasEnvironment()) {
    environmentValue = V8String(isolate, impl.environment());
    environmentHasValueOrDefault = true;
  }
  if (environmentHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), environmentValue))) {
    return false;
  }

  v8::Local<v8::Value> merchantIdValue;
  bool merchantIdHasValueOrDefault = false;
  if (impl.hasMerchantId()) {
    merchantIdValue = V8String(isolate, impl.merchantId());
    merchantIdHasValueOrDefault = true;
  }
  if (merchantIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), merchantIdValue))) {
    return false;
  }

  v8::Local<v8::Value> merchantNameValue;
  bool merchantNameHasValueOrDefault = false;
  if (impl.hasMerchantName()) {
    merchantNameValue = V8String(isolate, impl.merchantName());
    merchantNameHasValueOrDefault = true;
  }
  if (merchantNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), merchantNameValue))) {
    return false;
  }

  v8::Local<v8::Value> minGooglePlayServicesVersionValue;
  bool minGooglePlayServicesVersionHasValueOrDefault = false;
  if (impl.hasMinGooglePlayServicesVersion()) {
    minGooglePlayServicesVersionValue = V8String(isolate, impl.minGooglePlayServicesVersion());
    minGooglePlayServicesVersionHasValueOrDefault = true;
  }
  if (minGooglePlayServicesVersionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), minGooglePlayServicesVersionValue))) {
    return false;
  }

  v8::Local<v8::Value> paymentMethodTokenizationParametersValue;
  bool paymentMethodTokenizationParametersHasValueOrDefault = false;
  if (impl.hasPaymentMethodTokenizationParameters()) {
    paymentMethodTokenizationParametersValue = ToV8(impl.paymentMethodTokenizationParameters(), creationContext, isolate);
    paymentMethodTokenizationParametersHasValueOrDefault = true;
  }
  if (paymentMethodTokenizationParametersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), paymentMethodTokenizationParametersValue))) {
    return false;
  }

  return true;
}

AndroidPayMethodData NativeValueTraits<AndroidPayMethodData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AndroidPayMethodData impl;
  V8AndroidPayMethodData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
