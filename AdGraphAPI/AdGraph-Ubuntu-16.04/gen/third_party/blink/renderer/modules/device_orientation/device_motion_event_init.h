// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DeviceMotionEventInit_h
#define DeviceMotionEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/device_orientation/device_acceleration_init.h"
#include "third_party/blink/renderer/modules/device_orientation/device_rotation_rate_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT DeviceMotionEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DeviceMotionEventInit();
  virtual ~DeviceMotionEventInit();
  DeviceMotionEventInit(const DeviceMotionEventInit&);
  DeviceMotionEventInit& operator=(const DeviceMotionEventInit&);

  bool hasAcceleration() const { return has_acceleration_; }
  const DeviceAccelerationInit& acceleration() const {
    DCHECK(has_acceleration_);
    return acceleration_;
  }
  void setAcceleration(const DeviceAccelerationInit&);
  void setAccelerationToNull();

  bool hasAccelerationIncludingGravity() const { return has_acceleration_including_gravity_; }
  const DeviceAccelerationInit& accelerationIncludingGravity() const {
    DCHECK(has_acceleration_including_gravity_);
    return acceleration_including_gravity_;
  }
  void setAccelerationIncludingGravity(const DeviceAccelerationInit&);
  void setAccelerationIncludingGravityToNull();

  bool hasInterval() const { return has_interval_; }
  double interval() const {
    DCHECK(has_interval_);
    return interval_;
  }
  inline void setInterval(double);

  bool hasRotationRate() const { return has_rotation_rate_; }
  const DeviceRotationRateInit& rotationRate() const {
    DCHECK(has_rotation_rate_);
    return rotation_rate_;
  }
  void setRotationRate(const DeviceRotationRateInit&);
  void setRotationRateToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_acceleration_ = false;
  bool has_acceleration_including_gravity_ = false;
  bool has_interval_ = false;
  bool has_rotation_rate_ = false;

  DeviceAccelerationInit acceleration_;
  DeviceAccelerationInit acceleration_including_gravity_;
  double interval_;
  DeviceRotationRateInit rotation_rate_;

  friend class V8DeviceMotionEventInit;
};

void DeviceMotionEventInit::setInterval(double value) {
  interval_ = value;
  has_interval_ = true;
}

}  // namespace blink

#endif  // DeviceMotionEventInit_h
