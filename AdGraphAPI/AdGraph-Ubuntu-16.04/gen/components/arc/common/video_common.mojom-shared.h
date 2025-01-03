// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_SHARED_H_
#define COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_SHARED_H_

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
#include "components/arc/common/video_common.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace arc {
namespace mojom {
class VideoFramePlaneDataView;

class SizeDataView;



}  // namespace mojom
}  // namespace arc

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::arc::mojom::VideoFramePlaneDataView> {
  using Data = ::arc::mojom::internal::VideoFramePlane_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::arc::mojom::SizeDataView> {
  using Data = ::arc::mojom::internal::Size_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace arc {
namespace mojom {

enum class VideoCodecProfile : int32_t {
  VIDEO_CODEC_PROFILE_UNKNOWN = -1,
  VIDEO_CODEC_PROFILE_MIN = VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN,
  H264PROFILE_MIN = 0,
  H264PROFILE_BASELINE = VideoCodecProfile::H264PROFILE_MIN,
  H264PROFILE_MAIN = 1,
  H264PROFILE_EXTENDED = 2,
  H264PROFILE_HIGH = 3,
  H264PROFILE_HIGH10PROFILE = 4,
  H264PROFILE_HIGH422PROFILE = 5,
  H264PROFILE_HIGH444PREDICTIVEPROFILE = 6,
  H264PROFILE_SCALABLEBASELINE = 7,
  H264PROFILE_SCALABLEHIGH = 8,
  H264PROFILE_STEREOHIGH = 9,
  H264PROFILE_MULTIVIEWHIGH = 10,
  H264PROFILE_MAX = VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH,
  VP8PROFILE_MIN = 11,
  VP8PROFILE_ANY = VideoCodecProfile::VP8PROFILE_MIN,
  VP8PROFILE_MAX = VideoCodecProfile::VP8PROFILE_ANY,
  VP9PROFILE_MIN = 12,
  VP9PROFILE_PROFILE0 = VideoCodecProfile::VP9PROFILE_MIN,
  VP9PROFILE_PROFILE1 = 13,
  VP9PROFILE_PROFILE2 = 14,
  VP9PROFILE_PROFILE3 = 15,
  VP9PROFILE_MAX = VideoCodecProfile::VP9PROFILE_PROFILE3,
  HEVCPROFILE_MIN = 16,
  HEVCPROFILE_MAIN = VideoCodecProfile::HEVCPROFILE_MIN,
  HEVCPROFILE_MAIN10 = 17,
  HEVCPROFILE_MAIN_STILL_PICTURE = 18,
  HEVCPROFILE_MAX = VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE,
  DOLBYVISION_MIN = 19,
  DOLBYVISION_PROFILE0 = VideoCodecProfile::DOLBYVISION_MIN,
  DOLBYVISION_PROFILE4 = 20,
  DOLBYVISION_PROFILE5 = 21,
  DOLBYVISION_PROFILE7 = 22,
  DOLBYVISION_MAX = VideoCodecProfile::DOLBYVISION_PROFILE7,
  THEORAPROFILE_MIN = 23,
  THEORAPROFILE_ANY = VideoCodecProfile::THEORAPROFILE_MIN,
  THEORAPROFILE_MAX = VideoCodecProfile::THEORAPROFILE_ANY,
  AV1PROFILE_MIN = 24,
  AV1PROFILE_PROFILE0 = VideoCodecProfile::AV1PROFILE_MIN,
  AV1PROFILE_MAX = VideoCodecProfile::AV1PROFILE_PROFILE0,
  VIDEO_CODEC_PROFILE_MAX = VideoCodecProfile::AV1PROFILE_PROFILE0,
  kMinValue = -1,
  kMaxValue = 24,
};

inline std::ostream& operator<<(std::ostream& os, VideoCodecProfile value) {
  switch(value) {
    case VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN:
      return os << "VideoCodecProfile::{VIDEO_CODEC_PROFILE_UNKNOWN, VIDEO_CODEC_PROFILE_MIN}";
    case VideoCodecProfile::H264PROFILE_MIN:
      return os << "VideoCodecProfile::{H264PROFILE_MIN, H264PROFILE_BASELINE}";
    case VideoCodecProfile::H264PROFILE_MAIN:
      return os << "VideoCodecProfile::H264PROFILE_MAIN";
    case VideoCodecProfile::H264PROFILE_EXTENDED:
      return os << "VideoCodecProfile::H264PROFILE_EXTENDED";
    case VideoCodecProfile::H264PROFILE_HIGH:
      return os << "VideoCodecProfile::H264PROFILE_HIGH";
    case VideoCodecProfile::H264PROFILE_HIGH10PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH10PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH422PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH422PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE";
    case VideoCodecProfile::H264PROFILE_SCALABLEBASELINE:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEBASELINE";
    case VideoCodecProfile::H264PROFILE_SCALABLEHIGH:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEHIGH";
    case VideoCodecProfile::H264PROFILE_STEREOHIGH:
      return os << "VideoCodecProfile::H264PROFILE_STEREOHIGH";
    case VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH:
      return os << "VideoCodecProfile::{H264PROFILE_MULTIVIEWHIGH, H264PROFILE_MAX}";
    case VideoCodecProfile::VP8PROFILE_MIN:
      return os << "VideoCodecProfile::{VP8PROFILE_MIN, VP8PROFILE_ANY, VP8PROFILE_MAX}";
    case VideoCodecProfile::VP9PROFILE_MIN:
      return os << "VideoCodecProfile::{VP9PROFILE_MIN, VP9PROFILE_PROFILE0}";
    case VideoCodecProfile::VP9PROFILE_PROFILE1:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE1";
    case VideoCodecProfile::VP9PROFILE_PROFILE2:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE2";
    case VideoCodecProfile::VP9PROFILE_PROFILE3:
      return os << "VideoCodecProfile::{VP9PROFILE_PROFILE3, VP9PROFILE_MAX}";
    case VideoCodecProfile::HEVCPROFILE_MIN:
      return os << "VideoCodecProfile::{HEVCPROFILE_MIN, HEVCPROFILE_MAIN}";
    case VideoCodecProfile::HEVCPROFILE_MAIN10:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN10";
    case VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE:
      return os << "VideoCodecProfile::{HEVCPROFILE_MAIN_STILL_PICTURE, HEVCPROFILE_MAX}";
    case VideoCodecProfile::DOLBYVISION_MIN:
      return os << "VideoCodecProfile::{DOLBYVISION_MIN, DOLBYVISION_PROFILE0}";
    case VideoCodecProfile::DOLBYVISION_PROFILE4:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE4";
    case VideoCodecProfile::DOLBYVISION_PROFILE5:
      return os << "VideoCodecProfile::DOLBYVISION_PROFILE5";
    case VideoCodecProfile::DOLBYVISION_PROFILE7:
      return os << "VideoCodecProfile::{DOLBYVISION_PROFILE7, DOLBYVISION_MAX}";
    case VideoCodecProfile::THEORAPROFILE_MIN:
      return os << "VideoCodecProfile::{THEORAPROFILE_MIN, THEORAPROFILE_ANY, THEORAPROFILE_MAX}";
    case VideoCodecProfile::AV1PROFILE_MIN:
      return os << "VideoCodecProfile::{AV1PROFILE_MIN, AV1PROFILE_PROFILE0, AV1PROFILE_MAX, VIDEO_CODEC_PROFILE_MAX}";
    default:
      return os << "Unknown VideoCodecProfile value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCodecProfile value) {
  return internal::VideoCodecProfile_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class HalPixelFormat : int32_t {
  HAL_PIXEL_FORMAT_BGRA_8888 = 5,
  HAL_PIXEL_FORMAT_YCbCr_420_888 = 0x23,
  HAL_PIXEL_FORMAT_YV12 = 0x32315659,
  HAL_PIXEL_FORMAT_NV12 = 0x3231564e,
  kMinValue = 5,
  kMaxValue = 842094169,
};

inline std::ostream& operator<<(std::ostream& os, HalPixelFormat value) {
  switch(value) {
    case HalPixelFormat::HAL_PIXEL_FORMAT_BGRA_8888:
      return os << "HalPixelFormat::HAL_PIXEL_FORMAT_BGRA_8888";
    case HalPixelFormat::HAL_PIXEL_FORMAT_YCbCr_420_888:
      return os << "HalPixelFormat::HAL_PIXEL_FORMAT_YCbCr_420_888";
    case HalPixelFormat::HAL_PIXEL_FORMAT_NV12:
      return os << "HalPixelFormat::HAL_PIXEL_FORMAT_NV12";
    case HalPixelFormat::HAL_PIXEL_FORMAT_YV12:
      return os << "HalPixelFormat::HAL_PIXEL_FORMAT_YV12";
    default:
      return os << "Unknown HalPixelFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(HalPixelFormat value) {
  return internal::HalPixelFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class VideoFramePlaneDataView {
 public:
  VideoFramePlaneDataView() {}

  VideoFramePlaneDataView(
      internal::VideoFramePlane_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t offset() const {
    return data_->offset;
  }
  int32_t stride() const {
    return data_->stride;
  }
 private:
  internal::VideoFramePlane_Data* data_ = nullptr;
};

class SizeDataView {
 public:
  SizeDataView() {}

  SizeDataView(
      internal::Size_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Size_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace arc

namespace std {

template <>
struct hash<::arc::mojom::VideoCodecProfile>
    : public mojo::internal::EnumHashImpl<::arc::mojom::VideoCodecProfile> {};

template <>
struct hash<::arc::mojom::HalPixelFormat>
    : public mojo::internal::EnumHashImpl<::arc::mojom::HalPixelFormat> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::arc::mojom::VideoCodecProfile, ::arc::mojom::VideoCodecProfile> {
  static ::arc::mojom::VideoCodecProfile ToMojom(::arc::mojom::VideoCodecProfile input) { return input; }
  static bool FromMojom(::arc::mojom::VideoCodecProfile input, ::arc::mojom::VideoCodecProfile* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoCodecProfile, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::VideoCodecProfile, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::VideoCodecProfile>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::arc::mojom::HalPixelFormat, ::arc::mojom::HalPixelFormat> {
  static ::arc::mojom::HalPixelFormat ToMojom(::arc::mojom::HalPixelFormat input) { return input; }
  static bool FromMojom(::arc::mojom::HalPixelFormat input, ::arc::mojom::HalPixelFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::HalPixelFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::arc::mojom::HalPixelFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::arc::mojom::HalPixelFormat>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::VideoFramePlaneDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::VideoFramePlaneDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::VideoFramePlane_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->offset = CallWithContext(Traits::offset, input, custom_context);
    (*output)->stride = CallWithContext(Traits::stride, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::VideoFramePlane_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::VideoFramePlaneDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::arc::mojom::SizeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::arc::mojom::SizeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::arc::mojom::internal::Size_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    (*output)->height = CallWithContext(Traits::height, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::arc::mojom::internal::Size_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::arc::mojom::SizeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace arc {
namespace mojom {






}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_COMMON_MOJOM_SHARED_H_
