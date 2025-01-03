// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_method_data.h"

namespace blink {

PaymentMethodData::PaymentMethodData() {
}

PaymentMethodData::~PaymentMethodData() {}

PaymentMethodData::PaymentMethodData(const PaymentMethodData&) = default;

PaymentMethodData& PaymentMethodData::operator=(const PaymentMethodData&) = default;

void PaymentMethodData::setData(ScriptValue value) {
  data_ = value;
}

void PaymentMethodData::setSupportedMethods(const StringOrStringSequence& value) {
  supported_methods_ = value;
}

void PaymentMethodData::Trace(blink::Visitor* visitor) {
  visitor->Trace(supported_methods_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
