// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_SHARED_H_
#define CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_SHARED_H_

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
#include "chrome/services/printing/public/mojom/pdf_render_settings.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace printing {
namespace mojom {
class PdfRenderSettingsDataView;



}  // namespace mojom
}  // namespace printing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::printing::mojom::PdfRenderSettingsDataView> {
  using Data = ::printing::mojom::internal::PdfRenderSettings_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace printing {
namespace mojom {

enum class PdfRenderSettings_Mode : int32_t {
  NORMAL = 0,
  kMinValue = 0,
  kMaxValue = 0,
};

inline std::ostream& operator<<(std::ostream& os, PdfRenderSettings_Mode value) {
  switch(value) {
    case PdfRenderSettings_Mode::NORMAL:
      return os << "PdfRenderSettings_Mode::NORMAL";
    default:
      return os << "Unknown PdfRenderSettings_Mode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PdfRenderSettings_Mode value) {
  return internal::PdfRenderSettings_Mode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class PdfRenderSettingsDataView {
 public:
  PdfRenderSettingsDataView() {}

  PdfRenderSettingsDataView(
      internal::PdfRenderSettings_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAreaDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArea(UserType* output) {
    auto* pointer = data_->area.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetOffsetsDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOffsets(UserType* output) {
    auto* pointer = data_->offsets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetDpiDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDpi(UserType* output) {
    auto* pointer = data_->dpi.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool autorotate() const {
    return data_->autorotate;
  }
  bool use_color() const {
    return data_->use_color;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::printing::mojom::PdfRenderSettings_Mode>(
        data_value, output);
  }

  PdfRenderSettings_Mode mode() const {
    return static_cast<PdfRenderSettings_Mode>(data_->mode);
  }
 private:
  internal::PdfRenderSettings_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace printing

namespace std {

template <>
struct hash<::printing::mojom::PdfRenderSettings_Mode>
    : public mojo::internal::EnumHashImpl<::printing::mojom::PdfRenderSettings_Mode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::printing::mojom::PdfRenderSettings_Mode, ::printing::mojom::PdfRenderSettings_Mode> {
  static ::printing::mojom::PdfRenderSettings_Mode ToMojom(::printing::mojom::PdfRenderSettings_Mode input) { return input; }
  static bool FromMojom(::printing::mojom::PdfRenderSettings_Mode input, ::printing::mojom::PdfRenderSettings_Mode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::printing::mojom::PdfRenderSettings_Mode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::printing::mojom::PdfRenderSettings_Mode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::printing::mojom::PdfRenderSettings_Mode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::printing::mojom::PdfRenderSettingsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::printing::mojom::PdfRenderSettingsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::printing::mojom::internal::PdfRenderSettings_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::area, input, custom_context)) in_area = CallWithContext(Traits::area, input, custom_context);
    typename decltype((*output)->area)::BaseType::BufferWriter
        area_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_area, buffer, &area_writer, context);
    (*output)->area.Set(
        area_writer.is_null() ? nullptr : area_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->area.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null area in PdfRenderSettings struct");
    decltype(CallWithContext(Traits::offsets, input, custom_context)) in_offsets = CallWithContext(Traits::offsets, input, custom_context);
    typename decltype((*output)->offsets)::BaseType::BufferWriter
        offsets_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_offsets, buffer, &offsets_writer, context);
    (*output)->offsets.Set(
        offsets_writer.is_null() ? nullptr : offsets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->offsets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null offsets in PdfRenderSettings struct");
    decltype(CallWithContext(Traits::dpi, input, custom_context)) in_dpi = CallWithContext(Traits::dpi, input, custom_context);
    typename decltype((*output)->dpi)::BaseType::BufferWriter
        dpi_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_dpi, buffer, &dpi_writer, context);
    (*output)->dpi.Set(
        dpi_writer.is_null() ? nullptr : dpi_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dpi.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dpi in PdfRenderSettings struct");
    (*output)->autorotate = CallWithContext(Traits::autorotate, input, custom_context);
    (*output)->use_color = CallWithContext(Traits::use_color, input, custom_context);
    mojo::internal::Serialize<::printing::mojom::PdfRenderSettings_Mode>(
        CallWithContext(Traits::mode, input, custom_context), &(*output)->mode);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::printing::mojom::internal::PdfRenderSettings_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::printing::mojom::PdfRenderSettingsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace printing {
namespace mojom {

inline void PdfRenderSettingsDataView::GetAreaDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->area.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void PdfRenderSettingsDataView::GetOffsetsDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->offsets.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void PdfRenderSettingsDataView::GetDpiDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->dpi.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace printing

#endif  // CHROME_SERVICES_PRINTING_PUBLIC_MOJOM_PDF_RENDER_SETTINGS_MOJOM_SHARED_H_
