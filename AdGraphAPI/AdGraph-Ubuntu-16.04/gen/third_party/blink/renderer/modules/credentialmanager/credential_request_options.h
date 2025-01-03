// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CredentialRequestOptions_h
#define CredentialRequestOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_request_options.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_request_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CredentialRequestOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CredentialRequestOptions();
  virtual ~CredentialRequestOptions();
  CredentialRequestOptions(const CredentialRequestOptions&);
  CredentialRequestOptions& operator=(const CredentialRequestOptions&);

  bool hasFederated() const { return has_federated_; }
  const FederatedCredentialRequestOptions& federated() const {
    DCHECK(has_federated_);
    return federated_;
  }
  void setFederated(const FederatedCredentialRequestOptions&);
  void setFederatedToNull();

  bool hasMediation() const { return !mediation_.IsNull(); }
  const String& mediation() const {
    return mediation_;
  }
  inline void setMediation(const String&);

  bool hasPassword() const { return has_password_; }
  bool password() const {
    DCHECK(has_password_);
    return password_;
  }
  inline void setPassword(bool);

  bool hasPublicKey() const { return has_public_key_; }
  const PublicKeyCredentialRequestOptions& publicKey() const {
    DCHECK(has_public_key_);
    return public_key_;
  }
  void setPublicKey(const PublicKeyCredentialRequestOptions&);
  void setPublicKeyToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_federated_ = false;
  bool has_password_ = false;
  bool has_public_key_ = false;

  FederatedCredentialRequestOptions federated_;
  String mediation_;
  bool password_;
  PublicKeyCredentialRequestOptions public_key_;

  friend class V8CredentialRequestOptions;
};

void CredentialRequestOptions::setMediation(const String& value) {
  mediation_ = value;
}

void CredentialRequestOptions::setPassword(bool value) {
  password_ = value;
  has_password_ = true;
}

}  // namespace blink

#endif  // CredentialRequestOptions_h
