// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaKeySystemMediaCapability_h
#define MediaKeySystemMediaCapability_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT MediaKeySystemMediaCapability : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaKeySystemMediaCapability();
  virtual ~MediaKeySystemMediaCapability();
  MediaKeySystemMediaCapability(const MediaKeySystemMediaCapability&);
  MediaKeySystemMediaCapability& operator=(const MediaKeySystemMediaCapability&);

  bool hasContentType() const { return !content_type_.IsNull(); }
  const String& contentType() const {
    return content_type_;
  }
  inline void setContentType(const String&);

  bool hasRobustness() const { return !robustness_.IsNull(); }
  const String& robustness() const {
    return robustness_;
  }
  inline void setRobustness(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String content_type_;
  String robustness_;

  friend class V8MediaKeySystemMediaCapability;
};

void MediaKeySystemMediaCapability::setContentType(const String& value) {
  content_type_ = value;
}

void MediaKeySystemMediaCapability::setRobustness(const String& value) {
  robustness_ = value;
}

}  // namespace blink

#endif  // MediaKeySystemMediaCapability_h
