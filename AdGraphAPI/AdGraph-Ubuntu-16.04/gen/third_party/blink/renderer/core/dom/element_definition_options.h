// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ElementDefinitionOptions_h
#define ElementDefinitionOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CSSStyleSheet;

class CORE_EXPORT ElementDefinitionOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ElementDefinitionOptions();
  virtual ~ElementDefinitionOptions();
  ElementDefinitionOptions(const ElementDefinitionOptions&);
  ElementDefinitionOptions& operator=(const ElementDefinitionOptions&);

  bool hasExtends() const { return !extends_.IsNull(); }
  const String& extends() const {
    return extends_;
  }
  inline void setExtends(const String&);
  inline void setExtendsToNull();

  bool hasStyle() const { return style_; }
  CSSStyleSheet* style() const {
    return style_;
  }
  inline void setStyle(CSSStyleSheet*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String extends_;
  Member<CSSStyleSheet> style_;

  friend class V8ElementDefinitionOptions;
};

void ElementDefinitionOptions::setExtends(const String& value) {
  extends_ = value;
}
void ElementDefinitionOptions::setExtendsToNull() {
  extends_ = String();
}

void ElementDefinitionOptions::setStyle(CSSStyleSheet* value) {
  style_ = value;
}

}  // namespace blink

#endif  // ElementDefinitionOptions_h
