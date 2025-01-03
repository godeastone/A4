// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_shipping_option.h"

namespace blink {

PaymentShippingOption::PaymentShippingOption() {
  setSelected(false);
}

PaymentShippingOption::~PaymentShippingOption() {}

PaymentShippingOption::PaymentShippingOption(const PaymentShippingOption&) = default;

PaymentShippingOption& PaymentShippingOption::operator=(const PaymentShippingOption&) = default;

void PaymentShippingOption::setAmount(const PaymentCurrencyAmount& value) {
  amount_ = value;
  has_amount_ = true;
}

void PaymentShippingOption::Trace(blink::Visitor* visitor) {
  visitor->Trace(amount_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
