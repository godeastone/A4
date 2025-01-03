// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DocumentTimelineOptions_h
#define DocumentTimelineOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DocumentTimelineOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DocumentTimelineOptions();
  virtual ~DocumentTimelineOptions();
  DocumentTimelineOptions(const DocumentTimelineOptions&);
  DocumentTimelineOptions& operator=(const DocumentTimelineOptions&);

  bool hasOriginTime() const { return has_origin_time_; }
  double originTime() const {
    DCHECK(has_origin_time_);
    return origin_time_;
  }
  inline void setOriginTime(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_origin_time_ = false;

  double origin_time_;

  friend class V8DocumentTimelineOptions;
};

void DocumentTimelineOptions::setOriginTime(double value) {
  origin_time_ = value;
  has_origin_time_ = true;
}

}  // namespace blink

#endif  // DocumentTimelineOptions_h
