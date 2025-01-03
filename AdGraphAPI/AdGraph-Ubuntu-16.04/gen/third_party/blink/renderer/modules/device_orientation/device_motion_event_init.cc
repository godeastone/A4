// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/device_orientation/device_motion_event_init.h"

namespace blink {

DeviceMotionEventInit::DeviceMotionEventInit() {
  setInterval(0);
}

DeviceMotionEventInit::~DeviceMotionEventInit() {}

DeviceMotionEventInit::DeviceMotionEventInit(const DeviceMotionEventInit&) = default;

DeviceMotionEventInit& DeviceMotionEventInit::operator=(const DeviceMotionEventInit&) = default;

void DeviceMotionEventInit::setAcceleration(const DeviceAccelerationInit& value) {
  acceleration_ = value;
  has_acceleration_ = true;
}
void DeviceMotionEventInit::setAccelerationToNull() {
  has_acceleration_ = false;
}

void DeviceMotionEventInit::setAccelerationIncludingGravity(const DeviceAccelerationInit& value) {
  acceleration_including_gravity_ = value;
  has_acceleration_including_gravity_ = true;
}
void DeviceMotionEventInit::setAccelerationIncludingGravityToNull() {
  has_acceleration_including_gravity_ = false;
}

void DeviceMotionEventInit::setRotationRate(const DeviceRotationRateInit& value) {
  rotation_rate_ = value;
  has_rotation_rate_ = true;
}
void DeviceMotionEventInit::setRotationRateToNull() {
  has_rotation_rate_ = false;
}

void DeviceMotionEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(acceleration_);
  visitor->Trace(acceleration_including_gravity_);
  visitor->Trace(rotation_rate_);
  EventInit::Trace(visitor);
}

}  // namespace blink
