// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentRequestEventInit_h
#define PaymentRequestEventInit_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_currency_amount.h"
#include "third_party/blink/renderer/modules/payments/payment_details_modifier.h"
#include "third_party/blink/renderer/modules/payments/payment_method_data.h"
#include "third_party/blink/renderer/modules/serviceworkers/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PaymentRequestEventInit : public ExtendableEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentRequestEventInit();
  virtual ~PaymentRequestEventInit();
  PaymentRequestEventInit(const PaymentRequestEventInit&);
  PaymentRequestEventInit& operator=(const PaymentRequestEventInit&);

  bool hasInstrumentKey() const { return !instrument_key_.IsNull(); }
  const String& instrumentKey() const {
    return instrument_key_;
  }
  inline void setInstrumentKey(const String&);

  bool hasMethodData() const { return has_method_data_; }
  const HeapVector<PaymentMethodData>& methodData() const {
    DCHECK(has_method_data_);
    return method_data_;
  }
  void setMethodData(const HeapVector<PaymentMethodData>&);

  bool hasModifiers() const { return has_modifiers_; }
  const HeapVector<PaymentDetailsModifier>& modifiers() const {
    DCHECK(has_modifiers_);
    return modifiers_;
  }
  void setModifiers(const HeapVector<PaymentDetailsModifier>&);

  bool hasPaymentRequestId() const { return !payment_request_id_.IsNull(); }
  const String& paymentRequestId() const {
    return payment_request_id_;
  }
  inline void setPaymentRequestId(const String&);

  bool hasPaymentRequestOrigin() const { return !payment_request_origin_.IsNull(); }
  const String& paymentRequestOrigin() const {
    return payment_request_origin_;
  }
  inline void setPaymentRequestOrigin(const String&);

  bool hasTopOrigin() const { return !top_origin_.IsNull(); }
  const String& topOrigin() const {
    return top_origin_;
  }
  inline void setTopOrigin(const String&);

  bool hasTotal() const { return has_total_; }
  const PaymentCurrencyAmount& total() const {
    DCHECK(has_total_);
    return total_;
  }
  void setTotal(const PaymentCurrencyAmount&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_method_data_ = false;
  bool has_modifiers_ = false;
  bool has_total_ = false;

  String instrument_key_;
  HeapVector<PaymentMethodData> method_data_;
  HeapVector<PaymentDetailsModifier> modifiers_;
  String payment_request_id_;
  String payment_request_origin_;
  String top_origin_;
  PaymentCurrencyAmount total_;

  friend class V8PaymentRequestEventInit;
};

void PaymentRequestEventInit::setInstrumentKey(const String& value) {
  instrument_key_ = value;
}

void PaymentRequestEventInit::setPaymentRequestId(const String& value) {
  payment_request_id_ = value;
}

void PaymentRequestEventInit::setPaymentRequestOrigin(const String& value) {
  payment_request_origin_ = value;
}

void PaymentRequestEventInit::setTopOrigin(const String& value) {
  top_origin_ = value;
}

}  // namespace blink

#endif  // PaymentRequestEventInit_h
