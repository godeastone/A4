// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_H_

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
#include "chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom-shared-internal.h"
#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace printing {
namespace mojom {
class PwgRasterSettingsDataView;



}  // namespace mojom
}  // namespace printing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::printing::mojom::PwgRasterSettingsDataView> {
  using Data = ::printing::mojom::internal::PwgRasterSettings_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace printing {
namespace mojom {

enum class PwgRasterSettings_TransformType : int32_t {
  TRANSFORM_NORMAL,
  TRANSFORM_ROTATE_180,
  TRANSFORM_FLIP_HORIZONTAL,
  TRANSFORM_FLIP_VERTICAL,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, PwgRasterSettings_TransformType value) {
  switch(value) {
    case PwgRasterSettings_TransformType::TRANSFORM_NORMAL:
      return os << "PwgRasterSettings_TransformType::TRANSFORM_NORMAL";
    case PwgRasterSettings_TransformType::TRANSFORM_ROTATE_180:
      return os << "PwgRasterSettings_TransformType::TRANSFORM_ROTATE_180";
    case PwgRasterSettings_TransformType::TRANSFORM_FLIP_HORIZONTAL:
      return os << "PwgRasterSettings_TransformType::TRANSFORM_FLIP_HORIZONTAL";
    case PwgRasterSettings_TransformType::TRANSFORM_FLIP_VERTICAL:
      return os << "PwgRasterSettings_TransformType::TRANSFORM_FLIP_VERTICAL";
    default:
      return os << "Unknown PwgRasterSettings_TransformType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PwgRasterSettings_TransformType value) {
  return internal::PwgRasterSettings_TransformType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PdfToPwgRasterConverterInterfaceBase {};

using PdfToPwgRasterConverterPtrDataView =
    mojo::InterfacePtrDataView<PdfToPwgRasterConverterInterfaceBase>;
using PdfToPwgRasterConverterRequestDataView =
    mojo::InterfaceRequestDataView<PdfToPwgRasterConverterInterfaceBase>;
using PdfToPwgRasterConverterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PdfToPwgRasterConverterInterfaceBase>;
using PdfToPwgRasterConverterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PdfToPwgRasterConverterInterfaceBase>;
class PwgRasterSettingsDataView {
 public:
  PwgRasterSettingsDataView() {}

  PwgRasterSettingsDataView(
      internal::PwgRasterSettings_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOddPageTransform(UserType* output) const {
    auto data_value = data_->odd_page_transform;
    return mojo::internal::Deserialize<::printing::mojom::PwgRasterSettings_TransformType>(
        data_value, output);
  }

  PwgRasterSettings_TransformType odd_page_transform() const {
    return static_cast<PwgRasterSettings_TransformType>(data_->odd_page_transform);
  }
  bool rotate_all_pages() const {
    return data_->rotate_all_pages;
  }
  bool reverse_page_order() const {
    return data_->reverse_page_order;
  }
  bool use_color() const {
    return data_->use_color;
  }
 private:
  internal::PwgRasterSettings_Data* data_ = nullptr;
};

class PdfToPwgRasterConverter_Convert_ParamsDataView {
 public:
  PdfToPwgRasterConverter_Convert_ParamsDataView() {}

  PdfToPwgRasterConverter_Convert_ParamsDataView(
      internal::PdfToPwgRasterConverter_Convert_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPdfRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPdfRegion(UserType* output) {
    auto* pointer = data_->pdf_region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
  inline void GetPdfSettingsDataView(
      ::printing::mojom::PdfRenderSettingsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPdfSettings(UserType* output) {
    auto* pointer = data_->pdf_settings.Get();
    return mojo::internal::Deserialize<::printing::mojom::PdfRenderSettingsDataView>(
        pointer, output, context_);
  }
  inline void GetPwgRasterSettingsDataView(
      PwgRasterSettingsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPwgRasterSettings(UserType* output) {
    auto* pointer = data_->pwg_raster_settings.Get();
    return mojo::internal::Deserialize<::printing::mojom::PwgRasterSettingsDataView>(
        pointer, output, context_);
  }
 private:
  internal::PdfToPwgRasterConverter_Convert_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PdfToPwgRasterConverter_Convert_ResponseParamsDataView {
 public:
  PdfToPwgRasterConverter_Convert_ResponseParamsDataView() {}

  PdfToPwgRasterConverter_Convert_ResponseParamsDataView(
      internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPwgRasterRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPwgRasterRegion(UserType* output) {
    auto* pointer = data_->pwg_raster_region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
  uint32_t page_count() const {
    return data_->page_count;
  }
 private:
  internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace printing

namespace std {

template <>
struct hash<::printing::mojom::PwgRasterSettings_TransformType>
    : public mojo::internal::EnumHashImpl<::printing::mojom::PwgRasterSettings_TransformType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::printing::mojom::PwgRasterSettings_TransformType, ::printing::mojom::PwgRasterSettings_TransformType> {
  static ::printing::mojom::PwgRasterSettings_TransformType ToMojom(::printing::mojom::PwgRasterSettings_TransformType input) { return input; }
  static bool FromMojom(::printing::mojom::PwgRasterSettings_TransformType input, ::printing::mojom::PwgRasterSettings_TransformType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::printing::mojom::PwgRasterSettings_TransformType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::printing::mojom::PwgRasterSettings_TransformType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::printing::mojom::PwgRasterSettings_TransformType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::printing::mojom::PwgRasterSettingsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::printing::mojom::PwgRasterSettingsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::printing::mojom::internal::PwgRasterSettings_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::printing::mojom::PwgRasterSettings_TransformType>(
        CallWithContext(Traits::odd_page_transform, input, custom_context), &(*output)->odd_page_transform);
    (*output)->rotate_all_pages = CallWithContext(Traits::rotate_all_pages, input, custom_context);
    (*output)->reverse_page_order = CallWithContext(Traits::reverse_page_order, input, custom_context);
    (*output)->use_color = CallWithContext(Traits::use_color, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::printing::mojom::internal::PwgRasterSettings_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::printing::mojom::PwgRasterSettingsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace printing {
namespace mojom {



inline void PdfToPwgRasterConverter_Convert_ParamsDataView::GetPdfRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->pdf_region.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}
inline void PdfToPwgRasterConverter_Convert_ParamsDataView::GetPdfSettingsDataView(
    ::printing::mojom::PdfRenderSettingsDataView* output) {
  auto pointer = data_->pdf_settings.Get();
  *output = ::printing::mojom::PdfRenderSettingsDataView(pointer, context_);
}
inline void PdfToPwgRasterConverter_Convert_ParamsDataView::GetPwgRasterSettingsDataView(
    PwgRasterSettingsDataView* output) {
  auto pointer = data_->pwg_raster_settings.Get();
  *output = PwgRasterSettingsDataView(pointer, context_);
}


inline void PdfToPwgRasterConverter_Convert_ResponseParamsDataView::GetPwgRasterRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->pwg_raster_region.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace printing

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_TO_PWG_RASTER_CONVERTER_MOJOM_SHARED_H_
