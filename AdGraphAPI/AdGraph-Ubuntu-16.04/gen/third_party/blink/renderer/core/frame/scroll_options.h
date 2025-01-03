// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ScrollOptions_h
#define ScrollOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ScrollOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ScrollOptions();
  virtual ~ScrollOptions();
  ScrollOptions(const ScrollOptions&);
  ScrollOptions& operator=(const ScrollOptions&);

  bool hasBehavior() const { return !behavior_.IsNull(); }
  const String& behavior() const {
    return behavior_;
  }
  inline void setBehavior(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String behavior_;

  friend class V8ScrollOptions;
};

void ScrollOptions::setBehavior(const String& value) {
  behavior_ = value;
}

}  // namespace blink

#endif  // ScrollOptions_h
