// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_details_modifier.h"

namespace blink {

PaymentDetailsModifier::PaymentDetailsModifier() {
}

PaymentDetailsModifier::~PaymentDetailsModifier() {}

PaymentDetailsModifier::PaymentDetailsModifier(const PaymentDetailsModifier&) = default;

PaymentDetailsModifier& PaymentDetailsModifier::operator=(const PaymentDetailsModifier&) = default;

void PaymentDetailsModifier::setAdditionalDisplayItems(const HeapVector<PaymentItem>& value) {
  additional_display_items_ = value;
  has_additional_display_items_ = true;
}

void PaymentDetailsModifier::setData(ScriptValue value) {
  data_ = value;
}

void PaymentDetailsModifier::setSupportedMethods(const StringOrStringSequence& value) {
  supported_methods_ = value;
}

void PaymentDetailsModifier::setTotal(const PaymentItem& value) {
  total_ = value;
  has_total_ = true;
}

void PaymentDetailsModifier::Trace(blink::Visitor* visitor) {
  visitor->Trace(additional_display_items_);
  visitor->Trace(supported_methods_);
  visitor->Trace(total_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
