// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentDetailsInit_h
#define PaymentDetailsInit_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_details_base.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsInit : public PaymentDetailsBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentDetailsInit();
  virtual ~PaymentDetailsInit();
  PaymentDetailsInit(const PaymentDetailsInit&);
  PaymentDetailsInit& operator=(const PaymentDetailsInit&);

  bool hasId() const { return !id_.IsNull(); }
  const String& id() const {
    return id_;
  }
  inline void setId(const String&);

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

  String id_;
  PaymentItem total_;

  friend class V8PaymentDetailsInit;
};

void PaymentDetailsInit::setId(const String& value) {
  id_ = value;
}

}  // namespace blink

#endif  // PaymentDetailsInit_h
