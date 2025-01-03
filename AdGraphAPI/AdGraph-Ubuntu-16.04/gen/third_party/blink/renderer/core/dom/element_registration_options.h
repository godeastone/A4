// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ElementRegistrationOptions_h
#define ElementRegistrationOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ElementRegistrationOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ElementRegistrationOptions();
  virtual ~ElementRegistrationOptions();
  ElementRegistrationOptions(const ElementRegistrationOptions&);
  ElementRegistrationOptions& operator=(const ElementRegistrationOptions&);

  bool hasExtends() const { return !extends_.IsNull(); }
  const String& extends() const {
    return extends_;
  }
  inline void setExtends(const String&);
  inline void setExtendsToNull();

  bool hasPrototype() const { return !(prototype_.IsEmpty() || prototype_.IsNull() || prototype_.IsUndefined()); }
  ScriptValue prototype() const {
    return prototype_;
  }
  void setPrototype(ScriptValue);
  void setPrototypeToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String extends_;
  ScriptValue prototype_;

  friend class V8ElementRegistrationOptions;
};

void ElementRegistrationOptions::setExtends(const String& value) {
  extends_ = value;
}
void ElementRegistrationOptions::setExtendsToNull() {
  extends_ = String();
}

}  // namespace blink

#endif  // ElementRegistrationOptions_h
