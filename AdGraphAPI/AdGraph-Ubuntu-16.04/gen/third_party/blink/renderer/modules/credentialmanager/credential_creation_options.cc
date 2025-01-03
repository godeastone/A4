// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/credential_creation_options.h"

namespace blink {

CredentialCreationOptions::CredentialCreationOptions() {
}

CredentialCreationOptions::~CredentialCreationOptions() {}

CredentialCreationOptions::CredentialCreationOptions(const CredentialCreationOptions&) = default;

CredentialCreationOptions& CredentialCreationOptions::operator=(const CredentialCreationOptions&) = default;

void CredentialCreationOptions::setFederated(const FederatedCredentialInit& value) {
  federated_ = value;
  has_federated_ = true;
}
void CredentialCreationOptions::setFederatedToNull() {
  has_federated_ = false;
}

void CredentialCreationOptions::setPassword(const PasswordCredentialDataOrHTMLFormElement& value) {
  password_ = value;
}
void CredentialCreationOptions::setPasswordToNull() {
  password_ = PasswordCredentialDataOrHTMLFormElement();
}

void CredentialCreationOptions::setPublicKey(const PublicKeyCredentialCreationOptions& value) {
  public_key_ = value;
  has_public_key_ = true;
}
void CredentialCreationOptions::setPublicKeyToNull() {
  has_public_key_ = false;
}

void CredentialCreationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(federated_);
  visitor->Trace(password_);
  visitor->Trace(public_key_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
