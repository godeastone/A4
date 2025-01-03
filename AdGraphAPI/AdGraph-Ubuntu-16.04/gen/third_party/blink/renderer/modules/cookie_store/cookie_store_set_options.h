// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CookieStoreSetOptions_h
#define CookieStoreSetOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT CookieStoreSetOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CookieStoreSetOptions();
  virtual ~CookieStoreSetOptions();
  CookieStoreSetOptions(const CookieStoreSetOptions&);
  CookieStoreSetOptions& operator=(const CookieStoreSetOptions&);

  bool hasDomain() const { return !domain_.IsNull(); }
  const String& domain() const {
    return domain_;
  }
  inline void setDomain(const String&);

  bool hasExpires() const { return has_expires_; }
  uint64_t expires() const {
    DCHECK(has_expires_);
    return expires_;
  }
  inline void setExpires(uint64_t);
  inline void setExpiresToNull();

  bool hasHttpOnly() const { return has_http_only_; }
  bool httpOnly() const {
    DCHECK(has_http_only_);
    return http_only_;
  }
  inline void setHttpOnly(bool);

  bool hasName() const { return !name_.IsNull(); }
  const String& name() const {
    return name_;
  }
  inline void setName(const String&);

  bool hasPath() const { return !path_.IsNull(); }
  const String& path() const {
    return path_;
  }
  inline void setPath(const String&);

  bool hasSecure() const { return has_secure_; }
  bool secure() const {
    DCHECK(has_secure_);
    return secure_;
  }
  inline void setSecure(bool);
  inline void setSecureToNull();

  bool hasValue() const { return !value_.IsNull(); }
  const String& value() const {
    return value_;
  }
  inline void setValue(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_expires_ = false;
  bool has_http_only_ = false;
  bool has_secure_ = false;

  String domain_;
  uint64_t expires_;
  bool http_only_;
  String name_;
  String path_;
  bool secure_;
  String value_;

  friend class V8CookieStoreSetOptions;
};

void CookieStoreSetOptions::setDomain(const String& value) {
  domain_ = value;
}

void CookieStoreSetOptions::setExpires(uint64_t value) {
  expires_ = value;
  has_expires_ = true;
}
void CookieStoreSetOptions::setExpiresToNull() {
  has_expires_ = false;
}

void CookieStoreSetOptions::setHttpOnly(bool value) {
  http_only_ = value;
  has_http_only_ = true;
}

void CookieStoreSetOptions::setName(const String& value) {
  name_ = value;
}

void CookieStoreSetOptions::setPath(const String& value) {
  path_ = value;
}

void CookieStoreSetOptions::setSecure(bool value) {
  secure_ = value;
  has_secure_ = true;
}
void CookieStoreSetOptions::setSecureToNull() {
  has_secure_ = false;
}

void CookieStoreSetOptions::setValue(const String& value) {
  value_ = value;
}

}  // namespace blink

#endif  // CookieStoreSetOptions_h
