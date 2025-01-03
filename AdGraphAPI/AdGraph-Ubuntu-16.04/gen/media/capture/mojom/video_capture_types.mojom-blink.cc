// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "media/capture/mojom/video_capture_types.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "media/capture/mojom/video_capture_types.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
namespace blink {
VideoCaptureFormat::VideoCaptureFormat()
    : frame_size(),
      frame_rate(),
      pixel_format() {}

VideoCaptureFormat::VideoCaptureFormat(
    const ::blink::WebSize& frame_size_in,
    float frame_rate_in,
    VideoCapturePixelFormat pixel_format_in)
    : frame_size(std::move(frame_size_in)),
      frame_rate(std::move(frame_rate_in)),
      pixel_format(std::move(pixel_format_in)) {}

VideoCaptureFormat::~VideoCaptureFormat() = default;

bool VideoCaptureFormat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureParams::VideoCaptureParams()
    : requested_format(),
      resolution_change_policy(),
      power_line_frequency() {}

VideoCaptureParams::VideoCaptureParams(
    VideoCaptureFormatPtr requested_format_in,
    ResolutionChangePolicy resolution_change_policy_in,
    PowerLineFrequency power_line_frequency_in)
    : requested_format(std::move(requested_format_in)),
      resolution_change_policy(std::move(resolution_change_policy_in)),
      power_line_frequency(std::move(power_line_frequency_in)) {}

VideoCaptureParams::~VideoCaptureParams() = default;

bool VideoCaptureParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoFrameInfo::VideoFrameInfo()
    : timestamp(),
      metadata(),
      pixel_format(),
      coded_size(),
      visible_rect() {}

VideoFrameInfo::VideoFrameInfo(
    WTF::TimeDelta timestamp_in,
    ::mojo_base::mojom::blink::DictionaryValuePtr metadata_in,
    VideoCapturePixelFormat pixel_format_in,
    const ::blink::WebSize& coded_size_in,
    const ::blink::WebRect& visible_rect_in)
    : timestamp(std::move(timestamp_in)),
      metadata(std::move(metadata_in)),
      pixel_format(std::move(pixel_format_in)),
      coded_size(std::move(coded_size_in)),
      visible_rect(std::move(visible_rect_in)) {}

VideoFrameInfo::~VideoFrameInfo() = default;

bool VideoFrameInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceDescriptorCameraCalibration::VideoCaptureDeviceDescriptorCameraCalibration()
    : focal_length_x(),
      focal_length_y(),
      depth_near(),
      depth_far() {}

VideoCaptureDeviceDescriptorCameraCalibration::VideoCaptureDeviceDescriptorCameraCalibration(
    double focal_length_x_in,
    double focal_length_y_in,
    double depth_near_in,
    double depth_far_in)
    : focal_length_x(std::move(focal_length_x_in)),
      focal_length_y(std::move(focal_length_y_in)),
      depth_near(std::move(depth_near_in)),
      depth_far(std::move(depth_far_in)) {}

VideoCaptureDeviceDescriptorCameraCalibration::~VideoCaptureDeviceDescriptorCameraCalibration() = default;
size_t VideoCaptureDeviceDescriptorCameraCalibration::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->focal_length_x);
  seed = mojo::internal::WTFHash(seed, this->focal_length_y);
  seed = mojo::internal::WTFHash(seed, this->depth_near);
  seed = mojo::internal::WTFHash(seed, this->depth_far);
  return seed;
}

bool VideoCaptureDeviceDescriptorCameraCalibration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceDescriptor::VideoCaptureDeviceDescriptor()
    : display_name(),
      device_id(),
      model_id(),
      capture_api(),
      transport_type(),
      camera_calibration() {}

