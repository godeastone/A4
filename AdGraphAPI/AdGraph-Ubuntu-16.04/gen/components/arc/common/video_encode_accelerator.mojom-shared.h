// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "components/arc/common/video_encode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/video_common.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {
class VideoEncodeProfileDataView;



}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::arc::mojom::VideoEncodeProfileDataView> {
  using Data = ::arc::mojom::internal::VideoEncodeProfile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {

enum class VideoPixelFormat : int32_t {
  PIXEL_FORMAT_UNKNOWN = 0,
  PIXEL_FORMAT_I420 = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, VideoPixelFormat value) {
  switch(value) {
    case VideoPixelFormat::PIXEL_FORMAT_UNKNOWN:
      return os << "VideoPixelFormat::PIXEL_FORMAT_UNKNOWN";
    case VideoPixelFormat::PIXEL_FORMAT_I420:
      return os << "VideoPixelFormat::PIXEL_FORMAT_I420";
    default:
      return os << "Unknown VideoPixelFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoPixelFormat value) {
  return internal::VideoPixelFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoEncodeAccelerator_StorageType : int32_t {
  SHARED_MEMORY,
  DMABUF,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, VideoEncodeAccelerator_StorageType value) {
  switch(value) {
    case VideoEncodeAccelerator_StorageType::SHARED_MEMORY:
      return os << "VideoEncodeAccelerator_StorageType::SHARED_MEMORY";
    case VideoEncodeAccelerator_StorageType::DMABUF:
      return os << "VideoEncodeAccelerator_StorageType::DMABUF";
    default:
      return os << "Unknown VideoEncodeAccelerator_StorageType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoEncodeAccelerator_StorageType value) {
  return internal::VideoEncodeAccelerator_StorageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoEncodeAccelerator_Error : int32_t {
  kIllegalStateError = 0,
  kInvalidArgumentError = 1,
  kPlatformFailureError = 2,
  kErrorMax = VideoEncodeAccelerator_Error::kPlatformFailureError,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, VideoEncodeAccelerator_Error value) {
  switch(value) {
    case VideoEncodeAccelerator_Error::kIllegalStateError:
      return os << "VideoEncodeAccelerator_Error::kIllegalStateError";
    case VideoEncodeAccelerator_Error::kInvalidArgumentError:
      return os << "VideoEncodeAccelerator_Error::kInvalidArgumentError";
    case VideoEncodeAccelerator_Error::kPlatformFailureError:
      return os << "VideoEncodeAccelerator_Error::{kPlatformFailureError, kErrorMax}";
    default:
      return os << "Unknown VideoEncodeAccelerator_Error value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoEncodeAccelerator_Error value) {
  return internal::VideoEncodeAccelerator_Error_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VideoEncodeAcceleratorInterfaceBase {};

using VideoEncodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
class VideoEncodeClientInterfaceBase {};

using VideoEncodeClientPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeClientInterfaceBase>;
using VideoEncodeClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeClientInterfaceBase>;
using VideoEncodeClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeClientInterfaceBase>;
using VideoEncodeClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeClientInterfaceBase>;
class VideoEncodeProfileDataView {
 public:
  VideoEncodeProfileDataView() {}

  VideoEncodeProfileDataView(
      internal::VideoEncodeProfile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::arc::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::arc::mojom::VideoCodecProfile profile() const {
    return static_cast<::arc::mojom::VideoCodecProfile>(data_->profile);
  }
  inline void GetMaxResolutionDataView(
      ::arc::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxResolution(UserType* output) {
    auto* pointer = data_->max_resolution.Get();
    return mojo::internal::Deserialize<::arc::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t max_framerate_numerator() const {
    return data_->max_framerate_numerator;
  }
  uint32_t max_framerate_denominator() const {
    return data_->max_framerate_denominator;
  }
 private:
  internal::VideoEncodeProfile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_GetSupportedProfiles_ParamsDataView {
 public:
  VideoEncodeAccelerator_GetSupportedProfiles_ParamsDataView() {}

  VideoEncodeAccelerator_GetSupportedProfiles_ParamsDataView(
      internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_GetSupportedProfiles_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParamsDataView() {}

  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProfilesDataView(
      mojo::ArrayDataView<VideoEncodeProfileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfiles(UserType* output) {
    auto* pointer = data_->profiles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::arc::mojom::VideoEncodeProfileDataView>>(
        pointer, output, context_);
  }
 private:
  internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Initialize_ParamsDataView {
 public:
  VideoEncodeAccelerator_Initialize_ParamsDataView() {}

  VideoEncodeAccelerator_Initialize_ParamsDataView(
      internal::VideoEncodeAccelerator_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputFormat(UserType* output) const {
    auto data_value = data_->input_format;
    return mojo::internal::Deserialize<::arc::mojom::VideoPixelFormat>(
        data_value, output);
  }

  VideoPixelFormat input_format() const {
    return static_cast<VideoPixelFormat>(data_->input_format);
  }
  inline void GetVisibleSizeDataView(
      ::arc::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVisibleSize(UserType* output) {
    auto* pointer = data_->visible_size.Get();
    return mojo::internal::Deserialize<::arc::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputStorage(UserType* output) const {
    auto data_value = data_->input_storage;
    return mojo::internal::Deserialize<::arc::mojom::VideoEncodeAccelerator_StorageType>(
        data_value, output);
  }

  VideoEncodeAccelerator_StorageType input_storage() const {
    return static_cast<VideoEncodeAccelerator_StorageType>(data_->input_storage);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputProfile(UserType* output) const {
    auto data_value = data_->output_profile;
    return mojo::internal::Deserialize<::arc::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::arc::mojom::VideoCodecProfile output_profile() const {
    return static_cast<::arc::mojom::VideoCodecProfile>(data_->output_profile);
  }
  uint32_t initial_bitrate() const {
    return data_->initial_bitrate;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoEncodeClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAccelerator_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Initialize_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView() {}

  VideoEncodeAccelerator_Initialize_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_Encode_ParamsDataView {
 public:
  VideoEncodeAccelerator_Encode_ParamsDataView() {}

  VideoEncodeAccelerator_Encode_ParamsDataView(
      internal::VideoEncodeAccelerator_Encode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeFrameFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->frame_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetPlanesDataView(
      mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlanes(UserType* output) {
    auto* pointer = data_->planes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>>(
        pointer, output, context_);
  }
  int64_t timestamp() const {
    return data_->timestamp;
  }
  bool force_keyframe() const {
    return data_->force_keyframe;
  }
 private:
  internal::VideoEncodeAccelerator_Encode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_Encode_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_Encode_ResponseParamsDataView() {}

  VideoEncodeAccelerator_Encode_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_UseBitstreamBuffer_ParamsDataView {
 public:
  VideoEncodeAccelerator_UseBitstreamBuffer_ParamsDataView() {}

  VideoEncodeAccelerator_UseBitstreamBuffer_ParamsDataView(
      internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeShmemFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->shmem_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t offset() const {
    return data_->offset;
  }
  uint32_t size() const {
    return data_->size;
  }
 private:
  internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParamsDataView() {}

  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t payload_size() const {
    return data_->payload_size;
  }
  bool key_frame() const {
    return data_->key_frame;
  }
  int64_t timestamp() const {
    return data_->timestamp;
  }
 private:
  internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView {
 public:
  VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView() {}

  VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView(
      internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  uint32_t framerate() const {
    return data_->framerate;
  }
 private:
  internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_Flush_ParamsDataView {
 public:
  VideoEncodeAccelerator_Flush_ParamsDataView() {}

  VideoEncodeAccelerator_Flush_ParamsDataView(
      internal::VideoEncodeAccelerator_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoEncodeAccelerator_Flush_Params_Data* data_ = nullptr;
};

class VideoEncodeAccelerator_Flush_ResponseParamsDataView {
 public:
  VideoEncodeAccelerator_Flush_ResponseParamsDataView() {}

  VideoEncodeAccelerator_Flush_ResponseParamsDataView(
      internal::VideoEncodeAccelerator_Flush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool flush_done() const {
    return data_->flush_done;
  }
 private:
  internal::VideoEncodeAccelerator_Flush_ResponseParams_Data* data_ = nullptr;
};

class VideoEncodeClient_RequireBitstreamBuffers_ParamsDataView {
 public:
  VideoEncodeClient_RequireBitstreamBuffers_ParamsDataView() {}

  VideoEncodeClient_RequireBitstreamBuffers_ParamsDataView(
      internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t input_count() const {
    return data_->input_count;
  }
  inline void GetInputCodedSizeDataView(
      ::arc::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputCodedSize(UserType* output) {
    auto* pointer = data_->input_coded_size.Get();
    return mojo::internal::Deserialize<::arc::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t output_buffer_size() const {
    return data_->output_buffer_size;
  }
 private:
  internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeClient_NotifyError_ParamsDataView {
 public:
  VideoEncodeClient_NotifyError_ParamsDataView() {}

  VideoEncodeClient_NotifyError_ParamsDataView(
      internal::VideoEncodeClient_NotifyError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::arc::mojom::VideoEncodeAccelerator_Error>(
        data_value, output);
  }

  VideoEncodeAccelerator_Error error() const {
    return static_cast<VideoEncodeAccelerator_Error>(data_->error);
  }
 private:
  internal::VideoEncodeClient_NotifyError_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

template <>
struct hash<::arc::mojom::VideoPixelFormat>
    : public mojo::internal::EnumHashImpl<::arc::mojom::VideoPixelFormat> {};

template <>
struct hash<::arc::mojom::VideoEncodeAccelerator_StorageType>
    : public mojo::internal::EnumHashImpl<::arc::mojom::VideoEncodeAccelerator_StorageType> {};

template <>
struct hash<::arc::mojom::VideoEncodeAccelerator_Error>
    : public mojo::internal::EnumHashImpl<::arc::mojom::VideoEncodeAccelerator_Error> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::arc::mojom::VideoPixelFormat, ::arc::mojom::VideoPixelFormat> {
  static ::arc::mojom::VideoPixelFormat ToMojom(::arc::mojom::VideoPixelFormat input) { return input; }
  static bool FromMojom(::arc::mojom::VideoPixelFormat input, ::arc::mojom::VideoPixelFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoPixelFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::VideoPixelFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::VideoPixelFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::arc::mojom::VideoEncodeAccelerator_StorageType, ::arc::mojom::VideoEncodeAccelerator_StorageType> {
  static ::arc::mojom::VideoEncodeAccelerator_StorageType ToMojom(::arc::mojom::VideoEncodeAccelerator_StorageType input) { return input; }
  static bool FromMojom(::arc::mojom::VideoEncodeAccelerator_StorageType input, ::arc::mojom::VideoEncodeAccelerator_StorageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoEncodeAccelerator_StorageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::VideoEncodeAccelerator_StorageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::VideoEncodeAccelerator_StorageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::arc::mojom::VideoEncodeAccelerator_Error, ::arc::mojom::VideoEncodeAccelerator_Error> {
  static ::arc::mojom::VideoEncodeAccelerator_Error ToMojom(::arc::mojom::VideoEncodeAccelerator_Error input) { return input; }
  static bool FromMojom(::arc::mojom::VideoEncodeAccelerator_Error input, ::arc::mojom::VideoEncodeAccelerator_Error* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoEncodeAccelerator_Error, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::VideoEncodeAccelerator_Error, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::VideoEncodeAccelerator_Error>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoEncodeProfileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::VideoEncodeProfileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::VideoEncodeProfile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::arc::mojom::VideoCodecProfile>(
        CallWithContext(Traits::profile, input, custom_context), &(*output)->profile);
    decltype(CallWithContext(Traits::max_resolution, input, custom_context)) in_max_resolution = CallWithContext(Traits::max_resolution, input, custom_context);
    typename decltype((*output)->max_resolution)::BaseType::BufferWriter
        max_resolution_writer;
    mojo::internal::Serialize<::arc::mojom::SizeDataView>(
        in_max_resolution, buffer, &max_resolution_writer, context);
    (*output)->max_resolution.Set(
        max_resolution_writer.is_null() ? nullptr : max_resolution_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->max_resolution.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null max_resolution in VideoEncodeProfile struct");
    (*output)->max_framerate_numerator = CallWithContext(Traits::max_framerate_numerator, input, custom_context);
    (*output)->max_framerate_denominator = CallWithContext(Traits::max_framerate_denominator, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::VideoEncodeProfile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::VideoEncodeProfileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace arc {
namespace mojom {

inline void VideoEncodeProfileDataView::GetMaxResolutionDataView(
    ::arc::mojom::SizeDataView* output) {
  auto pointer = data_->max_resolution.Get();
  *output = ::arc::mojom::SizeDataView(pointer, context_);
}




inline void VideoEncodeAccelerator_GetSupportedProfiles_ResponseParamsDataView::GetProfilesDataView(
    mojo::ArrayDataView<VideoEncodeProfileDataView>* output) {
  auto pointer = data_->profiles.Get();
  *output = mojo::ArrayDataView<VideoEncodeProfileDataView>(pointer, context_);
}


inline void VideoEncodeAccelerator_Initialize_ParamsDataView::GetVisibleSizeDataView(
    ::arc::mojom::SizeDataView* output) {
  auto pointer = data_->visible_size.Get();
  *output = ::arc::mojom::SizeDataView(pointer, context_);
}




inline void VideoEncodeAccelerator_Encode_ParamsDataView::GetPlanesDataView(
    mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>* output) {
  auto pointer = data_->planes.Get();
  *output = mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>(pointer, context_);
}














inline void VideoEncodeClient_RequireBitstreamBuffers_ParamsDataView::GetInputCodedSizeDataView(
    ::arc::mojom::SizeDataView* output) {
  auto pointer = data_->input_coded_size.Get();
  *output = ::arc::mojom::SizeDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
