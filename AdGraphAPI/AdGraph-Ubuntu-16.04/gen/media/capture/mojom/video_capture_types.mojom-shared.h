// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "media/capture/mojom/video_capture_types.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
class VideoCaptureFormatDataView;

class VideoCaptureParamsDataView;

class VideoFrameInfoDataView;

class VideoCaptureDeviceDescriptorCameraCalibrationDataView;

class VideoCaptureDeviceDescriptorDataView;

class VideoCaptureDeviceInfoDataView;

class MailboxBufferHandleSetDataView;

class VideoBufferHandleDataView;


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureFormatDataView> {
  using Data = ::media::mojom::internal::VideoCaptureFormat_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureParamsDataView> {
  using Data = ::media::mojom::internal::VideoCaptureParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoFrameInfoDataView> {
  using Data = ::media::mojom::internal::VideoFrameInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView> {
  using Data = ::media::mojom::internal::VideoCaptureDeviceDescriptorCameraCalibration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureDeviceDescriptorDataView> {
  using Data = ::media::mojom::internal::VideoCaptureDeviceDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoCaptureDeviceInfoDataView> {
  using Data = ::media::mojom::internal::VideoCaptureDeviceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::MailboxBufferHandleSetDataView> {
  using Data = ::media::mojom::internal::MailboxBufferHandleSet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::VideoBufferHandleDataView> {
  using Data = ::media::mojom::internal::VideoBufferHandle_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {

enum class VideoCapturePixelFormat : int32_t {
  I420,
  Y16,
  ARGB,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, VideoCapturePixelFormat value) {
  switch(value) {
    case VideoCapturePixelFormat::I420:
      return os << "VideoCapturePixelFormat::I420";
    case VideoCapturePixelFormat::Y16:
      return os << "VideoCapturePixelFormat::Y16";
    case VideoCapturePixelFormat::ARGB:
      return os << "VideoCapturePixelFormat::ARGB";
    default:
      return os << "Unknown VideoCapturePixelFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCapturePixelFormat value) {
  return internal::VideoCapturePixelFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ResolutionChangePolicy : int32_t {
  FIXED_RESOLUTION,
  FIXED_ASPECT_RATIO,
  ANY_WITHIN_LIMIT,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ResolutionChangePolicy value) {
  switch(value) {
    case ResolutionChangePolicy::FIXED_RESOLUTION:
      return os << "ResolutionChangePolicy::FIXED_RESOLUTION";
    case ResolutionChangePolicy::FIXED_ASPECT_RATIO:
      return os << "ResolutionChangePolicy::FIXED_ASPECT_RATIO";
    case ResolutionChangePolicy::ANY_WITHIN_LIMIT:
      return os << "ResolutionChangePolicy::ANY_WITHIN_LIMIT";
    default:
      return os << "Unknown ResolutionChangePolicy value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ResolutionChangePolicy value) {
  return internal::ResolutionChangePolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PowerLineFrequency : int32_t {
  DEFAULT,
  HZ_50,
  HZ_60,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PowerLineFrequency value) {
  switch(value) {
    case PowerLineFrequency::DEFAULT:
      return os << "PowerLineFrequency::DEFAULT";
    case PowerLineFrequency::HZ_50:
      return os << "PowerLineFrequency::HZ_50";
    case PowerLineFrequency::HZ_60:
      return os << "PowerLineFrequency::HZ_60";
    default:
      return os << "Unknown PowerLineFrequency value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PowerLineFrequency value) {
  return internal::PowerLineFrequency_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoCaptureApi : int32_t {
  LINUX_V4L2_SINGLE_PLANE,
  WIN_MEDIA_FOUNDATION,
  WIN_MEDIA_FOUNDATION_SENSOR,
  WIN_DIRECT_SHOW,
  MACOSX_AVFOUNDATION,
  MACOSX_DECKLINK,
  ANDROID_API1,
  ANDROID_API2_LEGACY,
  ANDROID_API2_FULL,
  ANDROID_API2_LIMITED,
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 10,
};

inline std::ostream& operator<<(std::ostream& os, VideoCaptureApi value) {
  switch(value) {
    case VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE:
      return os << "VideoCaptureApi::LINUX_V4L2_SINGLE_PLANE";
    case VideoCaptureApi::WIN_MEDIA_FOUNDATION:
      return os << "VideoCaptureApi::WIN_MEDIA_FOUNDATION";
    case VideoCaptureApi::WIN_MEDIA_FOUNDATION_SENSOR:
      return os << "VideoCaptureApi::WIN_MEDIA_FOUNDATION_SENSOR";
    case VideoCaptureApi::WIN_DIRECT_SHOW:
      return os << "VideoCaptureApi::WIN_DIRECT_SHOW";
    case VideoCaptureApi::MACOSX_AVFOUNDATION:
      return os << "VideoCaptureApi::MACOSX_AVFOUNDATION";
    case VideoCaptureApi::MACOSX_DECKLINK:
      return os << "VideoCaptureApi::MACOSX_DECKLINK";
    case VideoCaptureApi::ANDROID_API1:
      return os << "VideoCaptureApi::ANDROID_API1";
    case VideoCaptureApi::ANDROID_API2_LEGACY:
      return os << "VideoCaptureApi::ANDROID_API2_LEGACY";
    case VideoCaptureApi::ANDROID_API2_FULL:
      return os << "VideoCaptureApi::ANDROID_API2_FULL";
    case VideoCaptureApi::ANDROID_API2_LIMITED:
      return os << "VideoCaptureApi::ANDROID_API2_LIMITED";
    case VideoCaptureApi::UNKNOWN:
      return os << "VideoCaptureApi::UNKNOWN";
    default:
      return os << "Unknown VideoCaptureApi value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCaptureApi value) {
  return internal::VideoCaptureApi_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoCaptureTransportType : int32_t {
  MACOSX_USB_OR_BUILT_IN,
  OTHER_TRANSPORT,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, VideoCaptureTransportType value) {
  switch(value) {
    case VideoCaptureTransportType::MACOSX_USB_OR_BUILT_IN:
      return os << "VideoCaptureTransportType::MACOSX_USB_OR_BUILT_IN";
    case VideoCaptureTransportType::OTHER_TRANSPORT:
      return os << "VideoCaptureTransportType::OTHER_TRANSPORT";
    default:
      return os << "Unknown VideoCaptureTransportType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCaptureTransportType value) {
  return internal::VideoCaptureTransportType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class VideoCaptureFormatDataView {
 public:
  VideoCaptureFormatDataView() {}

  VideoCaptureFormatDataView(
      internal::VideoCaptureFormat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSize(UserType* output) {
    auto* pointer = data_->frame_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  float frame_rate() const {
    return data_->frame_rate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::media::mojom::VideoCapturePixelFormat>(
        data_value, output);
  }

  VideoCapturePixelFormat pixel_format() const {
    return static_cast<VideoCapturePixelFormat>(data_->pixel_format);
  }
 private:
  internal::VideoCaptureFormat_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureParamsDataView {
 public:
  VideoCaptureParamsDataView() {}

  VideoCaptureParamsDataView(
      internal::VideoCaptureParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestedFormatDataView(
      VideoCaptureFormatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestedFormat(UserType* output) {
    auto* pointer = data_->requested_format.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureFormatDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResolutionChangePolicy(UserType* output) const {
    auto data_value = data_->resolution_change_policy;
    return mojo::internal::Deserialize<::media::mojom::ResolutionChangePolicy>(
        data_value, output);
  }

  ResolutionChangePolicy resolution_change_policy() const {
    return static_cast<ResolutionChangePolicy>(data_->resolution_change_policy);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPowerLineFrequency(UserType* output) const {
    auto data_value = data_->power_line_frequency;
    return mojo::internal::Deserialize<::media::mojom::PowerLineFrequency>(
        data_value, output);
  }

  PowerLineFrequency power_line_frequency() const {
    return static_cast<PowerLineFrequency>(data_->power_line_frequency);
  }
 private:
  internal::VideoCaptureParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoFrameInfoDataView {
 public:
  VideoFrameInfoDataView() {}

  VideoFrameInfoDataView(
      internal::VideoFrameInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetMetadataDataView(
      ::mojo_base::mojom::DictionaryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DictionaryValueDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelFormat(UserType* output) const {
    auto data_value = data_->pixel_format;
    return mojo::internal::Deserialize<::media::mojom::VideoCapturePixelFormat>(
        data_value, output);
  }

  VideoCapturePixelFormat pixel_format() const {
    return static_cast<VideoCapturePixelFormat>(data_->pixel_format);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSize(UserType* output) {
    auto* pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleRect(UserType* output) {
    auto* pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoFrameInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureDeviceDescriptorCameraCalibrationDataView {
 public:
  VideoCaptureDeviceDescriptorCameraCalibrationDataView() {}

  VideoCaptureDeviceDescriptorCameraCalibrationDataView(
      internal::VideoCaptureDeviceDescriptorCameraCalibration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double focal_length_x() const {
    return data_->focal_length_x;
  }
  double focal_length_y() const {
    return data_->focal_length_y;
  }
  double depth_near() const {
    return data_->depth_near;
  }
  double depth_far() const {
    return data_->depth_far;
  }
 private:
  internal::VideoCaptureDeviceDescriptorCameraCalibration_Data* data_ = nullptr;
};

class VideoCaptureDeviceDescriptorDataView {
 public:
  VideoCaptureDeviceDescriptorDataView() {}

  VideoCaptureDeviceDescriptorDataView(
      internal::VideoCaptureDeviceDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetModelIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModelId(UserType* output) {
    auto* pointer = data_->model_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureApi(UserType* output) const {
    auto data_value = data_->capture_api;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureApi>(
        data_value, output);
  }

  VideoCaptureApi capture_api() const {
    return static_cast<VideoCaptureApi>(data_->capture_api);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportType(UserType* output) const {
    auto data_value = data_->transport_type;
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureTransportType>(
        data_value, output);
  }

  VideoCaptureTransportType transport_type() const {
    return static_cast<VideoCaptureTransportType>(data_->transport_type);
  }
  inline void GetCameraCalibrationDataView(
      VideoCaptureDeviceDescriptorCameraCalibrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCameraCalibration(UserType* output) {
    auto* pointer = data_->camera_calibration.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureDeviceDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoCaptureDeviceInfoDataView {
 public:
  VideoCaptureDeviceInfoDataView() {}

  VideoCaptureDeviceInfoDataView(
      internal::VideoCaptureDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorDataView(
      VideoCaptureDeviceDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptor(UserType* output) {
    auto* pointer = data_->descriptor.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoCaptureDeviceDescriptorDataView>(
        pointer, output, context_);
  }
  inline void GetSupportedFormatsDataView(
      mojo::ArrayDataView<VideoCaptureFormatDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedFormats(UserType* output) {
    auto* pointer = data_->supported_formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VideoCaptureDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MailboxBufferHandleSetDataView {
 public:
  MailboxBufferHandleSetDataView() {}

  MailboxBufferHandleSetDataView(
      internal::MailboxBufferHandleSet_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMailboxHolderDataView(
      mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHolder(UserType* output) {
    auto* pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MailboxBufferHandleSet_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoBufferHandleDataView {
 public:
  using Tag = internal::VideoBufferHandle_Data::VideoBufferHandle_Tag;

  VideoBufferHandleDataView() {}

  VideoBufferHandleDataView(
      internal::VideoBufferHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_shared_buffer_handle() const { return data_->tag == Tag::SHARED_BUFFER_HANDLE; }
  mojo::ScopedSharedBufferHandle TakeSharedBufferHandle() {
    DCHECK(is_shared_buffer_handle());
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->data.f_shared_buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_mailbox_handles() const { return data_->tag == Tag::MAILBOX_HANDLES; }
  inline void GetMailboxHandlesDataView(
      MailboxBufferHandleSetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHandles(UserType* output) {
    DCHECK(is_mailbox_handles());
    return mojo::internal::Deserialize<::media::mojom::MailboxBufferHandleSetDataView>(
        data_->data.f_mailbox_handles.Get(), output, context_);
  }

 private:
  internal::VideoBufferHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::VideoCapturePixelFormat>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCapturePixelFormat> {};

template <>
struct hash<::media::mojom::ResolutionChangePolicy>
    : public mojo::internal::EnumHashImpl<::media::mojom::ResolutionChangePolicy> {};

template <>
struct hash<::media::mojom::PowerLineFrequency>
    : public mojo::internal::EnumHashImpl<::media::mojom::PowerLineFrequency> {};

template <>
struct hash<::media::mojom::VideoCaptureApi>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureApi> {};

template <>
struct hash<::media::mojom::VideoCaptureTransportType>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCaptureTransportType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::VideoCapturePixelFormat, ::media::mojom::VideoCapturePixelFormat> {
  static ::media::mojom::VideoCapturePixelFormat ToMojom(::media::mojom::VideoCapturePixelFormat input) { return input; }
  static bool FromMojom(::media::mojom::VideoCapturePixelFormat input, ::media::mojom::VideoCapturePixelFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCapturePixelFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCapturePixelFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCapturePixelFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ResolutionChangePolicy, ::media::mojom::ResolutionChangePolicy> {
  static ::media::mojom::ResolutionChangePolicy ToMojom(::media::mojom::ResolutionChangePolicy input) { return input; }
  static bool FromMojom(::media::mojom::ResolutionChangePolicy input, ::media::mojom::ResolutionChangePolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ResolutionChangePolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ResolutionChangePolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ResolutionChangePolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::PowerLineFrequency, ::media::mojom::PowerLineFrequency> {
  static ::media::mojom::PowerLineFrequency ToMojom(::media::mojom::PowerLineFrequency input) { return input; }
  static bool FromMojom(::media::mojom::PowerLineFrequency input, ::media::mojom::PowerLineFrequency* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PowerLineFrequency, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::PowerLineFrequency, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::PowerLineFrequency>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureApi, ::media::mojom::VideoCaptureApi> {
  static ::media::mojom::VideoCaptureApi ToMojom(::media::mojom::VideoCaptureApi input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureApi input, ::media::mojom::VideoCaptureApi* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureApi, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureApi, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureApi>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCaptureTransportType, ::media::mojom::VideoCaptureTransportType> {
  static ::media::mojom::VideoCaptureTransportType ToMojom(::media::mojom::VideoCaptureTransportType input) { return input; }
  static bool FromMojom(::media::mojom::VideoCaptureTransportType input, ::media::mojom::VideoCaptureTransportType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureTransportType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCaptureTransportType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCaptureTransportType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureFormatDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureFormatDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureFormat_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::frame_size, input, custom_context)) in_frame_size = CallWithContext(Traits::frame_size, input, custom_context);
    typename decltype((*output)->frame_size)::BaseType::BufferWriter
        frame_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_frame_size, buffer, &frame_size_writer, context);
    (*output)->frame_size.Set(
        frame_size_writer.is_null() ? nullptr : frame_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_size in VideoCaptureFormat struct");
    (*output)->frame_rate = CallWithContext(Traits::frame_rate, input, custom_context);
    mojo::internal::Serialize<::media::mojom::VideoCapturePixelFormat>(
        CallWithContext(Traits::pixel_format, input, custom_context), &(*output)->pixel_format);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureFormat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureFormatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::requested_format, input, custom_context)) in_requested_format = CallWithContext(Traits::requested_format, input, custom_context);
    typename decltype((*output)->requested_format)::BaseType::BufferWriter
        requested_format_writer;
    mojo::internal::Serialize<::media::mojom::VideoCaptureFormatDataView>(
        in_requested_format, buffer, &requested_format_writer, context);
    (*output)->requested_format.Set(
        requested_format_writer.is_null() ? nullptr : requested_format_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->requested_format.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null requested_format in VideoCaptureParams struct");
    mojo::internal::Serialize<::media::mojom::ResolutionChangePolicy>(
        CallWithContext(Traits::resolution_change_policy, input, custom_context), &(*output)->resolution_change_policy);
    mojo::internal::Serialize<::media::mojom::PowerLineFrequency>(
        CallWithContext(Traits::power_line_frequency, input, custom_context), &(*output)->power_line_frequency);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFrameInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoFrameInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoFrameInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in VideoFrameInfo struct");
    decltype(CallWithContext(Traits::metadata, input, custom_context)) in_metadata = CallWithContext(Traits::metadata, input, custom_context);
    typename decltype((*output)->metadata)::BaseType::BufferWriter
        metadata_writer;
    mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
        in_metadata, buffer, &metadata_writer, context);
    (*output)->metadata.Set(
        metadata_writer.is_null() ? nullptr : metadata_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->metadata.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null metadata in VideoFrameInfo struct");
    mojo::internal::Serialize<::media::mojom::VideoCapturePixelFormat>(
        CallWithContext(Traits::pixel_format, input, custom_context), &(*output)->pixel_format);
    decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
    typename decltype((*output)->coded_size)::BaseType::BufferWriter
        coded_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_coded_size, buffer, &coded_size_writer, context);
    (*output)->coded_size.Set(
        coded_size_writer.is_null() ? nullptr : coded_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size in VideoFrameInfo struct");
    decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
    typename decltype((*output)->visible_rect)::BaseType::BufferWriter
        visible_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_visible_rect, buffer, &visible_rect_writer, context);
    (*output)->visible_rect.Set(
        visible_rect_writer.is_null() ? nullptr : visible_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->visible_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null visible_rect in VideoFrameInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoFrameInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoFrameInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureDeviceDescriptorCameraCalibration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->focal_length_x = CallWithContext(Traits::focal_length_x, input, custom_context);
    (*output)->focal_length_y = CallWithContext(Traits::focal_length_y, input, custom_context);
    (*output)->depth_near = CallWithContext(Traits::depth_near, input, custom_context);
    (*output)->depth_far = CallWithContext(Traits::depth_far, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureDeviceDescriptorCameraCalibration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureDeviceDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureDeviceDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureDeviceDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in VideoCaptureDeviceDescriptor struct");
    decltype(CallWithContext(Traits::device_id, input, custom_context)) in_device_id = CallWithContext(Traits::device_id, input, custom_context);
    typename decltype((*output)->device_id)::BaseType::BufferWriter
        device_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_device_id, buffer, &device_id_writer, context);
    (*output)->device_id.Set(
        device_id_writer.is_null() ? nullptr : device_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->device_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null device_id in VideoCaptureDeviceDescriptor struct");
    decltype(CallWithContext(Traits::model_id, input, custom_context)) in_model_id = CallWithContext(Traits::model_id, input, custom_context);
    typename decltype((*output)->model_id)::BaseType::BufferWriter
        model_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_model_id, buffer, &model_id_writer, context);
    (*output)->model_id.Set(
        model_id_writer.is_null() ? nullptr : model_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->model_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null model_id in VideoCaptureDeviceDescriptor struct");
    mojo::internal::Serialize<::media::mojom::VideoCaptureApi>(
        CallWithContext(Traits::capture_api, input, custom_context), &(*output)->capture_api);
    mojo::internal::Serialize<::media::mojom::VideoCaptureTransportType>(
        CallWithContext(Traits::transport_type, input, custom_context), &(*output)->transport_type);
    decltype(CallWithContext(Traits::camera_calibration, input, custom_context)) in_camera_calibration = CallWithContext(Traits::camera_calibration, input, custom_context);
    typename decltype((*output)->camera_calibration)::BaseType::BufferWriter
        camera_calibration_writer;
    mojo::internal::Serialize<::media::mojom::VideoCaptureDeviceDescriptorCameraCalibrationDataView>(
        in_camera_calibration, buffer, &camera_calibration_writer, context);
    (*output)->camera_calibration.Set(
        camera_calibration_writer.is_null() ? nullptr : camera_calibration_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureDeviceDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureDeviceDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCaptureDeviceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoCaptureDeviceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoCaptureDeviceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::descriptor, input, custom_context)) in_descriptor = CallWithContext(Traits::descriptor, input, custom_context);
    typename decltype((*output)->descriptor)::BaseType::BufferWriter
        descriptor_writer;
    mojo::internal::Serialize<::media::mojom::VideoCaptureDeviceDescriptorDataView>(
        in_descriptor, buffer, &descriptor_writer, context);
    (*output)->descriptor.Set(
        descriptor_writer.is_null() ? nullptr : descriptor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->descriptor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null descriptor in VideoCaptureDeviceInfo struct");
    decltype(CallWithContext(Traits::supported_formats, input, custom_context)) in_supported_formats = CallWithContext(Traits::supported_formats, input, custom_context);
    typename decltype((*output)->supported_formats)::BaseType::BufferWriter
        supported_formats_writer;
    const mojo::internal::ContainerValidateParams supported_formats_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::VideoCaptureFormatDataView>>(
        in_supported_formats, buffer, &supported_formats_writer, &supported_formats_validate_params,
        context);
    (*output)->supported_formats.Set(
        supported_formats_writer.is_null() ? nullptr : supported_formats_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_formats.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_formats in VideoCaptureDeviceInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoCaptureDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoCaptureDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::MailboxBufferHandleSetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::MailboxBufferHandleSetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::MailboxBufferHandleSet_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::mailbox_holder, input, custom_context)) in_mailbox_holder = CallWithContext(Traits::mailbox_holder, input, custom_context);
    typename decltype((*output)->mailbox_holder)::BaseType::BufferWriter
        mailbox_holder_writer;
    const mojo::internal::ContainerValidateParams mailbox_holder_validate_params(
        4, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>>(
        in_mailbox_holder, buffer, &mailbox_holder_writer, &mailbox_holder_validate_params,
        context);
    (*output)->mailbox_holder.Set(
        mailbox_holder_writer.is_null() ? nullptr : mailbox_holder_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mailbox_holder.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mailbox_holder in MailboxBufferHandleSet struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::MailboxBufferHandleSet_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::MailboxBufferHandleSetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoBufferHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::media::mojom::VideoBufferHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoBufferHandle_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::media::mojom::internal::VideoBufferHandle_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::media::mojom::VideoBufferHandleDataView::Tag::SHARED_BUFFER_HANDLE: {
        decltype(CallWithContext(Traits::shared_buffer_handle, input, custom_context))
            in_shared_buffer_handle = CallWithContext(Traits::shared_buffer_handle, input,
                                          custom_context);
        mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
            in_shared_buffer_handle, &result->data.f_shared_buffer_handle, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_shared_buffer_handle),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid shared_buffer_handle in VideoBufferHandle union");
        break;
      }
      case ::media::mojom::VideoBufferHandleDataView::Tag::MAILBOX_HANDLES: {
        decltype(CallWithContext(Traits::mailbox_handles, input, custom_context))
            in_mailbox_handles = CallWithContext(Traits::mailbox_handles, input,
                                          custom_context);
        typename decltype(result->data.f_mailbox_handles)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::media::mojom::MailboxBufferHandleSetDataView>(
            in_mailbox_handles, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null mailbox_handles in VideoBufferHandle union");
        result->data.f_mailbox_handles.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoBufferHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoBufferHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void VideoCaptureFormatDataView::GetFrameSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->frame_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VideoCaptureParamsDataView::GetRequestedFormatDataView(
    VideoCaptureFormatDataView* output) {
  auto pointer = data_->requested_format.Get();
  *output = VideoCaptureFormatDataView(pointer, context_);
}


inline void VideoFrameInfoDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetMetadataDataView(
    ::mojo_base::mojom::DictionaryValueDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::mojo_base::mojom::DictionaryValueDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameInfoDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}




inline void VideoCaptureDeviceDescriptorDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoCaptureDeviceDescriptorDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoCaptureDeviceDescriptorDataView::GetModelIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->model_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VideoCaptureDeviceDescriptorDataView::GetCameraCalibrationDataView(
    VideoCaptureDeviceDescriptorCameraCalibrationDataView* output) {
  auto pointer = data_->camera_calibration.Get();
  *output = VideoCaptureDeviceDescriptorCameraCalibrationDataView(pointer, context_);
}


inline void VideoCaptureDeviceInfoDataView::GetDescriptorDataView(
    VideoCaptureDeviceDescriptorDataView* output) {
  auto pointer = data_->descriptor.Get();
  *output = VideoCaptureDeviceDescriptorDataView(pointer, context_);
}
inline void VideoCaptureDeviceInfoDataView::GetSupportedFormatsDataView(
    mojo::ArrayDataView<VideoCaptureFormatDataView>* output) {
  auto pointer = data_->supported_formats.Get();
  *output = mojo::ArrayDataView<VideoCaptureFormatDataView>(pointer, context_);
}


inline void MailboxBufferHandleSetDataView::GetMailboxHolderDataView(
    mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = mojo::ArrayDataView<::gpu::mojom::MailboxHolderDataView>(pointer, context_);
}


inline void VideoBufferHandleDataView::GetMailboxHandlesDataView(
    MailboxBufferHandleSetDataView* output) {
  DCHECK(is_mailbox_handles());
  *output = MailboxBufferHandleSetDataView(data_->data.f_mailbox_handles.Get(), context_);
}


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_TYPES_MOJOM_SHARED_H_
