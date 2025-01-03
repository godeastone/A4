// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef RegistrationOptions_h
#define RegistrationOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RegistrationOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  RegistrationOptions();
  virtual ~RegistrationOptions();
  RegistrationOptions(const RegistrationOptions&);
  RegistrationOptions& operator=(const RegistrationOptions&);

  bool hasScope() const { return !scope_.IsNull(); }
  const String& scope() const {
    return scope_;
  }
  inline void setScope(const String&);

  bool hasUpdateViaCache() const { return !update_via_cache_.IsNull(); }
  const String& updateViaCache() const {
    return update_via_cache_;
  }
  inline void setUpdateViaCache(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String scope_;
  String update_via_cache_;

  friend class V8RegistrationOptions;
};

void RegistrationOptions::setScope(const String& value) {
  scope_ = value;
}

void RegistrationOptions::setUpdateViaCache(const String& value) {
  update_via_cache_ = value;
}

}  // namespace blink

#endif  // RegistrationOptions_h
