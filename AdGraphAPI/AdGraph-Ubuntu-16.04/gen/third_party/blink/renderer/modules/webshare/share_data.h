// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ShareData_h
#define ShareData_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT ShareData : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ShareData();
  virtual ~ShareData();
  ShareData(const ShareData&);
  ShareData& operator=(const ShareData&);

  bool hasText() const { return !text_.IsNull(); }
  const String& text() const {
    return text_;
  }
  inline void setText(const String&);

  bool hasTitle() const { return !title_.IsNull(); }
  const String& title() const {
    return title_;
  }
  inline void setTitle(const String&);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String text_;
  String title_;
  String url_;

  friend class V8ShareData;
};

void ShareData::setText(const String& value) {
  text_ = value;
}

void ShareData::setTitle(const String& value) {
  title_ = value;
}

void ShareData::setURL(const String& value) {
  url_ = value;
}

}  // namespace blink

#endif  // ShareData_h
