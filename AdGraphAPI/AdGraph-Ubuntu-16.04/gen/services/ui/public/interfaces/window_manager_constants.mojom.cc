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

#include "services/ui/public/interfaces/window_manager_constants.mojom.h"

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

#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-message-ids.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
FrameDecorationValues::FrameDecorationValues()
    : normal_client_area_insets(),
      maximized_client_area_insets(),
      max_title_bar_button_width() {}

FrameDecorationValues::FrameDecorationValues(
    const gfx::Insets& normal_client_area_insets_in,
    const gfx::Insets& maximized_client_area_insets_in,
    uint32_t max_title_bar_button_width_in)
    : normal_client_area_insets(std::move(normal_client_area_insets_in)),
      maximized_client_area_insets(std::move(maximized_client_area_insets_in)),
      max_title_bar_button_width(std::move(max_title_bar_button_width_in)) {}

FrameDecorationValues::~FrameDecorationValues() = default;

bool FrameDecorationValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WsDisplay::WsDisplay()
    : display(),
      frame_decoration_values() {}

WsDisplay::WsDisplay(
    const display::Display& display_in,
    FrameDecorationValuesPtr frame_decoration_values_in)
    : display(std::move(display_in)),
      frame_decoration_values(std::move(frame_decoration_values_in)) {}

WsDisplay::~WsDisplay() = default;

bool WsDisplay::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WmViewportMetrics::WmViewportMetrics()
    : bounds_in_pixels(),
      device_scale_factor(),
      ui_scale_factor() {}

WmViewportMetrics::WmViewportMetrics(
    const gfx::Rect& bounds_in_pixels_in,
    float device_scale_factor_in,
    float ui_scale_factor_in)
    : bounds_in_pixels(std::move(bounds_in_pixels_in)),
      device_scale_factor(std::move(device_scale_factor_in)),
      ui_scale_factor(std::move(ui_scale_factor_in)) {}

WmViewportMetrics::~WmViewportMetrics() = default;

bool WmViewportMetrics::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BlockingContainers::BlockingContainers()
    : system_modal_container_id(),
      min_container_id() {}

BlockingContainers::BlockingContainers(
    uint64_t system_modal_container_id_in,
    uint64_t min_container_id_in)
    : system_modal_container_id(std::move(system_modal_container_id_in)),
      min_container_id(std::move(min_container_id_in)) {}

BlockingContainers::~BlockingContainers() = default;
size_t BlockingContainers::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->system_modal_container_id);
  seed = mojo::internal::Hash(seed, this->min_container_id);
  return seed;
}

bool BlockingContainers::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::FrameDecorationValues::DataView, ::ui::mojom::FrameDecorationValuesPtr>::Read(
    ::ui::mojom::FrameDecorationValues::DataView input,
    ::ui::mojom::FrameDecorationValuesPtr* output) {
  bool success = true;
  ::ui::mojom::FrameDecorationValuesPtr result(::ui::mojom::FrameDecorationValues::New());
  
      if (!input.ReadNormalClientAreaInsets(&result->normal_client_area_insets))
        success = false;
      if (!input.ReadMaximizedClientAreaInsets(&result->maximized_client_area_insets))
        success = false;
      result->max_title_bar_button_width = input.max_title_bar_button_width();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::WsDisplay::DataView, ::ui::mojom::WsDisplayPtr>::Read(
    ::ui::mojom::WsDisplay::DataView input,
    ::ui::mojom::WsDisplayPtr* output) {
  bool success = true;
  ::ui::mojom::WsDisplayPtr result(::ui::mojom::WsDisplay::New());
  
      if (!input.ReadDisplay(&result->display))
        success = false;
      if (!input.ReadFrameDecorationValues(&result->frame_decoration_values))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::WmViewportMetrics::DataView, ::ui::mojom::WmViewportMetricsPtr>::Read(
    ::ui::mojom::WmViewportMetrics::DataView input,
    ::ui::mojom::WmViewportMetricsPtr* output) {
  bool success = true;
  ::ui::mojom::WmViewportMetricsPtr result(::ui::mojom::WmViewportMetrics::New());
  
      if (!input.ReadBoundsInPixels(&result->bounds_in_pixels))
        success = false;
      result->device_scale_factor = input.device_scale_factor();
      result->ui_scale_factor = input.ui_scale_factor();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::BlockingContainers::DataView, ::ui::mojom::BlockingContainersPtr>::Read(
    ::ui::mojom::BlockingContainers::DataView input,
    ::ui::mojom::BlockingContainersPtr* output) {
  bool success = true;
  ::ui::mojom::BlockingContainersPtr result(::ui::mojom::BlockingContainers::New());
  
      result->system_modal_container_id = input.system_modal_container_id();
      result->min_container_id = input.min_container_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif