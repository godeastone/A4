// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_selection_criteria.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AuthenticatorSelectionCriteriaKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "authenticatorAttachment",
    "requireResidentKey",
    "userVerification",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AuthenticatorSelectionCriteria::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AuthenticatorSelectionCriteria& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticatorSelectionCriteriaKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticatorAttachmentValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&authenticatorAttachmentValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticatorAttachmentValue.IsEmpty() || authenticatorAttachmentValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> authenticatorAttachmentCppValue = authenticatorAttachmentValue;
    if (!authenticatorAttachmentCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "platform",
        "cross-platform",
    };
    if (!IsValidEnum(authenticatorAttachmentCppValue, validValues, arraysize(validValues), "AuthenticatorAttachment", exceptionState))
      return;
    impl.setAuthenticatorAttachment(authenticatorAttachmentCppValue);
  }

  v8::Local<v8::Value> requireResidentKeyValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&requireResidentKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requireResidentKeyValue.IsEmpty() || requireResidentKeyValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool requireResidentKeyCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, requireResidentKeyValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRequireResidentKey(requireResidentKeyCppValue);
  }

  v8::Local<v8::Value> userVerificationValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&userVerificationValue)) {
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

v8::Local<v8::Value> AuthenticatorSelectionCriteria::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AuthenticatorSelectionCriteria(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AuthenticatorSelectionCriteria(const AuthenticatorSelectionCriteria& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AuthenticatorSelectionCriteriaKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticatorAttachmentValue;
  bool authenticatorAttachmentHasValueOrDefault = false;
  if (impl.hasAuthenticatorAttachment()) {
    authenticatorAttachmentValue = V8String(isolate, impl.authenticatorAttachment());
    authenticatorAttachmentHasValueOrDefault = true;
  }
  if (authenticatorAttachmentHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), authenticatorAttachmentValue))) {
    return false;
  }

  v8::Local<v8::Value> requireResidentKeyValue;
  bool requireResidentKeyHasValueOrDefault = false;
  if (impl.hasRequireResidentKey()) {
    requireResidentKeyValue = v8::Boolean::New(isolate, impl.requireResidentKey());
    requireResidentKeyHasValueOrDefault = true;
  } else {
    requireResidentKeyValue = v8::Boolean::New(isolate, false);
    requireResidentKeyHasValueOrDefault = true;
  }
  if (requireResidentKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), requireResidentKeyValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), userVerificationValue))) {
    return false;
  }

  return true;
}

AuthenticatorSelectionCriteria NativeValueTraits<AuthenticatorSelectionCriteria>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AuthenticatorSelectionCriteria impl;
  V8AuthenticatorSelectionCriteria::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
