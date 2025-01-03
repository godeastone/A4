// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FullscreenOptions_h
#define FullscreenOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT FullscreenOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FullscreenOptions();
  virtual ~FullscreenOptions();
  FullscreenOptions(const FullscreenOptions&);
  FullscreenOptions& operator=(const FullscreenOptions&);

  bool hasPrefersNavigationBar() const { return has_prefers_navigation_bar_; }
  bool prefersNavigationBar() const {
    DCHECK(has_prefers_navigation_bar_);
    return prefers_navigation_bar_;
  }
  inline void setPrefersNavigationBar(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_prefers_navigation_bar_ = false;

  bool prefers_navigation_bar_;

  friend class V8FullscreenOptions;
};

void FullscreenOptions::setPrefersNavigationBar(bool value) {
  prefers_navigation_bar_ = value;
  has_prefers_navigation_bar_ = true;
}

}  // namespace blink

#endif  // FullscreenOptions_h
