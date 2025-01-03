// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {

enum class VideoEncodeAccelerator_Error : int32_t {
  ILLEGAL_STATE,
  INVALID_ARGUMENT,
  PLATFORM_FAILURE,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, VideoEncodeAccelerator_Error value) {
  switch(value) {
    case VideoEncodeAccelerator_Error::ILLEGAL_STATE:
      return os << "VideoEncodeAccelerator_Error::ILLEGAL_STATE";
    case VideoEncodeAccelerator_Error::INVALID_ARGUMENT:
      return os << "VideoEncodeAccelerator_Error::INVALID_ARGUMENT";
    case VideoEncodeAccelerator_Error::PLATFORM_FAILURE:
      return os << "VideoEncodeAccelerator_Error::PLATFORM_FAILURE";
    default:
      return os << "Unknown VideoEncodeAccelerator_Error value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoEncodeAccelerator_Error value) {
  return internal::VideoEncodeAccelerator_Error_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VideoEncodeAcceleratorProviderInterfaceBase {};

using VideoEncodeAcceleratorProviderPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
using VideoEncodeAcceleratorProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorProviderInterfaceBase>;
class VideoEncodeAcceleratorInterfaceBase {};

using VideoEncodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorInterfaceBase>;
using VideoEncodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorInterfaceBase>;
class VideoEncodeAcceleratorClientInterfaceBase {};

using VideoEncodeAcceleratorClientPtrDataView =
    mojo::InterfacePtrDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoEncodeAcceleratorClientInterfaceBase>;
using VideoEncodeAcceleratorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoEncodeAcceleratorClientInterfaceBase>;
class VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView {
 public:
  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView() {}

  VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView(
      internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* data_ = nullptr;
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
    return mojo::internal::Deserialize<::media::mojom::VideoPixelFormat>(
        data_value, output);
  }

  ::media::mojom::VideoPixelFormat input_format() const {
    return static_cast<::media::mojom::VideoPixelFormat>(data_->input_format);
  }
  inline void GetInputVisibleSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputVisibleSize(UserType* output) {
    auto* pointer = data_->input_visible_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputProfile(UserType* output) const {
    auto data_value = data_->output_profile;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::media::mojom::VideoCodecProfile output_profile() const {
    return static_cast<::media::mojom::VideoCodecProfile>(data_->output_profile);
  }
  uint32_t initial_bitrate() const {
    return data_->initial_bitrate;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
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
  bool result() const {
    return data_->result;
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
  inline void GetFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataView>(
        pointer, output, context_);
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

class VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView {
 public:
  VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView() {}

  VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView(
      internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_buffer_id() const {
    return data_->bitstream_buffer_id;
  }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
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

class VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView() {}

  VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t input_count() const {
    return data_->input_count;
  }
  inline void GetInputCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputCodedSize(UserType* output) {
    auto* pointer = data_->input_coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  uint32_t output_buffer_size() const {
    return data_->output_buffer_size;
  }
 private:
  internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView() {}

  VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_buffer_id() const {
    return data_->bitstream_buffer_id;
  }
  uint32_t payload_size() const {
    return data_->payload_size;
  }
  bool key_frame() const {
    return data_->key_frame;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoEncodeAcceleratorClient_NotifyError_ParamsDataView {
 public:
  VideoEncodeAcceleratorClient_NotifyError_ParamsDataView() {}

  VideoEncodeAcceleratorClient_NotifyError_ParamsDataView(
      internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::media::mojom::VideoEncodeAccelerator_Error>(
        data_value, output);
  }

  VideoEncodeAccelerator_Error error() const {
    return static_cast<VideoEncodeAccelerator_Error>(data_->error);
  }
 private:
  internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::VideoEncodeAccelerator_Error>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoEncodeAccelerator_Error> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::VideoEncodeAccelerator_Error, ::media::mojom::VideoEncodeAccelerator_Error> {
  static ::media::mojom::VideoEncodeAccelerator_Error ToMojom(::media::mojom::VideoEncodeAccelerator_Error input) { return input; }
  static bool FromMojom(::media::mojom::VideoEncodeAccelerator_Error input, ::media::mojom::VideoEncodeAccelerator_Error* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoEncodeAccelerator_Error, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoEncodeAccelerator_Error, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoEncodeAccelerator_Error>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {



inline void VideoEncodeAccelerator_Initialize_ParamsDataView::GetInputVisibleSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->input_visible_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




inline void VideoEncodeAccelerator_Encode_ParamsDataView::GetFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}








inline void VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView::GetInputCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->input_coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_H_
