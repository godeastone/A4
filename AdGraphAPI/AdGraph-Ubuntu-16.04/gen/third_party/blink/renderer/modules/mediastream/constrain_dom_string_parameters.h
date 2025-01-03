// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ConstrainDOMStringParameters_h
#define ConstrainDOMStringParameters_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ConstrainDOMStringParameters : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ConstrainDOMStringParameters();
  virtual ~ConstrainDOMStringParameters();
  ConstrainDOMStringParameters(const ConstrainDOMStringParameters&);
  ConstrainDOMStringParameters& operator=(const ConstrainDOMStringParameters&);

  bool hasExact() const { return !exact_.IsNull(); }
  const StringOrStringSequence& exact() const {
    return exact_;
  }
  void setExact(const StringOrStringSequence&);

  bool hasIdeal() const { return !ideal_.IsNull(); }
  const StringOrStringSequence& ideal() const {
    return ideal_;
  }
  void setIdeal(const StringOrStringSequence&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  StringOrStringSequence exact_;
  StringOrStringSequence ideal_;

  friend class V8ConstrainDOMStringParameters;
};

}  // namespace blink

#endif  // ConstrainDOMStringParameters_h
