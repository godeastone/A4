// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/preferences/public/mojom/tracked_preference_validation_delegate.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace prefs {
namespace mojom {

namespace internal {


// static
bool TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data* object = static_cast<const TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data*>(data);

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
          object->pref_path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pref_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pref_path, validation_context,
                                         &pref_path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnion(object->value, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->value_state, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->external_validation_value_state, validation_context))
    return false;

  return true;
}

TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data::TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data* object = static_cast<const TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data*>(data);

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
          object->pref_path, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pref_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pref_path, validation_context,
                                         &pref_path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->invalid_keys, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->invalid_keys, validation_context,
                                         &invalid_keys_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->external_validation_invalid_keys, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams external_validation_invalid_keys_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->external_validation_invalid_keys, validation_context,
                                         &external_validation_invalid_keys_validate_params)) {
    return false;
  }


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->value_state, validation_context))
    return false;


  if (!::prefs::mojom::internal::TrackedPreferenceValidationDelegate_ValueState_Data
        ::Validate(object->external_validation_value_state, validation_context))
    return false;

  return true;
}

TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data::TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
