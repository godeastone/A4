// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef NavigationPreloadState_h
#define NavigationPreloadState_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT NavigationPreloadState : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  NavigationPreloadState();
  virtual ~NavigationPreloadState();
  NavigationPreloadState(const NavigationPreloadState&);
  NavigationPreloadState& operator=(const NavigationPreloadState&);

  bool hasEnabled() const { return has_enabled_; }
  bool enabled() const {
    DCHECK(has_enabled_);
    return enabled_;
  }
  inline void setEnabled(bool);

  bool hasHeaderValue() const { return !header_value_.IsNull(); }
  const String& headerValue() const {
    return header_value_;
  }
  inline void setHeaderValue(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_enabled_ = false;

  bool enabled_;
  String header_value_;

  friend class V8NavigationPreloadState;
};

void NavigationPreloadState::setEnabled(bool value) {
  enabled_ = value;
  has_enabled_ = true;
}

void NavigationPreloadState::setHeaderValue(const String& value) {
  header_value_ = value;
}

}  // namespace blink

#endif  // NavigationPreloadState_h
