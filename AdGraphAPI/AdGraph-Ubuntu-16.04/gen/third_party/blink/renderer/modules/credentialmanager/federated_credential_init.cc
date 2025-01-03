// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_init.h"

namespace blink {

FederatedCredentialInit::FederatedCredentialInit() {
}

FederatedCredentialInit::~FederatedCredentialInit() {}

FederatedCredentialInit::FederatedCredentialInit(const FederatedCredentialInit&) = default;

FederatedCredentialInit& FederatedCredentialInit::operator=(const FederatedCredentialInit&) = default;

void FederatedCredentialInit::Trace(blink::Visitor* visitor) {
  CredentialData::Trace(visitor);
}

}  // namespace blink
