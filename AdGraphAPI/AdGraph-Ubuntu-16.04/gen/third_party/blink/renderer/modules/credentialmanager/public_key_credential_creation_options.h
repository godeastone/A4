// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PublicKeyCredentialCreationOptions_h
#define PublicKeyCredentialCreationOptions_h

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/credentialmanager/authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/modules/credentialmanager/authenticator_selection_criteria.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_descriptor.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_parameters.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_rp_entity.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_user_entity.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialCreationOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PublicKeyCredentialCreationOptions();
  virtual ~PublicKeyCredentialCreationOptions();
  PublicKeyCredentialCreationOptions(const PublicKeyCredentialCreationOptions&);
  PublicKeyCredentialCreationOptions& operator=(const PublicKeyCredentialCreationOptions&);

  bool hasAttestation() const { return !attestation_.IsNull(); }
  const String& attestation() const {
    return attestation_;
  }
  inline void setAttestation(const String&);

  bool hasAuthenticatorSelection() const { return has_authenticator_selection_; }
  const AuthenticatorSelectionCriteria& authenticatorSelection() const {
    DCHECK(has_authenticator_selection_);
    return authenticator_selection_;
  }
  void setAuthenticatorSelection(const AuthenticatorSelectionCriteria&);

  bool hasChallenge() const { return !challenge_.IsNull(); }
  const ArrayBufferOrArrayBufferView& challenge() const {
    return challenge_;
  }
  void setChallenge(const ArrayBufferOrArrayBufferView&);

  bool hasExcludeCredentials() const { return has_exclude_credentials_; }
  const HeapVector<PublicKeyCredentialDescriptor>& excludeCredentials() const {
    DCHECK(has_exclude_credentials_);
    return exclude_credentials_;
  }
  void setExcludeCredentials(const HeapVector<PublicKeyCredentialDescriptor>&);

  bool hasExtensions() const { return has_extensions_; }
  const AuthenticationExtensionsClientInputs& extensions() const {
    DCHECK(has_extensions_);
    return extensions_;
  }
  void setExtensions(const AuthenticationExtensionsClientInputs&);

  bool hasPubKeyCredParams() const { return has_pub_key_cred_params_; }
  const HeapVector<PublicKeyCredentialParameters>& pubKeyCredParams() const {
    DCHECK(has_pub_key_cred_params_);
    return pub_key_cred_params_;
  }
  void setPubKeyCredParams(const HeapVector<PublicKeyCredentialParameters>&);

  bool hasRp() const { return has_rp_; }
  const PublicKeyCredentialRpEntity& rp() const {
    DCHECK(has_rp_);
    return rp_;
  }
  void setRp(const PublicKeyCredentialRpEntity&);

  bool hasTimeout() const { return has_timeout_; }
  uint32_t timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(uint32_t);

  bool hasUser() const { return has_user_; }
  const PublicKeyCredentialUserEntity& user() const {
    DCHECK(has_user_);
    return user_;
  }
  void setUser(const PublicKeyCredentialUserEntity&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_authenticator_selection_ = false;
  bool has_exclude_credentials_ = false;
  bool has_extensions_ = false;
  bool has_pub_key_cred_params_ = false;
  bool has_rp_ = false;
  bool has_timeout_ = false;
  bool has_user_ = false;

  String attestation_;
  AuthenticatorSelectionCriteria authenticator_selection_;
  ArrayBufferOrArrayBufferView challenge_;
  HeapVector<PublicKeyCredentialDescriptor> exclude_credentials_;
  AuthenticationExtensionsClientInputs extensions_;
  HeapVector<PublicKeyCredentialParameters> pub_key_cred_params_;
  PublicKeyCredentialRpEntity rp_;
  uint32_t timeout_;
  PublicKeyCredentialUserEntity user_;

  friend class V8PublicKeyCredentialCreationOptions;
};

void PublicKeyCredentialCreationOptions::setAttestation(const String& value) {
  attestation_ = value;
}

void PublicKeyCredentialCreationOptions::setTimeout(uint32_t value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // PublicKeyCredentialCreationOptions_h
