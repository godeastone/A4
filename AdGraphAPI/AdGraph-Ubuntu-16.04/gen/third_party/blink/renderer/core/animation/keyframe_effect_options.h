// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef KeyframeEffectOptions_h
#define KeyframeEffectOptions_h

#include "third_party/blink/renderer/core/animation/effect_timing.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT KeyframeEffectOptions : public EffectTiming {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  KeyframeEffectOptions();
  virtual ~KeyframeEffectOptions();
  KeyframeEffectOptions(const KeyframeEffectOptions&);
  KeyframeEffectOptions& operator=(const KeyframeEffectOptions&);

  bool hasComposite() const { return !composite_.IsNull(); }
  const String& composite() const {
    return composite_;
  }
  inline void setComposite(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String composite_;

  friend class V8KeyframeEffectOptions;
};

void KeyframeEffectOptions::setComposite(const String& value) {
  composite_ = value;
}

}  // namespace blink

#endif  // KeyframeEffectOptions_h
