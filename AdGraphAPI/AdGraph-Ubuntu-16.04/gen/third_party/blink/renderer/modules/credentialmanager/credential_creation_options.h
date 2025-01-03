// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CredentialCreationOptions_h
#define CredentialCreationOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/password_credential_data_or_html_form_element.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_init.h"
#include "third_party/blink/renderer/modules/credentialmanager/password_credential_data.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_creation_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT CredentialCreationOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CredentialCreationOptions();
  virtual ~CredentialCreationOptions();
  CredentialCreationOptions(const CredentialCreationOptions&);
  CredentialCreationOptions& operator=(const CredentialCreationOptions&);

  bool hasFederated() const { return has_federated_; }
  const FederatedCredentialInit& federated() const {
    DCHECK(has_federated_);
    return federated_;
  }
  void setFederated(const FederatedCredentialInit&);
  void setFederatedToNull();

  bool hasPassword() const { return !password_.IsNull(); }
  const PasswordCredentialDataOrHTMLFormElement& password() const {
    return password_;
  }
  void setPassword(const PasswordCredentialDataOrHTMLFormElement&);
  void setPasswordToNull();

  bool hasPublicKey() const { return has_public_key_; }
  const PublicKeyCredentialCreationOptions& publicKey() const {
    DCHECK(has_public_key_);
    return public_key_;
  }
  void setPublicKey(const PublicKeyCredentialCreationOptions&);
  void setPublicKeyToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_federated_ = false;
  bool has_public_key_ = false;

  FederatedCredentialInit federated_;
  PasswordCredentialDataOrHTMLFormElement password_;
  PublicKeyCredentialCreationOptions public_key_;

  friend class V8CredentialCreationOptions;
};

}  // namespace blink

#endif  // CredentialCreationOptions_h
