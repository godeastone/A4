// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaTrackSettings_h
#define MediaTrackSettings_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/imagecapture/point_2d.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT MediaTrackSettings : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaTrackSettings();
  virtual ~MediaTrackSettings();
  MediaTrackSettings(const MediaTrackSettings&);
  MediaTrackSettings& operator=(const MediaTrackSettings&);

  bool hasAspectRatio() const { return has_aspect_ratio_; }
  double aspectRatio() const {
    DCHECK(has_aspect_ratio_);
    return aspect_ratio_;
  }
  inline void setAspectRatio(double);

  bool hasAutoGainControl() const { return has_auto_gain_control_; }
  bool autoGainControl() const {
    DCHECK(has_auto_gain_control_);
    return auto_gain_control_;
  }
  inline void setAutoGainControl(bool);

  bool hasBrightness() const { return has_brightness_; }
  double brightness() const {
    DCHECK(has_brightness_);
    return brightness_;
  }
  inline void setBrightness(double);

  bool hasColorTemperature() const { return has_color_temperature_; }
  double colorTemperature() const {
    DCHECK(has_color_temperature_);
    return color_temperature_;
  }
  inline void setColorTemperature(double);

  bool hasContrast() const { return has_contrast_; }
  double contrast() const {
    DCHECK(has_contrast_);
    return contrast_;
  }
  inline void setContrast(double);

  bool hasDepthFar() const { return has_depth_far_; }
  double depthFar() const {
    DCHECK(has_depth_far_);
    return depth_far_;
  }
  inline void setDepthFar(double);

  bool hasDepthNear() const { return has_depth_near_; }
  double depthNear() const {
    DCHECK(has_depth_near_);
    return depth_near_;
  }
  inline void setDepthNear(double);

  bool hasDeviceId() const { return !device_id_.IsNull(); }
  const String& deviceId() const {
    return device_id_;
  }
  inline void setDeviceId(const String&);

  bool hasEchoCancellation() const { return has_echo_cancellation_; }
  bool echoCancellation() const {
    DCHECK(has_echo_cancellation_);
    return echo_cancellation_;
  }
  inline void setEchoCancellation(bool);

  bool hasExposureCompensation() const { return has_exposure_compensation_; }
  double exposureCompensation() const {
    DCHECK(has_exposure_compensation_);
    return exposure_compensation_;
  }
  inline void setExposureCompensation(double);

  bool hasExposureMode() const { return !exposure_mode_.IsNull(); }
  const String& exposureMode() const {
    return exposure_mode_;
  }
  inline void setExposureMode(const String&);

  bool hasFacingMode() const { return !facing_mode_.IsNull(); }
  const String& facingMode() const {
    return facing_mode_;
  }
  inline void setFacingMode(const String&);

  bool hasFocalLengthX() const { return has_focal_length_x_; }
  double focalLengthX() const {
    DCHECK(has_focal_length_x_);
    return focal_length_x_;
  }
  inline void setFocalLengthX(double);

  bool hasFocalLengthY() const { return has_focal_length_y_; }
  double focalLengthY() const {
    DCHECK(has_focal_length_y_);
    return focal_length_y_;
  }
  inline void setFocalLengthY(double);

  bool hasFocusMode() const { return !focus_mode_.IsNull(); }
  const String& focusMode() const {
    return focus_mode_;
  }
  inline void setFocusMode(const String&);

  bool hasFrameRate() const { return has_frame_rate_; }
  double frameRate() const {
    DCHECK(has_frame_rate_);
    return frame_rate_;
  }
  inline void setFrameRate(double);

  bool hasGroupId() const { return !group_id_.IsNull(); }
  const String& groupId() const {
    return group_id_;
  }
  inline void setGroupId(const String&);

  bool hasHeight() const { return has_height_; }
  int32_t height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(int32_t);

  bool hasIso() const { return has_iso_; }
  double iso() const {
    DCHECK(has_iso_);
    return iso_;
  }
  inline void setIso(double);

  bool hasNoiseSuppression() const { return has_noise_suppression_; }
  bool noiseSuppression() const {
    DCHECK(has_noise_suppression_);
    return noise_suppression_;
  }
  inline void setNoiseSuppression(bool);

  bool hasPointsOfInterest() const { return has_points_of_interest_; }
  const HeapVector<Point2D>& pointsOfInterest() const {
    DCHECK(has_points_of_interest_);
    return points_of_interest_;
  }
  void setPointsOfInterest(const HeapVector<Point2D>&);

  bool hasSaturation() const { return has_saturation_; }
  double saturation() const {
    DCHECK(has_saturation_);
    return saturation_;
  }
  inline void setSaturation(double);

  bool hasSharpness() const { return has_sharpness_; }
  double sharpness() const {
    DCHECK(has_sharpness_);
    return sharpness_;
  }
  inline void setSharpness(double);

  bool hasTorch() const { return has_torch_; }
  bool torch() const {
    DCHECK(has_torch_);
    return torch_;
  }
  inline void setTorch(bool);

  bool hasVideoKind() const { return !video_kind_.IsNull(); }
  const String& videoKind() const {
    return video_kind_;
  }
  inline void setVideoKind(const String&);

  bool hasWhiteBalanceMode() const { return !white_balance_mode_.IsNull(); }
  const String& whiteBalanceMode() const {
    return white_balance_mode_;
  }
  inline void setWhiteBalanceMode(const String&);

  bool hasWidth() const { return has_width_; }
  int32_t width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(int32_t);

  bool hasZoom() const { return has_zoom_; }
  double zoom() const {
    DCHECK(has_zoom_);
    return zoom_;
  }
  inline void setZoom(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_aspect_ratio_ = false;
  bool has_auto_gain_control_ = false;
  bool has_brightness_ = false;
  bool has_color_temperature_ = false;
  bool has_contrast_ = false;
  bool has_depth_far_ = false;
  bool has_depth_near_ = false;
  bool has_echo_cancellation_ = false;
  bool has_exposure_compensation_ = false;
  bool has_focal_length_x_ = false;
  bool has_focal_length_y_ = false;
  bool has_frame_rate_ = false;
  bool has_height_ = false;
  bool has_iso_ = false;
  bool has_noise_suppression_ = false;
  bool has_points_of_interest_ = false;
  bool has_saturation_ = false;
  bool has_sharpness_ = false;
  bool has_torch_ = false;
  bool has_width_ = false;
  bool has_zoom_ = false;

  double aspect_ratio_;
  bool auto_gain_control_;
  double brightness_;
  double color_temperature_;
  double contrast_;
  double depth_far_;
  double depth_near_;
  String device_id_;
  bool echo_cancellation_;
  double exposure_compensation_;
  String exposure_mode_;
  String facing_mode_;
  double focal_length_x_;
  double focal_length_y_;
  String focus_mode_;
  double frame_rate_;
  String group_id_;
  int32_t height_;
  double iso_;
  bool noise_suppression_;
  HeapVector<Point2D> points_of_interest_;
  double saturation_;
  double sharpness_;
  bool torch_;
  String video_kind_;
  String white_balance_mode_;
  int32_t width_;
  double zoom_;

  friend class V8MediaTrackSettings;
};

