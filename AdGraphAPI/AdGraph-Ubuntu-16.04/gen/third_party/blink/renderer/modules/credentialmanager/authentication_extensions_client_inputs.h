// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef AuthenticationExtensionsClientInputs_h
#define AuthenticationExtensionsClientInputs_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/credentialmanager/cable_authentication_data.h"
#include "third_party/blink/renderer/modules/credentialmanager/cable_registration_data.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT AuthenticationExtensionsClientInputs : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  AuthenticationExtensionsClientInputs();
  virtual ~AuthenticationExtensionsClientInputs();
  AuthenticationExtensionsClientInputs(const AuthenticationExtensionsClientInputs&);
  AuthenticationExtensionsClientInputs& operator=(const AuthenticationExtensionsClientInputs&);

  bool hasAppid() const { return !appid_.IsNull(); }
  const String& appid() const {
    return appid_;
  }
  inline void setAppid(const String&);

  bool hasCableAuthenticationData() const { return has_cable_authentication_data_; }
  const HeapVector<CableAuthenticationData>& cableAuthenticationData() const {
    DCHECK(has_cable_authentication_data_);
    return cable_authentication_data_;
  }
  void setCableAuthenticationData(const HeapVector<CableAuthenticationData>&);

  bool hasCableRegistration() const { return has_cable_registration_; }
  const CableRegistrationData& cableRegistration() const {
    DCHECK(has_cable_registration_);
    return cable_registration_;
  }
  void setCableRegistration(const CableRegistrationData&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_cable_authentication_data_ = false;
  bool has_cable_registration_ = false;

  String appid_;
  HeapVector<CableAuthenticationData> cable_authentication_data_;
  CableRegistrationData cable_registration_;

  friend class V8AuthenticationExtensionsClientInputs;
};

void AuthenticationExtensionsClientInputs::setAppid(const String& value) {
  appid_ = value;
}

}  // namespace blink

#endif  // AuthenticationExtensionsClientInputs_h
