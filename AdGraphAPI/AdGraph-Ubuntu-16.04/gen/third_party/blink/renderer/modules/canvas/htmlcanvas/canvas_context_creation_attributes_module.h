// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CanvasContextCreationAttributesModule_h
#define CanvasContextCreationAttributesModule_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class XRDevice;

class MODULES_EXPORT CanvasContextCreationAttributesModule : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CanvasContextCreationAttributesModule();
  virtual ~CanvasContextCreationAttributesModule();
  CanvasContextCreationAttributesModule(const CanvasContextCreationAttributesModule&);
  CanvasContextCreationAttributesModule& operator=(const CanvasContextCreationAttributesModule&);

  bool hasAlpha() const { return has_alpha_; }
  bool alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(bool);

  bool hasAntialias() const { return has_antialias_; }
  bool antialias() const {
    DCHECK(has_antialias_);
    return antialias_;
  }
  inline void setAntialias(bool);

  bool hasColorSpace() const { return !color_space_.IsNull(); }
  const String& colorSpace() const {
    return color_space_;
  }
  inline void setColorSpace(const String&);

  bool hasCompatibleXRDevice() const { return compatible_xr_device_; }
  XRDevice* compatibleXRDevice() const {
    return compatible_xr_device_;
  }
  inline void setCompatibleXRDevice(XRDevice*);

  bool hasDepth() const { return has_depth_; }
  bool depth() const {
    DCHECK(has_depth_);
    return depth_;
  }
  inline void setDepth(bool);

  bool hasFailIfMajorPerformanceCaveat() const { return has_fail_if_major_performance_caveat_; }
  bool failIfMajorPerformanceCaveat() const {
    DCHECK(has_fail_if_major_performance_caveat_);
    return fail_if_major_performance_caveat_;
  }
  inline void setFailIfMajorPerformanceCaveat(bool);

  bool hasLowLatency() const { return has_low_latency_; }
  bool lowLatency() const {
    DCHECK(has_low_latency_);
    return low_latency_;
  }
  inline void setLowLatency(bool);

  bool hasPixelFormat() const { return !pixel_format_.IsNull(); }
  const String& pixelFormat() const {
    return pixel_format_;
  }
  inline void setPixelFormat(const String&);

  bool hasPremultipliedAlpha() const { return has_premultiplied_alpha_; }
  bool premultipliedAlpha() const {
    DCHECK(has_premultiplied_alpha_);
    return premultiplied_alpha_;
  }
  inline void setPremultipliedAlpha(bool);

  bool hasPreserveDrawingBuffer() const { return has_preserve_drawing_buffer_; }
  bool preserveDrawingBuffer() const {
    DCHECK(has_preserve_drawing_buffer_);
    return preserve_drawing_buffer_;
  }
  inline void setPreserveDrawingBuffer(bool);

  bool hasStencil() const { return has_stencil_; }
  bool stencil() const {
    DCHECK(has_stencil_);
    return stencil_;
  }
  inline void setStencil(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alpha_ = false;
  bool has_antialias_ = false;
  bool has_depth_ = false;
  bool has_fail_if_major_performance_caveat_ = false;
  bool has_low_latency_ = false;
  bool has_premultiplied_alpha_ = false;
  bool has_preserve_drawing_buffer_ = false;
  bool has_stencil_ = false;

  bool alpha_;
  bool antialias_;
  String color_space_;
  Member<XRDevice> compatible_xr_device_;
  bool depth_;
  bool fail_if_major_performance_caveat_;
  bool low_latency_;
  String pixel_format_;
  bool premultiplied_alpha_;
  bool preserve_drawing_buffer_;
  bool stencil_;

  friend class V8CanvasContextCreationAttributesModule;
};

void CanvasContextCreationAttributesModule::setAlpha(bool value) {
  alpha_ = value;
  has_alpha_ = true;
}

void CanvasContextCreationAttributesModule::setAntialias(bool value) {
  antialias_ = value;
  has_antialias_ = true;
}

void CanvasContextCreationAttributesModule::setColorSpace(const String& value) {
  color_space_ = value;
}

void CanvasContextCreationAttributesModule::setCompatibleXRDevice(XRDevice* value) {
  compatible_xr_device_ = value;
}

void CanvasContextCreationAttributesModule::setDepth(bool value) {
  depth_ = value;
  has_depth_ = true;
}

void CanvasContextCreationAttributesModule::setFailIfMajorPerformanceCaveat(bool value) {
  fail_if_major_performance_caveat_ = value;
  has_fail_if_major_performance_caveat_ = true;
}

void CanvasContextCreationAttributesModule::setLowLatency(bool value) {
  low_latency_ = value;
  has_low_latency_ = true;
}

void CanvasContextCreationAttributesModule::setPixelFormat(const String& value) {
  pixel_format_ = value;
}

void CanvasContextCreationAttributesModule::setPremultipliedAlpha(bool value) {
  premultiplied_alpha_ = value;
  has_premultiplied_alpha_ = true;
}

void CanvasContextCreationAttributesModule::setPreserveDrawingBuffer(bool value) {
  preserve_drawing_buffer_ = value;
  has_preserve_drawing_buffer_ = true;
}

void CanvasContextCreationAttributesModule::setStencil(bool value) {
  stencil_ = value;
  has_stencil_ = true;
}

}  // namespace blink

#endif  // CanvasContextCreationAttributesModule_h
