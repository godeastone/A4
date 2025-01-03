// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MojoWriteDataOptions_h
#define MojoWriteDataOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoWriteDataOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MojoWriteDataOptions();
  virtual ~MojoWriteDataOptions();
  MojoWriteDataOptions(const MojoWriteDataOptions&);
  MojoWriteDataOptions& operator=(const MojoWriteDataOptions&);

  bool hasAllOrNone() const { return has_all_or_none_; }
  bool allOrNone() const {
    DCHECK(has_all_or_none_);
    return all_or_none_;
  }
  inline void setAllOrNone(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_all_or_none_ = false;

  bool all_or_none_;

  friend class V8MojoWriteDataOptions;
};

void MojoWriteDataOptions::setAllOrNone(bool value) {
  all_or_none_ = value;
  has_all_or_none_ = true;
}

}  // namespace blink

#endif  // MojoWriteDataOptions_h
