// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "chrome/common/navigation_corrector.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace chrome {
namespace mojom {

namespace internal {


// static
bool NavigationCorrector_SetNavigationCorrectionInfo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NavigationCorrector_SetNavigationCorrectionInfo_Params_Data* object = static_cast<const NavigationCorrector_SetNavigationCorrectionInfo_Params_Data*>(data);

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
          object->navigation_correction_url, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->navigation_correction_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->language, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams language_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->language, validation_context,
                                         &language_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->country_code, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams country_code_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->country_code, validation_context,
                                         &country_code_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->api_key, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams api_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->api_key, validation_context,
                                         &api_key_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->search_url, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->search_url, validation_context))
    return false;

  return true;
}

NavigationCorrector_SetNavigationCorrectionInfo_Params_Data::NavigationCorrector_SetNavigationCorrectionInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
