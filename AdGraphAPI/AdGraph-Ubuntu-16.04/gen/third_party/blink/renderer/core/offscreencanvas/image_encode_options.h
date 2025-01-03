// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ImageEncodeOptions_h
#define ImageEncodeOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ImageEncodeOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ImageEncodeOptions();
  virtual ~ImageEncodeOptions();
  ImageEncodeOptions(const ImageEncodeOptions&);
  ImageEncodeOptions& operator=(const ImageEncodeOptions&);

  bool hasQuality() const { return has_quality_; }
  double quality() const {
    DCHECK(has_quality_);
    return quality_;
  }
  inline void setQuality(double);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_quality_ = false;

  double quality_;
  String type_;

  friend class V8ImageEncodeOptions;
};

void ImageEncodeOptions::setQuality(double value) {
  quality_ = value;
  has_quality_ = true;
}

void ImageEncodeOptions::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // ImageEncodeOptions_h