VideoCaptureDeviceDescriptor::VideoCaptureDeviceDescriptor(
    const WTF::String& display_name_in,
    const WTF::String& device_id_in,
    const WTF::String& model_id_in,
    VideoCaptureApi capture_api_in,
    VideoCaptureTransportType transport_type_in,
    VideoCaptureDeviceDescriptorCameraCalibrationPtr camera_calibration_in)
    : display_name(std::move(display_name_in)),
      device_id(std::move(device_id_in)),
      model_id(std::move(model_id_in)),
      capture_api(std::move(capture_api_in)),
      transport_type(std::move(transport_type_in)),
      camera_calibration(std::move(camera_calibration_in)) {}

VideoCaptureDeviceDescriptor::~VideoCaptureDeviceDescriptor() = default;

bool VideoCaptureDeviceDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoCaptureDeviceInfo::VideoCaptureDeviceInfo()
    : descriptor(),
      supported_formats() {}

VideoCaptureDeviceInfo::VideoCaptureDeviceInfo(
    VideoCaptureDeviceDescriptorPtr descriptor_in,
    WTF::Vector<VideoCaptureFormatPtr> supported_formats_in)
    : descriptor(std::move(descriptor_in)),
      supported_formats(std::move(supported_formats_in)) {}

VideoCaptureDeviceInfo::~VideoCaptureDeviceInfo() = default;

bool VideoCaptureDeviceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MailboxBufferHandleSet::MailboxBufferHandleSet()
    : mailbox_holder() {}

MailboxBufferHandleSet::MailboxBufferHandleSet(
    const WTF::Vector<::gpu::MailboxHolder>& mailbox_holder_in)
    : mailbox_holder(std::move(mailbox_holder_in)) {}

MailboxBufferHandleSet::~MailboxBufferHandleSet() = default;

bool MailboxBufferHandleSet::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoBufferHandle::VideoBufferHandle() : tag_(Tag::SHARED_BUFFER_HANDLE) {
  data_.shared_buffer_handle = new mojo::ScopedSharedBufferHandle;
}

VideoBufferHandle::~VideoBufferHandle() {
  DestroyActive();
}


void VideoBufferHandle::set_shared_buffer_handle(
    mojo::ScopedSharedBufferHandle shared_buffer_handle) {
  if (tag_ == Tag::SHARED_BUFFER_HANDLE) {
    *(data_.shared_buffer_handle) = std::move(shared_buffer_handle);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_BUFFER_HANDLE;
    data_.shared_buffer_handle = new mojo::ScopedSharedBufferHandle(
        std::move(shared_buffer_handle));
  }
}
void VideoBufferHandle::set_mailbox_handles(
    MailboxBufferHandleSetPtr mailbox_handles) {
  if (tag_ == Tag::MAILBOX_HANDLES) {
    *(data_.mailbox_handles) = std::move(mailbox_handles);
  } else {
    DestroyActive();
    tag_ = Tag::MAILBOX_HANDLES;
    data_.mailbox_handles = new MailboxBufferHandleSetPtr(
        std::move(mailbox_handles));
  }
}

void VideoBufferHandle::DestroyActive() {
  switch (tag_) {

    case Tag::SHARED_BUFFER_HANDLE:

      delete data_.shared_buffer_handle;
      break;
    case Tag::MAILBOX_HANDLES:

      delete data_.mailbox_handles;
      break;
  }
}

