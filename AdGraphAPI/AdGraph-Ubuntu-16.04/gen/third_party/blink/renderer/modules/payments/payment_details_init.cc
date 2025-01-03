// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_details_init.h"

namespace blink {

PaymentDetailsInit::PaymentDetailsInit() {
}

PaymentDetailsInit::~PaymentDetailsInit() {}

PaymentDetailsInit::PaymentDetailsInit(const PaymentDetailsInit&) = default;

PaymentDetailsInit& PaymentDetailsInit::operator=(const PaymentDetailsInit&) = default;

void PaymentDetailsInit::setTotal(const PaymentItem& value) {
  total_ = value;
  has_total_ = true;
}

void PaymentDetailsInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(total_);
  PaymentDetailsBase::Trace(visitor);
}

}  // namespace blink
