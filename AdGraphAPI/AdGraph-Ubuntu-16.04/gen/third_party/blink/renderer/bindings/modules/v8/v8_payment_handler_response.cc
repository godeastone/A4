// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_handler_response.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentHandlerResponseKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "details",
    "methodName",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaymentHandlerResponse::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaymentHandlerResponse& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentHandlerResponseKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detailsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (detailsValue.IsEmpty() || detailsValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue detailsCppValue = ScriptValue(ScriptState::Current(isolate), detailsValue);
    if (!detailsCppValue.IsObject()) {
      exceptionState.ThrowTypeError("member details is not an object.");
      return;
    }
    impl.setDetails(detailsCppValue);
  }

  v8::Local<v8::Value> methodNameValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&methodNameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (methodNameValue.IsEmpty() || methodNameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> methodNameCppValue = methodNameValue;
    if (!methodNameCppValue.Prepare(exceptionState))
      return;
    impl.setMethodName(methodNameCppValue);
  }
}

v8::Local<v8::Value> PaymentHandlerResponse::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentHandlerResponse(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentHandlerResponse(const PaymentHandlerResponse& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentHandlerResponseKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detailsValue;
  bool detailsHasValueOrDefault = false;
  if (impl.hasDetails()) {
    DCHECK(impl.details().IsObject());
    detailsValue = impl.details().V8Value();
    detailsHasValueOrDefault = true;
  }
  if (detailsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), detailsValue))) {
    return false;
  }

  v8::Local<v8::Value> methodNameValue;
  bool methodNameHasValueOrDefault = false;
  if (impl.hasMethodName()) {
    methodNameValue = V8String(isolate, impl.methodName());
    methodNameHasValueOrDefault = true;
  }
  if (methodNameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), methodNameValue))) {
    return false;
  }

  return true;
}

PaymentHandlerResponse NativeValueTraits<PaymentHandlerResponse>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaymentHandlerResponse impl;
  V8PaymentHandlerResponse::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
