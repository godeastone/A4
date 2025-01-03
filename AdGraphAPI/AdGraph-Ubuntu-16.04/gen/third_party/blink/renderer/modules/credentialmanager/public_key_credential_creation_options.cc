// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_creation_options.h"

namespace blink {

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions() {
  setExcludeCredentials(HeapVector<PublicKeyCredentialDescriptor>());
}

PublicKeyCredentialCreationOptions::~PublicKeyCredentialCreationOptions() {}

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(const PublicKeyCredentialCreationOptions&) = default;

PublicKeyCredentialCreationOptions& PublicKeyCredentialCreationOptions::operator=(const PublicKeyCredentialCreationOptions&) = default;

void PublicKeyCredentialCreationOptions::setAuthenticatorSelection(const AuthenticatorSelectionCriteria& value) {
  authenticator_selection_ = value;
  has_authenticator_selection_ = true;
}

void PublicKeyCredentialCreationOptions::setChallenge(const ArrayBufferOrArrayBufferView& value) {
  challenge_ = value;
}

void PublicKeyCredentialCreationOptions::setExcludeCredentials(const HeapVector<PublicKeyCredentialDescriptor>& value) {
  exclude_credentials_ = value;
  has_exclude_credentials_ = true;
}

void PublicKeyCredentialCreationOptions::setExtensions(const AuthenticationExtensionsClientInputs& value) {
  extensions_ = value;
  has_extensions_ = true;
}

void PublicKeyCredentialCreationOptions::setPubKeyCredParams(const HeapVector<PublicKeyCredentialParameters>& value) {
  pub_key_cred_params_ = value;
  has_pub_key_cred_params_ = true;
}

void PublicKeyCredentialCreationOptions::setRp(const PublicKeyCredentialRpEntity& value) {
  rp_ = value;
  has_rp_ = true;
}

void PublicKeyCredentialCreationOptions::setUser(const PublicKeyCredentialUserEntity& value) {
  user_ = value;
  has_user_ = true;
}

void PublicKeyCredentialCreationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(authenticator_selection_);
  visitor->Trace(challenge_);
  visitor->Trace(exclude_credentials_);
  visitor->Trace(extensions_);
  visitor->Trace(pub_key_cred_params_);
  visitor->Trace(rp_);
  visitor->Trace(user_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
