// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PaintRenderingContext2DSettings_h
#define PaintRenderingContext2DSettings_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PaintRenderingContext2DSettings : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PaintRenderingContext2DSettings();
  virtual ~PaintRenderingContext2DSettings();
  PaintRenderingContext2DSettings(const PaintRenderingContext2DSettings&);
  PaintRenderingContext2DSettings& operator=(const PaintRenderingContext2DSettings&);

  bool hasAlpha() const { return has_alpha_; }
  bool alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alpha_ = false;

  bool alpha_;

  friend class V8PaintRenderingContext2DSettings;
};

void PaintRenderingContext2DSettings::setAlpha(bool value) {
  alpha_ = value;
  has_alpha_ = true;
}

}  // namespace blink

#endif  // PaintRenderingContext2DSettings_h
