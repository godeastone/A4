// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaTrackCapabilities_h
#define MediaTrackCapabilities_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/mediastream/double_range.h"
#include "third_party/blink/renderer/modules/mediastream/long_range.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MediaSettingsRange;

class MODULES_EXPORT MediaTrackCapabilities : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaTrackCapabilities();
  virtual ~MediaTrackCapabilities();
  MediaTrackCapabilities(const MediaTrackCapabilities&);
  MediaTrackCapabilities& operator=(const MediaTrackCapabilities&);

  bool hasAspectRatio() const { return has_aspect_ratio_; }
  const DoubleRange& aspectRatio() const {
    DCHECK(has_aspect_ratio_);
    return aspect_ratio_;
  }
  void setAspectRatio(const DoubleRange&);

  bool hasAutoGainControl() const { return has_auto_gain_control_; }
  const Vector<bool>& autoGainControl() const {
    DCHECK(has_auto_gain_control_);
    return auto_gain_control_;
  }
  void setAutoGainControl(const Vector<bool>&);

  bool hasBrightness() const { return brightness_; }
  MediaSettingsRange* brightness() const {
    return brightness_;
  }
  inline void setBrightness(MediaSettingsRange*);

  bool hasColorTemperature() const { return color_temperature_; }
  MediaSettingsRange* colorTemperature() const {
    return color_temperature_;
  }
  inline void setColorTemperature(MediaSettingsRange*);

  bool hasContrast() const { return contrast_; }
  MediaSettingsRange* contrast() const {
    return contrast_;
  }
  inline void setContrast(MediaSettingsRange*);

  bool hasDeviceId() const { return !device_id_.IsNull(); }
  const String& deviceId() const {
    return device_id_;
  }
  inline void setDeviceId(const String&);

  bool hasEchoCancellation() const { return has_echo_cancellation_; }
  const Vector<bool>& echoCancellation() const {
    DCHECK(has_echo_cancellation_);
    return echo_cancellation_;
  }
  void setEchoCancellation(const Vector<bool>&);

  bool hasExposureCompensation() const { return exposure_compensation_; }
  MediaSettingsRange* exposureCompensation() const {
    return exposure_compensation_;
  }
  inline void setExposureCompensation(MediaSettingsRange*);

  bool hasExposureMode() const { return has_exposure_mode_; }
  const Vector<String>& exposureMode() const {
    DCHECK(has_exposure_mode_);
    return exposure_mode_;
  }
  void setExposureMode(const Vector<String>&);

  bool hasFacingMode() const { return has_facing_mode_; }
  const Vector<String>& facingMode() const {
    DCHECK(has_facing_mode_);
    return facing_mode_;
  }
  void setFacingMode(const Vector<String>&);

  bool hasFocusMode() const { return has_focus_mode_; }
  const Vector<String>& focusMode() const {
    DCHECK(has_focus_mode_);
    return focus_mode_;
  }
  void setFocusMode(const Vector<String>&);

  bool hasFrameRate() const { return has_frame_rate_; }
  const DoubleRange& frameRate() const {
    DCHECK(has_frame_rate_);
    return frame_rate_;
  }
  void setFrameRate(const DoubleRange&);

  bool hasGroupId() const { return !group_id_.IsNull(); }
  const String& groupId() const {
    return group_id_;
  }
  inline void setGroupId(const String&);

  bool hasHeight() const { return has_height_; }
  const LongRange& height() const {
    DCHECK(has_height_);
    return height_;
  }
  void setHeight(const LongRange&);

  bool hasIso() const { return iso_; }
  MediaSettingsRange* iso() const {
    return iso_;
  }
  inline void setIso(MediaSettingsRange*);

  bool hasNoiseSuppression() const { return has_noise_suppression_; }
  const Vector<bool>& noiseSuppression() const {
    DCHECK(has_noise_suppression_);
    return noise_suppression_;
  }
  void setNoiseSuppression(const Vector<bool>&);

  bool hasSaturation() const { return saturation_; }
  MediaSettingsRange* saturation() const {
    return saturation_;
  }
  inline void setSaturation(MediaSettingsRange*);

  bool hasSharpness() const { return sharpness_; }
  MediaSettingsRange* sharpness() const {
    return sharpness_;
  }
  inline void setSharpness(MediaSettingsRange*);

  bool hasTorch() const { return has_torch_; }
  bool torch() const {
    DCHECK(has_torch_);
    return torch_;
  }
  inline void setTorch(bool);

  bool hasWhiteBalanceMode() const { return has_white_balance_mode_; }
  const Vector<String>& whiteBalanceMode() const {
    DCHECK(has_white_balance_mode_);
    return white_balance_mode_;
  }
  void setWhiteBalanceMode(const Vector<String>&);

  bool hasWidth() const { return has_width_; }
  const LongRange& width() const {
    DCHECK(has_width_);
    return width_;
  }
  void setWidth(const LongRange&);

  bool hasZoom() const { return zoom_; }
  MediaSettingsRange* zoom() const {
    return zoom_;
  }
  inline void setZoom(MediaSettingsRange*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_aspect_ratio_ = false;
  bool has_auto_gain_control_ = false;
  bool has_echo_cancellation_ = false;
  bool has_exposure_mode_ = false;
  bool has_facing_mode_ = false;
  bool has_focus_mode_ = false;
  bool has_frame_rate_ = false;
  bool has_height_ = false;
  bool has_noise_suppression_ = false;
  bool has_torch_ = false;
  bool has_white_balance_mode_ = false;
  bool has_width_ = false;

  DoubleRange aspect_ratio_;
  Vector<bool> auto_gain_control_;
  Member<MediaSettingsRange> brightness_;
  Member<MediaSettingsRange> color_temperature_;
  Member<MediaSettingsRange> contrast_;
  String device_id_;
  Vector<bool> echo_cancellation_;
  Member<MediaSettingsRange> exposure_compensation_;
  Vector<String> exposure_mode_;
  Vector<String> facing_mode_;
  Vector<String> focus_mode_;
  DoubleRange frame_rate_;
  String group_id_;
  LongRange height_;
  Member<MediaSettingsRange> iso_;
  Vector<bool> noise_suppression_;
  Member<MediaSettingsRange> saturation_;
  Member<MediaSettingsRange> sharpness_;
  bool torch_;
  Vector<String> white_balance_mode_;
  LongRange width_;
  Member<MediaSettingsRange> zoom_;

  friend class V8MediaTrackCapabilities;
};

