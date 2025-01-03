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

#include "components/arc/common/gfx.mojom.h"

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

#include "components/arc/common/gfx.mojom-shared-message-ids.h"
namespace arc {
namespace mojom {
Rect::Rect()
    : left(),
      top(),
      right(),
      bottom() {}

Rect::Rect(
    int32_t left_in,
    int32_t top_in,
    int32_t right_in,
    int32_t bottom_in)
    : left(std::move(left_in)),
      top(std::move(top_in)),
      right(std::move(right_in)),
      bottom(std::move(bottom_in)) {}

Rect::~Rect() = default;

bool Rect::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Range::Range()
    : start(),
      end() {}

Range::Range(
    uint32_t start_in,
    uint32_t end_in)
    : start(std::move(start_in)),
      end(std::move(end_in)) {}

Range::~Range() = default;

bool Range::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace arc

namespace mojo {


// static
bool StructTraits<::arc::mojom::Rect::DataView, ::arc::mojom::RectPtr>::Read(
    ::arc::mojom::Rect::DataView input,
    ::arc::mojom::RectPtr* output) {
  bool success = true;
  ::arc::mojom::RectPtr result(::arc::mojom::Rect::New());
  
      result->left = input.left();
      result->top = input.top();
      result->right = input.right();
      result->bottom = input.bottom();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::arc::mojom::Range::DataView, ::arc::mojom::RangePtr>::Read(
    ::arc::mojom::Range::DataView input,
    ::arc::mojom::RangePtr* output) {
  bool success = true;
  ::arc::mojom::RangePtr result(::arc::mojom::Range::New());
  
      result->start = input.start();
      result->end = input.end();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif