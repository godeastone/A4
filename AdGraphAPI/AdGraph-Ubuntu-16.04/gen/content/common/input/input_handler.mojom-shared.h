// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_H_
#define CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_H_

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
#include "content/common/input/input_handler.mojom-shared-internal.h"
#include "content/common/input/synchronous_compositor.mojom-shared.h"
#include "content/common/native_types.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/ui/public/interfaces/ime/ime.mojom-shared.h"
#include "third_party/blink/public/web/selection_menu_behavior.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/range/mojo/range.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class KeyDataDataView;

class PointerDataDataView;

class WheelDataDataView;

class MouseDataDataView;

class ScrollUpdateDataView;

class ScrollDataDataView;

class PinchDataDataView;

class FlingDataDataView;

class TapDataDataView;

class GestureDataDataView;

class TouchPointDataView;

class TouchDataDataView;

class EventDataView;

class TouchActionOptionalDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::KeyDataDataView> {
  using Data = ::content::mojom::internal::KeyData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::PointerDataDataView> {
  using Data = ::content::mojom::internal::PointerData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::WheelDataDataView> {
  using Data = ::content::mojom::internal::WheelData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::MouseDataDataView> {
  using Data = ::content::mojom::internal::MouseData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ScrollUpdateDataView> {
  using Data = ::content::mojom::internal::ScrollUpdate_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ScrollDataDataView> {
  using Data = ::content::mojom::internal::ScrollData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::PinchDataDataView> {
  using Data = ::content::mojom::internal::PinchData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::FlingDataDataView> {
  using Data = ::content::mojom::internal::FlingData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::TapDataDataView> {
  using Data = ::content::mojom::internal::TapData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::GestureDataDataView> {
  using Data = ::content::mojom::internal::GestureData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::TouchPointDataView> {
  using Data = ::content::mojom::internal::TouchPoint_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::TouchDataDataView> {
  using Data = ::content::mojom::internal::TouchData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::EventDataView> {
  using Data = ::content::mojom::internal::Event_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::TouchActionOptionalDataView> {
  using Data = ::content::mojom::internal::TouchActionOptional_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WidgetInputHandlerHostInterfaceBase {};

using WidgetInputHandlerHostPtrDataView =
    mojo::InterfacePtrDataView<WidgetInputHandlerHostInterfaceBase>;
using WidgetInputHandlerHostRequestDataView =
    mojo::InterfaceRequestDataView<WidgetInputHandlerHostInterfaceBase>;
using WidgetInputHandlerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WidgetInputHandlerHostInterfaceBase>;
using WidgetInputHandlerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WidgetInputHandlerHostInterfaceBase>;
class WidgetInputHandlerInterfaceBase {};

using WidgetInputHandlerPtrDataView =
    mojo::InterfacePtrDataView<WidgetInputHandlerInterfaceBase>;
using WidgetInputHandlerRequestDataView =
    mojo::InterfaceRequestDataView<WidgetInputHandlerInterfaceBase>;
using WidgetInputHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WidgetInputHandlerInterfaceBase>;
using WidgetInputHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WidgetInputHandlerInterfaceBase>;
class FrameInputHandlerInterfaceBase {};

using FrameInputHandlerPtrDataView =
    mojo::InterfacePtrDataView<FrameInputHandlerInterfaceBase>;
using FrameInputHandlerRequestDataView =
    mojo::InterfaceRequestDataView<FrameInputHandlerInterfaceBase>;
using FrameInputHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameInputHandlerInterfaceBase>;
using FrameInputHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameInputHandlerInterfaceBase>;
class KeyDataDataView {
 public:
  KeyDataDataView() {}

  KeyDataDataView(
      internal::KeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t dom_key() const {
    return data_->dom_key;
  }
  int32_t dom_code() const {
    return data_->dom_code;
  }
  int32_t windows_key_code() const {
    return data_->windows_key_code;
  }
  int32_t native_key_code() const {
    return data_->native_key_code;
  }
  bool is_system_key() const {
    return data_->is_system_key;
  }
  bool is_browser_shortcut() const {
    return data_->is_browser_shortcut;
  }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUnmodifiedTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnmodifiedText(UserType* output) {
    auto* pointer = data_->unmodified_text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::KeyData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PointerDataDataView {
 public:
  PointerDataDataView() {}

  PointerDataDataView(
      internal::PointerData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t pointer_id() const {
    return data_->pointer_id;
  }
  float force() const {
    return data_->force;
  }
  int32_t tilt_x() const {
    return data_->tilt_x;
  }
  int32_t tilt_y() const {
    return data_->tilt_y;
  }
  float tangential_pressure() const {
    return data_->tangential_pressure;
  }
  int32_t twist() const {
    return data_->twist;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButton(UserType* output) const {
    auto data_value = data_->button;
    return mojo::internal::Deserialize<::content::mojom::Button>(
        data_value, output);
  }

  ::content::mojom::Button button() const {
    return static_cast<::content::mojom::Button>(data_->button);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerType(UserType* output) const {
    auto data_value = data_->pointer_type;
    return mojo::internal::Deserialize<::content::mojom::PointerType>(
        data_value, output);
  }

  ::content::mojom::PointerType pointer_type() const {
    return static_cast<::content::mojom::PointerType>(data_->pointer_type);
  }
  int32_t movement_x() const {
    return data_->movement_x;
  }
  int32_t movement_y() const {
    return data_->movement_y;
  }
  inline void GetWidgetPositionDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWidgetPosition(UserType* output) {
    auto* pointer = data_->widget_position.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetScreenPositionDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreenPosition(UserType* output) {
    auto* pointer = data_->screen_position.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetMouseDataDataView(
      MouseDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMouseData(UserType* output) {
    auto* pointer = data_->mouse_data.Get();
    return mojo::internal::Deserialize<::content::mojom::MouseDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::PointerData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WheelDataDataView {
 public:
  WheelDataDataView() {}

  WheelDataDataView(
      internal::WheelData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float delta_x() const {
    return data_->delta_x;
  }
  float delta_y() const {
    return data_->delta_y;
  }
  float wheel_ticks_x() const {
    return data_->wheel_ticks_x;
  }
  float wheel_ticks_y() const {
    return data_->wheel_ticks_y;
  }
  float acceleration_ratio_x() const {
    return data_->acceleration_ratio_x;
  }
  float acceleration_ratio_y() const {
    return data_->acceleration_ratio_y;
  }
  int32_t resending_plugin_id() const {
    return data_->resending_plugin_id;
  }
  uint8_t phase() const {
    return data_->phase;
  }
  uint8_t momentum_phase() const {
    return data_->momentum_phase;
  }
  bool scroll_by_page() const {
    return data_->scroll_by_page;
  }
  bool has_precise_scrolling_deltas() const {
    return data_->has_precise_scrolling_deltas;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCancelable(UserType* output) const {
    auto data_value = data_->cancelable;
    return mojo::internal::Deserialize<::content::mojom::Cancelability>(
        data_value, output);
  }

  ::content::mojom::Cancelability cancelable() const {
    return static_cast<::content::mojom::Cancelability>(data_->cancelable);
  }
 private:
  internal::WheelData_Data* data_ = nullptr;
};

class MouseDataDataView {
 public:
  MouseDataDataView() {}

  MouseDataDataView(
      internal::MouseData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t click_count() const {
    return data_->click_count;
  }
  inline void GetWheelDataDataView(
      WheelDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWheelData(UserType* output) {
    auto* pointer = data_->wheel_data.Get();
    return mojo::internal::Deserialize<::content::mojom::WheelDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MouseData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ScrollUpdateDataView {
 public:
  ScrollUpdateDataView() {}

  ScrollUpdateDataView(
      internal::ScrollUpdate_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float velocity_x() const {
    return data_->velocity_x;
  }
  float velocity_y() const {
    return data_->velocity_y;
  }
  bool previous_update_in_sequence_prevented() const {
    return data_->previous_update_in_sequence_prevented;
  }
 private:
  internal::ScrollUpdate_Data* data_ = nullptr;
};

class ScrollDataDataView {
 public:
  ScrollDataDataView() {}

  ScrollDataDataView(
      internal::ScrollData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float delta_x() const {
    return data_->delta_x;
  }
  float delta_y() const {
    return data_->delta_y;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeltaUnits(UserType* output) const {
    auto data_value = data_->delta_units;
    return mojo::internal::Deserialize<::content::mojom::ScrollUnits>(
        data_value, output);
  }

  ::content::mojom::ScrollUnits delta_units() const {
    return static_cast<::content::mojom::ScrollUnits>(data_->delta_units);
  }
  bool target_viewport() const {
    return data_->target_viewport;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInertialPhase(UserType* output) const {
    auto data_value = data_->inertial_phase;
    return mojo::internal::Deserialize<::content::mojom::InertialPhaseState>(
        data_value, output);
  }

  ::content::mojom::InertialPhaseState inertial_phase() const {
    return static_cast<::content::mojom::InertialPhaseState>(data_->inertial_phase);
  }
  bool synthetic() const {
    return data_->synthetic;
  }
  int32_t pointer_count() const {
    return data_->pointer_count;
  }
  inline void GetUpdateDetailsDataView(
      ScrollUpdateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateDetails(UserType* output) {
    auto* pointer = data_->update_details.Get();
    return mojo::internal::Deserialize<::content::mojom::ScrollUpdateDataView>(
        pointer, output, context_);
  }
 private:
  internal::ScrollData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PinchDataDataView {
 public:
  PinchDataDataView() {}

  PinchDataDataView(
      internal::PinchData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool zoom_disabled() const {
    return data_->zoom_disabled;
  }
  float scale() const {
    return data_->scale;
  }
 private:
  internal::PinchData_Data* data_ = nullptr;
};

class FlingDataDataView {
 public:
  FlingDataDataView() {}

  FlingDataDataView(
      internal::FlingData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float velocity_x() const {
    return data_->velocity_x;
  }
  float velocity_y() const {
    return data_->velocity_y;
  }
  bool target_viewport() const {
    return data_->target_viewport;
  }
  bool prevent_boosting() const {
    return data_->prevent_boosting;
  }
 private:
  internal::FlingData_Data* data_ = nullptr;
};

class TapDataDataView {
 public:
  TapDataDataView() {}

  TapDataDataView(
      internal::TapData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t tap_count() const {
    return data_->tap_count;
  }
 private:
  internal::TapData_Data* data_ = nullptr;
};

class GestureDataDataView {
 public:
  GestureDataDataView() {}

  GestureDataDataView(
      internal::GestureData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScreenPositionDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreenPosition(UserType* output) {
    auto* pointer = data_->screen_position.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  inline void GetWidgetPositionDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWidgetPosition(UserType* output) {
    auto* pointer = data_->widget_position.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceDevice(UserType* output) const {
    auto data_value = data_->source_device;
    return mojo::internal::Deserialize<::content::mojom::GestureDevice>(
        data_value, output);
  }

  ::content::mojom::GestureDevice source_device() const {
    return static_cast<::content::mojom::GestureDevice>(data_->source_device);
  }
  bool is_source_touch_event_set_non_blocking() const {
    return data_->is_source_touch_event_set_non_blocking;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryPointerType(UserType* output) const {
    auto data_value = data_->primary_pointer_type;
    return mojo::internal::Deserialize<::content::mojom::PointerType>(
        data_value, output);
  }

  ::content::mojom::PointerType primary_pointer_type() const {
    return static_cast<::content::mojom::PointerType>(data_->primary_pointer_type);
  }
  int32_t unique_touch_event_id() const {
    return data_->unique_touch_event_id;
  }
  int32_t resending_plugin_id() const {
    return data_->resending_plugin_id;
  }
  inline void GetContactSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContactSize(UserType* output) {
    auto* pointer = data_->contact_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetScrollDataDataView(
      ScrollDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollData(UserType* output) {
    auto* pointer = data_->scroll_data.Get();
    return mojo::internal::Deserialize<::content::mojom::ScrollDataDataView>(
        pointer, output, context_);
  }
  inline void GetPinchDataDataView(
      PinchDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPinchData(UserType* output) {
    auto* pointer = data_->pinch_data.Get();
    return mojo::internal::Deserialize<::content::mojom::PinchDataDataView>(
        pointer, output, context_);
  }
  inline void GetTapDataDataView(
      TapDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTapData(UserType* output) {
    auto* pointer = data_->tap_data.Get();
    return mojo::internal::Deserialize<::content::mojom::TapDataDataView>(
        pointer, output, context_);
  }
  inline void GetFlingDataDataView(
      FlingDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFlingData(UserType* output) {
    auto* pointer = data_->fling_data.Get();
    return mojo::internal::Deserialize<::content::mojom::FlingDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::GestureData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TouchPointDataView {
 public:
  TouchPointDataView() {}

  TouchPointDataView(
      internal::TouchPoint_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::content::mojom::TouchState>(
        data_value, output);
  }

  ::content::mojom::TouchState state() const {
    return static_cast<::content::mojom::TouchState>(data_->state);
  }
  float radius_x() const {
    return data_->radius_x;
  }
  float radius_y() const {
    return data_->radius_y;
  }
  float rotation_angle() const {
    return data_->rotation_angle;
  }
  inline void GetPointerDataDataView(
      PointerDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerData(UserType* output) {
    auto* pointer = data_->pointer_data.Get();
    return mojo::internal::Deserialize<::content::mojom::PointerDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::TouchPoint_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TouchDataDataView {
 public:
  TouchDataDataView() {}

  TouchDataDataView(
      internal::TouchData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCancelable(UserType* output) const {
    auto data_value = data_->cancelable;
    return mojo::internal::Deserialize<::content::mojom::Cancelability>(
        data_value, output);
  }

  ::content::mojom::Cancelability cancelable() const {
    return static_cast<::content::mojom::Cancelability>(data_->cancelable);
  }
  bool moved_beyond_slop_region() const {
    return data_->moved_beyond_slop_region;
  }
  bool touch_start_or_first_move() const {
    return data_->touch_start_or_first_move;
  }
  bool hovering() const {
    return data_->hovering;
  }
  uint32_t unique_touch_event_id() const {
    return data_->unique_touch_event_id;
  }
  inline void GetTouchesDataView(
      mojo::ArrayDataView<TouchPointDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouches(UserType* output) {
    auto* pointer = data_->touches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::TouchPointDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TouchData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EventDataView {
 public:
  EventDataView() {}

  EventDataView(
      internal::Event_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content::mojom::EventType>(
        data_value, output);
  }

  ::content::mojom::EventType type() const {
    return static_cast<::content::mojom::EventType>(data_->type);
  }
  int32_t modifiers() const {
    return data_->modifiers;
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetLatencyDataView(
      ::ui::mojom::LatencyInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatency(UserType* output) {
    auto* pointer = data_->latency.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyInfoDataView>(
        pointer, output, context_);
  }
  inline void GetKeyDataDataView(
      KeyDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyData(UserType* output) {
    auto* pointer = data_->key_data.Get();
    return mojo::internal::Deserialize<::content::mojom::KeyDataDataView>(
        pointer, output, context_);
  }
  inline void GetPointerDataDataView(
      PointerDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerData(UserType* output) {
    auto* pointer = data_->pointer_data.Get();
    return mojo::internal::Deserialize<::content::mojom::PointerDataDataView>(
        pointer, output, context_);
  }
  inline void GetGestureDataDataView(
      GestureDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGestureData(UserType* output) {
    auto* pointer = data_->gesture_data.Get();
    return mojo::internal::Deserialize<::content::mojom::GestureDataDataView>(
        pointer, output, context_);
  }
  inline void GetTouchDataDataView(
      TouchDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchData(UserType* output) {
    auto* pointer = data_->touch_data.Get();
    return mojo::internal::Deserialize<::content::mojom::TouchDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::Event_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TouchActionOptionalDataView {
 public:
  TouchActionOptionalDataView() {}

  TouchActionOptionalDataView(
      internal::TouchActionOptional_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchAction(UserType* output) const {
    auto data_value = data_->touch_action;
    return mojo::internal::Deserialize<::content::mojom::TouchAction>(
        data_value, output);
  }

  ::content::mojom::TouchAction touch_action() const {
    return static_cast<::content::mojom::TouchAction>(data_->touch_action);
  }
 private:
  internal::TouchActionOptional_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_CancelTouchTimeout_ParamsDataView {
 public:
  WidgetInputHandlerHost_CancelTouchTimeout_ParamsDataView() {}

  WidgetInputHandlerHost_CancelTouchTimeout_ParamsDataView(
      internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_SetWhiteListedTouchAction_ParamsDataView {
 public:
  WidgetInputHandlerHost_SetWhiteListedTouchAction_ParamsDataView() {}

  WidgetInputHandlerHost_SetWhiteListedTouchAction_ParamsDataView(
      internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchAction(UserType* output) const {
    auto data_value = data_->touch_action;
    return mojo::internal::Deserialize<::content::mojom::TouchAction>(
        data_value, output);
  }

  ::content::mojom::TouchAction touch_action() const {
    return static_cast<::content::mojom::TouchAction>(data_->touch_action);
  }
  uint32_t unique_touch_event_id() const {
    return data_->unique_touch_event_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::content::mojom::InputEventAckState>(
        data_value, output);
  }

  ::content::mojom::InputEventAckState state() const {
    return static_cast<::content::mojom::InputEventAckState>(data_->state);
  }
 private:
  internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_DidOverscroll_ParamsDataView {
 public:
  WidgetInputHandlerHost_DidOverscroll_ParamsDataView() {}

  WidgetInputHandlerHost_DidOverscroll_ParamsDataView(
      internal::WidgetInputHandlerHost_DidOverscroll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::content::mojom::DidOverscrollParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::DidOverscrollParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandlerHost_DidOverscroll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandlerHost_DidStopFlinging_ParamsDataView {
 public:
  WidgetInputHandlerHost_DidStopFlinging_ParamsDataView() {}

  WidgetInputHandlerHost_DidStopFlinging_ParamsDataView(
      internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_DidStartScrollingViewport_ParamsDataView {
 public:
  WidgetInputHandlerHost_DidStartScrollingViewport_ParamsDataView() {}

  WidgetInputHandlerHost_DidStartScrollingViewport_ParamsDataView(
      internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_ImeCancelComposition_ParamsDataView {
 public:
  WidgetInputHandlerHost_ImeCancelComposition_ParamsDataView() {}

  WidgetInputHandlerHost_ImeCancelComposition_ParamsDataView(
      internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data* data_ = nullptr;
};

class WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView {
 public:
  WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView() {}

  WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView(
      internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) {
    auto* pointer = data_->range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  inline void GetBoundsDataView(
      mojo::ArrayDataView<::gfx::mojom::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_SetFocus_ParamsDataView {
 public:
  WidgetInputHandler_SetFocus_ParamsDataView() {}

  WidgetInputHandler_SetFocus_ParamsDataView(
      internal::WidgetInputHandler_SetFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool focused() const {
    return data_->focused;
  }
 private:
  internal::WidgetInputHandler_SetFocus_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_MouseCaptureLost_ParamsDataView {
 public:
  WidgetInputHandler_MouseCaptureLost_ParamsDataView() {}

  WidgetInputHandler_MouseCaptureLost_ParamsDataView(
      internal::WidgetInputHandler_MouseCaptureLost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandler_MouseCaptureLost_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_SetEditCommandsForNextKeyEvent_ParamsDataView {
 public:
  WidgetInputHandler_SetEditCommandsForNextKeyEvent_ParamsDataView() {}

  WidgetInputHandler_SetEditCommandsForNextKeyEvent_ParamsDataView(
      internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCommandsDataView(
      mojo::ArrayDataView<::content::mojom::EditCommandDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommands(UserType* output) {
    auto* pointer = data_->commands.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::EditCommandDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_CursorVisibilityChanged_ParamsDataView {
 public:
  WidgetInputHandler_CursorVisibilityChanged_ParamsDataView() {}

  WidgetInputHandler_CursorVisibilityChanged_ParamsDataView(
      internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_ImeSetComposition_ParamsDataView {
 public:
  WidgetInputHandler_ImeSetComposition_ParamsDataView() {}

  WidgetInputHandler_ImeSetComposition_ParamsDataView(
      internal::WidgetInputHandler_ImeSetComposition_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetImeTextSpansDataView(
      mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImeTextSpans(UserType* output) {
    auto* pointer = data_->ime_text_spans.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        pointer, output, context_);
  }
  inline void GetRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) {
    auto* pointer = data_->range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  int32_t start() const {
    return data_->start;
  }
  int32_t end() const {
    return data_->end;
  }
 private:
  internal::WidgetInputHandler_ImeSetComposition_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_ImeCommitText_ParamsDataView {
 public:
  WidgetInputHandler_ImeCommitText_ParamsDataView() {}

  WidgetInputHandler_ImeCommitText_ParamsDataView(
      internal::WidgetInputHandler_ImeCommitText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetImeTextSpansDataView(
      mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImeTextSpans(UserType* output) {
    auto* pointer = data_->ime_text_spans.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        pointer, output, context_);
  }
  inline void GetRangeDataView(
      ::gfx::mojom::RangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRange(UserType* output) {
    auto* pointer = data_->range.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RangeDataView>(
        pointer, output, context_);
  }
  int32_t relative_cursor_position() const {
    return data_->relative_cursor_position;
  }
 private:
  internal::WidgetInputHandler_ImeCommitText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_ImeFinishComposingText_ParamsDataView {
 public:
  WidgetInputHandler_ImeFinishComposingText_ParamsDataView() {}

  WidgetInputHandler_ImeFinishComposingText_ParamsDataView(
      internal::WidgetInputHandler_ImeFinishComposingText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool keep_selection() const {
    return data_->keep_selection;
  }
 private:
  internal::WidgetInputHandler_ImeFinishComposingText_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_RequestTextInputStateUpdate_ParamsDataView {
 public:
  WidgetInputHandler_RequestTextInputStateUpdate_ParamsDataView() {}

  WidgetInputHandler_RequestTextInputStateUpdate_ParamsDataView(
      internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_RequestCompositionUpdates_ParamsDataView {
 public:
  WidgetInputHandler_RequestCompositionUpdates_ParamsDataView() {}

  WidgetInputHandler_RequestCompositionUpdates_ParamsDataView(
      internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool immediate_request() const {
    return data_->immediate_request;
  }
  bool monitor_request() const {
    return data_->monitor_request;
  }
 private:
  internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data* data_ = nullptr;
};

class WidgetInputHandler_DispatchEvent_ParamsDataView {
 public:
  WidgetInputHandler_DispatchEvent_ParamsDataView() {}

  WidgetInputHandler_DispatchEvent_ParamsDataView(
      internal::WidgetInputHandler_DispatchEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::content::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandler_DispatchEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_DispatchEvent_ResponseParamsDataView {
 public:
  WidgetInputHandler_DispatchEvent_ResponseParamsDataView() {}

  WidgetInputHandler_DispatchEvent_ResponseParamsDataView(
      internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::content::mojom::InputEventAckSource>(
        data_value, output);
  }

  ::content::mojom::InputEventAckSource source() const {
    return static_cast<::content::mojom::InputEventAckSource>(data_->source);
  }
  inline void GetUpdatedLatencyDataView(
      ::ui::mojom::LatencyInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdatedLatency(UserType* output) {
    auto* pointer = data_->updated_latency.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::content::mojom::InputEventAckState>(
        data_value, output);
  }

  ::content::mojom::InputEventAckState state() const {
    return static_cast<::content::mojom::InputEventAckState>(data_->state);
  }
  inline void GetOverscrollDataView(
      ::content::mojom::DidOverscrollParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOverscroll(UserType* output) {
    auto* pointer = data_->overscroll.Get();
    return mojo::internal::Deserialize<::content::mojom::DidOverscrollParamsDataView>(
        pointer, output, context_);
  }
  inline void GetTouchActionDataView(
      TouchActionOptionalDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchAction(UserType* output) {
    auto* pointer = data_->touch_action.Get();
    return mojo::internal::Deserialize<::content::mojom::TouchActionOptionalDataView>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_DispatchNonBlockingEvent_ParamsDataView {
 public:
  WidgetInputHandler_DispatchNonBlockingEvent_ParamsDataView() {}

  WidgetInputHandler_DispatchNonBlockingEvent_ParamsDataView(
      internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::content::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WidgetInputHandler_AttachSynchronousCompositor_ParamsDataView {
 public:
  WidgetInputHandler_AttachSynchronousCompositor_ParamsDataView() {}

  WidgetInputHandler_AttachSynchronousCompositor_ParamsDataView(
      internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeControlHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SynchronousCompositorControlHostPtrDataView>(
            &data_->control_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SynchronousCompositorHostAssociatedPtrInfoDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::SynchronousCompositorAssociatedRequestDataView>(
            &data_->compositor_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_SetCompositionFromExistingText_ParamsDataView {
 public:
  FrameInputHandler_SetCompositionFromExistingText_ParamsDataView() {}

  FrameInputHandler_SetCompositionFromExistingText_ParamsDataView(
      internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t start() const {
    return data_->start;
  }
  int32_t end() const {
    return data_->end;
  }
  inline void GetImeTextSpansDataView(
      mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImeTextSpans(UserType* output) {
    auto* pointer = data_->ime_text_spans.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_ExtendSelectionAndDelete_ParamsDataView {
 public:
  FrameInputHandler_ExtendSelectionAndDelete_ParamsDataView() {}

  FrameInputHandler_ExtendSelectionAndDelete_ParamsDataView(
      internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t before() const {
    return data_->before;
  }
  int32_t after() const {
    return data_->after;
  }
 private:
  internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data* data_ = nullptr;
};

class FrameInputHandler_DeleteSurroundingText_ParamsDataView {
 public:
  FrameInputHandler_DeleteSurroundingText_ParamsDataView() {}

  FrameInputHandler_DeleteSurroundingText_ParamsDataView(
      internal::FrameInputHandler_DeleteSurroundingText_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t before() const {
    return data_->before;
  }
  int32_t after() const {
    return data_->after;
  }
 private:
  internal::FrameInputHandler_DeleteSurroundingText_Params_Data* data_ = nullptr;
};

class FrameInputHandler_DeleteSurroundingTextInCodePoints_ParamsDataView {
 public:
  FrameInputHandler_DeleteSurroundingTextInCodePoints_ParamsDataView() {}

  FrameInputHandler_DeleteSurroundingTextInCodePoints_ParamsDataView(
      internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t before() const {
    return data_->before;
  }
  int32_t after() const {
    return data_->after;
  }
 private:
  internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data* data_ = nullptr;
};

class FrameInputHandler_SetEditableSelectionOffsets_ParamsDataView {
 public:
  FrameInputHandler_SetEditableSelectionOffsets_ParamsDataView() {}

  FrameInputHandler_SetEditableSelectionOffsets_ParamsDataView(
      internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t start() const {
    return data_->start;
  }
  int32_t end() const {
    return data_->end;
  }
 private:
  internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data* data_ = nullptr;
};

class FrameInputHandler_ExecuteEditCommand_ParamsDataView {
 public:
  FrameInputHandler_ExecuteEditCommand_ParamsDataView() {}

  FrameInputHandler_ExecuteEditCommand_ParamsDataView(
      internal::FrameInputHandler_ExecuteEditCommand_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCommandDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCommand(UserType* output) {
    auto* pointer = data_->command.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_ExecuteEditCommand_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_Undo_ParamsDataView {
 public:
  FrameInputHandler_Undo_ParamsDataView() {}

  FrameInputHandler_Undo_ParamsDataView(
      internal::FrameInputHandler_Undo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Undo_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Redo_ParamsDataView {
 public:
  FrameInputHandler_Redo_ParamsDataView() {}

  FrameInputHandler_Redo_ParamsDataView(
      internal::FrameInputHandler_Redo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Redo_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Cut_ParamsDataView {
 public:
  FrameInputHandler_Cut_ParamsDataView() {}

  FrameInputHandler_Cut_ParamsDataView(
      internal::FrameInputHandler_Cut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Cut_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Copy_ParamsDataView {
 public:
  FrameInputHandler_Copy_ParamsDataView() {}

  FrameInputHandler_Copy_ParamsDataView(
      internal::FrameInputHandler_Copy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Copy_Params_Data* data_ = nullptr;
};

class FrameInputHandler_CopyToFindPboard_ParamsDataView {
 public:
  FrameInputHandler_CopyToFindPboard_ParamsDataView() {}

  FrameInputHandler_CopyToFindPboard_ParamsDataView(
      internal::FrameInputHandler_CopyToFindPboard_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_CopyToFindPboard_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Paste_ParamsDataView {
 public:
  FrameInputHandler_Paste_ParamsDataView() {}

  FrameInputHandler_Paste_ParamsDataView(
      internal::FrameInputHandler_Paste_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Paste_Params_Data* data_ = nullptr;
};

class FrameInputHandler_PasteAndMatchStyle_ParamsDataView {
 public:
  FrameInputHandler_PasteAndMatchStyle_ParamsDataView() {}

  FrameInputHandler_PasteAndMatchStyle_ParamsDataView(
      internal::FrameInputHandler_PasteAndMatchStyle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_PasteAndMatchStyle_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Delete_ParamsDataView {
 public:
  FrameInputHandler_Delete_ParamsDataView() {}

  FrameInputHandler_Delete_ParamsDataView(
      internal::FrameInputHandler_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_Delete_Params_Data* data_ = nullptr;
};

class FrameInputHandler_SelectAll_ParamsDataView {
 public:
  FrameInputHandler_SelectAll_ParamsDataView() {}

  FrameInputHandler_SelectAll_ParamsDataView(
      internal::FrameInputHandler_SelectAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_SelectAll_Params_Data* data_ = nullptr;
};

class FrameInputHandler_CollapseSelection_ParamsDataView {
 public:
  FrameInputHandler_CollapseSelection_ParamsDataView() {}

  FrameInputHandler_CollapseSelection_ParamsDataView(
      internal::FrameInputHandler_CollapseSelection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameInputHandler_CollapseSelection_Params_Data* data_ = nullptr;
};

class FrameInputHandler_Replace_ParamsDataView {
 public:
  FrameInputHandler_Replace_ParamsDataView() {}

  FrameInputHandler_Replace_ParamsDataView(
      internal::FrameInputHandler_Replace_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWord(UserType* output) {
    auto* pointer = data_->word.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_Replace_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_ReplaceMisspelling_ParamsDataView {
 public:
  FrameInputHandler_ReplaceMisspelling_ParamsDataView() {}

  FrameInputHandler_ReplaceMisspelling_ParamsDataView(
      internal::FrameInputHandler_ReplaceMisspelling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWord(UserType* output) {
    auto* pointer = data_->word.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_ReplaceMisspelling_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_SelectRange_ParamsDataView {
 public:
  FrameInputHandler_SelectRange_ParamsDataView() {}

  FrameInputHandler_SelectRange_ParamsDataView(
      internal::FrameInputHandler_SelectRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBaseDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBase(UserType* output) {
    auto* pointer = data_->base.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetExtentDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtent(UserType* output) {
    auto* pointer = data_->extent.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_SelectRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_AdjustSelectionByCharacterOffset_ParamsDataView {
 public:
  FrameInputHandler_AdjustSelectionByCharacterOffset_ParamsDataView() {}

  FrameInputHandler_AdjustSelectionByCharacterOffset_ParamsDataView(
      internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t start() const {
    return data_->start;
  }
  int32_t end() const {
    return data_->end;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBehavior(UserType* output) const {
    auto data_value = data_->behavior;
    return mojo::internal::Deserialize<::blink::mojom::SelectionMenuBehavior>(
        data_value, output);
  }

  ::blink::mojom::SelectionMenuBehavior behavior() const {
    return static_cast<::blink::mojom::SelectionMenuBehavior>(data_->behavior);
  }
 private:
  internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data* data_ = nullptr;
};

class FrameInputHandler_MoveRangeSelectionExtent_ParamsDataView {
 public:
  FrameInputHandler_MoveRangeSelectionExtent_ParamsDataView() {}

  FrameInputHandler_MoveRangeSelectionExtent_ParamsDataView(
      internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtentDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtent(UserType* output) {
    auto* pointer = data_->extent.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_ScrollFocusedEditableNodeIntoRect_ParamsDataView {
 public:
  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_ParamsDataView() {}

  FrameInputHandler_ScrollFocusedEditableNodeIntoRect_ParamsDataView(
      internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_MoveCaret_ParamsDataView {
 public:
  FrameInputHandler_MoveCaret_ParamsDataView() {}

  FrameInputHandler_MoveCaret_ParamsDataView(
      internal::FrameInputHandler_MoveCaret_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameInputHandler_MoveCaret_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameInputHandler_GetWidgetInputHandler_ParamsDataView {
 public:
  FrameInputHandler_GetWidgetInputHandler_ParamsDataView() {}

  FrameInputHandler_GetWidgetInputHandler_ParamsDataView(
      internal::FrameInputHandler_GetWidgetInputHandler_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeInterfaceRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetInputHandlerAssociatedRequestDataView>(
            &data_->interface_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetInputHandlerHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameInputHandler_GetWidgetInputHandler_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::KeyDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::KeyDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::KeyData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->dom_key = CallWithContext(Traits::dom_key, input, custom_context);
    (*output)->dom_code = CallWithContext(Traits::dom_code, input, custom_context);
    (*output)->windows_key_code = CallWithContext(Traits::windows_key_code, input, custom_context);
    (*output)->native_key_code = CallWithContext(Traits::native_key_code, input, custom_context);
    (*output)->is_system_key = CallWithContext(Traits::is_system_key, input, custom_context);
    (*output)->is_browser_shortcut = CallWithContext(Traits::is_browser_shortcut, input, custom_context);
    decltype(CallWithContext(Traits::text, input, custom_context)) in_text = CallWithContext(Traits::text, input, custom_context);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null text in KeyData struct");
    decltype(CallWithContext(Traits::unmodified_text, input, custom_context)) in_unmodified_text = CallWithContext(Traits::unmodified_text, input, custom_context);
    typename decltype((*output)->unmodified_text)::BaseType::BufferWriter
        unmodified_text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_unmodified_text, buffer, &unmodified_text_writer, context);
    (*output)->unmodified_text.Set(
        unmodified_text_writer.is_null() ? nullptr : unmodified_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->unmodified_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null unmodified_text in KeyData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::KeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::KeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PointerDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::PointerDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::PointerData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->pointer_id = CallWithContext(Traits::pointer_id, input, custom_context);
    (*output)->force = CallWithContext(Traits::force, input, custom_context);
    (*output)->tilt_x = CallWithContext(Traits::tilt_x, input, custom_context);
    (*output)->tilt_y = CallWithContext(Traits::tilt_y, input, custom_context);
    (*output)->tangential_pressure = CallWithContext(Traits::tangential_pressure, input, custom_context);
    (*output)->twist = CallWithContext(Traits::twist, input, custom_context);
    mojo::internal::Serialize<::content::mojom::Button>(
        CallWithContext(Traits::button, input, custom_context), &(*output)->button);
    mojo::internal::Serialize<::content::mojom::PointerType>(
        CallWithContext(Traits::pointer_type, input, custom_context), &(*output)->pointer_type);
    (*output)->movement_x = CallWithContext(Traits::movement_x, input, custom_context);
    (*output)->movement_y = CallWithContext(Traits::movement_y, input, custom_context);
    decltype(CallWithContext(Traits::widget_position, input, custom_context)) in_widget_position = CallWithContext(Traits::widget_position, input, custom_context);
    typename decltype((*output)->widget_position)::BaseType::BufferWriter
        widget_position_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_widget_position, buffer, &widget_position_writer, context);
    (*output)->widget_position.Set(
        widget_position_writer.is_null() ? nullptr : widget_position_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->widget_position.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null widget_position in PointerData struct");
    decltype(CallWithContext(Traits::screen_position, input, custom_context)) in_screen_position = CallWithContext(Traits::screen_position, input, custom_context);
    typename decltype((*output)->screen_position)::BaseType::BufferWriter
        screen_position_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_screen_position, buffer, &screen_position_writer, context);
    (*output)->screen_position.Set(
        screen_position_writer.is_null() ? nullptr : screen_position_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->screen_position.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null screen_position in PointerData struct");
    decltype(CallWithContext(Traits::mouse_data, input, custom_context)) in_mouse_data = CallWithContext(Traits::mouse_data, input, custom_context);
    typename decltype((*output)->mouse_data)::BaseType::BufferWriter
        mouse_data_writer;
    mojo::internal::Serialize<::content::mojom::MouseDataDataView>(
        in_mouse_data, buffer, &mouse_data_writer, context);
    (*output)->mouse_data.Set(
        mouse_data_writer.is_null() ? nullptr : mouse_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::PointerData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::PointerDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::WheelDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::WheelDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::WheelData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->delta_x = CallWithContext(Traits::delta_x, input, custom_context);
    (*output)->delta_y = CallWithContext(Traits::delta_y, input, custom_context);
    (*output)->wheel_ticks_x = CallWithContext(Traits::wheel_ticks_x, input, custom_context);
    (*output)->wheel_ticks_y = CallWithContext(Traits::wheel_ticks_y, input, custom_context);
    (*output)->acceleration_ratio_x = CallWithContext(Traits::acceleration_ratio_x, input, custom_context);
    (*output)->acceleration_ratio_y = CallWithContext(Traits::acceleration_ratio_y, input, custom_context);
    (*output)->resending_plugin_id = CallWithContext(Traits::resending_plugin_id, input, custom_context);
    (*output)->phase = CallWithContext(Traits::phase, input, custom_context);
    (*output)->momentum_phase = CallWithContext(Traits::momentum_phase, input, custom_context);
    (*output)->scroll_by_page = CallWithContext(Traits::scroll_by_page, input, custom_context);
    (*output)->has_precise_scrolling_deltas = CallWithContext(Traits::has_precise_scrolling_deltas, input, custom_context);
    mojo::internal::Serialize<::content::mojom::Cancelability>(
        CallWithContext(Traits::cancelable, input, custom_context), &(*output)->cancelable);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::WheelData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::WheelDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::MouseDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::MouseDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::MouseData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->click_count = CallWithContext(Traits::click_count, input, custom_context);
    decltype(CallWithContext(Traits::wheel_data, input, custom_context)) in_wheel_data = CallWithContext(Traits::wheel_data, input, custom_context);
    typename decltype((*output)->wheel_data)::BaseType::BufferWriter
        wheel_data_writer;
    mojo::internal::Serialize<::content::mojom::WheelDataDataView>(
        in_wheel_data, buffer, &wheel_data_writer, context);
    (*output)->wheel_data.Set(
        wheel_data_writer.is_null() ? nullptr : wheel_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::MouseData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::MouseDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ScrollUpdateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ScrollUpdateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ScrollUpdate_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->velocity_x = CallWithContext(Traits::velocity_x, input, custom_context);
    (*output)->velocity_y = CallWithContext(Traits::velocity_y, input, custom_context);
    (*output)->previous_update_in_sequence_prevented = CallWithContext(Traits::previous_update_in_sequence_prevented, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ScrollUpdate_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ScrollUpdateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ScrollDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ScrollDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ScrollData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->delta_x = CallWithContext(Traits::delta_x, input, custom_context);
    (*output)->delta_y = CallWithContext(Traits::delta_y, input, custom_context);
    mojo::internal::Serialize<::content::mojom::ScrollUnits>(
        CallWithContext(Traits::delta_units, input, custom_context), &(*output)->delta_units);
    (*output)->target_viewport = CallWithContext(Traits::target_viewport, input, custom_context);
    mojo::internal::Serialize<::content::mojom::InertialPhaseState>(
        CallWithContext(Traits::inertial_phase, input, custom_context), &(*output)->inertial_phase);
    (*output)->synthetic = CallWithContext(Traits::synthetic, input, custom_context);
    (*output)->pointer_count = CallWithContext(Traits::pointer_count, input, custom_context);
    decltype(CallWithContext(Traits::update_details, input, custom_context)) in_update_details = CallWithContext(Traits::update_details, input, custom_context);
    typename decltype((*output)->update_details)::BaseType::BufferWriter
        update_details_writer;
    mojo::internal::Serialize<::content::mojom::ScrollUpdateDataView>(
        in_update_details, buffer, &update_details_writer, context);
    (*output)->update_details.Set(
        update_details_writer.is_null() ? nullptr : update_details_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ScrollData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ScrollDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::PinchDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::PinchDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::PinchData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->zoom_disabled = CallWithContext(Traits::zoom_disabled, input, custom_context);
    (*output)->scale = CallWithContext(Traits::scale, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::PinchData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::PinchDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::FlingDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::FlingDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::FlingData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->velocity_x = CallWithContext(Traits::velocity_x, input, custom_context);
    (*output)->velocity_y = CallWithContext(Traits::velocity_y, input, custom_context);
    (*output)->target_viewport = CallWithContext(Traits::target_viewport, input, custom_context);
    (*output)->prevent_boosting = CallWithContext(Traits::prevent_boosting, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::FlingData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::FlingDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TapDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TapDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TapData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->tap_count = CallWithContext(Traits::tap_count, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TapData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TapDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::GestureDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::GestureDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::GestureData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::screen_position, input, custom_context)) in_screen_position = CallWithContext(Traits::screen_position, input, custom_context);
    typename decltype((*output)->screen_position)::BaseType::BufferWriter
        screen_position_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_screen_position, buffer, &screen_position_writer, context);
    (*output)->screen_position.Set(
        screen_position_writer.is_null() ? nullptr : screen_position_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->screen_position.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null screen_position in GestureData struct");
    decltype(CallWithContext(Traits::widget_position, input, custom_context)) in_widget_position = CallWithContext(Traits::widget_position, input, custom_context);
    typename decltype((*output)->widget_position)::BaseType::BufferWriter
        widget_position_writer;
    mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
        in_widget_position, buffer, &widget_position_writer, context);
    (*output)->widget_position.Set(
        widget_position_writer.is_null() ? nullptr : widget_position_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->widget_position.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null widget_position in GestureData struct");
    mojo::internal::Serialize<::content::mojom::GestureDevice>(
        CallWithContext(Traits::source_device, input, custom_context), &(*output)->source_device);
    (*output)->is_source_touch_event_set_non_blocking = CallWithContext(Traits::is_source_touch_event_set_non_blocking, input, custom_context);
    mojo::internal::Serialize<::content::mojom::PointerType>(
        CallWithContext(Traits::primary_pointer_type, input, custom_context), &(*output)->primary_pointer_type);
    (*output)->unique_touch_event_id = CallWithContext(Traits::unique_touch_event_id, input, custom_context);
    (*output)->resending_plugin_id = CallWithContext(Traits::resending_plugin_id, input, custom_context);
    decltype(CallWithContext(Traits::contact_size, input, custom_context)) in_contact_size = CallWithContext(Traits::contact_size, input, custom_context);
    typename decltype((*output)->contact_size)::BaseType::BufferWriter
        contact_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_contact_size, buffer, &contact_size_writer, context);
    (*output)->contact_size.Set(
        contact_size_writer.is_null() ? nullptr : contact_size_writer.data());
    decltype(CallWithContext(Traits::scroll_data, input, custom_context)) in_scroll_data = CallWithContext(Traits::scroll_data, input, custom_context);
    typename decltype((*output)->scroll_data)::BaseType::BufferWriter
        scroll_data_writer;
    mojo::internal::Serialize<::content::mojom::ScrollDataDataView>(
        in_scroll_data, buffer, &scroll_data_writer, context);
    (*output)->scroll_data.Set(
        scroll_data_writer.is_null() ? nullptr : scroll_data_writer.data());
    decltype(CallWithContext(Traits::pinch_data, input, custom_context)) in_pinch_data = CallWithContext(Traits::pinch_data, input, custom_context);
    typename decltype((*output)->pinch_data)::BaseType::BufferWriter
        pinch_data_writer;
    mojo::internal::Serialize<::content::mojom::PinchDataDataView>(
        in_pinch_data, buffer, &pinch_data_writer, context);
    (*output)->pinch_data.Set(
        pinch_data_writer.is_null() ? nullptr : pinch_data_writer.data());
    decltype(CallWithContext(Traits::tap_data, input, custom_context)) in_tap_data = CallWithContext(Traits::tap_data, input, custom_context);
    typename decltype((*output)->tap_data)::BaseType::BufferWriter
        tap_data_writer;
    mojo::internal::Serialize<::content::mojom::TapDataDataView>(
        in_tap_data, buffer, &tap_data_writer, context);
    (*output)->tap_data.Set(
        tap_data_writer.is_null() ? nullptr : tap_data_writer.data());
    decltype(CallWithContext(Traits::fling_data, input, custom_context)) in_fling_data = CallWithContext(Traits::fling_data, input, custom_context);
    typename decltype((*output)->fling_data)::BaseType::BufferWriter
        fling_data_writer;
    mojo::internal::Serialize<::content::mojom::FlingDataDataView>(
        in_fling_data, buffer, &fling_data_writer, context);
    (*output)->fling_data.Set(
        fling_data_writer.is_null() ? nullptr : fling_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::GestureData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::GestureDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TouchPointDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TouchPointDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TouchPoint_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::content::mojom::TouchState>(
        CallWithContext(Traits::state, input, custom_context), &(*output)->state);
    (*output)->radius_x = CallWithContext(Traits::radius_x, input, custom_context);
    (*output)->radius_y = CallWithContext(Traits::radius_y, input, custom_context);
    (*output)->rotation_angle = CallWithContext(Traits::rotation_angle, input, custom_context);
    decltype(CallWithContext(Traits::pointer_data, input, custom_context)) in_pointer_data = CallWithContext(Traits::pointer_data, input, custom_context);
    typename decltype((*output)->pointer_data)::BaseType::BufferWriter
        pointer_data_writer;
    mojo::internal::Serialize<::content::mojom::PointerDataDataView>(
        in_pointer_data, buffer, &pointer_data_writer, context);
    (*output)->pointer_data.Set(
        pointer_data_writer.is_null() ? nullptr : pointer_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pointer_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pointer_data in TouchPoint struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TouchPoint_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TouchPointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TouchDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TouchDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TouchData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::content::mojom::Cancelability>(
        CallWithContext(Traits::cancelable, input, custom_context), &(*output)->cancelable);
    (*output)->moved_beyond_slop_region = CallWithContext(Traits::moved_beyond_slop_region, input, custom_context);
    (*output)->touch_start_or_first_move = CallWithContext(Traits::touch_start_or_first_move, input, custom_context);
    (*output)->hovering = CallWithContext(Traits::hovering, input, custom_context);
    (*output)->unique_touch_event_id = CallWithContext(Traits::unique_touch_event_id, input, custom_context);
    decltype(CallWithContext(Traits::touches, input, custom_context)) in_touches = CallWithContext(Traits::touches, input, custom_context);
    typename decltype((*output)->touches)::BaseType::BufferWriter
        touches_writer;
    const mojo::internal::ContainerValidateParams touches_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::TouchPointDataView>>(
        in_touches, buffer, &touches_writer, &touches_validate_params,
        context);
    (*output)->touches.Set(
        touches_writer.is_null() ? nullptr : touches_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->touches.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null touches in TouchData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TouchData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TouchDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::EventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::EventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::Event_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::content::mojom::EventType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->modifiers = CallWithContext(Traits::modifiers, input, custom_context);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in Event struct");
    decltype(CallWithContext(Traits::latency, input, custom_context)) in_latency = CallWithContext(Traits::latency, input, custom_context);
    typename decltype((*output)->latency)::BaseType::BufferWriter
        latency_writer;
    mojo::internal::Serialize<::ui::mojom::LatencyInfoDataView>(
        in_latency, buffer, &latency_writer, context);
    (*output)->latency.Set(
        latency_writer.is_null() ? nullptr : latency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency in Event struct");
    decltype(CallWithContext(Traits::key_data, input, custom_context)) in_key_data = CallWithContext(Traits::key_data, input, custom_context);
    typename decltype((*output)->key_data)::BaseType::BufferWriter
        key_data_writer;
    mojo::internal::Serialize<::content::mojom::KeyDataDataView>(
        in_key_data, buffer, &key_data_writer, context);
    (*output)->key_data.Set(
        key_data_writer.is_null() ? nullptr : key_data_writer.data());
    decltype(CallWithContext(Traits::pointer_data, input, custom_context)) in_pointer_data = CallWithContext(Traits::pointer_data, input, custom_context);
    typename decltype((*output)->pointer_data)::BaseType::BufferWriter
        pointer_data_writer;
    mojo::internal::Serialize<::content::mojom::PointerDataDataView>(
        in_pointer_data, buffer, &pointer_data_writer, context);
    (*output)->pointer_data.Set(
        pointer_data_writer.is_null() ? nullptr : pointer_data_writer.data());
    decltype(CallWithContext(Traits::gesture_data, input, custom_context)) in_gesture_data = CallWithContext(Traits::gesture_data, input, custom_context);
    typename decltype((*output)->gesture_data)::BaseType::BufferWriter
        gesture_data_writer;
    mojo::internal::Serialize<::content::mojom::GestureDataDataView>(
        in_gesture_data, buffer, &gesture_data_writer, context);
    (*output)->gesture_data.Set(
        gesture_data_writer.is_null() ? nullptr : gesture_data_writer.data());
    decltype(CallWithContext(Traits::touch_data, input, custom_context)) in_touch_data = CallWithContext(Traits::touch_data, input, custom_context);
    typename decltype((*output)->touch_data)::BaseType::BufferWriter
        touch_data_writer;
    mojo::internal::Serialize<::content::mojom::TouchDataDataView>(
        in_touch_data, buffer, &touch_data_writer, context);
    (*output)->touch_data.Set(
        touch_data_writer.is_null() ? nullptr : touch_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::Event_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::EventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::TouchActionOptionalDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::TouchActionOptionalDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::TouchActionOptional_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::content::mojom::TouchAction>(
        CallWithContext(Traits::touch_action, input, custom_context), &(*output)->touch_action);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::TouchActionOptional_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::TouchActionOptionalDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void KeyDataDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void KeyDataDataView::GetUnmodifiedTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->unmodified_text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void PointerDataDataView::GetWidgetPositionDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->widget_position.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void PointerDataDataView::GetScreenPositionDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->screen_position.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void PointerDataDataView::GetMouseDataDataView(
    MouseDataDataView* output) {
  auto pointer = data_->mouse_data.Get();
  *output = MouseDataDataView(pointer, context_);
}




inline void MouseDataDataView::GetWheelDataDataView(
    WheelDataDataView* output) {
  auto pointer = data_->wheel_data.Get();
  *output = WheelDataDataView(pointer, context_);
}




inline void ScrollDataDataView::GetUpdateDetailsDataView(
    ScrollUpdateDataView* output) {
  auto pointer = data_->update_details.Get();
  *output = ScrollUpdateDataView(pointer, context_);
}








inline void GestureDataDataView::GetScreenPositionDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->screen_position.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void GestureDataDataView::GetWidgetPositionDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->widget_position.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void GestureDataDataView::GetContactSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->contact_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void GestureDataDataView::GetScrollDataDataView(
    ScrollDataDataView* output) {
  auto pointer = data_->scroll_data.Get();
  *output = ScrollDataDataView(pointer, context_);
}
inline void GestureDataDataView::GetPinchDataDataView(
    PinchDataDataView* output) {
  auto pointer = data_->pinch_data.Get();
  *output = PinchDataDataView(pointer, context_);
}
inline void GestureDataDataView::GetTapDataDataView(
    TapDataDataView* output) {
  auto pointer = data_->tap_data.Get();
  *output = TapDataDataView(pointer, context_);
}
inline void GestureDataDataView::GetFlingDataDataView(
    FlingDataDataView* output) {
  auto pointer = data_->fling_data.Get();
  *output = FlingDataDataView(pointer, context_);
}


inline void TouchPointDataView::GetPointerDataDataView(
    PointerDataDataView* output) {
  auto pointer = data_->pointer_data.Get();
  *output = PointerDataDataView(pointer, context_);
}


inline void TouchDataDataView::GetTouchesDataView(
    mojo::ArrayDataView<TouchPointDataView>* output) {
  auto pointer = data_->touches.Get();
  *output = mojo::ArrayDataView<TouchPointDataView>(pointer, context_);
}


inline void EventDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void EventDataView::GetLatencyDataView(
    ::ui::mojom::LatencyInfoDataView* output) {
  auto pointer = data_->latency.Get();
  *output = ::ui::mojom::LatencyInfoDataView(pointer, context_);
}
inline void EventDataView::GetKeyDataDataView(
    KeyDataDataView* output) {
  auto pointer = data_->key_data.Get();
  *output = KeyDataDataView(pointer, context_);
}
inline void EventDataView::GetPointerDataDataView(
    PointerDataDataView* output) {
  auto pointer = data_->pointer_data.Get();
  *output = PointerDataDataView(pointer, context_);
}
inline void EventDataView::GetGestureDataDataView(
    GestureDataDataView* output) {
  auto pointer = data_->gesture_data.Get();
  *output = GestureDataDataView(pointer, context_);
}
inline void EventDataView::GetTouchDataDataView(
    TouchDataDataView* output) {
  auto pointer = data_->touch_data.Get();
  *output = TouchDataDataView(pointer, context_);
}








inline void WidgetInputHandlerHost_DidOverscroll_ParamsDataView::GetParamsDataView(
    ::content::mojom::DidOverscrollParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::content::mojom::DidOverscrollParamsDataView(pointer, context_);
}








inline void WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView::GetRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}
inline void WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView::GetBoundsDataView(
    mojo::ArrayDataView<::gfx::mojom::RectDataView>* output) {
  auto pointer = data_->bounds.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectDataView>(pointer, context_);
}






inline void WidgetInputHandler_SetEditCommandsForNextKeyEvent_ParamsDataView::GetCommandsDataView(
    mojo::ArrayDataView<::content::mojom::EditCommandDataView>* output) {
  auto pointer = data_->commands.Get();
  *output = mojo::ArrayDataView<::content::mojom::EditCommandDataView>(pointer, context_);
}




inline void WidgetInputHandler_ImeSetComposition_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void WidgetInputHandler_ImeSetComposition_ParamsDataView::GetImeTextSpansDataView(
    mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output) {
  auto pointer = data_->ime_text_spans.Get();
  *output = mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>(pointer, context_);
}
inline void WidgetInputHandler_ImeSetComposition_ParamsDataView::GetRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}


inline void WidgetInputHandler_ImeCommitText_ParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void WidgetInputHandler_ImeCommitText_ParamsDataView::GetImeTextSpansDataView(
    mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output) {
  auto pointer = data_->ime_text_spans.Get();
  *output = mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>(pointer, context_);
}
inline void WidgetInputHandler_ImeCommitText_ParamsDataView::GetRangeDataView(
    ::gfx::mojom::RangeDataView* output) {
  auto pointer = data_->range.Get();
  *output = ::gfx::mojom::RangeDataView(pointer, context_);
}








inline void WidgetInputHandler_DispatchEvent_ParamsDataView::GetEventDataView(
    EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = EventDataView(pointer, context_);
}


inline void WidgetInputHandler_DispatchEvent_ResponseParamsDataView::GetUpdatedLatencyDataView(
    ::ui::mojom::LatencyInfoDataView* output) {
  auto pointer = data_->updated_latency.Get();
  *output = ::ui::mojom::LatencyInfoDataView(pointer, context_);
}
inline void WidgetInputHandler_DispatchEvent_ResponseParamsDataView::GetOverscrollDataView(
    ::content::mojom::DidOverscrollParamsDataView* output) {
  auto pointer = data_->overscroll.Get();
  *output = ::content::mojom::DidOverscrollParamsDataView(pointer, context_);
}
inline void WidgetInputHandler_DispatchEvent_ResponseParamsDataView::GetTouchActionDataView(
    TouchActionOptionalDataView* output) {
  auto pointer = data_->touch_action.Get();
  *output = TouchActionOptionalDataView(pointer, context_);
}


inline void WidgetInputHandler_DispatchNonBlockingEvent_ParamsDataView::GetEventDataView(
    EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = EventDataView(pointer, context_);
}




inline void FrameInputHandler_SetCompositionFromExistingText_ParamsDataView::GetImeTextSpansDataView(
    mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>* output) {
  auto pointer = data_->ime_text_spans.Get();
  *output = mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>(pointer, context_);
}










inline void FrameInputHandler_ExecuteEditCommand_ParamsDataView::GetCommandDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->command.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FrameInputHandler_ExecuteEditCommand_ParamsDataView::GetValueDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->value.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






















inline void FrameInputHandler_Replace_ParamsDataView::GetWordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->word.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void FrameInputHandler_ReplaceMisspelling_ParamsDataView::GetWordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->word.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void FrameInputHandler_SelectRange_ParamsDataView::GetBaseDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->base.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void FrameInputHandler_SelectRange_ParamsDataView::GetExtentDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->extent.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}




inline void FrameInputHandler_MoveRangeSelectionExtent_ParamsDataView::GetExtentDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->extent.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void FrameInputHandler_ScrollFocusedEditableNodeIntoRect_ParamsDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void FrameInputHandler_MoveCaret_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_SHARED_H_
