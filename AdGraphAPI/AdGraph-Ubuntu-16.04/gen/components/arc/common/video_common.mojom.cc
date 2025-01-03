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

#include "components/arc/common/video_common.mojom.h"

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

#include "components/arc/common/video_common.mojom-shared-message-ids.h"
namespace arc {
namespace mojom {
VideoFramePlane::VideoFramePlane()
    : offset(),
      stride() {}

VideoFramePlane::VideoFramePlane(
    int32_t offset_in,
    int32_t stride_in)
    : offset(std::move(offset_in)),
      stride(std::move(stride_in)) {}

VideoFramePlane::~VideoFramePlane() = default;

bool VideoFramePlane::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Size::Size()
    : width(),
      height() {}

Size::Size(
    int32_t width_in,
    int32_t height_in)
    : width(std::move(width_in)),
      height(std::move(height_in)) {}

Size::~Size() = default;

bool Size::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace arc

namespace mojo {


// static
bool StructTraits<::arc::mojom::VideoFramePlane::DataView, ::arc::mojom::VideoFramePlanePtr>::Read(
    ::arc::mojom::VideoFramePlane::DataView input,
    ::arc::mojom::VideoFramePlanePtr* output) {
  bool success = true;
  ::arc::mojom::VideoFramePlanePtr result(::arc::mojom::VideoFramePlane::New());
  
      result->offset = input.offset();
      result->stride = input.stride();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::arc::mojom::Size::DataView, ::arc::mojom::SizePtr>::Read(
    ::arc::mojom::Size::DataView input,
    ::arc::mojom::SizePtr* output) {
  bool success = true;
  ::arc::mojom::SizePtr result(::arc::mojom::Size::New());
  
      result->width = input.width();
      result->height = input.height();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif