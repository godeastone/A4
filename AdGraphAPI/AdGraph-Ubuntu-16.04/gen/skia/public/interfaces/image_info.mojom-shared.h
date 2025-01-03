// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_

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
#include "skia/public/interfaces/image_info.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace skia {
namespace mojom {
class ImageInfoDataView;



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::skia::mojom::ImageInfoDataView> {
  using Data = ::skia::mojom::internal::ImageInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {

enum class ColorType : int32_t {
  UNKNOWN,
  ALPHA_8,
  RGB_565,
  ARGB_4444,
  RGBA_8888,
  BGRA_8888,
  INDEX_8,
  GRAY_8,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, ColorType value) {
  switch(value) {
    case ColorType::UNKNOWN:
      return os << "ColorType::UNKNOWN";
    case ColorType::ALPHA_8:
      return os << "ColorType::ALPHA_8";
    case ColorType::RGB_565:
      return os << "ColorType::RGB_565";
    case ColorType::ARGB_4444:
      return os << "ColorType::ARGB_4444";
    case ColorType::RGBA_8888:
      return os << "ColorType::RGBA_8888";
    case ColorType::BGRA_8888:
      return os << "ColorType::BGRA_8888";
    case ColorType::INDEX_8:
      return os << "ColorType::INDEX_8";
    case ColorType::GRAY_8:
      return os << "ColorType::GRAY_8";
    default:
      return os << "Unknown ColorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ColorType value) {
  return internal::ColorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AlphaType : int32_t {
  UNKNOWN,
  ALPHA_TYPE_OPAQUE,
  PREMUL,
  UNPREMUL,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, AlphaType value) {
  switch(value) {
    case AlphaType::UNKNOWN:
      return os << "AlphaType::UNKNOWN";
    case AlphaType::ALPHA_TYPE_OPAQUE:
      return os << "AlphaType::ALPHA_TYPE_OPAQUE";
    case AlphaType::PREMUL:
      return os << "AlphaType::PREMUL";
    case AlphaType::UNPREMUL:
      return os << "AlphaType::UNPREMUL";
    default:
      return os << "Unknown AlphaType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AlphaType value) {
  return internal::AlphaType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ColorProfileType : int32_t {
  LINEAR,
  SRGB,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ColorProfileType value) {
  switch(value) {
    case ColorProfileType::LINEAR:
      return os << "ColorProfileType::LINEAR";
    case ColorProfileType::SRGB:
      return os << "ColorProfileType::SRGB";
    default:
      return os << "Unknown ColorProfileType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ColorProfileType value) {
  return internal::ColorProfileType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ImageInfoDataView {
 public:
  ImageInfoDataView() {}

  ImageInfoDataView(
      internal::ImageInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorType(UserType* output) const {
    auto data_value = data_->color_type;
    return mojo::internal::Deserialize<::skia::mojom::ColorType>(
        data_value, output);
  }

  ColorType color_type() const {
    return static_cast<ColorType>(data_->color_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAlphaType(UserType* output) const {
    auto data_value = data_->alpha_type;
    return mojo::internal::Deserialize<::skia::mojom::AlphaType>(
        data_value, output);
  }

  AlphaType alpha_type() const {
    return static_cast<AlphaType>(data_->alpha_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfileType(UserType* output) const {
    auto data_value = data_->profile_type;
    return mojo::internal::Deserialize<::skia::mojom::ColorProfileType>(
        data_value, output);
  }

  ColorProfileType profile_type() const {
    return static_cast<ColorProfileType>(data_->profile_type);
  }
  uint32_t width() const {
    return data_->width;
  }
  uint32_t height() const {
    return data_->height;
  }
 private:
  internal::ImageInfo_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace std {

template <>
struct hash<::skia::mojom::ColorType>
    : public mojo::internal::EnumHashImpl<::skia::mojom::ColorType> {};

template <>
struct hash<::skia::mojom::AlphaType>
    : public mojo::internal::EnumHashImpl<::skia::mojom::AlphaType> {};

template <>
struct hash<::skia::mojom::ColorProfileType>
    : public mojo::internal::EnumHashImpl<::skia::mojom::ColorProfileType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::skia::mojom::ColorType, ::skia::mojom::ColorType> {
  static ::skia::mojom::ColorType ToMojom(::skia::mojom::ColorType input) { return input; }
  static bool FromMojom(::skia::mojom::ColorType input, ::skia::mojom::ColorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ColorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::ColorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::ColorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::skia::mojom::AlphaType, ::skia::mojom::AlphaType> {
  static ::skia::mojom::AlphaType ToMojom(::skia::mojom::AlphaType input) { return input; }
  static bool FromMojom(::skia::mojom::AlphaType input, ::skia::mojom::AlphaType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::AlphaType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::AlphaType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::AlphaType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::skia::mojom::ColorProfileType, ::skia::mojom::ColorProfileType> {
  static ::skia::mojom::ColorProfileType ToMojom(::skia::mojom::ColorProfileType input) { return input; }
  static bool FromMojom(::skia::mojom::ColorProfileType input, ::skia::mojom::ColorProfileType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ColorProfileType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::skia::mojom::ColorProfileType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::skia::mojom::ColorProfileType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::ImageInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::ImageInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::ImageInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::skia::mojom::ColorType>(
        CallWithContext(Traits::color_type, input, custom_context), &(*output)->color_type);
    mojo::internal::Serialize<::skia::mojom::AlphaType>(
        CallWithContext(Traits::alpha_type, input, custom_context), &(*output)->alpha_type);
    mojo::internal::Serialize<::skia::mojom::ColorProfileType>(
        CallWithContext(Traits::profile_type, input, custom_context), &(*output)->profile_type);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    (*output)->height = CallWithContext(Traits::height, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::skia::mojom::internal::ImageInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::ImageInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {




}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_SHARED_H_
