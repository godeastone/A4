// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef XRFrameOfReferenceOptions_h
#define XRFrameOfReferenceOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT XRFrameOfReferenceOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  XRFrameOfReferenceOptions();
  virtual ~XRFrameOfReferenceOptions();
  XRFrameOfReferenceOptions(const XRFrameOfReferenceOptions&);
  XRFrameOfReferenceOptions& operator=(const XRFrameOfReferenceOptions&);

  bool hasDisableStageEmulation() const { return has_disable_stage_emulation_; }
  bool disableStageEmulation() const {
    DCHECK(has_disable_stage_emulation_);
    return disable_stage_emulation_;
  }
  inline void setDisableStageEmulation(bool);

  bool hasStageEmulationHeight() const { return has_stage_emulation_height_; }
  double stageEmulationHeight() const {
    DCHECK(has_stage_emulation_height_);
    return stage_emulation_height_;
  }
  inline void setStageEmulationHeight(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_disable_stage_emulation_ = false;
  bool has_stage_emulation_height_ = false;

  bool disable_stage_emulation_;
  double stage_emulation_height_;

  friend class V8XRFrameOfReferenceOptions;
};

void XRFrameOfReferenceOptions::setDisableStageEmulation(bool value) {
  disable_stage_emulation_ = value;
  has_disable_stage_emulation_ = true;
}

void XRFrameOfReferenceOptions::setStageEmulationHeight(double value) {
  stage_emulation_height_ = value;
  has_stage_emulation_height_ = true;
}

}  // namespace blink

#endif  // XRFrameOfReferenceOptions_h