bool VideoBufferHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::VideoCaptureFormat::DataView, ::media::mojom::blink::VideoCaptureFormatPtr>::Read(
    ::media::mojom::blink::VideoCaptureFormat::DataView input,
    ::media::mojom::blink::VideoCaptureFormatPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureFormatPtr result(::media::mojom::blink::VideoCaptureFormat::New());
  
      if (!input.ReadFrameSize(&result->frame_size))
        success = false;
      result->frame_rate = input.frame_rate();
      if (!input.ReadPixelFormat(&result->pixel_format))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureParams::DataView, ::media::mojom::blink::VideoCaptureParamsPtr>::Read(
    ::media::mojom::blink::VideoCaptureParams::DataView input,
    ::media::mojom::blink::VideoCaptureParamsPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureParamsPtr result(::media::mojom::blink::VideoCaptureParams::New());
  
      if (!input.ReadRequestedFormat(&result->requested_format))
        success = false;
      if (!input.ReadResolutionChangePolicy(&result->resolution_change_policy))
        success = false;
      if (!input.ReadPowerLineFrequency(&result->power_line_frequency))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoFrameInfo::DataView, ::media::mojom::blink::VideoFrameInfoPtr>::Read(
    ::media::mojom::blink::VideoFrameInfo::DataView input,
    ::media::mojom::blink::VideoFrameInfoPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoFrameInfoPtr result(::media::mojom::blink::VideoFrameInfo::New());
  
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadMetadata(&result->metadata))
        success = false;
      if (!input.ReadPixelFormat(&result->pixel_format))
        success = false;
      if (!input.ReadCodedSize(&result->coded_size))
        success = false;
      if (!input.ReadVisibleRect(&result->visible_rect))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibration::DataView, ::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibrationPtr>::Read(
    ::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibration::DataView input,
    ::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibrationPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibrationPtr result(::media::mojom::blink::VideoCaptureDeviceDescriptorCameraCalibration::New());
  
      result->focal_length_x = input.focal_length_x();
      result->focal_length_y = input.focal_length_y();
      result->depth_near = input.depth_near();
      result->depth_far = input.depth_far();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureDeviceDescriptor::DataView, ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr>::Read(
    ::media::mojom::blink::VideoCaptureDeviceDescriptor::DataView input,
    ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureDeviceDescriptorPtr result(::media::mojom::blink::VideoCaptureDeviceDescriptor::New());
  
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
      if (!input.ReadModelId(&result->model_id))
        success = false;
      if (!input.ReadCaptureApi(&result->capture_api))
        success = false;
      if (!input.ReadTransportType(&result->transport_type))
        success = false;
      if (!input.ReadCameraCalibration(&result->camera_calibration))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::VideoCaptureDeviceInfo::DataView, ::media::mojom::blink::VideoCaptureDeviceInfoPtr>::Read(
    ::media::mojom::blink::VideoCaptureDeviceInfo::DataView input,
    ::media::mojom::blink::VideoCaptureDeviceInfoPtr* output) {
  bool success = true;
  ::media::mojom::blink::VideoCaptureDeviceInfoPtr result(::media::mojom::blink::VideoCaptureDeviceInfo::New());
  
      if (!input.ReadDescriptor(&result->descriptor))
        success = false;
      if (!input.ReadSupportedFormats(&result->supported_formats))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::MailboxBufferHandleSet::DataView, ::media::mojom::blink::MailboxBufferHandleSetPtr>::Read(
    ::media::mojom::blink::MailboxBufferHandleSet::DataView input,
    ::media::mojom::blink::MailboxBufferHandleSetPtr* output) {
  bool success = true;
  ::media::mojom::blink::MailboxBufferHandleSetPtr result(::media::mojom::blink::MailboxBufferHandleSet::New());
  
      if (!input.ReadMailboxHolder(&result->mailbox_holder))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::media::mojom::blink::VideoBufferHandle::DataView, ::media::mojom::blink::VideoBufferHandlePtr>::Read(
    ::media::mojom::blink::VideoBufferHandle::DataView input,
    ::media::mojom::blink::VideoBufferHandlePtr* output) {
  using UnionType = ::media::mojom::blink::VideoBufferHandle;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::SHARED_BUFFER_HANDLE: {
      *output = UnionType::NewSharedBufferHandle(
          input.TakeSharedBufferHandle());
      break;
    }
    case Tag::MAILBOX_HANDLES: {
      ::media::mojom::blink::MailboxBufferHandleSetPtr result_mailbox_handles;
      if (!input.ReadMailboxHandles(&result_mailbox_handles))
        return false;

      *output = UnionType::NewMailboxHandles(
          std::move(result_mailbox_handles));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif