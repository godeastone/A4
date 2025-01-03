// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_H_

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
#include "components/arc/common/video_decode_accelerator.mojom-shared-internal.h"
#include "components/arc/common/gfx.mojom-shared.h"
#include "components/arc/common/video_common.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {
class BitstreamBufferDataView;

class PictureDataView;

class PictureBufferFormatDataView;

class VideoDecodeAcceleratorConfigDataView;



}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::arc::mojom::BitstreamBufferDataView> {
  using Data = ::arc::mojom::internal::BitstreamBuffer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::arc::mojom::PictureDataView> {
  using Data = ::arc::mojom::internal::Picture_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::arc::mojom::PictureBufferFormatDataView> {
  using Data = ::arc::mojom::internal::PictureBufferFormat_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::arc::mojom::VideoDecodeAcceleratorConfigDataView> {
  using Data = ::arc::mojom::internal::VideoDecodeAcceleratorConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {

enum class VideoDecodeAccelerator_Result : int32_t {
  SUCCESS = 0,
  ILLEGAL_STATE = 1,
  INVALID_ARGUMENT = 2,
  UNREADABLE_INPUT = 3,
  PLATFORM_FAILURE = 4,
  INSUFFICIENT_RESOURCES = 5,
  CANCELLED = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

inline std::ostream& operator<<(std::ostream& os, VideoDecodeAccelerator_Result value) {
  switch(value) {
    case VideoDecodeAccelerator_Result::SUCCESS:
      return os << "VideoDecodeAccelerator_Result::SUCCESS";
    case VideoDecodeAccelerator_Result::ILLEGAL_STATE:
      return os << "VideoDecodeAccelerator_Result::ILLEGAL_STATE";
    case VideoDecodeAccelerator_Result::INVALID_ARGUMENT:
      return os << "VideoDecodeAccelerator_Result::INVALID_ARGUMENT";
    case VideoDecodeAccelerator_Result::UNREADABLE_INPUT:
      return os << "VideoDecodeAccelerator_Result::UNREADABLE_INPUT";
    case VideoDecodeAccelerator_Result::PLATFORM_FAILURE:
      return os << "VideoDecodeAccelerator_Result::PLATFORM_FAILURE";
    case VideoDecodeAccelerator_Result::INSUFFICIENT_RESOURCES:
      return os << "VideoDecodeAccelerator_Result::INSUFFICIENT_RESOURCES";
    case VideoDecodeAccelerator_Result::CANCELLED:
      return os << "VideoDecodeAccelerator_Result::CANCELLED";
    default:
      return os << "Unknown VideoDecodeAccelerator_Result value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoDecodeAccelerator_Result value) {
  return internal::VideoDecodeAccelerator_Result_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VideoDecodeAcceleratorInterfaceBase {};

using VideoDecodeAcceleratorPtrDataView =
    mojo::InterfacePtrDataView<VideoDecodeAcceleratorInterfaceBase>;
using VideoDecodeAcceleratorRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecodeAcceleratorInterfaceBase>;
using VideoDecodeAcceleratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecodeAcceleratorInterfaceBase>;
using VideoDecodeAcceleratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecodeAcceleratorInterfaceBase>;
class VideoDecodeClientInterfaceBase {};

using VideoDecodeClientPtrDataView =
    mojo::InterfacePtrDataView<VideoDecodeClientInterfaceBase>;
using VideoDecodeClientRequestDataView =
    mojo::InterfaceRequestDataView<VideoDecodeClientInterfaceBase>;
using VideoDecodeClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VideoDecodeClientInterfaceBase>;
using VideoDecodeClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VideoDecodeClientInterfaceBase>;
class BitstreamBufferDataView {
 public:
  BitstreamBufferDataView() {}

  BitstreamBufferDataView(
      internal::BitstreamBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_id() const {
    return data_->bitstream_id;
  }
  mojo::ScopedHandle TakeHandleFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handle_fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t offset() const {
    return data_->offset;
  }
  uint32_t bytes_used() const {
    return data_->bytes_used;
  }
 private:
  internal::BitstreamBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureDataView {
 public:
  PictureDataView() {}

  PictureDataView(
      internal::Picture_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t picture_buffer_id() const {
    return data_->picture_buffer_id;
  }
  int32_t bitstream_id() const {
    return data_->bitstream_id;
  }
  inline void GetCropRectDataView(
      ::arc::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCropRect(UserType* output) {
    auto* pointer = data_->crop_rect.Get();
    return mojo::internal::Deserialize<::arc::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::Picture_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureBufferFormatDataView {
 public:
  PictureBufferFormatDataView() {}

  PictureBufferFormatDataView(
      internal::PictureBufferFormat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t min_num_buffers() const {
    return data_->min_num_buffers;
  }
  inline void GetCodedSizeDataView(
      ::arc::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodedSize(UserType* output) {
    auto* pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::arc::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::PictureBufferFormat_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAcceleratorConfigDataView {
 public:
  VideoDecodeAcceleratorConfigDataView() {}

  VideoDecodeAcceleratorConfigDataView(
      internal::VideoDecodeAcceleratorConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

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
  bool secure_mode() const {
    return data_->secure_mode;
  }
 private:
  internal::VideoDecodeAcceleratorConfig_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Initialize_ParamsDataView {
 public:
  VideoDecodeAccelerator_Initialize_ParamsDataView() {}

  VideoDecodeAccelerator_Initialize_ParamsDataView(
      internal::VideoDecodeAccelerator_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      VideoDecodeAcceleratorConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::arc::mojom::VideoDecodeAcceleratorConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::arc::mojom::VideoDecodeClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoDecodeAccelerator_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAccelerator_Initialize_ResponseParamsDataView {
 public:
  VideoDecodeAccelerator_Initialize_ResponseParamsDataView() {}

  VideoDecodeAccelerator_Initialize_ResponseParamsDataView(
      internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::arc::mojom::VideoDecodeAccelerator_Result>(
        data_value, output);
  }

  VideoDecodeAccelerator_Result result() const {
    return static_cast<VideoDecodeAccelerator_Result>(data_->result);
  }
 private:
  internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Decode_ParamsDataView {
 public:
  VideoDecodeAccelerator_Decode_ParamsDataView() {}

  VideoDecodeAccelerator_Decode_ParamsDataView(
      internal::VideoDecodeAccelerator_Decode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitstreamBufferDataView(
      BitstreamBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitstreamBuffer(UserType* output) {
    auto* pointer = data_->bitstream_buffer.Get();
    return mojo::internal::Deserialize<::arc::mojom::BitstreamBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodeAccelerator_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAccelerator_AssignPictureBuffers_ParamsDataView {
 public:
  VideoDecodeAccelerator_AssignPictureBuffers_ParamsDataView() {}

  VideoDecodeAccelerator_AssignPictureBuffers_ParamsDataView(
      internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t count() const {
    return data_->count;
  }
 private:
  internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_ImportBufferForPicture_ParamsDataView {
 public:
  VideoDecodeAccelerator_ImportBufferForPicture_ParamsDataView() {}

  VideoDecodeAccelerator_ImportBufferForPicture_ParamsDataView(
      internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t picture_buffer_id() const {
    return data_->picture_buffer_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::arc::mojom::HalPixelFormat>(
        data_value, output);
  }

  ::arc::mojom::HalPixelFormat format() const {
    return static_cast<::arc::mojom::HalPixelFormat>(data_->format);
  }
  mojo::ScopedHandle TakeHandleFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handle_fd, &result, context_);
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
 private:
  internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeAccelerator_ReusePictureBuffer_ParamsDataView {
 public:
  VideoDecodeAccelerator_ReusePictureBuffer_ParamsDataView() {}

  VideoDecodeAccelerator_ReusePictureBuffer_ParamsDataView(
      internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t picture_buffer_id() const {
    return data_->picture_buffer_id;
  }
 private:
  internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Reset_ParamsDataView {
 public:
  VideoDecodeAccelerator_Reset_ParamsDataView() {}

  VideoDecodeAccelerator_Reset_ParamsDataView(
      internal::VideoDecodeAccelerator_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecodeAccelerator_Reset_Params_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Reset_ResponseParamsDataView {
 public:
  VideoDecodeAccelerator_Reset_ResponseParamsDataView() {}

  VideoDecodeAccelerator_Reset_ResponseParamsDataView(
      internal::VideoDecodeAccelerator_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::arc::mojom::VideoDecodeAccelerator_Result>(
        data_value, output);
  }

  VideoDecodeAccelerator_Result result() const {
    return static_cast<VideoDecodeAccelerator_Result>(data_->result);
  }
 private:
  internal::VideoDecodeAccelerator_Reset_ResponseParams_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Flush_ParamsDataView {
 public:
  VideoDecodeAccelerator_Flush_ParamsDataView() {}

  VideoDecodeAccelerator_Flush_ParamsDataView(
      internal::VideoDecodeAccelerator_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecodeAccelerator_Flush_Params_Data* data_ = nullptr;
};

class VideoDecodeAccelerator_Flush_ResponseParamsDataView {
 public:
  VideoDecodeAccelerator_Flush_ResponseParamsDataView() {}

  VideoDecodeAccelerator_Flush_ResponseParamsDataView(
      internal::VideoDecodeAccelerator_Flush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::arc::mojom::VideoDecodeAccelerator_Result>(
        data_value, output);
  }

  VideoDecodeAccelerator_Result result() const {
    return static_cast<VideoDecodeAccelerator_Result>(data_->result);
  }
 private:
  internal::VideoDecodeAccelerator_Flush_ResponseParams_Data* data_ = nullptr;
};

class VideoDecodeClient_ProvidePictureBuffers_ParamsDataView {
 public:
  VideoDecodeClient_ProvidePictureBuffers_ParamsDataView() {}

  VideoDecodeClient_ProvidePictureBuffers_ParamsDataView(
      internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFormatDataView(
      PictureBufferFormatDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) {
    auto* pointer = data_->format.Get();
    return mojo::internal::Deserialize<::arc::mojom::PictureBufferFormatDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeClient_PictureReady_ParamsDataView {
 public:
  VideoDecodeClient_PictureReady_ParamsDataView() {}

  VideoDecodeClient_PictureReady_ParamsDataView(
      internal::VideoDecodeClient_PictureReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPictureDataView(
      PictureDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPicture(UserType* output) {
    auto* pointer = data_->picture.Get();
    return mojo::internal::Deserialize<::arc::mojom::PictureDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodeClient_PictureReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeClient_NotifyEndOfBitstreamBuffer_ParamsDataView {
 public:
  VideoDecodeClient_NotifyEndOfBitstreamBuffer_ParamsDataView() {}

  VideoDecodeClient_NotifyEndOfBitstreamBuffer_ParamsDataView(
      internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t bitstream_id() const {
    return data_->bitstream_id;
  }
 private:
  internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data* data_ = nullptr;
};

class VideoDecodeClient_NotifyError_ParamsDataView {
 public:
  VideoDecodeClient_NotifyError_ParamsDataView() {}

  VideoDecodeClient_NotifyError_ParamsDataView(
      internal::VideoDecodeClient_NotifyError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::arc::mojom::VideoDecodeAccelerator_Result>(
        data_value, output);
  }

  VideoDecodeAccelerator_Result error() const {
    return static_cast<VideoDecodeAccelerator_Result>(data_->error);
  }
 private:
  internal::VideoDecodeClient_NotifyError_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

template <>
struct hash<::arc::mojom::VideoDecodeAccelerator_Result>
    : public mojo::internal::EnumHashImpl<::arc::mojom::VideoDecodeAccelerator_Result> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::arc::mojom::VideoDecodeAccelerator_Result, ::arc::mojom::VideoDecodeAccelerator_Result> {
  static ::arc::mojom::VideoDecodeAccelerator_Result ToMojom(::arc::mojom::VideoDecodeAccelerator_Result input) { return input; }
  static bool FromMojom(::arc::mojom::VideoDecodeAccelerator_Result input, ::arc::mojom::VideoDecodeAccelerator_Result* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoDecodeAccelerator_Result, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::VideoDecodeAccelerator_Result, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::VideoDecodeAccelerator_Result>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::BitstreamBufferDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::BitstreamBufferDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::BitstreamBuffer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->bitstream_id = CallWithContext(Traits::bitstream_id, input, custom_context);
    decltype(CallWithContext(Traits::handle_fd, input, custom_context)) in_handle_fd = CallWithContext(Traits::handle_fd, input, custom_context);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_handle_fd, &(*output)->handle_fd, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->handle_fd),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid handle_fd in BitstreamBuffer struct");
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    (*output)->bytes_used = CallWithContext(Traits::bytes_used, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::BitstreamBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::BitstreamBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::PictureDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::PictureDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::Picture_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->picture_buffer_id = CallWithContext(Traits::picture_buffer_id, input, custom_context);
    (*output)->bitstream_id = CallWithContext(Traits::bitstream_id, input, custom_context);
    decltype(CallWithContext(Traits::crop_rect, input, custom_context)) in_crop_rect = CallWithContext(Traits::crop_rect, input, custom_context);
    typename decltype((*output)->crop_rect)::BaseType::BufferWriter
        crop_rect_writer;
    mojo::internal::Serialize<::arc::mojom::RectDataView>(
        in_crop_rect, buffer, &crop_rect_writer, context);
    (*output)->crop_rect.Set(
        crop_rect_writer.is_null() ? nullptr : crop_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->crop_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null crop_rect in Picture struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::Picture_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::PictureDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::PictureBufferFormatDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::PictureBufferFormatDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::PictureBufferFormat_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->min_num_buffers = CallWithContext(Traits::min_num_buffers, input, custom_context);
    decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
    typename decltype((*output)->coded_size)::BaseType::BufferWriter
        coded_size_writer;
    mojo::internal::Serialize<::arc::mojom::SizeDataView>(
        in_coded_size, buffer, &coded_size_writer, context);
    (*output)->coded_size.Set(
        coded_size_writer.is_null() ? nullptr : coded_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->coded_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null coded_size in PictureBufferFormat struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::PictureBufferFormat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::PictureBufferFormatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoDecodeAcceleratorConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::VideoDecodeAcceleratorConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::VideoDecodeAcceleratorConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::arc::mojom::VideoCodecProfile>(
        CallWithContext(Traits::profile, input, custom_context), &(*output)->profile);
    (*output)->secure_mode = CallWithContext(Traits::secure_mode, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::VideoDecodeAcceleratorConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::VideoDecodeAcceleratorConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace arc {
namespace mojom {



inline void PictureDataView::GetCropRectDataView(
    ::arc::mojom::RectDataView* output) {
  auto pointer = data_->crop_rect.Get();
  *output = ::arc::mojom::RectDataView(pointer, context_);
}


inline void PictureBufferFormatDataView::GetCodedSizeDataView(
    ::arc::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::arc::mojom::SizeDataView(pointer, context_);
}




inline void VideoDecodeAccelerator_Initialize_ParamsDataView::GetConfigDataView(
    VideoDecodeAcceleratorConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = VideoDecodeAcceleratorConfigDataView(pointer, context_);
}




inline void VideoDecodeAccelerator_Decode_ParamsDataView::GetBitstreamBufferDataView(
    BitstreamBufferDataView* output) {
  auto pointer = data_->bitstream_buffer.Get();
  *output = BitstreamBufferDataView(pointer, context_);
}




inline void VideoDecodeAccelerator_ImportBufferForPicture_ParamsDataView::GetPlanesDataView(
    mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>* output) {
  auto pointer = data_->planes.Get();
  *output = mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>(pointer, context_);
}












inline void VideoDecodeClient_ProvidePictureBuffers_ParamsDataView::GetFormatDataView(
    PictureBufferFormatDataView* output) {
  auto pointer = data_->format.Get();
  *output = PictureBufferFormatDataView(pointer, context_);
}


inline void VideoDecodeClient_PictureReady_ParamsDataView::GetPictureDataView(
    PictureDataView* output) {
  auto pointer = data_->picture.Get();
  *output = PictureDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_H_
