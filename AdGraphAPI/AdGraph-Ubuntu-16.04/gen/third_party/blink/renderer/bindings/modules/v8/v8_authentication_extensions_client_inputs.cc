// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_authentication_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_registration_data.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AuthenticationExtensionsClientInputsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "appid",
    "cableAuthenticationData",
    "cableRegistration",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AuthenticationExtensionsClientInputs::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AuthenticationExtensionsClientInputs& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientInputsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> appidValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&appidValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (appidValue.IsEmpty() || appidValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> appidCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, appidValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAppid(appidCppValue);
  }

  v8::Local<v8::Value> cableAuthenticationDataValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&cableAuthenticationDataValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (cableAuthenticationDataValue.IsEmpty() || cableAuthenticationDataValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<CableAuthenticationData> cableAuthenticationDataCppValue = NativeValueTraits<IDLSequence<CableAuthenticationData>>::NativeValue(isolate, cableAuthenticationDataValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCableAuthenticationData(cableAuthenticationDataCppValue);
  }

  v8::Local<v8::Value> cableRegistrationValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&cableRegistrationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (cableRegistrationValue.IsEmpty() || cableRegistrationValue->IsUndefined()) {
    // Do nothing.
  } else {
    CableRegistrationData cableRegistrationCppValue;
    V8CableRegistrationData::ToImpl(isolate, cableRegistrationValue, cableRegistrationCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCableRegistration(cableRegistrationCppValue);
  }
}

v8::Local<v8::Value> AuthenticationExtensionsClientInputs::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AuthenticationExtensionsClientInputs(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AuthenticationExtensionsClientInputs(const AuthenticationExtensionsClientInputs& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticationExtensionsClientInputsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> appidValue;
  bool appidHasValueOrDefault = false;
  if (impl.hasAppid()) {
    appidValue = V8String(isolate, impl.appid());
    appidHasValueOrDefault = true;
  }
  if (appidHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), appidValue))) {
    return false;
  }

  v8::Local<v8::Value> cableAuthenticationDataValue;
  bool cableAuthenticationDataHasValueOrDefault = false;
  if (impl.hasCableAuthenticationData()) {
    cableAuthenticationDataValue = ToV8(impl.cableAuthenticationData(), creationContext, isolate);
    cableAuthenticationDataHasValueOrDefault = true;
  }
  if (cableAuthenticationDataHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), cableAuthenticationDataValue))) {
    return false;
  }

  v8::Local<v8::Value> cableRegistrationValue;
  bool cableRegistrationHasValueOrDefault = false;
  if (impl.hasCableRegistration()) {
    cableRegistrationValue = ToV8(impl.cableRegistration(), creationContext, isolate);
    cableRegistrationHasValueOrDefault = true;
  }
  if (cableRegistrationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), cableRegistrationValue))) {
    return false;
  }

  return true;
}

AuthenticationExtensionsClientInputs NativeValueTraits<AuthenticationExtensionsClientInputs>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AuthenticationExtensionsClientInputs impl;
  V8AuthenticationExtensionsClientInputs::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
