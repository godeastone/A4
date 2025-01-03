// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_item.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_currency_amount.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentItemKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "amount",
    "label",
    "pending",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentItem::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentItem& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): amount, label.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentItemKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> amountValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&amountValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (amountValue.IsEmpty() || amountValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member amount is undefined.");
    return;
  } else {
    PaymentCurrencyAmount amountCppValue;
    V8PaymentCurrencyAmount::ToImpl(isolate, amountValue, amountCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAmount(amountCppValue);
  }

  v8::Local<v8::Value> labelValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&labelValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (labelValue.IsEmpty() || labelValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member label is undefined.");
    return;
  } else {
    V8StringResource<> labelCppValue = labelValue;
    if (!labelCppValue.Prepare(exceptionState))
      return;
    impl.setLabel(labelCppValue);
  }

  v8::Local<v8::Value> pendingValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&pendingValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pendingValue.IsEmpty() || pendingValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool pendingCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, pendingValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPending(pendingCppValue);
  }
}

v8::Local<v8::Value> PaymentItem::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentItem(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentItem(const PaymentItem& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentItemKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> amountValue;
  bool amountHasValueOrDefault = false;
  if (impl.hasAmount()) {
    amountValue = ToV8(impl.amount(), creationContext, isolate);
    amountHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (amountHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), amountValue))) {
    return false;
  }

  v8::Local<v8::Value> labelValue;
  bool labelHasValueOrDefault = false;
  if (impl.hasLabel()) {
    labelValue = V8String(isolate, impl.label());
    labelHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (labelHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), labelValue))) {
    return false;
  }

  v8::Local<v8::Value> pendingValue;
  bool pendingHasValueOrDefault = false;
  if (impl.hasPending()) {
    pendingValue = v8::Boolean::New(isolate, impl.pending());
    pendingHasValueOrDefault = true;
  } else {
    pendingValue = v8::Boolean::New(isolate, false);
    pendingHasValueOrDefault = true;
  }
  if (pendingHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), pendingValue))) {
    return false;
  }

  return true;
}

PaymentItem NativeValueTraits<PaymentItem>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentItem impl;
  V8PaymentItem::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
