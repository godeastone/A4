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

#include "ui/events/devices/mojo/touch_device_transform.mojom.h"

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

#include "ui/events/devices/mojo/touch_device_transform.mojom-shared-message-ids.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
namespace ui {
namespace mojom {
TouchDeviceTransform::TouchDeviceTransform()
    : display_id(),
      device_id(),
      transform(),
      radius_scale() {}

TouchDeviceTransform::TouchDeviceTransform(
    int64_t display_id_in,
    int32_t device_id_in,
    const gfx::Transform& transform_in,
    double radius_scale_in)
    : display_id(std::move(display_id_in)),
      device_id(std::move(device_id_in)),
      transform(std::move(transform_in)),
      radius_scale(std::move(radius_scale_in)) {}

TouchDeviceTransform::~TouchDeviceTransform() = default;

bool TouchDeviceTransform::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::TouchDeviceTransform::DataView, ::ui::mojom::TouchDeviceTransformPtr>::Read(
    ::ui::mojom::TouchDeviceTransform::DataView input,
    ::ui::mojom::TouchDeviceTransformPtr* output) {
  bool success = true;
  ::ui::mojom::TouchDeviceTransformPtr result(::ui::mojom::TouchDeviceTransform::New());
  
      result->display_id = input.display_id();
      result->device_id = input.device_id();
      if (!input.ReadTransform(&result->transform))
        success = false;
      result->radius_scale = input.radius_scale();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif