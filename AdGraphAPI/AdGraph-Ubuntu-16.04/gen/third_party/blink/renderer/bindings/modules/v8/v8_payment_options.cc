// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "requestPayerEmail",
    "requestPayerName",
    "requestPayerPhone",
    "requestShipping",
    "shippingType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> requestPayerEmailValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&requestPayerEmailValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestPayerEmailValue.IsEmpty() || requestPayerEmailValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requestPayerEmailCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requestPayerEmailValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequestPayerEmail(requestPayerEmailCppValue);
  }

  v8::Local<v8::Value> requestPayerNameValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&requestPayerNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestPayerNameValue.IsEmpty() || requestPayerNameValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requestPayerNameCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requestPayerNameValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequestPayerName(requestPayerNameCppValue);
  }

  v8::Local<v8::Value> requestPayerPhoneValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&requestPayerPhoneValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestPayerPhoneValue.IsEmpty() || requestPayerPhoneValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requestPayerPhoneCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requestPayerPhoneValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequestPayerPhone(requestPayerPhoneCppValue);
  }

  v8::Local<v8::Value> requestShippingValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&requestShippingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestShippingValue.IsEmpty() || requestShippingValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requestShippingCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requestShippingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequestShipping(requestShippingCppValue);
  }

  v8::Local<v8::Value> shippingTypeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&shippingTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (shippingTypeValue.IsEmpty() || shippingTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> shippingTypeCppValue = shippingTypeValue;
    if (!shippingTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "shipping",
        "delivery",
        "pickup",
    };
    if (!IsValidEnum(shippingTypeCppValue, validValues, arraysize(validValues), "PaymentShippingType", exceptionState))
      return;
    impl.setShippingType(shippingTypeCppValue);
  }
}

v8::Local<v8::Value> PaymentOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentOptions(const PaymentOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> requestPayerEmailValue;
  bool requestPayerEmailHasValueOrDefault = false;
  if (impl.hasRequestPayerEmail()) {
    requestPayerEmailValue = v8::Boolean::New(isolate, impl.requestPayerEmail());
    requestPayerEmailHasValueOrDefault = true;
  } else {
    requestPayerEmailValue = v8::Boolean::New(isolate, false);
    requestPayerEmailHasValueOrDefault = true;
  }
  if (requestPayerEmailHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), requestPayerEmailValue))) {
    return false;
  }

  v8::Local<v8::Value> requestPayerNameValue;
  bool requestPayerNameHasValueOrDefault = false;
  if (impl.hasRequestPayerName()) {
    requestPayerNameValue = v8::Boolean::New(isolate, impl.requestPayerName());
    requestPayerNameHasValueOrDefault = true;
  } else {
    requestPayerNameValue = v8::Boolean::New(isolate, false);
    requestPayerNameHasValueOrDefault = true;
  }
  if (requestPayerNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), requestPayerNameValue))) {
    return false;
  }

  v8::Local<v8::Value> requestPayerPhoneValue;
  bool requestPayerPhoneHasValueOrDefault = false;
  if (impl.hasRequestPayerPhone()) {
    requestPayerPhoneValue = v8::Boolean::New(isolate, impl.requestPayerPhone());
    requestPayerPhoneHasValueOrDefault = true;
  } else {
    requestPayerPhoneValue = v8::Boolean::New(isolate, false);
    requestPayerPhoneHasValueOrDefault = true;
  }
  if (requestPayerPhoneHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), requestPayerPhoneValue))) {
    return false;
  }

  v8::Local<v8::Value> requestShippingValue;
  bool requestShippingHasValueOrDefault = false;
  if (impl.hasRequestShipping()) {
    requestShippingValue = v8::Boolean::New(isolate, impl.requestShipping());
    requestShippingHasValueOrDefault = true;
  } else {
    requestShippingValue = v8::Boolean::New(isolate, false);
    requestShippingHasValueOrDefault = true;
  }
  if (requestShippingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), requestShippingValue))) {
    return false;
  }

  v8::Local<v8::Value> shippingTypeValue;
  bool shippingTypeHasValueOrDefault = false;
  if (impl.hasShippingType()) {
    shippingTypeValue = V8String(isolate, impl.shippingType());
    shippingTypeHasValueOrDefault = true;
  } else {
    shippingTypeValue = V8String(isolate, "shipping");
    shippingTypeHasValueOrDefault = true;
  }
  if (shippingTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), shippingTypeValue))) {
    return false;
  }

  return true;
}

PaymentOptions NativeValueTraits<PaymentOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentOptions impl;
  V8PaymentOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
