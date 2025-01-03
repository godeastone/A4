// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/cursor/cursor.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class CursorDataDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::CursorDataDataView> {
  using Data = ::ui::mojom::internal::CursorData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class CursorType : int32_t {
  kNull = 0,
  kPointer,
  kCross,
  kHand,
  kIBeam,
  kWait,
  kHelp,
  kEastResize,
  kNorthResize,
  kNorthEastResize,
  kNorthWestResize,
  kSouthResize,
  kSouthEastResize,
  kSouthWestResize,
  kWestResize,
  kNorthSouthResize,
  kEastWestResize,
  kNorthEastSouthWestResize,
  kNorthWestSouthEastResize,
  kColumnResize,
  kRowResize,
  kMiddlePanning,
  kEastPanning,
  kNorthPanning,
  kNorthEastPanning,
  kNorthWestPanning,
  kSouthPanning,
  kSouthEastPanning,
  kSouthWestPanning,
  kWestPanning,
  kMove,
  kVerticalText,
  kCell,
  kContextMenu,
  kAlias,
  kProgress,
  kNoDrop,
  kCopy,
  kNone,
  kNotAllowed,
  kZoomIn,
  kZoomOut,
  kGrab,
  kGrabbing,
  kCustom,
  kMinValue = 0,
  kMaxValue = 44,
};

