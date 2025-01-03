// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace blink {
namespace mojom {

namespace internal {


// static
bool CloneableMessage_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CloneableMessage_Data* object = static_cast<const CloneableMessage_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->encoded_message, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->encoded_message, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->blobs, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams blobs_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blobs, validation_context,
                                         &blobs_validate_params)) {
    return false;
  }

  return true;
}

CloneableMessage_Data::CloneableMessage_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TransferableMessage_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TransferableMessage_Data* object = static_cast<const TransferableMessage_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->message, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ports, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams ports_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->ports, validation_context,
                                         &ports_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->array_buffer_contents_array, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams array_buffer_contents_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->array_buffer_contents_array, validation_context,
                                         &array_buffer_contents_array_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->image_bitmap_contents_array, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams image_bitmap_contents_array_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->image_bitmap_contents_array, validation_context,
                                         &image_bitmap_contents_array_validate_params)) {
    return false;
  }

  return true;
}

TransferableMessage_Data::TransferableMessage_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
