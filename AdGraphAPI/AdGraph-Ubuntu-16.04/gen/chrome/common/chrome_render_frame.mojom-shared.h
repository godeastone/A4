// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_H_
#define CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_H_

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
#include "chrome/common/chrome_render_frame.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/web/window_features.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace chrome {
namespace mojom {
using WebApplicationInfoDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {

enum class ImageFormat : int32_t {
  JPEG,
  PNG,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, ImageFormat value) {
  switch(value) {
    case ImageFormat::JPEG:
      return os << "ImageFormat::JPEG";
    case ImageFormat::PNG:
      return os << "ImageFormat::PNG";
    default:
      return os << "Unknown ImageFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImageFormat value) {
  return internal::ImageFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
using BrowserControlsState = mojo::NativeEnum;
// Interface base classes. They are used for type safety check.
class ChromeRenderFrameInterfaceBase {};

using ChromeRenderFramePtrDataView =
    mojo::InterfacePtrDataView<ChromeRenderFrameInterfaceBase>;
using ChromeRenderFrameRequestDataView =
    mojo::InterfaceRequestDataView<ChromeRenderFrameInterfaceBase>;
using ChromeRenderFrameAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChromeRenderFrameInterfaceBase>;
using ChromeRenderFrameAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChromeRenderFrameInterfaceBase>;
class ChromeRenderFrame_SetWindowFeatures_ParamsDataView {
 public:
  ChromeRenderFrame_SetWindowFeatures_ParamsDataView() {}

  ChromeRenderFrame_SetWindowFeatures_ParamsDataView(
      internal::ChromeRenderFrame_SetWindowFeatures_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWindowFeaturesDataView(
      ::blink::mojom::WindowFeaturesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowFeatures(UserType* output) {
    auto* pointer = data_->window_features.Get();
    return mojo::internal::Deserialize<::blink::mojom::WindowFeaturesDataView>(
        pointer, output, context_);
  }
 private:
  internal::ChromeRenderFrame_SetWindowFeatures_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView {
 public:
  ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView() {}

  ChromeRenderFrame_RequestReloadImageForContextNode_ParamsDataView(
      internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChromeRenderFrame_RequestReloadImageForContextNode_Params_Data* data_ = nullptr;
};

class ChromeRenderFrame_RequestThumbnailForContextNode_ParamsDataView {
 public:
  ChromeRenderFrame_RequestThumbnailForContextNode_ParamsDataView() {}

  ChromeRenderFrame_RequestThumbnailForContextNode_ParamsDataView(
      internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t thumbnail_min_area_pixels() const {
    return data_->thumbnail_min_area_pixels;
  }
  inline void GetThumbnailMaxSizePixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThumbnailMaxSizePixels(UserType* output) {
    auto* pointer = data_->thumbnail_max_size_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageFormat(UserType* output) const {
    auto data_value = data_->image_format;
    return mojo::internal::Deserialize<::chrome::mojom::ImageFormat>(
        data_value, output);
  }

  ImageFormat image_format() const {
    return static_cast<ImageFormat>(data_->image_format);
  }
 private:
  internal::ChromeRenderFrame_RequestThumbnailForContextNode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView {
 public:
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView() {}

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView(
      internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetThumbnailDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThumbnailData(UserType* output) {
    auto* pointer = data_->thumbnail_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetOriginalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOriginalSize(UserType* output) {
    auto* pointer = data_->original_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView {
 public:
  ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView() {}

  ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView(
      internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetJavascriptDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadJavascript(UserType* output) {
    auto* pointer = data_->javascript.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ChromeRenderFrame_ExecuteWebUIJavaScript_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ChromeRenderFrame_SetClientSidePhishingDetection_ParamsDataView {
 public:
  ChromeRenderFrame_SetClientSidePhishingDetection_ParamsDataView() {}

  ChromeRenderFrame_SetClientSidePhishingDetection_ParamsDataView(
      internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable_phishing_detection() const {
    return data_->enable_phishing_detection;
  }
 private:
  internal::ChromeRenderFrame_SetClientSidePhishingDetection_Params_Data* data_ = nullptr;
};

class ChromeRenderFrame_GetWebApplicationInfo_ParamsDataView {
 public:
  ChromeRenderFrame_GetWebApplicationInfo_ParamsDataView() {}

  ChromeRenderFrame_GetWebApplicationInfo_ParamsDataView(
      internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChromeRenderFrame_GetWebApplicationInfo_Params_Data* data_ = nullptr;
};

class ChromeRenderFrame_GetWebApplicationInfo_ResponseParamsDataView {
 public:
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParamsDataView() {}

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParamsDataView(
      internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWebApplicationInfoDataView(
      WebApplicationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebApplicationInfo(UserType* output) {
    auto* pointer = data_->web_application_info.Get();
    return mojo::internal::Deserialize<::chrome::mojom::WebApplicationInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ChromeRenderFrame_GetWebApplicationInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

template <>
struct hash<::chrome::mojom::ImageFormat>
    : public mojo::internal::EnumHashImpl<::chrome::mojom::ImageFormat> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::chrome::mojom::ImageFormat, ::chrome::mojom::ImageFormat> {
  static ::chrome::mojom::ImageFormat ToMojom(::chrome::mojom::ImageFormat input) { return input; }
  static bool FromMojom(::chrome::mojom::ImageFormat input, ::chrome::mojom::ImageFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::ImageFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::chrome::mojom::ImageFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::chrome::mojom::ImageFormat>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void ChromeRenderFrame_SetWindowFeatures_ParamsDataView::GetWindowFeaturesDataView(
    ::blink::mojom::WindowFeaturesDataView* output) {
  auto pointer = data_->window_features.Get();
  *output = ::blink::mojom::WindowFeaturesDataView(pointer, context_);
}




inline void ChromeRenderFrame_RequestThumbnailForContextNode_ParamsDataView::GetThumbnailMaxSizePixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->thumbnail_max_size_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView::GetThumbnailDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->thumbnail_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParamsDataView::GetOriginalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->original_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void ChromeRenderFrame_ExecuteWebUIJavaScript_ParamsDataView::GetJavascriptDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->javascript.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






inline void ChromeRenderFrame_GetWebApplicationInfo_ResponseParamsDataView::GetWebApplicationInfoDataView(
    WebApplicationInfoDataView* output) {
  auto pointer = data_->web_application_info.Get();
  *output = WebApplicationInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CHROME_RENDER_FRAME_MOJOM_SHARED_H_
