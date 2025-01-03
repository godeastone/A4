// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef IntersectionObserverInit_h
#define IntersectionObserverInit_h

#include "third_party/blink/renderer/bindings/core/v8/double_or_double_sequence.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class Element;

class CORE_EXPORT IntersectionObserverInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  IntersectionObserverInit();
  virtual ~IntersectionObserverInit();
  IntersectionObserverInit(const IntersectionObserverInit&);
  IntersectionObserverInit& operator=(const IntersectionObserverInit&);

  bool hasRoot() const { return root_; }
  Element* root() const {
    return root_;
  }
  inline void setRoot(Element*);
  inline void setRootToNull();

  bool hasRootMargin() const { return !root_margin_.IsNull(); }
  const String& rootMargin() const {
    return root_margin_;
  }
  inline void setRootMargin(const String&);

  bool hasThreshold() const { return !threshold_.IsNull(); }
  const DoubleOrDoubleSequence& threshold() const {
    return threshold_;
  }
  void setThreshold(const DoubleOrDoubleSequence&);

  bool hasTrackVisibility() const { return has_track_visibility_; }
  bool trackVisibility() const {
    DCHECK(has_track_visibility_);
    return track_visibility_;
  }
  inline void setTrackVisibility(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_track_visibility_ = false;

  Member<Element> root_;
  String root_margin_;
  DoubleOrDoubleSequence threshold_;
  bool track_visibility_;

  friend class V8IntersectionObserverInit;
};

void IntersectionObserverInit::setRoot(Element* value) {
  root_ = value;
}
void IntersectionObserverInit::setRootToNull() {
  root_ = Member<Element>();
}

void IntersectionObserverInit::setRootMargin(const String& value) {
  root_margin_ = value;
}

void IntersectionObserverInit::setTrackVisibility(bool value) {
  track_visibility_ = value;
  has_track_visibility_ = true;
}

}  // namespace blink

#endif  // IntersectionObserverInit_h
