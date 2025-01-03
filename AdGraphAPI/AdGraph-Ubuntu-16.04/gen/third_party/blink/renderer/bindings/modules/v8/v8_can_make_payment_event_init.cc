// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_can_make_payment_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_data.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CanMakePaymentEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "methodData",
    "modifiers",
    "paymentRequestOrigin",
    "topOrigin",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CanMakePaymentEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CanMakePaymentEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8CanMakePaymentEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> methodDataValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&methodDataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (methodDataValue.IsEmpty() || methodDataValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PaymentMethodData> methodDataCppValue = NativeValueTraits<IDLSequence<PaymentMethodData>>::NativeValue(isolate, methodDataValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMethodData(methodDataCppValue);
  }

  v8::Local<v8::Value> modifiersValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modifiersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifiersValue.IsEmpty() || modifiersValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PaymentDetailsModifier> modifiersCppValue = NativeValueTraits<IDLSequence<PaymentDetailsModifier>>::NativeValue(isolate, modifiersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setModifiers(modifiersCppValue);
  }

  v8::Local<v8::Value> paymentRequestOriginValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&paymentRequestOriginValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (paymentRequestOriginValue.IsEmpty() || paymentRequestOriginValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> paymentRequestOriginCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, paymentRequestOriginValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPaymentRequestOrigin(paymentRequestOriginCppValue);
  }

  v8::Local<v8::Value> topOriginValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&topOriginValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (topOriginValue.IsEmpty() || topOriginValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> topOriginCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, topOriginValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTopOrigin(topOriginCppValue);
  }
}

v8::Local<v8::Value> CanMakePaymentEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CanMakePaymentEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CanMakePaymentEventInit(const CanMakePaymentEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8CanMakePaymentEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> methodDataValue;
  bool methodDataHasValueOrDefault = false;
  if (impl.hasMethodData()) {
    methodDataValue = ToV8(impl.methodData(), creationContext, isolate);
    methodDataHasValueOrDefault = true;
  }
  if (methodDataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), methodDataValue))) {
    return false;
  }

  v8::Local<v8::Value> modifiersValue;
  bool modifiersHasValueOrDefault = false;
  if (impl.hasModifiers()) {
    modifiersValue = ToV8(impl.modifiers(), creationContext, isolate);
    modifiersHasValueOrDefault = true;
  }
  if (modifiersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), modifiersValue))) {
    return false;
  }

  v8::Local<v8::Value> paymentRequestOriginValue;
  bool paymentRequestOriginHasValueOrDefault = false;
  if (impl.hasPaymentRequestOrigin()) {
    paymentRequestOriginValue = V8String(isolate, impl.paymentRequestOrigin());
    paymentRequestOriginHasValueOrDefault = true;
  }
  if (paymentRequestOriginHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), paymentRequestOriginValue))) {
    return false;
  }

  v8::Local<v8::Value> topOriginValue;
  bool topOriginHasValueOrDefault = false;
  if (impl.hasTopOrigin()) {
    topOriginValue = V8String(isolate, impl.topOrigin());
    topOriginHasValueOrDefault = true;
  }
  if (topOriginHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), topOriginValue))) {
    return false;
  }

  return true;
}

CanMakePaymentEventInit NativeValueTraits<CanMakePaymentEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CanMakePaymentEventInit impl;
  V8CanMakePaymentEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
