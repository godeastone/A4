// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"

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
bool FetchAPIRequest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FetchAPIRequest_Data* object = static_cast<const FetchAPIRequest_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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


  if (!::network::mojom::internal::FetchRequestMode_Data
        ::Validate(object->mode, validation_context))
    return false;


  if (!::blink::mojom::internal::RequestContextType_Data
        ::Validate(object->request_context_type, validation_context))
    return false;


  if (!::network::mojom::internal::RequestContextFrameType_Data
        ::Validate(object->frame_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->url, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->method, validation_context,
                                         &method_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->headers, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams headers_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->headers, validation_context,
                                         &headers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->blob, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->referrer, 9, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->referrer, validation_context))
    return false;


  if (!::network::mojom::internal::FetchCredentialsMode_Data
        ::Validate(object->credentials_mode, validation_context))
    return false;


  if (!::blink::mojom::internal::FetchCacheMode_Data
        ::Validate(object->cache_mode, validation_context))
    return false;


  if (!::network::mojom::internal::FetchRedirectMode_Data
        ::Validate(object->redirect_mode, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams integrity_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->integrity, validation_context,
                                         &integrity_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams client_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->client_id, validation_context,
                                         &client_id_validate_params)) {
    return false;
  }

  return true;
}

FetchAPIRequest_Data::FetchAPIRequest_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
