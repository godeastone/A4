// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaymentMethodData_h
#define PaymentMethodData_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PaymentMethodData : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaymentMethodData();
  virtual ~PaymentMethodData();
  PaymentMethodData(const PaymentMethodData&);
  PaymentMethodData& operator=(const PaymentMethodData&);

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

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  ScriptValue data_;
  StringOrStringSequence supported_methods_;

  friend class V8PaymentMethodData;
};

}  // namespace blink

#endif  // PaymentMethodData_h
