// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/identity/public/mojom/google_service_auth_error.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace identity {
namespace mojom {

namespace internal {


// static
bool Captcha_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Captcha_Data* object = static_cast<const Captcha_Data*>(data);

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
          object->token, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams token_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->token, validation_context,
                                         &token_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->audio_url, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->audio_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->image_url, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->image_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->unlock_url, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->unlock_url, validation_context))
    return false;

  return true;
}

Captcha_Data::Captcha_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool SecondFactor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SecondFactor_Data* object = static_cast<const SecondFactor_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->token, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams token_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->token, validation_context,
                                         &token_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->prompt_text, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams prompt_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->prompt_text, validation_context,
                                         &prompt_text_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->alternate_text, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams alternate_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->alternate_text, validation_context,
                                         &alternate_text_validate_params)) {
    return false;
  }

  return true;
}

SecondFactor_Data::SecondFactor_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GoogleServiceAuthError_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GoogleServiceAuthError_Data* object = static_cast<const GoogleServiceAuthError_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->captcha, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->captcha, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->second_factor, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->second_factor, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->error_message, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams error_message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->error_message, validation_context,
                                         &error_message_validate_params)) {
    return false;
  }

  return true;
}

GoogleServiceAuthError_Data::GoogleServiceAuthError_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace identity

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
