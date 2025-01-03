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

#include "services/ui/public/interfaces/cursor/cursor.mojom.h"

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

#include "services/ui/public/interfaces/cursor/cursor.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/ui/public/interfaces/cursor/cursor_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace ui {
namespace mojom {
CursorData::CursorData()
    : cursor_type(),
      frame_delay(),
      hotspot_in_pixels(),
      cursor_frames(),
      scale_factor() {}

CursorData::CursorData(
    ui::CursorType cursor_type_in,
    base::TimeDelta frame_delay_in,
    const gfx::Point& hotspot_in_pixels_in,
    const std::vector<SkBitmap>& cursor_frames_in,
    float scale_factor_in)
    : cursor_type(std::move(cursor_type_in)),
      frame_delay(std::move(frame_delay_in)),
      hotspot_in_pixels(std::move(hotspot_in_pixels_in)),
      cursor_frames(std::move(cursor_frames_in)),
      scale_factor(std::move(scale_factor_in)) {}

CursorData::~CursorData() = default;

bool CursorData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::CursorData::DataView, ::ui::mojom::CursorDataPtr>::Read(
    ::ui::mojom::CursorData::DataView input,
    ::ui::mojom::CursorDataPtr* output) {
  bool success = true;
  ::ui::mojom::CursorDataPtr result(::ui::mojom::CursorData::New());
  
      if (!input.ReadCursorType(&result->cursor_type))
        success = false;
      if (!input.ReadFrameDelay(&result->frame_delay))
        success = false;
      if (!input.ReadHotspotInPixels(&result->hotspot_in_pixels))
        success = false;
      if (!input.ReadCursorFrames(&result->cursor_frames))
        success = false;
      result->scale_factor = input.scale_factor();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif