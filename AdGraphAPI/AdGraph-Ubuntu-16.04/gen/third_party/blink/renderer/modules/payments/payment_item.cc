// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_item.h"

namespace blink {

PaymentItem::PaymentItem() {
  setPending(false);
}

PaymentItem::~PaymentItem() {}

PaymentItem::PaymentItem(const PaymentItem&) = default;

PaymentItem& PaymentItem::operator=(const PaymentItem&) = default;

void PaymentItem::setAmount(const PaymentCurrencyAmount& value) {
  amount_ = value;
  has_amount_ = true;
}

void PaymentItem::Trace(blink::Visitor* visitor) {
  visitor->Trace(amount_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
