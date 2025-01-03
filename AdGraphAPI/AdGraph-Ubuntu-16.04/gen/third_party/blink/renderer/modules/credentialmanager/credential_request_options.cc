// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/credential_request_options.h"

namespace blink {

CredentialRequestOptions::CredentialRequestOptions() {
  setMediation("optional");
  setPassword(false);
}

CredentialRequestOptions::~CredentialRequestOptions() {}

CredentialRequestOptions::CredentialRequestOptions(const CredentialRequestOptions&) = default;

CredentialRequestOptions& CredentialRequestOptions::operator=(const CredentialRequestOptions&) = default;

void CredentialRequestOptions::setFederated(const FederatedCredentialRequestOptions& value) {
  federated_ = value;
  has_federated_ = true;
}
void CredentialRequestOptions::setFederatedToNull() {
  has_federated_ = false;
}

void CredentialRequestOptions::setPublicKey(const PublicKeyCredentialRequestOptions& value) {
  public_key_ = value;
  has_public_key_ = true;
}
void CredentialRequestOptions::setPublicKeyToNull() {
  has_public_key_ = false;
}

void CredentialRequestOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(federated_);
  visitor->Trace(public_key_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
