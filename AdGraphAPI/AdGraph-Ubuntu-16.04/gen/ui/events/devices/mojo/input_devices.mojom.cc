// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "ui/events/devices/mojo/input_devices.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "ui/events/devices/mojo/input_devices.mojom-shared-message-ids.h"
#include "ui/events/devices/mojo/input_device_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
InputDevice::InputDevice()
    : id(),
      type(),
      name(),
      enabled(),
      sys_path(),
      vendor_id(),
      product_id() {}

InputDevice::InputDevice(
    int32_t id_in,
    ui::InputDeviceType type_in,
    const std::string& name_in,
    bool enabled_in,
    const std::string& sys_path_in,
    uint16_t vendor_id_in,
    uint16_t product_id_in)
    : id(std::move(id_in)),
      type(std::move(type_in)),
      name(std::move(name_in)),
      enabled(std::move(enabled_in)),
      sys_path(std::move(sys_path_in)),
      vendor_id(std::move(vendor_id_in)),
      product_id(std::move(product_id_in)) {}

InputDevice::~InputDevice() = default;

bool InputDevice::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TouchscreenDevice::TouchscreenDevice()
    : input_device(),
      size(),
      touch_points(),
      has_stylus() {}

TouchscreenDevice::TouchscreenDevice(
    const ui::InputDevice& input_device_in,
    const gfx::Size& size_in,
    int32_t touch_points_in,
    bool has_stylus_in)
    : input_device(std::move(input_device_in)),
      size(std::move(size_in)),
      touch_points(std::move(touch_points_in)),
      has_stylus(std::move(has_stylus_in)) {}

TouchscreenDevice::~TouchscreenDevice() = default;

bool TouchscreenDevice::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::InputDevice::DataView, ::ui::mojom::InputDevicePtr>::Read(
    ::ui::mojom::InputDevice::DataView input,
    ::ui::mojom::InputDevicePtr* output) {
  bool success = true;
  ::ui::mojom::InputDevicePtr result(::ui::mojom::InputDevice::New());
  
      result->id = input.id();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      result->enabled = input.enabled();
      if (!input.ReadSysPath(&result->sys_path))
        success = false;
      result->vendor_id = input.vendor_id();
      result->product_id = input.product_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::TouchscreenDevice::DataView, ::ui::mojom::TouchscreenDevicePtr>::Read(
    ::ui::mojom::TouchscreenDevice::DataView input,
    ::ui::mojom::TouchscreenDevicePtr* output) {
  bool success = true;
  ::ui::mojom::TouchscreenDevicePtr result(::ui::mojom::TouchscreenDevice::New());
  
      if (!input.ReadInputDevice(&result->input_device))
        success = false;
      if (!input.ReadSize(&result->size))
        success = false;
      result->touch_points = input.touch_points();
      result->has_stylus = input.has_stylus();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif