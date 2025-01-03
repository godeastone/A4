// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ScrollTimelineOptions_h
#define ScrollTimelineOptions_h

#include "third_party/blink/renderer/bindings/core/v8/double_or_scroll_timeline_auto_keyword.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Element;

class CORE_EXPORT ScrollTimelineOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ScrollTimelineOptions();
  virtual ~ScrollTimelineOptions();
  ScrollTimelineOptions(const ScrollTimelineOptions&);
  ScrollTimelineOptions& operator=(const ScrollTimelineOptions&);

  bool hasOrientation() const { return !orientation_.IsNull(); }
  const String& orientation() const {
    return orientation_;
  }
  inline void setOrientation(const String&);

  bool hasScrollSource() const { return scroll_source_; }
  Element* scrollSource() const {
    return scroll_source_;
  }
  inline void setScrollSource(Element*);

  bool hasTimeRange() const { return !time_range_.IsNull(); }
  const DoubleOrScrollTimelineAutoKeyword& timeRange() const {
    return time_range_;
  }
  void setTimeRange(const DoubleOrScrollTimelineAutoKeyword&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String orientation_;
  Member<Element> scroll_source_;
  DoubleOrScrollTimelineAutoKeyword time_range_;

  friend class V8ScrollTimelineOptions;
};

void ScrollTimelineOptions::setOrientation(const String& value) {
  orientation_ = value;
}

void ScrollTimelineOptions::setScrollSource(Element* value) {
  scroll_source_ = value;
}

}  // namespace blink

#endif  // ScrollTimelineOptions_h
