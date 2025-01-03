// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ConstrainDoubleRange_h
#define ConstrainDoubleRange_h

#include "third_party/blink/renderer/modules/mediastream/double_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT ConstrainDoubleRange : public DoubleRange {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ConstrainDoubleRange();
  virtual ~ConstrainDoubleRange();
  ConstrainDoubleRange(const ConstrainDoubleRange&);
  ConstrainDoubleRange& operator=(const ConstrainDoubleRange&);

  bool hasExact() const { return has_exact_; }
  double exact() const {
    DCHECK(has_exact_);
    return exact_;
  }
  inline void setExact(double);

  bool hasIdeal() const { return has_ideal_; }
  double ideal() const {
    DCHECK(has_ideal_);
    return ideal_;
  }
  inline void setIdeal(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exact_ = false;
  bool has_ideal_ = false;

  double exact_;
  double ideal_;

  friend class V8ConstrainDoubleRange;
};

void ConstrainDoubleRange::setExact(double value) {
  exact_ = value;
  has_exact_ = true;
}

void ConstrainDoubleRange::setIdeal(double value) {
  ideal_ = value;
  has_ideal_ = true;
}

}  // namespace blink

#endif  // ConstrainDoubleRange_h
