// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ShadowRootInit_h
#define ShadowRootInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ShadowRootInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ShadowRootInit();
  virtual ~ShadowRootInit();
  ShadowRootInit(const ShadowRootInit&);
  ShadowRootInit& operator=(const ShadowRootInit&);

  bool hasDelegatesFocus() const { return has_delegates_focus_; }
  bool delegatesFocus() const {
    DCHECK(has_delegates_focus_);
    return delegates_focus_;
  }
  inline void setDelegatesFocus(bool);

  bool hasMode() const { return !mode_.IsNull(); }
  const String& mode() const {
    return mode_;
  }
  inline void setMode(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_delegates_focus_ = false;

  bool delegates_focus_;
  String mode_;

  friend class V8ShadowRootInit;
};

void ShadowRootInit::setDelegatesFocus(bool value) {
  delegates_focus_ = value;
  has_delegates_focus_ = true;
}

void ShadowRootInit::setMode(const String& value) {
  mode_ = value;
}

}  // namespace blink

#endif  // ShadowRootInit_h
