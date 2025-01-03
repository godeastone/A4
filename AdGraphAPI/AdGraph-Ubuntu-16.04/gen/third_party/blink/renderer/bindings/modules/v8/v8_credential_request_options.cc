// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_request_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_request_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_request_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CredentialRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "federated",
    "mediation",
    "password",
    "publicKey",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CredentialRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CredentialRequestOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CredentialRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> federatedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&federatedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (federatedValue.IsEmpty() || federatedValue->IsUndefined()) {
    // Do nothing.
  } else if (federatedValue->IsNull()) {
    impl.setFederatedToNull();
  } else {
    FederatedCredentialRequestOptions federatedCppValue;
    V8FederatedCredentialRequestOptions::ToImpl(isolate, federatedValue, federatedCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFederated(federatedCppValue);
  }

  v8::Local<v8::Value> mediationValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mediationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mediationValue.IsEmpty() || mediationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mediationCppValue = mediationValue;
    if (!mediationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "silent",
        "optional",
        "required",
    };
    if (!IsValidEnum(mediationCppValue, validValues, arraysize(validValues), "CredentialMediationRequirement", exceptionState))
      return;
    impl.setMediation(mediationCppValue);
  }

  v8::Local<v8::Value> passwordValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&passwordValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (passwordValue.IsEmpty() || passwordValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool passwordCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, passwordValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPassword(passwordCppValue);
  }

  v8::Local<v8::Value> publicKeyValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&publicKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (publicKeyValue.IsEmpty() || publicKeyValue->IsUndefined()) {
    // Do nothing.
  } else if (publicKeyValue->IsNull()) {
    impl.setPublicKeyToNull();
  } else {
    PublicKeyCredentialRequestOptions publicKeyCppValue;
    V8PublicKeyCredentialRequestOptions::ToImpl(isolate, publicKeyValue, publicKeyCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPublicKey(publicKeyCppValue);
  }
}

v8::Local<v8::Value> CredentialRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CredentialRequestOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CredentialRequestOptions(const CredentialRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CredentialRequestOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> federatedValue;
  bool federatedHasValueOrDefault = false;
  if (impl.hasFederated()) {
    federatedValue = ToV8(impl.federated(), creationContext, isolate);
    federatedHasValueOrDefault = true;
  } else {
    federatedValue = v8::Null(isolate);
    federatedHasValueOrDefault = true;
  }
  if (federatedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), federatedValue))) {
    return false;
  }

  v8::Local<v8::Value> mediationValue;
  bool mediationHasValueOrDefault = false;
  if (impl.hasMediation()) {
    mediationValue = V8String(isolate, impl.mediation());
    mediationHasValueOrDefault = true;
  } else {
    mediationValue = V8String(isolate, "optional");
    mediationHasValueOrDefault = true;
  }
  if (mediationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), mediationValue))) {
    return false;
  }

  v8::Local<v8::Value> passwordValue;
  bool passwordHasValueOrDefault = false;
  if (impl.hasPassword()) {
    passwordValue = v8::Boolean::New(isolate, impl.password());
    passwordHasValueOrDefault = true;
  } else {
    passwordValue = v8::Boolean::New(isolate, false);
    passwordHasValueOrDefault = true;
  }
  if (passwordHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), passwordValue))) {
    return false;
  }

  v8::Local<v8::Value> publicKeyValue;
  bool publicKeyHasValueOrDefault = false;
  if (impl.hasPublicKey()) {
    publicKeyValue = ToV8(impl.publicKey(), creationContext, isolate);
    publicKeyHasValueOrDefault = true;
  } else {
    publicKeyValue = v8::Null(isolate);
    publicKeyHasValueOrDefault = true;
  }
  if (publicKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), publicKeyValue))) {
    return false;
  }

  return true;
}

CredentialRequestOptions NativeValueTraits<CredentialRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CredentialRequestOptions impl;
  V8CredentialRequestOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
