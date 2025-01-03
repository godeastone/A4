// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef WorkletOptions_h
#define WorkletOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT WorkletOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  WorkletOptions();
  virtual ~WorkletOptions();
  WorkletOptions(const WorkletOptions&);
  WorkletOptions& operator=(const WorkletOptions&);

  bool hasCredentials() const { return !credentials_.IsNull(); }
  const String& credentials() const {
    return credentials_;
  }
  inline void setCredentials(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String credentials_;

  friend class V8WorkletOptions;
};

void WorkletOptions::setCredentials(const String& value) {
  credentials_ = value;
}

}  // namespace blink

#endif  // WorkletOptions_h
