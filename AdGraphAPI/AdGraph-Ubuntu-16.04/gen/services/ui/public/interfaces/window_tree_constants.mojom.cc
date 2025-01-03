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

#include "services/ui/public/interfaces/window_tree_constants.mojom.h"

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

#include "services/ui/public/interfaces/window_tree_constants.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
WindowData::WindowData()
    : parent_id(),
      window_id(),
      transient_parent_id(),
      bounds(),
      properties(),
      visible() {}

WindowData::WindowData(
    uint64_t parent_id_in,
    uint64_t window_id_in,
    uint64_t transient_parent_id_in,
    const gfx::Rect& bounds_in,
    const base::flat_map<std::string, std::vector<uint8_t>>& properties_in,
    bool visible_in)
    : parent_id(std::move(parent_id_in)),
      window_id(std::move(window_id_in)),
      transient_parent_id(std::move(transient_parent_id_in)),
      bounds(std::move(bounds_in)),
      properties(std::move(properties_in)),
      visible(std::move(visible_in)) {}

WindowData::~WindowData() = default;

bool WindowData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::WindowData::DataView, ::ui::mojom::WindowDataPtr>::Read(
    ::ui::mojom::WindowData::DataView input,
    ::ui::mojom::WindowDataPtr* output) {
  bool success = true;
  ::ui::mojom::WindowDataPtr result(::ui::mojom::WindowData::New());
  
      result->parent_id = input.parent_id();
      result->window_id = input.window_id();
      result->transient_parent_id = input.transient_parent_id();
      if (!input.ReadBounds(&result->bounds))
        success = false;
      if (!input.ReadProperties(&result->properties))
        success = false;
      result->visible = input.visible();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif