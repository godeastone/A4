// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_creation_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_selection_criteria.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_rp_entity.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_user_entity.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialCreationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attestation",
    "authenticatorSelection",
    "challenge",
    "excludeCredentials",
    "extensions",
    "pubKeyCredParams",
    "rp",
    "timeout",
    "user",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialCreationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialCreationOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): challenge, pubKeyCredParams, rp, user.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialCreationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attestationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attestationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (attestationValue.IsEmpty() || attestationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> attestationCppValue = attestationValue;
    if (!attestationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "indirect",
        "direct",
    };
    if (!IsValidEnum(attestationCppValue, validValues, arraysize(validValues), "AttestationConveyancePreference", exceptionState))
      return;
    impl.setAttestation(attestationCppValue);
  }

  v8::Local<v8::Value> authenticatorSelectionValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&authenticatorSelectionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticatorSelectionValue.IsEmpty() || authenticatorSelectionValue->IsUndefined()) {
    // Do nothing.
  } else {
    AuthenticatorSelectionCriteria authenticatorSelectionCppValue;
    V8AuthenticatorSelectionCriteria::ToImpl(isolate, authenticatorSelectionValue, authenticatorSelectionCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAuthenticatorSelection(authenticatorSelectionCppValue);
  }

  v8::Local<v8::Value> challengeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&challengeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (challengeValue.IsEmpty() || challengeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member challenge is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView challengeCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, challengeValue, challengeCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setChallenge(challengeCppValue);
  }

  v8::Local<v8::Value> excludeCredentialsValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&excludeCredentialsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (excludeCredentialsValue.IsEmpty() || excludeCredentialsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PublicKeyCredentialDescriptor> excludeCredentialsCppValue = NativeValueTraits<IDLSequence<PublicKeyCredentialDescriptor>>::NativeValue(isolate, excludeCredentialsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExcludeCredentials(excludeCredentialsCppValue);
  }

  v8::Local<v8::Value> extensionsValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&extensionsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (extensionsValue.IsEmpty() || extensionsValue->IsUndefined()) {
    // Do nothing.
  } else {
    AuthenticationExtensionsClientInputs extensionsCppValue;
    V8AuthenticationExtensionsClientInputs::ToImpl(isolate, extensionsValue, extensionsCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setExtensions(extensionsCppValue);
  }

  v8::Local<v8::Value> pubKeyCredParamsValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&pubKeyCredParamsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (pubKeyCredParamsValue.IsEmpty() || pubKeyCredParamsValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member pubKeyCredParams is undefined.");
    return;
  } else {
    HeapVector<PublicKeyCredentialParameters> pubKeyCredParamsCppValue = NativeValueTraits<IDLSequence<PublicKeyCredentialParameters>>::NativeValue(isolate, pubKeyCredParamsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPubKeyCredParams(pubKeyCredParamsCppValue);
  }

  v8::Local<v8::Value> rpValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&rpValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rpValue.IsEmpty() || rpValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member rp is undefined.");
    return;
  } else {
    PublicKeyCredentialRpEntity rpCppValue;
    V8PublicKeyCredentialRpEntity::ToImpl(isolate, rpValue, rpCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRp(rpCppValue);
  }

  v8::Local<v8::Value> timeoutValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&timeoutValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeoutValue.IsEmpty() || timeoutValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t timeoutCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, timeoutValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setTimeout(timeoutCppValue);
  }

  v8::Local<v8::Value> userValue;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&userValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (userValue.IsEmpty() || userValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member user is undefined.");
    return;
  } else {
    PublicKeyCredentialUserEntity userCppValue;
    V8PublicKeyCredentialUserEntity::ToImpl(isolate, userValue, userCppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUser(userCppValue);
  }
}

v8::Local<v8::Value> PublicKeyCredentialCreationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialCreationOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialCreationOptions(const PublicKeyCredentialCreationOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialCreationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attestationValue;
  bool attestationHasValueOrDefault = false;
  if (impl.hasAttestation()) {
    attestationValue = V8String(isolate, impl.attestation());
    attestationHasValueOrDefault = true;
  }
  if (attestationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), attestationValue))) {
    return false;
  }

  v8::Local<v8::Value> authenticatorSelectionValue;
  bool authenticatorSelectionHasValueOrDefault = false;
  if (impl.hasAuthenticatorSelection()) {
    authenticatorSelectionValue = ToV8(impl.authenticatorSelection(), creationContext, isolate);
    authenticatorSelectionHasValueOrDefault = true;
  }
  if (authenticatorSelectionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), authenticatorSelectionValue))) {
    return false;
  }

  v8::Local<v8::Value> challengeValue;
  bool challengeHasValueOrDefault = false;
  if (impl.hasChallenge()) {
    challengeValue = ToV8(impl.challenge(), creationContext, isolate);
    challengeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (challengeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), challengeValue))) {
    return false;
  }

  v8::Local<v8::Value> excludeCredentialsValue;
  bool excludeCredentialsHasValueOrDefault = false;
  if (impl.hasExcludeCredentials()) {
    excludeCredentialsValue = ToV8(impl.excludeCredentials(), creationContext, isolate);
    excludeCredentialsHasValueOrDefault = true;
  } else {
    excludeCredentialsValue = ToV8(HeapVector<PublicKeyCredentialDescriptor>(), creationContext, isolate);
    excludeCredentialsHasValueOrDefault = true;
  }
  if (excludeCredentialsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), excludeCredentialsValue))) {
    return false;
  }

  v8::Local<v8::Value> extensionsValue;
  bool extensionsHasValueOrDefault = false;
  if (impl.hasExtensions()) {
    extensionsValue = ToV8(impl.extensions(), creationContext, isolate);
    extensionsHasValueOrDefault = true;
  }
  if (extensionsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), extensionsValue))) {
    return false;
  }

  v8::Local<v8::Value> pubKeyCredParamsValue;
  bool pubKeyCredParamsHasValueOrDefault = false;
  if (impl.hasPubKeyCredParams()) {
    pubKeyCredParamsValue = ToV8(impl.pubKeyCredParams(), creationContext, isolate);
    pubKeyCredParamsHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (pubKeyCredParamsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), pubKeyCredParamsValue))) {
    return false;
  }

  v8::Local<v8::Value> rpValue;
  bool rpHasValueOrDefault = false;
  if (impl.hasRp()) {
    rpValue = ToV8(impl.rp(), creationContext, isolate);
    rpHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (rpHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), rpValue))) {
    return false;
  }

  v8::Local<v8::Value> timeoutValue;
  bool timeoutHasValueOrDefault = false;
  if (impl.hasTimeout()) {
    timeoutValue = v8::Integer::NewFromUnsigned(isolate, impl.timeout());
    timeoutHasValueOrDefault = true;
  }
  if (timeoutHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), timeoutValue))) {
    return false;
  }

  v8::Local<v8::Value> userValue;
  bool userHasValueOrDefault = false;
  if (impl.hasUser()) {
    userValue = ToV8(impl.user(), creationContext, isolate);
    userHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (userHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[8].Get(isolate), userValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialCreationOptions NativeValueTraits<PublicKeyCredentialCreationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialCreationOptions impl;
  V8PublicKeyCredentialCreationOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
