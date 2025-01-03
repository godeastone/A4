// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/common/navigation_params.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace content {
namespace mojom {

namespace internal {


// static
bool BeginNavigationParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BeginNavigationParams_Data* object = static_cast<const BeginNavigationParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->headers, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams headers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->headers, validation_context,
                                         &headers_validate_params)) {
    return false;
  }


  if (!::blink::mojom::internal::RequestContextType_Data
        ::Validate(object->request_context_type, validation_context))
    return false;


  if (!::content::mojom::internal::MixedContentContextType_Data
        ::Validate(object->mixed_content_context_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->searchable_form_url, 7, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->searchable_form_url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->searchable_form_encoding, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams searchable_form_encoding_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->searchable_form_encoding, validation_context,
                                         &searchable_form_encoding_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->initiator_origin, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->client_side_redirect_url, 10, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->client_side_redirect_url, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->devtools_initiator, validation_context))
    return false;

  return true;
}

BeginNavigationParams_Data::BeginNavigationParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
