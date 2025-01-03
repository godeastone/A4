// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentDetailsBase_h
#define PaymentDetailsBase_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_details_modifier.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/modules/payments/payment_shipping_option.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsBase : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentDetailsBase();
  virtual ~PaymentDetailsBase();
  PaymentDetailsBase(const PaymentDetailsBase&);
  PaymentDetailsBase& operator=(const PaymentDetailsBase&);

  bool hasDisplayItems() const { return has_display_items_; }
  const HeapVector<PaymentItem>& displayItems() const {
    DCHECK(has_display_items_);
    return display_items_;
  }
  void setDisplayItems(const HeapVector<PaymentItem>&);

  bool hasModifiers() const { return has_modifiers_; }
  const HeapVector<PaymentDetailsModifier>& modifiers() const {
    DCHECK(has_modifiers_);
    return modifiers_;
  }
  void setModifiers(const HeapVector<PaymentDetailsModifier>&);

  bool hasShippingOptions() const { return has_shipping_options_; }
  const HeapVector<PaymentShippingOption>& shippingOptions() const {
    DCHECK(has_shipping_options_);
    return shipping_options_;
  }
  void setShippingOptions(const HeapVector<PaymentShippingOption>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_display_items_ = false;
  bool has_modifiers_ = false;
  bool has_shipping_options_ = false;

  HeapVector<PaymentItem> display_items_;
  HeapVector<PaymentDetailsModifier> modifiers_;
  HeapVector<PaymentShippingOption> shipping_options_;

  friend class V8PaymentDetailsBase;
};

}  // namespace blink

#endif  // PaymentDetailsBase_h
