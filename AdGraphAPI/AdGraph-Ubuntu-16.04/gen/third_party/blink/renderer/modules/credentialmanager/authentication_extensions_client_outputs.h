// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef AuthenticationExtensionsClientOutputs_h
#define AuthenticationExtensionsClientOutputs_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT AuthenticationExtensionsClientOutputs : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  AuthenticationExtensionsClientOutputs();
  virtual ~AuthenticationExtensionsClientOutputs();
  AuthenticationExtensionsClientOutputs(const AuthenticationExtensionsClientOutputs&);
  AuthenticationExtensionsClientOutputs& operator=(const AuthenticationExtensionsClientOutputs&);

  bool hasAppid() const { return has_appid_; }
  bool appid() const {
    DCHECK(has_appid_);
    return appid_;
  }
  inline void setAppid(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_appid_ = false;

  bool appid_;

  friend class V8AuthenticationExtensionsClientOutputs;
};

void AuthenticationExtensionsClientOutputs::setAppid(bool value) {
  appid_ = value;
  has_appid_ = true;
}

}  // namespace blink

#endif  // AuthenticationExtensionsClientOutputs_h
