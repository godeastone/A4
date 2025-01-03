// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_H_

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
#include "services/data_decoder/public/mojom/image_decoder.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace data_decoder {
namespace mojom {
class AnimationFrameDataView;



}  // namespace mojom
}  // namespace data_decoder

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::data_decoder::mojom::AnimationFrameDataView> {
  using Data = ::data_decoder::mojom::internal::AnimationFrame_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace data_decoder {
namespace mojom {

enum class ImageCodec : int32_t {
  DEFAULT,
  ROBUST_JPEG,
  ROBUST_PNG,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, ImageCodec value) {
  switch(value) {
    case ImageCodec::DEFAULT:
      return os << "ImageCodec::DEFAULT";
    case ImageCodec::ROBUST_JPEG:
      return os << "ImageCodec::ROBUST_JPEG";
    case ImageCodec::ROBUST_PNG:
      return os << "ImageCodec::ROBUST_PNG";
    default:
      return os << "Unknown ImageCodec value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImageCodec value) {
  return internal::ImageCodec_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ImageDecoderInterfaceBase {};

using ImageDecoderPtrDataView =
    mojo::InterfacePtrDataView<ImageDecoderInterfaceBase>;
using ImageDecoderRequestDataView =
    mojo::InterfaceRequestDataView<ImageDecoderInterfaceBase>;
using ImageDecoderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImageDecoderInterfaceBase>;
using ImageDecoderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImageDecoderInterfaceBase>;
class AnimationFrameDataView {
 public:
  AnimationFrameDataView() {}

  AnimationFrameDataView(
      internal::AnimationFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitmapDataView(
      ::skia::mojom::InlineBitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::skia::mojom::InlineBitmapDataView>(
        pointer, output, context_);
  }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::AnimationFrame_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageDecoder_DecodeImage_ParamsDataView {
 public:
  ImageDecoder_DecodeImage_ParamsDataView() {}

  ImageDecoder_DecodeImage_ParamsDataView(
      internal::ImageDecoder_DecodeImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncodedData(UserType* output) {
    auto* pointer = data_->encoded_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::data_decoder::mojom::ImageCodec>(
        data_value, output);
  }

  ImageCodec codec() const {
    return static_cast<ImageCodec>(data_->codec);
  }
  bool shrink_to_fit() const {
    return data_->shrink_to_fit;
  }
  int64_t max_size_in_bytes() const {
    return data_->max_size_in_bytes;
  }
  inline void GetDesiredImageFrameSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDesiredImageFrameSize(UserType* output) {
    auto* pointer = data_->desired_image_frame_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImageDecoder_DecodeImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageDecoder_DecodeImage_ResponseParamsDataView {
 public:
  ImageDecoder_DecodeImage_ResponseParamsDataView() {}

  ImageDecoder_DecodeImage_ResponseParamsDataView(
      internal::ImageDecoder_DecodeImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDecodedImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDecodedImage(UserType* output) {
    auto* pointer = data_->decoded_image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImageDecoder_DecodeImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageDecoder_DecodeAnimation_ParamsDataView {
 public:
  ImageDecoder_DecodeAnimation_ParamsDataView() {}

  ImageDecoder_DecodeAnimation_ParamsDataView(
      internal::ImageDecoder_DecodeAnimation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncodedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncodedData(UserType* output) {
    auto* pointer = data_->encoded_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  bool shrink_to_fit() const {
    return data_->shrink_to_fit;
  }
  int64_t max_size_in_bytes() const {
    return data_->max_size_in_bytes;
  }
 private:
  internal::ImageDecoder_DecodeAnimation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageDecoder_DecodeAnimation_ResponseParamsDataView {
 public:
  ImageDecoder_DecodeAnimation_ResponseParamsDataView() {}

  ImageDecoder_DecodeAnimation_ResponseParamsDataView(
      internal::ImageDecoder_DecodeAnimation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDecodedImageDataView(
      mojo::ArrayDataView<AnimationFrameDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDecodedImage(UserType* output) {
    auto* pointer = data_->decoded_image.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::data_decoder::mojom::AnimationFrameDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ImageDecoder_DecodeAnimation_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace data_decoder

namespace std {

template <>
struct hash<::data_decoder::mojom::ImageCodec>
    : public mojo::internal::EnumHashImpl<::data_decoder::mojom::ImageCodec> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::data_decoder::mojom::ImageCodec, ::data_decoder::mojom::ImageCodec> {
  static ::data_decoder::mojom::ImageCodec ToMojom(::data_decoder::mojom::ImageCodec input) { return input; }
  static bool FromMojom(::data_decoder::mojom::ImageCodec input, ::data_decoder::mojom::ImageCodec* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::data_decoder::mojom::ImageCodec, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::data_decoder::mojom::ImageCodec, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::data_decoder::mojom::ImageCodec>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::data_decoder::mojom::AnimationFrameDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::data_decoder::mojom::AnimationFrameDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::data_decoder::mojom::internal::AnimationFrame_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::bitmap, input, custom_context)) in_bitmap = CallWithContext(Traits::bitmap, input, custom_context);
    typename decltype((*output)->bitmap)::BaseType::BufferWriter
        bitmap_writer;
    mojo::internal::Serialize<::skia::mojom::InlineBitmapDataView>(
        in_bitmap, buffer, &bitmap_writer, context);
    (*output)->bitmap.Set(
        bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bitmap.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bitmap in AnimationFrame struct");
    decltype(CallWithContext(Traits::duration, input, custom_context)) in_duration = CallWithContext(Traits::duration, input, custom_context);
    typename decltype((*output)->duration)::BaseType::BufferWriter
        duration_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_duration, buffer, &duration_writer, context);
    (*output)->duration.Set(
        duration_writer.is_null() ? nullptr : duration_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->duration.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null duration in AnimationFrame struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::data_decoder::mojom::internal::AnimationFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::data_decoder::mojom::AnimationFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace data_decoder {
namespace mojom {

inline void AnimationFrameDataView::GetBitmapDataView(
    ::skia::mojom::InlineBitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::skia::mojom::InlineBitmapDataView(pointer, context_);
}
inline void AnimationFrameDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ImageDecoder_DecodeImage_ParamsDataView::GetEncodedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->encoded_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void ImageDecoder_DecodeImage_ParamsDataView::GetDesiredImageFrameSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->desired_image_frame_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void ImageDecoder_DecodeImage_ResponseParamsDataView::GetDecodedImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->decoded_image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void ImageDecoder_DecodeAnimation_ParamsDataView::GetEncodedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->encoded_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ImageDecoder_DecodeAnimation_ResponseParamsDataView::GetDecodedImageDataView(
    mojo::ArrayDataView<AnimationFrameDataView>* output) {
  auto pointer = data_->decoded_image.Get();
  *output = mojo::ArrayDataView<AnimationFrameDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace data_decoder

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_IMAGE_DECODER_MOJOM_SHARED_H_
