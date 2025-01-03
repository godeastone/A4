// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/capture/mojom/video_capture_types.mojom-shared.h"
#include "gpu/ipc/common/mailbox_holder.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "media/capture/video/video_capture_device_descriptor.h"
#include "media/capture/video/video_capture_device_info.h"
#include "media/capture/video_capture_types.h"


namespace media {
namespace mojom {
class VideoCaptureFormat;
using VideoCaptureFormatPtr = mojo::StructPtr<VideoCaptureFormat>;

class VideoCaptureParams;
using VideoCaptureParamsPtr = mojo::StructPtr<VideoCaptureParams>;

class VideoFrameInfo;
using VideoFrameInfoPtr = mojo::StructPtr<VideoFrameInfo>;

class VideoCaptureDeviceDescriptorCameraCalibration;
using VideoCaptureDeviceDescriptorCameraCalibrationPtr = mojo::InlinedStructPtr<VideoCaptureDeviceDescriptorCameraCalibration>;

class VideoCaptureDeviceDescriptor;
using VideoCaptureDeviceDescriptorPtr = mojo::StructPtr<VideoCaptureDeviceDescriptor>;

class VideoCaptureDeviceInfo;
using VideoCaptureDeviceInfoPtr = mojo::StructPtr<VideoCaptureDeviceInfo>;

class MailboxBufferHandleSet;
using MailboxBufferHandleSetPtr = mojo::StructPtr<MailboxBufferHandleSet>;

class VideoBufferHandle;

typedef mojo::StructPtr<VideoBufferHandle> VideoBufferHandlePtr;






class  VideoCaptureDeviceDescriptorCameraCalibration {
 public:
  using DataView = VideoCaptureDeviceDescriptorCameraCalibrationDataView;
  using Data_ = internal::VideoCaptureDeviceDescriptorCameraCalibration_Data;

  template <typename... Args>
  static VideoCaptureDeviceDescriptorCameraCalibrationPtr New(Args&&... args) {
    return VideoCaptureDeviceDescriptorCameraCalibrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureDeviceDescriptorCameraCalibrationPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureDeviceDescriptorCameraCalibrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureDeviceDescriptorCameraCalibration>::Convert(*this);
  }


  VideoCaptureDeviceDescriptorCameraCalibration();

  VideoCaptureDeviceDescriptorCameraCalibration(
      double focal_length_x,
      double focal_length_y,
      double depth_near,
      double depth_far);

  ~VideoCaptureDeviceDescriptorCameraCalibration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureDeviceDescriptorCameraCalibrationPtr>
  VideoCaptureDeviceDescriptorCameraCalibrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureDeviceDescriptorCameraCalibration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureDeviceDescriptorCameraCalibration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureDeviceDescriptorCameraCalibration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptorCameraCalibration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptorCameraCalibration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureDeviceDescriptorCameraCalibration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureDeviceDescriptorCameraCalibration_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptorCameraCalibration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptorCameraCalibration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  double focal_length_x;
  double focal_length_y;
  double depth_near;
  double depth_far;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoBufferHandle {
 public:
  using DataView = VideoBufferHandleDataView;
  using Data_ = internal::VideoBufferHandle_Data;
  using Tag = Data_::VideoBufferHandle_Tag;

  static VideoBufferHandlePtr New() {
    return VideoBufferHandlePtr(base::in_place);
  }
  // Construct an instance holding |shared_buffer_handle|.
  static VideoBufferHandlePtr
  NewSharedBufferHandle(
      mojo::ScopedSharedBufferHandle shared_buffer_handle) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_shared_buffer_handle(std::move(shared_buffer_handle));
    return result;
  }
  // Construct an instance holding |mailbox_handles|.
  static VideoBufferHandlePtr
  NewMailboxHandles(
      MailboxBufferHandleSetPtr mailbox_handles) {
    auto result = VideoBufferHandlePtr(base::in_place);
    result->set_mailbox_handles(std::move(mailbox_handles));
    return result;
  }

  template <typename U>
  static VideoBufferHandlePtr From(const U& u) {
    return mojo::TypeConverter<VideoBufferHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoBufferHandle>::Convert(*this);
  }

  VideoBufferHandle();
  ~VideoBufferHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = VideoBufferHandlePtr>
  VideoBufferHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoBufferHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_shared_buffer_handle() const { return tag_ == Tag::SHARED_BUFFER_HANDLE; }

  mojo::ScopedSharedBufferHandle& get_shared_buffer_handle() const {
    DCHECK(tag_ == Tag::SHARED_BUFFER_HANDLE);
    return *(data_.shared_buffer_handle);
  }

