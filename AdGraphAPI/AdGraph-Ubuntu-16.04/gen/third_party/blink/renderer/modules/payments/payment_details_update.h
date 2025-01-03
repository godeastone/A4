// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentDetailsUpdate_h
#define PaymentDetailsUpdate_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_details_base.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsUpdate : public PaymentDetailsBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentDetailsUpdate();
  virtual ~PaymentDetailsUpdate();
  PaymentDetailsUpdate(const PaymentDetailsUpdate&);
  PaymentDetailsUpdate& operator=(const PaymentDetailsUpdate&);

  bool hasError() const { return !error_.IsNull(); }
  const String& error() const {
    return error_;
  }
  inline void setError(const String&);

  bool hasTotal() const { return has_total_; }
  const PaymentItem& total() const {
    DCHECK(has_total_);
    return total_;
  }
  void setTotal(const PaymentItem&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_total_ = false;

  String error_;
  PaymentItem total_;

  friend class V8PaymentDetailsUpdate;
};

void PaymentDetailsUpdate::setError(const String& value) {
  error_ = value;
}

}  // namespace blink

#endif  // PaymentDetailsUpdate_h
