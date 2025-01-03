// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_request_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential_descriptor.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PublicKeyCredentialRequestOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allowCredentials",
    "challenge",
    "extensions",
    "rpId",
    "timeout",
    "userVerification",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PublicKeyCredentialRequestOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PublicKeyCredentialRequestOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): challenge.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialRequestOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allowCredentialsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&allowCredentialsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (allowCredentialsValue.IsEmpty() || allowCredentialsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<PublicKeyCredentialDescriptor> allowCredentialsCppValue = NativeValueTraits<IDLSequence<PublicKeyCredentialDescriptor>>::NativeValue(isolate, allowCredentialsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAllowCredentials(allowCredentialsCppValue);
  }

  v8::Local<v8::Value> challengeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&challengeValue)) {
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

  v8::Local<v8::Value> extensionsValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&extensionsValue)) {
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

  v8::Local<v8::Value> rpIdValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&rpIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rpIdValue.IsEmpty() || rpIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> rpIdCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, rpIdValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRpId(rpIdCppValue);
  }

  v8::Local<v8::Value> timeoutValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&timeoutValue)) {
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

  v8::Local<v8::Value> userVerificationValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&userVerificationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (userVerificationValue.IsEmpty() || userVerificationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> userVerificationCppValue = userVerificationValue;
    if (!userVerificationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "required",
        "preferred",
        "discouraged",
    };
    if (!IsValidEnum(userVerificationCppValue, validValues, arraysize(validValues), "UserVerificationRequirement", exceptionState))
      return;
    impl.setUserVerification(userVerificationCppValue);
  }
}

v8::Local<v8::Value> PublicKeyCredentialRequestOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PublicKeyCredentialRequestOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PublicKeyCredentialRequestOptions(const PublicKeyCredentialRequestOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PublicKeyCredentialRequestOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allowCredentialsValue;
  bool allowCredentialsHasValueOrDefault = false;
  if (impl.hasAllowCredentials()) {
    allowCredentialsValue = ToV8(impl.allowCredentials(), creationContext, isolate);
    allowCredentialsHasValueOrDefault = true;
  } else {
    allowCredentialsValue = ToV8(HeapVector<PublicKeyCredentialDescriptor>(), creationContext, isolate);
    allowCredentialsHasValueOrDefault = true;
  }
  if (allowCredentialsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), allowCredentialsValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), challengeValue))) {
    return false;
  }

  v8::Local<v8::Value> extensionsValue;
  bool extensionsHasValueOrDefault = false;
  if (impl.hasExtensions()) {
    extensionsValue = ToV8(impl.extensions(), creationContext, isolate);
    extensionsHasValueOrDefault = true;
  }
  if (extensionsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), extensionsValue))) {
    return false;
  }

  v8::Local<v8::Value> rpIdValue;
  bool rpIdHasValueOrDefault = false;
  if (impl.hasRpId()) {
    rpIdValue = V8String(isolate, impl.rpId());
    rpIdHasValueOrDefault = true;
  }
  if (rpIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), rpIdValue))) {
    return false;
  }

  v8::Local<v8::Value> timeoutValue;
  bool timeoutHasValueOrDefault = false;
  if (impl.hasTimeout()) {
    timeoutValue = v8::Integer::NewFromUnsigned(isolate, impl.timeout());
    timeoutHasValueOrDefault = true;
  }
  if (timeoutHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), timeoutValue))) {
    return false;
  }

  v8::Local<v8::Value> userVerificationValue;
  bool userVerificationHasValueOrDefault = false;
  if (impl.hasUserVerification()) {
    userVerificationValue = V8String(isolate, impl.userVerification());
    userVerificationHasValueOrDefault = true;
  } else {
    userVerificationValue = V8String(isolate, "preferred");
    userVerificationHasValueOrDefault = true;
  }
  if (userVerificationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), userVerificationValue))) {
    return false;
  }

  return true;
}

PublicKeyCredentialRequestOptions NativeValueTraits<PublicKeyCredentialRequestOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PublicKeyCredentialRequestOptions impl;
  V8PublicKeyCredentialRequestOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