  void set_shared_buffer_handle(
      mojo::ScopedSharedBufferHandle shared_buffer_handle);
  bool is_mailbox_handles() const { return tag_ == Tag::MAILBOX_HANDLES; }

  MailboxBufferHandleSetPtr& get_mailbox_handles() const {
    DCHECK(tag_ == Tag::MAILBOX_HANDLES);
    return *(data_.mailbox_handles);
  }

  void set_mailbox_handles(
      MailboxBufferHandleSetPtr mailbox_handles);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoBufferHandle::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<VideoBufferHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    mojo::ScopedSharedBufferHandle* shared_buffer_handle;
    MailboxBufferHandleSetPtr* mailbox_handles;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


class  VideoCaptureFormat {
 public:
  using DataView = VideoCaptureFormatDataView;
  using Data_ = internal::VideoCaptureFormat_Data;

  template <typename... Args>
  static VideoCaptureFormatPtr New(Args&&... args) {
    return VideoCaptureFormatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureFormatPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureFormatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureFormat>::Convert(*this);
  }


  VideoCaptureFormat();

  VideoCaptureFormat(
      const gfx::Size& frame_size,
      float frame_rate,
      media::VideoPixelFormat pixel_format);

  ~VideoCaptureFormat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureFormatPtr>
  VideoCaptureFormatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureFormat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureFormat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureFormat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureFormat_UnserializedMessageContext<
            UserType, VideoCaptureFormat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureFormat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureFormat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureFormat_UnserializedMessageContext<
            UserType, VideoCaptureFormat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureFormat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::Size frame_size;
  float frame_rate;
  media::VideoPixelFormat pixel_format;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  VideoCaptureParams {
 public:
  using DataView = VideoCaptureParamsDataView;
  using Data_ = internal::VideoCaptureParams_Data;

  template <typename... Args>
  static VideoCaptureParamsPtr New(Args&&... args) {
    return VideoCaptureParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureParamsPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureParams>::Convert(*this);
  }


  VideoCaptureParams();

  VideoCaptureParams(
      const media::VideoCaptureFormat& requested_format,
      media::ResolutionChangePolicy resolution_change_policy,
      media::PowerLineFrequency power_line_frequency);

  ~VideoCaptureParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureParamsPtr>
  VideoCaptureParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureParams_UnserializedMessageContext<
            UserType, VideoCaptureParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureParams_UnserializedMessageContext<
            UserType, VideoCaptureParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  media::VideoCaptureFormat requested_format;
  media::ResolutionChangePolicy resolution_change_policy;
  media::PowerLineFrequency power_line_frequency;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  VideoFrameInfo {
 public:
  using DataView = VideoFrameInfoDataView;
  using Data_ = internal::VideoFrameInfo_Data;

  template <typename... Args>
  static VideoFrameInfoPtr New(Args&&... args) {
    return VideoFrameInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoFrameInfoPtr From(const U& u) {
    return mojo::TypeConverter<VideoFrameInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFrameInfo>::Convert(*this);
  }


  VideoFrameInfo();

  VideoFrameInfo(
      base::TimeDelta timestamp,
      base::Value metadata,
      media::VideoPixelFormat pixel_format,
      const gfx::Size& coded_size,
      const gfx::Rect& visible_rect);

  ~VideoFrameInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoFrameInfoPtr>
  VideoFrameInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFrameInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoFrameInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoFrameInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoFrameInfo_UnserializedMessageContext<
            UserType, VideoFrameInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoFrameInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoFrameInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoFrameInfo_UnserializedMessageContext<
            UserType, VideoFrameInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoFrameInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::TimeDelta timestamp;
  base::Value metadata;
  media::VideoPixelFormat pixel_format;
  gfx::Size coded_size;
  gfx::Rect visible_rect;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoFrameInfo);
};



class  VideoCaptureDeviceDescriptor {
 public:
  using DataView = VideoCaptureDeviceDescriptorDataView;
  using Data_ = internal::VideoCaptureDeviceDescriptor_Data;

  template <typename... Args>
  static VideoCaptureDeviceDescriptorPtr New(Args&&... args) {
    return VideoCaptureDeviceDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureDeviceDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureDeviceDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureDeviceDescriptor>::Convert(*this);
  }


  VideoCaptureDeviceDescriptor();

  VideoCaptureDeviceDescriptor(
      const std::string& display_name,
      const std::string& device_id,
      const std::string& model_id,
      VideoCaptureApi capture_api,
      VideoCaptureTransportType transport_type,
      const base::Optional<media::VideoCaptureDeviceDescriptor::CameraCalibration>& camera_calibration);

  ~VideoCaptureDeviceDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureDeviceDescriptorPtr>
  VideoCaptureDeviceDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureDeviceDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureDeviceDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureDeviceDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureDeviceDescriptor_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureDeviceDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureDeviceDescriptor_UnserializedMessageContext<
            UserType, VideoCaptureDeviceDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string display_name;
  std::string device_id;
  std::string model_id;
  VideoCaptureApi capture_api;
  VideoCaptureTransportType transport_type;
  base::Optional<media::VideoCaptureDeviceDescriptor::CameraCalibration> camera_calibration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  VideoCaptureDeviceInfo {
 public:
  using DataView = VideoCaptureDeviceInfoDataView;
  using Data_ = internal::VideoCaptureDeviceInfo_Data;

  template <typename... Args>
  static VideoCaptureDeviceInfoPtr New(Args&&... args) {
    return VideoCaptureDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoCaptureDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<VideoCaptureDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoCaptureDeviceInfo>::Convert(*this);
  }


  VideoCaptureDeviceInfo();

  VideoCaptureDeviceInfo(
      const media::VideoCaptureDeviceDescriptor& descriptor,
      const std::vector<media::VideoCaptureFormat>& supported_formats);

  ~VideoCaptureDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoCaptureDeviceInfoPtr>
  VideoCaptureDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoCaptureDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoCaptureDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoCaptureDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoCaptureDeviceInfo_UnserializedMessageContext<
            UserType, VideoCaptureDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoCaptureDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoCaptureDeviceInfo_UnserializedMessageContext<
            UserType, VideoCaptureDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoCaptureDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  media::VideoCaptureDeviceDescriptor descriptor;
  std::vector<media::VideoCaptureFormat> supported_formats;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  MailboxBufferHandleSet {
 public:
  using DataView = MailboxBufferHandleSetDataView;
  using Data_ = internal::MailboxBufferHandleSet_Data;

  template <typename... Args>
  static MailboxBufferHandleSetPtr New(Args&&... args) {
    return MailboxBufferHandleSetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MailboxBufferHandleSetPtr From(const U& u) {
    return mojo::TypeConverter<MailboxBufferHandleSetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MailboxBufferHandleSet>::Convert(*this);
  }


  MailboxBufferHandleSet();

  explicit MailboxBufferHandleSet(
      const std::vector<::gpu::MailboxHolder>& mailbox_holder);

  ~MailboxBufferHandleSet();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MailboxBufferHandleSetPtr>
  MailboxBufferHandleSetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MailboxBufferHandleSet>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MailboxBufferHandleSet::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MailboxBufferHandleSet::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MailboxBufferHandleSet_UnserializedMessageContext<
            UserType, MailboxBufferHandleSet::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MailboxBufferHandleSet::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MailboxBufferHandleSet::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MailboxBufferHandleSet_UnserializedMessageContext<
            UserType, MailboxBufferHandleSet::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MailboxBufferHandleSet::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<::gpu::MailboxHolder> mailbox_holder;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename UnionPtrType>
VideoBufferHandlePtr VideoBufferHandle::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::SHARED_BUFFER_HANDLE:
      rv->set_shared_buffer_handle(mojo::Clone(*data_.shared_buffer_handle));
      break;
    case Tag::MAILBOX_HANDLES:
      rv->set_mailbox_handles(mojo::Clone(*data_.mailbox_handles));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoBufferHandle>::value>::type*>
bool VideoBufferHandle::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::SHARED_BUFFER_HANDLE:
      return mojo::Equals(*(data_.shared_buffer_handle), *(other.data_.shared_buffer_handle));
    case Tag::MAILBOX_HANDLES:
      return mojo::Equals(*(data_.mailbox_handles), *(other.data_.mailbox_handles));
  };

  return false;
}
template <typename StructPtrType>
VideoCaptureFormatPtr VideoCaptureFormat::Clone() const {
  return New(
      mojo::Clone(frame_size),
      mojo::Clone(frame_rate),
      mojo::Clone(pixel_format)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureFormat>::value>::type*>
bool VideoCaptureFormat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_size, other_struct.frame_size))
    return false;
  if (!mojo::Equals(this->frame_rate, other_struct.frame_rate))
    return false;
  if (!mojo::Equals(this->pixel_format, other_struct.pixel_format))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureParamsPtr VideoCaptureParams::Clone() const {
  return New(
      mojo::Clone(requested_format),
      mojo::Clone(resolution_change_policy),
      mojo::Clone(power_line_frequency)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureParams>::value>::type*>
bool VideoCaptureParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->requested_format, other_struct.requested_format))
    return false;
  if (!mojo::Equals(this->resolution_change_policy, other_struct.resolution_change_policy))
    return false;
  if (!mojo::Equals(this->power_line_frequency, other_struct.power_line_frequency))
    return false;
  return true;
}
template <typename StructPtrType>
VideoFrameInfoPtr VideoFrameInfo::Clone() const {
  return New(
      mojo::Clone(timestamp),
      mojo::Clone(metadata),
      mojo::Clone(pixel_format),
      mojo::Clone(coded_size),
      mojo::Clone(visible_rect)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFrameInfo>::value>::type*>
bool VideoFrameInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->metadata, other_struct.metadata))
    return false;
  if (!mojo::Equals(this->pixel_format, other_struct.pixel_format))
    return false;
  if (!mojo::Equals(this->coded_size, other_struct.coded_size))
    return false;
  if (!mojo::Equals(this->visible_rect, other_struct.visible_rect))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureDeviceDescriptorCameraCalibrationPtr VideoCaptureDeviceDescriptorCameraCalibration::Clone() const {
  return New(
      mojo::Clone(focal_length_x),
      mojo::Clone(focal_length_y),
      mojo::Clone(depth_near),
      mojo::Clone(depth_far)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureDeviceDescriptorCameraCalibration>::value>::type*>
bool VideoCaptureDeviceDescriptorCameraCalibration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->focal_length_x, other_struct.focal_length_x))
    return false;
  if (!mojo::Equals(this->focal_length_y, other_struct.focal_length_y))
    return false;
  if (!mojo::Equals(this->depth_near, other_struct.depth_near))
    return false;
  if (!mojo::Equals(this->depth_far, other_struct.depth_far))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureDeviceDescriptorPtr VideoCaptureDeviceDescriptor::Clone() const {
  return New(
      mojo::Clone(display_name),
      mojo::Clone(device_id),
      mojo::Clone(model_id),
      mojo::Clone(capture_api),
      mojo::Clone(transport_type),
      mojo::Clone(camera_calibration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureDeviceDescriptor>::value>::type*>
bool VideoCaptureDeviceDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->model_id, other_struct.model_id))
    return false;
  if (!mojo::Equals(this->capture_api, other_struct.capture_api))
    return false;
  if (!mojo::Equals(this->transport_type, other_struct.transport_type))
    return false;
  if (!mojo::Equals(this->camera_calibration, other_struct.camera_calibration))
    return false;
  return true;
}
template <typename StructPtrType>
VideoCaptureDeviceInfoPtr VideoCaptureDeviceInfo::Clone() const {
  return New(
      mojo::Clone(descriptor),
      mojo::Clone(supported_formats)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoCaptureDeviceInfo>::value>::type*>
bool VideoCaptureDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->descriptor, other_struct.descriptor))
    return false;
  if (!mojo::Equals(this->supported_formats, other_struct.supported_formats))
    return false;
  return true;
}
template <typename StructPtrType>
MailboxBufferHandleSetPtr MailboxBufferHandleSet::Clone() const {
  return New(
      mojo::Clone(mailbox_holder)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MailboxBufferHandleSet>::value>::type*>
bool MailboxBufferHandleSet::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mailbox_holder, other_struct.mailbox_holder))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::VideoCaptureFormat::DataView,
                                         ::media::mojom::VideoCaptureFormatPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureFormatPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureFormatPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureFormat::frame_size)& frame_size(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->frame_size;
  }

