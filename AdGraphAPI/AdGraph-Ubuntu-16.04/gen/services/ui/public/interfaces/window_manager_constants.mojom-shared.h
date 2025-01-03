// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared-internal.h"
#include "ui/display/mojo/display.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class FrameDecorationValuesDataView;

class WsDisplayDataView;

class WmViewportMetricsDataView;

class BlockingContainersDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::FrameDecorationValuesDataView> {
  using Data = ::ui::mojom::internal::FrameDecorationValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::WsDisplayDataView> {
  using Data = ::ui::mojom::internal::WsDisplay_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::WmViewportMetricsDataView> {
  using Data = ::ui::mojom::internal::WmViewportMetrics_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::BlockingContainersDataView> {
  using Data = ::ui::mojom::internal::BlockingContainers_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class WindowManagerErrorCode : int32_t {
  SUCCESS,
  ACCESS_DENIED,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, WindowManagerErrorCode value) {
  switch(value) {
    case WindowManagerErrorCode::SUCCESS:
      return os << "WindowManagerErrorCode::SUCCESS";
    case WindowManagerErrorCode::ACCESS_DENIED:
      return os << "WindowManagerErrorCode::ACCESS_DENIED";
    default:
      return os << "Unknown WindowManagerErrorCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WindowManagerErrorCode value) {
  return internal::WindowManagerErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ShowState : int32_t {
  DEFAULT,
  NORMAL,
  MINIMIZED,
  MAXIMIZED,
  INACTIVE,
  FULLSCREEN,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, ShowState value) {
  switch(value) {
    case ShowState::DEFAULT:
      return os << "ShowState::DEFAULT";
    case ShowState::NORMAL:
      return os << "ShowState::NORMAL";
    case ShowState::MINIMIZED:
      return os << "ShowState::MINIMIZED";
    case ShowState::MAXIMIZED:
      return os << "ShowState::MAXIMIZED";
    case ShowState::INACTIVE:
      return os << "ShowState::INACTIVE";
    case ShowState::FULLSCREEN:
      return os << "ShowState::FULLSCREEN";
    default:
      return os << "Unknown ShowState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ShowState value) {
  return internal::ShowState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class MoveLoopSource : int32_t {
  MOUSE,
  TOUCH,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, MoveLoopSource value) {
  switch(value) {
    case MoveLoopSource::MOUSE:
      return os << "MoveLoopSource::MOUSE";
    case MoveLoopSource::TOUCH:
      return os << "MoveLoopSource::TOUCH";
    default:
      return os << "Unknown MoveLoopSource value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MoveLoopSource value) {
  return internal::MoveLoopSource_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WindowType : int32_t {
  WINDOW,
  PANEL,
  WINDOW_FRAMELESS,
  CONTROL,
  POPUP,
  MENU,
  TOOLTIP,
  BUBBLE,
  DRAG,
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 9,
};

inline std::ostream& operator<<(std::ostream& os, WindowType value) {
  switch(value) {
    case WindowType::WINDOW:
      return os << "WindowType::WINDOW";
    case WindowType::PANEL:
      return os << "WindowType::PANEL";
    case WindowType::WINDOW_FRAMELESS:
      return os << "WindowType::WINDOW_FRAMELESS";
    case WindowType::CONTROL:
      return os << "WindowType::CONTROL";
    case WindowType::POPUP:
      return os << "WindowType::POPUP";
    case WindowType::MENU:
      return os << "WindowType::MENU";
    case WindowType::TOOLTIP:
      return os << "WindowType::TOOLTIP";
    case WindowType::BUBBLE:
      return os << "WindowType::BUBBLE";
    case WindowType::DRAG:
      return os << "WindowType::DRAG";
    case WindowType::UNKNOWN:
      return os << "WindowType::UNKNOWN";
    default:
      return os << "Unknown WindowType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WindowType value) {
  return internal::WindowType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FrameDecorationValuesDataView {
 public:
  FrameDecorationValuesDataView() {}

  FrameDecorationValuesDataView(
      internal::FrameDecorationValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNormalClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNormalClientAreaInsets(UserType* output) {
    auto* pointer = data_->normal_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  inline void GetMaximizedClientAreaInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaximizedClientAreaInsets(UserType* output) {
    auto* pointer = data_->maximized_client_area_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  uint32_t max_title_bar_button_width() const {
    return data_->max_title_bar_button_width;
  }
 private:
  internal::FrameDecorationValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WsDisplayDataView {
 public:
  WsDisplayDataView() {}

  WsDisplayDataView(
      internal::WsDisplay_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayDataView>(
        pointer, output, context_);
  }
  inline void GetFrameDecorationValuesDataView(
      FrameDecorationValuesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameDecorationValues(UserType* output) {
    auto* pointer = data_->frame_decoration_values.Get();
    return mojo::internal::Deserialize<::ui::mojom::FrameDecorationValuesDataView>(
        pointer, output, context_);
  }
 private:
  internal::WsDisplay_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WmViewportMetricsDataView {
 public:
  WmViewportMetricsDataView() {}

  WmViewportMetricsDataView(
      internal::WmViewportMetrics_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBoundsInPixelsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBoundsInPixels(UserType* output) {
    auto* pointer = data_->bounds_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  float ui_scale_factor() const {
    return data_->ui_scale_factor;
  }
 private:
  internal::WmViewportMetrics_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlockingContainersDataView {
 public:
  BlockingContainersDataView() {}

  BlockingContainersDataView(
      internal::BlockingContainers_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t system_modal_container_id() const {
    return data_->system_modal_container_id;
  }
  uint64_t min_container_id() const {
    return data_->min_container_id;
  }
 private:
  internal::BlockingContainers_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::WindowManagerErrorCode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowManagerErrorCode> {};

template <>
struct hash<::ui::mojom::ShowState>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ShowState> {};

template <>
struct hash<::ui::mojom::MoveLoopSource>
    : public mojo::internal::EnumHashImpl<::ui::mojom::MoveLoopSource> {};

template <>
struct hash<::ui::mojom::WindowType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::WindowManagerErrorCode, ::ui::mojom::WindowManagerErrorCode> {
  static ::ui::mojom::WindowManagerErrorCode ToMojom(::ui::mojom::WindowManagerErrorCode input) { return input; }
  static bool FromMojom(::ui::mojom::WindowManagerErrorCode input, ::ui::mojom::WindowManagerErrorCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowManagerErrorCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowManagerErrorCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowManagerErrorCode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ShowState, ::ui::mojom::ShowState> {
  static ::ui::mojom::ShowState ToMojom(::ui::mojom::ShowState input) { return input; }
  static bool FromMojom(::ui::mojom::ShowState input, ::ui::mojom::ShowState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ShowState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ShowState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ShowState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::MoveLoopSource, ::ui::mojom::MoveLoopSource> {
  static ::ui::mojom::MoveLoopSource ToMojom(::ui::mojom::MoveLoopSource input) { return input; }
  static bool FromMojom(::ui::mojom::MoveLoopSource input, ::ui::mojom::MoveLoopSource* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::MoveLoopSource, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::MoveLoopSource, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::MoveLoopSource>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::WindowType, ::ui::mojom::WindowType> {
  static ::ui::mojom::WindowType ToMojom(::ui::mojom::WindowType input) { return input; }
  static bool FromMojom(::ui::mojom::WindowType input, ::ui::mojom::WindowType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::FrameDecorationValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::FrameDecorationValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::FrameDecorationValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::normal_client_area_insets, input, custom_context)) in_normal_client_area_insets = CallWithContext(Traits::normal_client_area_insets, input, custom_context);
    typename decltype((*output)->normal_client_area_insets)::BaseType::BufferWriter
        normal_client_area_insets_writer;
    mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
        in_normal_client_area_insets, buffer, &normal_client_area_insets_writer, context);
    (*output)->normal_client_area_insets.Set(
        normal_client_area_insets_writer.is_null() ? nullptr : normal_client_area_insets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->normal_client_area_insets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null normal_client_area_insets in FrameDecorationValues struct");
    decltype(CallWithContext(Traits::maximized_client_area_insets, input, custom_context)) in_maximized_client_area_insets = CallWithContext(Traits::maximized_client_area_insets, input, custom_context);
    typename decltype((*output)->maximized_client_area_insets)::BaseType::BufferWriter
        maximized_client_area_insets_writer;
    mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
        in_maximized_client_area_insets, buffer, &maximized_client_area_insets_writer, context);
    (*output)->maximized_client_area_insets.Set(
        maximized_client_area_insets_writer.is_null() ? nullptr : maximized_client_area_insets_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->maximized_client_area_insets.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null maximized_client_area_insets in FrameDecorationValues struct");
    (*output)->max_title_bar_button_width = CallWithContext(Traits::max_title_bar_button_width, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::FrameDecorationValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::FrameDecorationValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WsDisplayDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WsDisplayDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WsDisplay_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::display, input, custom_context)) in_display = CallWithContext(Traits::display, input, custom_context);
    typename decltype((*output)->display)::BaseType::BufferWriter
        display_writer;
    mojo::internal::Serialize<::display::mojom::DisplayDataView>(
        in_display, buffer, &display_writer, context);
    (*output)->display.Set(
        display_writer.is_null() ? nullptr : display_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display in WsDisplay struct");
    decltype(CallWithContext(Traits::frame_decoration_values, input, custom_context)) in_frame_decoration_values = CallWithContext(Traits::frame_decoration_values, input, custom_context);
    typename decltype((*output)->frame_decoration_values)::BaseType::BufferWriter
        frame_decoration_values_writer;
    mojo::internal::Serialize<::ui::mojom::FrameDecorationValuesDataView>(
        in_frame_decoration_values, buffer, &frame_decoration_values_writer, context);
    (*output)->frame_decoration_values.Set(
        frame_decoration_values_writer.is_null() ? nullptr : frame_decoration_values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_decoration_values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_decoration_values in WsDisplay struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WsDisplay_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WsDisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WmViewportMetricsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WmViewportMetricsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WmViewportMetrics_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::bounds_in_pixels, input, custom_context)) in_bounds_in_pixels = CallWithContext(Traits::bounds_in_pixels, input, custom_context);
    typename decltype((*output)->bounds_in_pixels)::BaseType::BufferWriter
        bounds_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_bounds_in_pixels, buffer, &bounds_in_pixels_writer, context);
    (*output)->bounds_in_pixels.Set(
        bounds_in_pixels_writer.is_null() ? nullptr : bounds_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounds_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounds_in_pixels in WmViewportMetrics struct");
    (*output)->device_scale_factor = CallWithContext(Traits::device_scale_factor, input, custom_context);
    (*output)->ui_scale_factor = CallWithContext(Traits::ui_scale_factor, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WmViewportMetrics_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WmViewportMetricsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::BlockingContainersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::BlockingContainersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::BlockingContainers_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->system_modal_container_id = CallWithContext(Traits::system_modal_container_id, input, custom_context);
    (*output)->min_container_id = CallWithContext(Traits::min_container_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::BlockingContainers_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::BlockingContainersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void FrameDecorationValuesDataView::GetNormalClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->normal_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void FrameDecorationValuesDataView::GetMaximizedClientAreaInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->maximized_client_area_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}


inline void WsDisplayDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WsDisplayDataView::GetFrameDecorationValuesDataView(
    FrameDecorationValuesDataView* output) {
  auto pointer = data_->frame_decoration_values.Get();
  *output = FrameDecorationValuesDataView(pointer, context_);
}


inline void WmViewportMetricsDataView::GetBoundsInPixelsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds_in_pixels.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_CONSTANTS_MOJOM_SHARED_H_
