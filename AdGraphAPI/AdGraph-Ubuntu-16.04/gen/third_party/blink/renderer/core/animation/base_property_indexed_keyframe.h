// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BasePropertyIndexedKeyframe_h
#define BasePropertyIndexedKeyframe_h

#include "third_party/blink/renderer/bindings/core/v8/composite_operation_or_composite_operation_or_null_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/double_or_double_or_null_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT BasePropertyIndexedKeyframe : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BasePropertyIndexedKeyframe();
  virtual ~BasePropertyIndexedKeyframe();
  BasePropertyIndexedKeyframe(const BasePropertyIndexedKeyframe&);
  BasePropertyIndexedKeyframe& operator=(const BasePropertyIndexedKeyframe&);

  bool hasComposite() const { return !composite_.IsNull(); }
  const CompositeOperationOrCompositeOperationOrNullSequence& composite() const {
    return composite_;
  }
  void setComposite(const CompositeOperationOrCompositeOperationOrNullSequence&);

  bool hasEasing() const { return !easing_.IsNull(); }
  const StringOrStringSequence& easing() const {
    return easing_;
  }
  void setEasing(const StringOrStringSequence&);

  bool hasOffset() const { return !offset_.IsNull(); }
  const DoubleOrDoubleOrNullSequence& offset() const {
    return offset_;
  }
  void setOffset(const DoubleOrDoubleOrNullSequence&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  CompositeOperationOrCompositeOperationOrNullSequence composite_;
  StringOrStringSequence easing_;
  DoubleOrDoubleOrNullSequence offset_;

  friend class V8BasePropertyIndexedKeyframe;
};

}  // namespace blink

#endif  // BasePropertyIndexedKeyframe_h