  static decltype(::media::mojom::VideoCaptureFormat::frame_rate) frame_rate(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->frame_rate;
  }

  static decltype(::media::mojom::VideoCaptureFormat::pixel_format) pixel_format(
      const ::media::mojom::VideoCaptureFormatPtr& input) {
    return input->pixel_format;
  }

  static bool Read(::media::mojom::VideoCaptureFormat::DataView input, ::media::mojom::VideoCaptureFormatPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureParams::DataView,
                                         ::media::mojom::VideoCaptureParamsPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureParamsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureParamsPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureParams::requested_format)& requested_format(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->requested_format;
  }

  static decltype(::media::mojom::VideoCaptureParams::resolution_change_policy) resolution_change_policy(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->resolution_change_policy;
  }

  static decltype(::media::mojom::VideoCaptureParams::power_line_frequency) power_line_frequency(
      const ::media::mojom::VideoCaptureParamsPtr& input) {
    return input->power_line_frequency;
  }

  static bool Read(::media::mojom::VideoCaptureParams::DataView input, ::media::mojom::VideoCaptureParamsPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoFrameInfo::DataView,
                                         ::media::mojom::VideoFrameInfoPtr> {
  static bool IsNull(const ::media::mojom::VideoFrameInfoPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoFrameInfoPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoFrameInfo::timestamp)& timestamp(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->timestamp;
  }

  static const decltype(::media::mojom::VideoFrameInfo::metadata)& metadata(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->metadata;
  }

  static decltype(::media::mojom::VideoFrameInfo::pixel_format) pixel_format(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->pixel_format;
  }

  static const decltype(::media::mojom::VideoFrameInfo::coded_size)& coded_size(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->coded_size;
  }

  static const decltype(::media::mojom::VideoFrameInfo::visible_rect)& visible_rect(
      const ::media::mojom::VideoFrameInfoPtr& input) {
    return input->visible_rect;
  }

  static bool Read(::media::mojom::VideoFrameInfo::DataView input, ::media::mojom::VideoFrameInfoPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::DataView,
                                         ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr* output) { output->reset(); }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::focal_length_x) focal_length_x(
      const ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr& input) {
    return input->focal_length_x;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::focal_length_y) focal_length_y(
      const ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr& input) {
    return input->focal_length_y;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::depth_near) depth_near(
      const ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr& input) {
    return input->depth_near;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::depth_far) depth_far(
      const ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr& input) {
    return input->depth_far;
  }

  static bool Read(::media::mojom::VideoCaptureDeviceDescriptorCameraCalibration::DataView input, ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureDeviceDescriptor::DataView,
                                         ::media::mojom::VideoCaptureDeviceDescriptorPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureDeviceDescriptorPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::display_name)& display_name(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->display_name;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::device_id)& device_id(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->device_id;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::model_id)& model_id(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->model_id;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptor::capture_api) capture_api(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->capture_api;
  }

  static decltype(::media::mojom::VideoCaptureDeviceDescriptor::transport_type) transport_type(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->transport_type;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceDescriptor::camera_calibration)& camera_calibration(
      const ::media::mojom::VideoCaptureDeviceDescriptorPtr& input) {
    return input->camera_calibration;
  }

  static bool Read(::media::mojom::VideoCaptureDeviceDescriptor::DataView input, ::media::mojom::VideoCaptureDeviceDescriptorPtr* output);
};


template <>
struct  StructTraits<::media::mojom::VideoCaptureDeviceInfo::DataView,
                                         ::media::mojom::VideoCaptureDeviceInfoPtr> {
  static bool IsNull(const ::media::mojom::VideoCaptureDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoCaptureDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::media::mojom::VideoCaptureDeviceInfo::descriptor)& descriptor(
      const ::media::mojom::VideoCaptureDeviceInfoPtr& input) {
    return input->descriptor;
  }

  static const decltype(::media::mojom::VideoCaptureDeviceInfo::supported_formats)& supported_formats(
      const ::media::mojom::VideoCaptureDeviceInfoPtr& input) {
    return input->supported_formats;
  }

  static bool Read(::media::mojom::VideoCaptureDeviceInfo::DataView input, ::media::mojom::VideoCaptureDeviceInfoPtr* output);
};


template <>
struct  StructTraits<::media::mojom::MailboxBufferHandleSet::DataView,
                                         ::media::mojom::MailboxBufferHandleSetPtr> {
  static bool IsNull(const ::media::mojom::MailboxBufferHandleSetPtr& input) { return !input; }
  static void SetToNull(::media::mojom::MailboxBufferHandleSetPtr* output) { output->reset(); }

  static const decltype(::media::mojom::MailboxBufferHandleSet::mailbox_holder)& mailbox_holder(
      const ::media::mojom::MailboxBufferHandleSetPtr& input) {
    return input->mailbox_holder;
  }

  static bool Read(::media::mojom::MailboxBufferHandleSet::DataView input, ::media::mojom::MailboxBufferHandleSetPtr* output);
};


template <>
struct  UnionTraits<::media::mojom::VideoBufferHandle::DataView,
                                        ::media::mojom::VideoBufferHandlePtr> {
  static bool IsNull(const ::media::mojom::VideoBufferHandlePtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoBufferHandlePtr* output) { output->reset(); }

  static ::media::mojom::VideoBufferHandle::Tag GetTag(const ::media::mojom::VideoBufferHandlePtr& input) {
    return input->which();
  }

  static  mojo::ScopedSharedBufferHandle& shared_buffer_handle( ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_shared_buffer_handle();
  }

  static const ::media::mojom::MailboxBufferHandleSetPtr& mailbox_handles(const ::media::mojom::VideoBufferHandlePtr& input) {
    return input->get_mailbox_handles();
  }

  static bool Read(::media::mojom::VideoBufferHandle::DataView input, ::media::mojom::VideoBufferHandlePtr* output);
};

}  // namespace mojo

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_H_