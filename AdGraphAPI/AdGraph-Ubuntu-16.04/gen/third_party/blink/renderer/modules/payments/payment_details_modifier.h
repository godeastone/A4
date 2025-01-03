// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentDetailsModifier_h
#define PaymentDetailsModifier_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsModifier : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentDetailsModifier();
  virtual ~PaymentDetailsModifier();
  PaymentDetailsModifier(const PaymentDetailsModifier&);
  PaymentDetailsModifier& operator=(const PaymentDetailsModifier&);

  bool hasAdditionalDisplayItems() const { return has_additional_display_items_; }
  const HeapVector<PaymentItem>& additionalDisplayItems() const {
    DCHECK(has_additional_display_items_);
    return additional_display_items_;
  }
  void setAdditionalDisplayItems(const HeapVector<PaymentItem>&);

  bool hasData() const { return !(data_.IsEmpty() || data_.IsNull() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasSupportedMethods() const { return !supported_methods_.IsNull(); }
  const StringOrStringSequence& supportedMethods() const {
    return supported_methods_;
  }
  void setSupportedMethods(const StringOrStringSequence&);

  bool hasTotal() const { return has_total_; }
  const PaymentItem& total() const {
    DCHECK(has_total_);
    return total_;
  }
  void setTotal(const PaymentItem&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_additional_display_items_ = false;
  bool has_total_ = false;

  HeapVector<PaymentItem> additional_display_items_;
  ScriptValue data_;
  StringOrStringSequence supported_methods_;
  PaymentItem total_;

  friend class V8PaymentDetailsModifier;
};

}  // namespace blink

#endif  // PaymentDetailsModifier_h
