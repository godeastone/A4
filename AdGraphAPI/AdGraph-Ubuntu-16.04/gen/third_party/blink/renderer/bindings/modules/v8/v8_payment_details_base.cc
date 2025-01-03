// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_base.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_item.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_shipping_option.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentDetailsBaseKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "displayItems",
    "modifiers",
    "shippingOptions",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentDetailsBase::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentDetailsBase& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsBaseKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayItemsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&displayItemsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (displayItemsValue.IsEmpty() || displayItemsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PaymentItem> displayItemsCppValue = NativeValueTraits<IDLSequence<PaymentItem>>::NativeValue(isolate, displayItemsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDisplayItems(displayItemsCppValue);
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

  v8::Local<v8::Value> shippingOptionsValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&shippingOptionsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (shippingOptionsValue.IsEmpty() || shippingOptionsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PaymentShippingOption> shippingOptionsCppValue = NativeValueTraits<IDLSequence<PaymentShippingOption>>::NativeValue(isolate, shippingOptionsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setShippingOptions(shippingOptionsCppValue);
  }
}

v8::Local<v8::Value> PaymentDetailsBase::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentDetailsBase(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentDetailsBase(const PaymentDetailsBase& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsBaseKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayItemsValue;
  bool displayItemsHasValueOrDefault = false;
  if (impl.hasDisplayItems()) {
    displayItemsValue = ToV8(impl.displayItems(), creationContext, isolate);
    displayItemsHasValueOrDefault = true;
  }
  if (displayItemsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), displayItemsValue))) {
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

  v8::Local<v8::Value> shippingOptionsValue;
  bool shippingOptionsHasValueOrDefault = false;
  if (impl.hasShippingOptions()) {
    shippingOptionsValue = ToV8(impl.shippingOptions(), creationContext, isolate);
    shippingOptionsHasValueOrDefault = true;
  }
  if (shippingOptionsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), shippingOptionsValue))) {
    return false;
  }

  return true;
}

PaymentDetailsBase NativeValueTraits<PaymentDetailsBase>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentDetailsBase impl;
  V8PaymentDetailsBase::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