inline std::ostream& operator<<(std::ostream& os, CursorType value) {
  switch(value) {
    case CursorType::kNull:
      return os << "CursorType::kNull";
    case CursorType::kPointer:
      return os << "CursorType::kPointer";
    case CursorType::kCross:
      return os << "CursorType::kCross";
    case CursorType::kHand:
      return os << "CursorType::kHand";
    case CursorType::kIBeam:
      return os << "CursorType::kIBeam";
    case CursorType::kWait:
      return os << "CursorType::kWait";
    case CursorType::kHelp:
      return os << "CursorType::kHelp";
    case CursorType::kEastResize:
      return os << "CursorType::kEastResize";
    case CursorType::kNorthResize:
      return os << "CursorType::kNorthResize";
    case CursorType::kNorthEastResize:
      return os << "CursorType::kNorthEastResize";
    case CursorType::kNorthWestResize:
      return os << "CursorType::kNorthWestResize";
    case CursorType::kSouthResize:
      return os << "CursorType::kSouthResize";
    case CursorType::kSouthEastResize:
      return os << "CursorType::kSouthEastResize";
    case CursorType::kSouthWestResize:
      return os << "CursorType::kSouthWestResize";
    case CursorType::kWestResize:
      return os << "CursorType::kWestResize";
    case CursorType::kNorthSouthResize:
      return os << "CursorType::kNorthSouthResize";
    case CursorType::kEastWestResize:
      return os << "CursorType::kEastWestResize";
    case CursorType::kNorthEastSouthWestResize:
      return os << "CursorType::kNorthEastSouthWestResize";
    case CursorType::kNorthWestSouthEastResize:
      return os << "CursorType::kNorthWestSouthEastResize";
    case CursorType::kColumnResize:
      return os << "CursorType::kColumnResize";
    case CursorType::kRowResize:
      return os << "CursorType::kRowResize";
    case CursorType::kMiddlePanning:
      return os << "CursorType::kMiddlePanning";
    case CursorType::kEastPanning:
      return os << "CursorType::kEastPanning";
    case CursorType::kNorthPanning:
      return os << "CursorType::kNorthPanning";
    case CursorType::kNorthEastPanning:
      return os << "CursorType::kNorthEastPanning";
    case CursorType::kNorthWestPanning:
      return os << "CursorType::kNorthWestPanning";
    case CursorType::kSouthPanning:
      return os << "CursorType::kSouthPanning";
    case CursorType::kSouthEastPanning:
      return os << "CursorType::kSouthEastPanning";
    case CursorType::kSouthWestPanning:
      return os << "CursorType::kSouthWestPanning";
    case CursorType::kWestPanning:
      return os << "CursorType::kWestPanning";
    case CursorType::kMove:
      return os << "CursorType::kMove";
    case CursorType::kVerticalText:
      return os << "CursorType::kVerticalText";
    case CursorType::kCell:
      return os << "CursorType::kCell";
    case CursorType::kContextMenu:
      return os << "CursorType::kContextMenu";
    case CursorType::kAlias:
      return os << "CursorType::kAlias";
    case CursorType::kProgress:
      return os << "CursorType::kProgress";
    case CursorType::kNoDrop:
      return os << "CursorType::kNoDrop";
    case CursorType::kCopy:
      return os << "CursorType::kCopy";
    case CursorType::kNone:
      return os << "CursorType::kNone";
    case CursorType::kNotAllowed:
      return os << "CursorType::kNotAllowed";
    case CursorType::kZoomIn:
      return os << "CursorType::kZoomIn";
    case CursorType::kZoomOut:
      return os << "CursorType::kZoomOut";
    case CursorType::kGrab:
      return os << "CursorType::kGrab";
    case CursorType::kGrabbing:
      return os << "CursorType::kGrabbing";
    case CursorType::kCustom:
      return os << "CursorType::kCustom";
    default:
      return os << "Unknown CursorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CursorType value) {
  return internal::CursorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CursorSize : int32_t {
  kNormal,
  kLarge,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, CursorSize value) {
  switch(value) {
    case CursorSize::kNormal:
      return os << "CursorSize::kNormal";
    case CursorSize::kLarge:
      return os << "CursorSize::kLarge";
    default:
      return os << "Unknown CursorSize value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CursorSize value) {
  return internal::CursorSize_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class CursorDataDataView {
 public:
  CursorDataDataView() {}

  CursorDataDataView(
      internal::CursorData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursorType(UserType* output) const {
    auto data_value = data_->cursor_type;
    return mojo::internal::Deserialize<::ui::mojom::CursorType>(
        data_value, output);
  }

  CursorType cursor_type() const {
    return static_cast<CursorType>(data_->cursor_type);
  }
  inline void GetFrameDelayDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameDelay(UserType* output) {
    auto* pointer = data_->frame_delay.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetHotspotInPixelsDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHotspotInPixels(UserType* output) {
    auto* pointer = data_->hotspot_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetCursorFramesDataView(
      mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursorFrames(UserType* output) {
    auto* pointer = data_->cursor_frames.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        pointer, output, context_);
  }
  float scale_factor() const {
    return data_->scale_factor;
  }
 private:
  internal::CursorData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::CursorType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CursorType> {};

template <>
struct hash<::ui::mojom::CursorSize>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CursorSize> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::CursorType, ::ui::mojom::CursorType> {
  static ::ui::mojom::CursorType ToMojom(::ui::mojom::CursorType input) { return input; }
  static bool FromMojom(::ui::mojom::CursorType input, ::ui::mojom::CursorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CursorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CursorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::CursorSize, ::ui::mojom::CursorSize> {
  static ::ui::mojom::CursorSize ToMojom(::ui::mojom::CursorSize input) { return input; }
  static bool FromMojom(::ui::mojom::CursorSize input, ::ui::mojom::CursorSize* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorSize, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CursorSize, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CursorSize>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CursorDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::CursorData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::CursorType>(
        CallWithContext(Traits::cursor_type, input, custom_context), &(*output)->cursor_type);
    decltype(CallWithContext(Traits::frame_delay, input, custom_context)) in_frame_delay = CallWithContext(Traits::frame_delay, input, custom_context);
    typename decltype((*output)->frame_delay)::BaseType::BufferWriter
        frame_delay_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_frame_delay, buffer, &frame_delay_writer, context);
    (*output)->frame_delay.Set(
        frame_delay_writer.is_null() ? nullptr : frame_delay_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_delay.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_delay in CursorData struct");
    decltype(CallWithContext(Traits::hotspot_in_pixels, input, custom_context)) in_hotspot_in_pixels = CallWithContext(Traits::hotspot_in_pixels, input, custom_context);
    typename decltype((*output)->hotspot_in_pixels)::BaseType::BufferWriter
        hotspot_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_hotspot_in_pixels, buffer, &hotspot_in_pixels_writer, context);
    (*output)->hotspot_in_pixels.Set(
        hotspot_in_pixels_writer.is_null() ? nullptr : hotspot_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hotspot_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hotspot_in_pixels in CursorData struct");
    decltype(CallWithContext(Traits::cursor_frames, input, custom_context)) in_cursor_frames = CallWithContext(Traits::cursor_frames, input, custom_context);
    typename decltype((*output)->cursor_frames)::BaseType::BufferWriter
        cursor_frames_writer;
    const mojo::internal::ContainerValidateParams cursor_frames_validate_params(
        0, true, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        in_cursor_frames, buffer, &cursor_frames_writer, &cursor_frames_validate_params,
        context);
    (*output)->cursor_frames.Set(
        cursor_frames_writer.is_null() ? nullptr : cursor_frames_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cursor_frames.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cursor_frames in CursorData struct");
    (*output)->scale_factor = CallWithContext(Traits::scale_factor, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::CursorData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CursorDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void CursorDataDataView::GetFrameDelayDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->frame_delay.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void CursorDataDataView::GetHotspotInPixelsDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->hotspot_in_pixels.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void CursorDataDataView::GetCursorFramesDataView(
    mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output) {
  auto pointer = data_->cursor_frames.Get();
  *output = mojo::ArrayDataView<::skia::mojom::BitmapDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CURSOR_CURSOR_MOJOM_SHARED_H_
