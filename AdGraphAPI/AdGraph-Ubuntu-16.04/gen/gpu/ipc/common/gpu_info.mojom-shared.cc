// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "gpu/ipc/common/gpu_info.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace gpu {
namespace mojom {

namespace internal {


// static
bool GpuDevice_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuDevice_Data* object = static_cast<const GpuDevice_Data*>(data);

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
          object->vendor_string, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams vendor_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->vendor_string, validation_context,
                                         &vendor_string_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_string, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_string_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_string, validation_context,
                                         &device_string_validate_params)) {
    return false;
  }

  return true;
}

GpuDevice_Data::GpuDevice_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecodeAcceleratorSupportedProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoDecodeAcceleratorSupportedProfile_Data* object = static_cast<const VideoDecodeAcceleratorSupportedProfile_Data*>(data);

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


  if (!::gpu::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_resolution, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->max_resolution, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->min_resolution, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->min_resolution, validation_context))
    return false;

  return true;
}

VideoDecodeAcceleratorSupportedProfile_Data::VideoDecodeAcceleratorSupportedProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoDecodeAcceleratorCapabilities_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoDecodeAcceleratorCapabilities_Data* object = static_cast<const VideoDecodeAcceleratorCapabilities_Data*>(data);

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
          object->supported_profiles, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_profiles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->supported_profiles, validation_context,
                                         &supported_profiles_validate_params)) {
    return false;
  }

  return true;
}

VideoDecodeAcceleratorCapabilities_Data::VideoDecodeAcceleratorCapabilities_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoEncodeAcceleratorSupportedProfile_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoEncodeAcceleratorSupportedProfile_Data* object = static_cast<const VideoEncodeAcceleratorSupportedProfile_Data*>(data);

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


  if (!::gpu::mojom::internal::VideoCodecProfile_Data
        ::Validate(object->profile, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_resolution, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->max_resolution, validation_context))
    return false;

  return true;
}

VideoEncodeAcceleratorSupportedProfile_Data::VideoEncodeAcceleratorSupportedProfile_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool GpuInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GpuInfo_Data* object = static_cast<const GpuInfo_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 192 }};

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
          object->initialization_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->initialization_time, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gpu, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->gpu, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->secondary_gpus, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams secondary_gpus_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->secondary_gpus, validation_context,
                                         &secondary_gpus_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_vendor, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_vendor, validation_context,
                                         &driver_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_version, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_version, validation_context,
                                         &driver_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->driver_date, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams driver_date_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->driver_date, validation_context,
                                         &driver_date_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pixel_shader_version, 9, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams pixel_shader_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->pixel_shader_version, validation_context,
                                         &pixel_shader_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->vertex_shader_version, 10, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams vertex_shader_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->vertex_shader_version, validation_context,
                                         &vertex_shader_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->max_msaa_samples, 11, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams max_msaa_samples_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->max_msaa_samples, validation_context,
                                         &max_msaa_samples_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->machine_model_name, 12, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams machine_model_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->machine_model_name, validation_context,
                                         &machine_model_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->machine_model_version, 13, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams machine_model_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->machine_model_version, validation_context,
                                         &machine_model_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_version, 14, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_version, validation_context,
                                         &gl_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_vendor, 15, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_vendor, validation_context,
                                         &gl_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_renderer, 16, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_renderer_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_renderer, validation_context,
                                         &gl_renderer_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_extensions, 17, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_extensions, validation_context,
                                         &gl_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_vendor, 18, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_vendor_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_vendor, validation_context,
                                         &gl_ws_vendor_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_version, 19, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_version_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_version, validation_context,
                                         &gl_ws_version_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->gl_ws_extensions, 20, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams gl_ws_extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->gl_ws_extensions, validation_context,
                                         &gl_ws_extensions_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_decode_accelerator_capabilities, 30, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->video_decode_accelerator_capabilities, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->video_encode_accelerator_supported_profiles, 31, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams video_encode_accelerator_supported_profiles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->video_encode_accelerator_supported_profiles, validation_context,
                                         &video_encode_accelerator_supported_profiles_validate_params)) {
    return false;
  }

  return true;
}

GpuInfo_Data::GpuInfo_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
