// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/ui/public/interfaces/cursor/cursor.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace ui {
namespace mojom {

namespace internal {


// static
bool CursorData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CursorData_Data* object = static_cast<const CursorData_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[arraysize(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = arraysize(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[arraysize(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }


  if (!::ui::mojom::internal::CursorType_Data
        ::Validate(object->cursor_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->frame_delay, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_delay, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->hotspot_in_pixels, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->hotspot_in_pixels, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cursor_frames, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams cursor_frames_validate_params(
      0, true, nullptr);
  if (!mojo::internal::ValidateContainer(object->cursor_frames, validation_context,
                                         &cursor_frames_validate_params)) {
    return false;
  }

  return true;
}

CursorData_Data::CursorData_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
