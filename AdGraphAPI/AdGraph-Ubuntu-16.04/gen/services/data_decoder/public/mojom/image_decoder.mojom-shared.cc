// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "services/data_decoder/public/mojom/image_decoder.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace data_decoder {
namespace mojom {

namespace internal {


// static
bool AnimationFrame_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AnimationFrame_Data* object = static_cast<const AnimationFrame_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->bitmap, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->bitmap, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->duration, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->duration, validation_context))
    return false;

  return true;
}

AnimationFrame_Data::AnimationFrame_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageDecoder_DecodeImage_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDecoder_DecodeImage_Params_Data* object = static_cast<const ImageDecoder_DecodeImage_Params_Data*>(data);

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
          object->encoded_data, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams encoded_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->encoded_data, validation_context,
                                         &encoded_data_validate_params)) {
    return false;
  }


  if (!::data_decoder::mojom::internal::ImageCodec_Data
        ::Validate(object->codec, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->desired_image_frame_size, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->desired_image_frame_size, validation_context))
    return false;

  return true;
}

ImageDecoder_DecodeImage_Params_Data::ImageDecoder_DecodeImage_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageDecoder_DecodeImage_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDecoder_DecodeImage_ResponseParams_Data* object = static_cast<const ImageDecoder_DecodeImage_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

  if (!mojo::internal::ValidateStruct(object->decoded_image, validation_context))
    return false;

  return true;
}

ImageDecoder_DecodeImage_ResponseParams_Data::ImageDecoder_DecodeImage_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageDecoder_DecodeAnimation_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDecoder_DecodeAnimation_Params_Data* object = static_cast<const ImageDecoder_DecodeAnimation_Params_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
          object->encoded_data, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams encoded_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->encoded_data, validation_context,
                                         &encoded_data_validate_params)) {
    return false;
  }

  return true;
}

ImageDecoder_DecodeAnimation_Params_Data::ImageDecoder_DecodeAnimation_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ImageDecoder_DecodeAnimation_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ImageDecoder_DecodeAnimation_ResponseParams_Data* object = static_cast<const ImageDecoder_DecodeAnimation_ResponseParams_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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
          object->decoded_image, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams decoded_image_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->decoded_image, validation_context,
                                         &decoded_image_validate_params)) {
    return false;
  }

  return true;
}

ImageDecoder_DecodeAnimation_ResponseParams_Data::ImageDecoder_DecodeAnimation_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace data_decoder

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