void MediaTrackCapabilities::setBrightness(MediaSettingsRange* value) {
  brightness_ = value;
}

void MediaTrackCapabilities::setColorTemperature(MediaSettingsRange* value) {
  color_temperature_ = value;
}

void MediaTrackCapabilities::setContrast(MediaSettingsRange* value) {
  contrast_ = value;
}

void MediaTrackCapabilities::setDeviceId(const String& value) {
  device_id_ = value;
}

void MediaTrackCapabilities::setExposureCompensation(MediaSettingsRange* value) {
  exposure_compensation_ = value;
}

void MediaTrackCapabilities::setGroupId(const String& value) {
  group_id_ = value;
}

void MediaTrackCapabilities::setIso(MediaSettingsRange* value) {
  iso_ = value;
}

void MediaTrackCapabilities::setSaturation(MediaSettingsRange* value) {
  saturation_ = value;
}

void MediaTrackCapabilities::setSharpness(MediaSettingsRange* value) {
  sharpness_ = value;
}

void MediaTrackCapabilities::setTorch(bool value) {
  torch_ = value;
  has_torch_ = true;
}

void MediaTrackCapabilities::setZoom(MediaSettingsRange* value) {
  zoom_ = value;
}

}  // namespace blink

#endif  // MediaTrackCapabilities_h
