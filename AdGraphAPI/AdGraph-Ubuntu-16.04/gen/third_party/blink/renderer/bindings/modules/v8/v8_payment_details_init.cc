// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_item.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentDetailsInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "id",
    "total",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentDetailsInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentDetailsInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): total.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PaymentDetailsBase::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&idValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idValue.IsEmpty() || idValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> idCppValue = idValue;
    if (!idCppValue.Prepare(exceptionState))
      return;
    impl.setId(idCppValue);
  }

  v8::Local<v8::Value> totalValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&totalValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (totalValue.IsEmpty() || totalValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member total is undefined.");
    return;
  } else {
    PaymentItem totalCppValue;
    V8PaymentItem::ToImpl(isolate, totalValue, totalCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setTotal(totalCppValue);
  }
}

v8::Local<v8::Value> PaymentDetailsInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentDetailsInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentDetailsInit(const PaymentDetailsInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PaymentDetailsBase(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  bool idHasValueOrDefault = false;
  if (impl.hasId()) {
    idValue = V8String(isolate, impl.id());
    idHasValueOrDefault = true;
  }
  if (idHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), idValue))) {
    return false;
  }

  v8::Local<v8::Value> totalValue;
  bool totalHasValueOrDefault = false;
  if (impl.hasTotal()) {
    totalValue = ToV8(impl.total(), creationContext, isolate);
    totalHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (totalHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), totalValue))) {
    return false;
  }

  return true;
}

PaymentDetailsInit NativeValueTraits<PaymentDetailsInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentDetailsInit impl;
  V8PaymentDetailsInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