void MediaTrackSettings::setAspectRatio(double value) {
  aspect_ratio_ = value;
  has_aspect_ratio_ = true;
}

void MediaTrackSettings::setAutoGainControl(bool value) {
  auto_gain_control_ = value;
  has_auto_gain_control_ = true;
}

void MediaTrackSettings::setBrightness(double value) {
  brightness_ = value;
  has_brightness_ = true;
}

void MediaTrackSettings::setColorTemperature(double value) {
  color_temperature_ = value;
  has_color_temperature_ = true;
}

void MediaTrackSettings::setContrast(double value) {
  contrast_ = value;
  has_contrast_ = true;
}

void MediaTrackSettings::setDepthFar(double value) {
  depth_far_ = value;
  has_depth_far_ = true;
}

void MediaTrackSettings::setDepthNear(double value) {
  depth_near_ = value;
  has_depth_near_ = true;
}

void MediaTrackSettings::setDeviceId(const String& value) {
  device_id_ = value;
}

void MediaTrackSettings::setEchoCancellation(bool value) {
  echo_cancellation_ = value;
  has_echo_cancellation_ = true;
}

void MediaTrackSettings::setExposureCompensation(double value) {
  exposure_compensation_ = value;
  has_exposure_compensation_ = true;
}

void MediaTrackSettings::setExposureMode(const String& value) {
  exposure_mode_ = value;
}

void MediaTrackSettings::setFacingMode(const String& value) {
  facing_mode_ = value;
}

void MediaTrackSettings::setFocalLengthX(double value) {
  focal_length_x_ = value;
  has_focal_length_x_ = true;
}

void MediaTrackSettings::setFocalLengthY(double value) {
  focal_length_y_ = value;
  has_focal_length_y_ = true;
}

void MediaTrackSettings::setFocusMode(const String& value) {
  focus_mode_ = value;
}

void MediaTrackSettings::setFrameRate(double value) {
  frame_rate_ = value;
  has_frame_rate_ = true;
}

void MediaTrackSettings::setGroupId(const String& value) {
  group_id_ = value;
}

void MediaTrackSettings::setHeight(int32_t value) {
  height_ = value;
  has_height_ = true;
}

void MediaTrackSettings::setIso(double value) {
  iso_ = value;
  has_iso_ = true;
}

void MediaTrackSettings::setNoiseSuppression(bool value) {
  noise_suppression_ = value;
  has_noise_suppression_ = true;
}

void MediaTrackSettings::setSaturation(double value) {
  saturation_ = value;
  has_saturation_ = true;
}

void MediaTrackSettings::setSharpness(double value) {
  sharpness_ = value;
  has_sharpness_ = true;
}

void MediaTrackSettings::setTorch(bool value) {
  torch_ = value;
  has_torch_ = true;
}

void MediaTrackSettings::setVideoKind(const String& value) {
  video_kind_ = value;
}

void MediaTrackSettings::setWhiteBalanceMode(const String& value) {
  white_balance_mode_ = value;
}

void MediaTrackSettings::setWidth(int32_t value) {
  width_ = value;
  has_width_ = true;
}

void MediaTrackSettings::setZoom(double value) {
  zoom_ = value;
  has_zoom_ = true;
}

}  // namespace blink

#endif  // MediaTrackSettings_h
