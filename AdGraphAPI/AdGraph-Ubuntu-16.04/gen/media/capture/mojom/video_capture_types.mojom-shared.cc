// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "media/capture/mojom/video_capture_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
namespace media {
namespace mojom {

namespace internal {
// static
bool VideoBufferHandle_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const VideoBufferHandle_Data* object = static_cast<const VideoBufferHandle_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case VideoBufferHandle_Tag::SHARED_BUFFER_HANDLE: {

      if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
              object->data.f_shared_buffer_handle, 1, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateHandleOrInterface(object->data.f_shared_buffer_handle,
                                                     validation_context)) {
        return false;
      }
      return true;
    }
    case VideoBufferHandle_Tag::MAILBOX_HANDLES: {

      if (!mojo::internal::ValidatePointerNonNullable(
              object->data.f_mailbox_handles, 2, validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateStruct(object->data.f_mailbox_handles, validation_context))
        return false;
      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in VideoBufferHandle");
      return false;
    }
  }
}


// static
bool VideoCaptureFormat_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureFormat_Data* object = static_cast<const VideoCaptureFormat_Data*>(data);

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
          object->frame_size, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->frame_size, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCapturePixelFormat_Data
        ::Validate(object->pixel_format, validation_context))
    return false;

  return true;
}

VideoCaptureFormat_Data::VideoCaptureFormat_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureParams_Data* object = static_cast<const VideoCaptureParams_Data*>(data);

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
          object->requested_format, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->requested_format, validation_context))
    return false;


  if (!::media::mojom::internal::ResolutionChangePolicy_Data
        ::Validate(object->resolution_change_policy, validation_context))
    return false;


  if (!::media::mojom::internal::PowerLineFrequency_Data
        ::Validate(object->power_line_frequency, validation_context))
    return false;

  return true;
}

VideoCaptureParams_Data::VideoCaptureParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoFrameInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoFrameInfo_Data* object = static_cast<const VideoFrameInfo_Data*>(data);

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
          object->timestamp, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->timestamp, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->metadata, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->metadata, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCapturePixelFormat_Data
        ::Validate(object->pixel_format, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->coded_size, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->coded_size, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->visible_rect, 5, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->visible_rect, validation_context))
    return false;

  return true;
}

VideoFrameInfo_Data::VideoFrameInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureDeviceDescriptorCameraCalibration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureDeviceDescriptorCameraCalibration_Data* object = static_cast<const VideoCaptureDeviceDescriptorCameraCalibration_Data*>(data);

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

  return true;
}

VideoCaptureDeviceDescriptorCameraCalibration_Data::VideoCaptureDeviceDescriptorCameraCalibration_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureDeviceDescriptor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureDeviceDescriptor_Data* object = static_cast<const VideoCaptureDeviceDescriptor_Data*>(data);

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
          object->display_name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams display_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->display_name, validation_context,
                                         &display_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->device_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams device_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->device_id, validation_context,
                                         &device_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->model_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams model_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->model_id, validation_context,
                                         &model_id_validate_params)) {
    return false;
  }


  if (!::media::mojom::internal::VideoCaptureApi_Data
        ::Validate(object->capture_api, validation_context))
    return false;


  if (!::media::mojom::internal::VideoCaptureTransportType_Data
        ::Validate(object->transport_type, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->camera_calibration, validation_context))
    return false;

  return true;
}

VideoCaptureDeviceDescriptor_Data::VideoCaptureDeviceDescriptor_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VideoCaptureDeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VideoCaptureDeviceInfo_Data* object = static_cast<const VideoCaptureDeviceInfo_Data*>(data);

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
          object->descriptor, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->descriptor, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->supported_formats, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams supported_formats_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->supported_formats, validation_context,
                                         &supported_formats_validate_params)) {
    return false;
  }

  return true;
}

VideoCaptureDeviceInfo_Data::VideoCaptureDeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MailboxBufferHandleSet_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MailboxBufferHandleSet_Data* object = static_cast<const MailboxBufferHandleSet_Data*>(data);

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
          object->mailbox_holder, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams mailbox_holder_validate_params(
      4, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->mailbox_holder, validation_context,
                                         &mailbox_holder_validate_params)) {
    return false;
  }

  return true;
}

MailboxBufferHandleSet_Data::MailboxBufferHandleSet_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media

#if defined(_MSC_VER)
#pragma warning(pop)
#endif
