// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_creation_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_federated_credential_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_password_credential_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_creation_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CredentialCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "federated",
    "password",
    "publicKey",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CredentialCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CredentialCreationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CredentialCreationOptionsKeys(isolate);
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
    FederatedCredentialInit federatedCppValue;
    V8FederatedCredentialInit::ToImpl(isolate, federatedValue, federatedCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFederated(federatedCppValue);
  }

  v8::Local<v8::Value> passwordValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&passwordValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (passwordValue.IsEmpty() || passwordValue->IsUndefined()) {
    // Do nothing.
  } else if (passwordValue->IsNull()) {
    impl.setPasswordToNull();
  } else {
    PasswordCredentialDataOrHTMLFormElement passwordCppValue;
    V8PasswordCredentialDataOrHTMLFormElement::ToImpl(isolate, passwordValue, passwordCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPassword(passwordCppValue);
  }

  v8::Local<v8::Value> publicKeyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&publicKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (publicKeyValue.IsEmpty() || publicKeyValue->IsUndefined()) {
    // Do nothing.
  } else if (publicKeyValue->IsNull()) {
    impl.setPublicKeyToNull();
  } else {
    PublicKeyCredentialCreationOptions publicKeyCppValue;
    V8PublicKeyCredentialCreationOptions::ToImpl(isolate, publicKeyValue, publicKeyCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPublicKey(publicKeyCppValue);
  }
}

v8::Local<v8::Value> CredentialCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CredentialCreationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CredentialCreationOptions(const CredentialCreationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CredentialCreationOptionsKeys(isolate);
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

  v8::Local<v8::Value> passwordValue;
  bool passwordHasValueOrDefault = false;
  if (impl.hasPassword()) {
    passwordValue = ToV8(impl.password(), creationContext, isolate);
    passwordHasValueOrDefault = true;
  } else {
    passwordValue = v8::Null(isolate);
    passwordHasValueOrDefault = true;
  }
  if (passwordHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), passwordValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), publicKeyValue))) {
    return false;
  }

  return true;
}

CredentialCreationOptions NativeValueTraits<CredentialCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CredentialCreationOptions impl;
  V8CredentialCreationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
