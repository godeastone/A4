// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/input/input_handler.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/common/input/input_handler.mojom-shared-message-ids.h"
#include "content/common/frame_messages.h"
#include "content/common/input/input_event_struct_traits.h"
#include "content/common/input/touch_action_optional_struct_traits.h"
#include "content/common/input_messages.h"
#include "content/common/view_messages.h"
#include "content/public/common/common_param_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/ui/public/interfaces/ime/ime_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace content {
namespace mojom {
KeyData::KeyData()
    : dom_key(),
      dom_code(),
      windows_key_code(),
      native_key_code(),
      is_system_key(),
      is_browser_shortcut(),
      text(),
      unmodified_text() {}

KeyData::KeyData(
    int32_t dom_key_in,
    int32_t dom_code_in,
    int32_t windows_key_code_in,
    int32_t native_key_code_in,
    bool is_system_key_in,
    bool is_browser_shortcut_in,
    const base::string16& text_in,
    const base::string16& unmodified_text_in)
    : dom_key(std::move(dom_key_in)),
      dom_code(std::move(dom_code_in)),
      windows_key_code(std::move(windows_key_code_in)),
      native_key_code(std::move(native_key_code_in)),
      is_system_key(std::move(is_system_key_in)),
      is_browser_shortcut(std::move(is_browser_shortcut_in)),
      text(std::move(text_in)),
      unmodified_text(std::move(unmodified_text_in)) {}

KeyData::~KeyData() = default;

bool KeyData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointerData::PointerData()
    : pointer_id(),
      force(),
      tilt_x(),
      tilt_y(),
      tangential_pressure(),
      twist(),
      button(),
      pointer_type(),
      movement_x(),
      movement_y(),
      widget_position(),
      screen_position(),
      mouse_data() {}

PointerData::PointerData(
    int32_t pointer_id_in,
    float force_in,
    int32_t tilt_x_in,
    int32_t tilt_y_in,
    float tangential_pressure_in,
    int32_t twist_in,
    blink::WebPointerProperties::Button button_in,
    blink::WebPointerProperties::PointerType pointer_type_in,
    int32_t movement_x_in,
    int32_t movement_y_in,
    const gfx::PointF& widget_position_in,
    const gfx::PointF& screen_position_in,
    MouseDataPtr mouse_data_in)
    : pointer_id(std::move(pointer_id_in)),
      force(std::move(force_in)),
      tilt_x(std::move(tilt_x_in)),
      tilt_y(std::move(tilt_y_in)),
      tangential_pressure(std::move(tangential_pressure_in)),
      twist(std::move(twist_in)),
      button(std::move(button_in)),
      pointer_type(std::move(pointer_type_in)),
      movement_x(std::move(movement_x_in)),
      movement_y(std::move(movement_y_in)),
      widget_position(std::move(widget_position_in)),
      screen_position(std::move(screen_position_in)),
      mouse_data(std::move(mouse_data_in)) {}

PointerData::~PointerData() = default;

bool PointerData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WheelData::WheelData()
    : delta_x(),
      delta_y(),
      wheel_ticks_x(),
      wheel_ticks_y(),
      acceleration_ratio_x(),
      acceleration_ratio_y(),
      resending_plugin_id(),
      phase(),
      momentum_phase(),
      scroll_by_page(),
      has_precise_scrolling_deltas(),
      cancelable() {}

WheelData::WheelData(
    float delta_x_in,
    float delta_y_in,
    float wheel_ticks_x_in,
    float wheel_ticks_y_in,
    float acceleration_ratio_x_in,
    float acceleration_ratio_y_in,
    int32_t resending_plugin_id_in,
    uint8_t phase_in,
    uint8_t momentum_phase_in,
    bool scroll_by_page_in,
    bool has_precise_scrolling_deltas_in,
    blink::WebInputEvent::DispatchType cancelable_in)
    : delta_x(std::move(delta_x_in)),
      delta_y(std::move(delta_y_in)),
      wheel_ticks_x(std::move(wheel_ticks_x_in)),
      wheel_ticks_y(std::move(wheel_ticks_y_in)),
      acceleration_ratio_x(std::move(acceleration_ratio_x_in)),
      acceleration_ratio_y(std::move(acceleration_ratio_y_in)),
      resending_plugin_id(std::move(resending_plugin_id_in)),
      phase(std::move(phase_in)),
      momentum_phase(std::move(momentum_phase_in)),
      scroll_by_page(std::move(scroll_by_page_in)),
      has_precise_scrolling_deltas(std::move(has_precise_scrolling_deltas_in)),
      cancelable(std::move(cancelable_in)) {}

WheelData::~WheelData() = default;

bool WheelData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MouseData::MouseData()
    : click_count(),
      wheel_data() {}

MouseData::MouseData(
    int32_t click_count_in,
    WheelDataPtr wheel_data_in)
    : click_count(std::move(click_count_in)),
      wheel_data(std::move(wheel_data_in)) {}

MouseData::~MouseData() = default;

bool MouseData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScrollUpdate::ScrollUpdate()
    : velocity_x(),
      velocity_y(),
      previous_update_in_sequence_prevented() {}

ScrollUpdate::ScrollUpdate(
    float velocity_x_in,
    float velocity_y_in,
    bool previous_update_in_sequence_prevented_in)
    : velocity_x(std::move(velocity_x_in)),
      velocity_y(std::move(velocity_y_in)),
      previous_update_in_sequence_prevented(std::move(previous_update_in_sequence_prevented_in)) {}

ScrollUpdate::~ScrollUpdate() = default;
size_t ScrollUpdate::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->velocity_x);
  seed = mojo::internal::Hash(seed, this->velocity_y);
  seed = mojo::internal::Hash(seed, this->previous_update_in_sequence_prevented);
  return seed;
}

bool ScrollUpdate::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScrollData::ScrollData()
    : delta_x(),
      delta_y(),
      delta_units(),
      target_viewport(),
      inertial_phase(),
      synthetic(),
      pointer_count(),
      update_details() {}

ScrollData::ScrollData(
    float delta_x_in,
    float delta_y_in,
    blink::WebGestureEvent::ScrollUnits delta_units_in,
    bool target_viewport_in,
    blink::WebGestureEvent::InertialPhaseState inertial_phase_in,
    bool synthetic_in,
    int32_t pointer_count_in,
    ScrollUpdatePtr update_details_in)
    : delta_x(std::move(delta_x_in)),
      delta_y(std::move(delta_y_in)),
      delta_units(std::move(delta_units_in)),
      target_viewport(std::move(target_viewport_in)),
      inertial_phase(std::move(inertial_phase_in)),
      synthetic(std::move(synthetic_in)),
      pointer_count(std::move(pointer_count_in)),
      update_details(std::move(update_details_in)) {}

ScrollData::~ScrollData() = default;

bool ScrollData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PinchData::PinchData()
    : zoom_disabled(),
      scale() {}

PinchData::PinchData(
    bool zoom_disabled_in,
    float scale_in)
    : zoom_disabled(std::move(zoom_disabled_in)),
      scale(std::move(scale_in)) {}

PinchData::~PinchData() = default;
size_t PinchData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->zoom_disabled);
  seed = mojo::internal::Hash(seed, this->scale);
  return seed;
}

bool PinchData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FlingData::FlingData()
    : velocity_x(),
      velocity_y(),
      target_viewport(),
      prevent_boosting() {}

FlingData::FlingData(
    float velocity_x_in,
    float velocity_y_in,
    bool target_viewport_in,
    bool prevent_boosting_in)
    : velocity_x(std::move(velocity_x_in)),
      velocity_y(std::move(velocity_y_in)),
      target_viewport(std::move(target_viewport_in)),
      prevent_boosting(std::move(prevent_boosting_in)) {}

FlingData::~FlingData() = default;
size_t FlingData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->velocity_x);
  seed = mojo::internal::Hash(seed, this->velocity_y);
  seed = mojo::internal::Hash(seed, this->target_viewport);
  seed = mojo::internal::Hash(seed, this->prevent_boosting);
  return seed;
}

bool FlingData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TapData::TapData()
    : tap_count() {}

TapData::TapData(
    int32_t tap_count_in)
    : tap_count(std::move(tap_count_in)) {}

TapData::~TapData() = default;
size_t TapData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->tap_count);
  return seed;
}

bool TapData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GestureData::GestureData()
    : screen_position(),
      widget_position(),
      source_device(),
      is_source_touch_event_set_non_blocking(),
      primary_pointer_type(),
      unique_touch_event_id(),
      resending_plugin_id(),
      contact_size(),
      scroll_data(),
      pinch_data(),
      tap_data(),
      fling_data() {}

GestureData::GestureData(
    const gfx::PointF& screen_position_in,
    const gfx::PointF& widget_position_in,
    blink::WebGestureDevice source_device_in,
    bool is_source_touch_event_set_non_blocking_in,
    blink::WebPointerProperties::PointerType primary_pointer_type_in,
    int32_t unique_touch_event_id_in,
    int32_t resending_plugin_id_in,
    const base::Optional<gfx::Size>& contact_size_in,
    ScrollDataPtr scroll_data_in,
    PinchDataPtr pinch_data_in,
    TapDataPtr tap_data_in,
    FlingDataPtr fling_data_in)
    : screen_position(std::move(screen_position_in)),
      widget_position(std::move(widget_position_in)),
      source_device(std::move(source_device_in)),
      is_source_touch_event_set_non_blocking(std::move(is_source_touch_event_set_non_blocking_in)),
      primary_pointer_type(std::move(primary_pointer_type_in)),
      unique_touch_event_id(std::move(unique_touch_event_id_in)),
      resending_plugin_id(std::move(resending_plugin_id_in)),
      contact_size(std::move(contact_size_in)),
      scroll_data(std::move(scroll_data_in)),
      pinch_data(std::move(pinch_data_in)),
      tap_data(std::move(tap_data_in)),
      fling_data(std::move(fling_data_in)) {}

GestureData::~GestureData() = default;

bool GestureData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TouchPoint::TouchPoint()
    : state(),
      radius_x(),
      radius_y(),
      rotation_angle(),
      pointer_data() {}

TouchPoint::TouchPoint(
    blink::WebTouchPoint::State state_in,
    float radius_x_in,
    float radius_y_in,
    float rotation_angle_in,
    PointerDataPtr pointer_data_in)
    : state(std::move(state_in)),
      radius_x(std::move(radius_x_in)),
      radius_y(std::move(radius_y_in)),
      rotation_angle(std::move(rotation_angle_in)),
      pointer_data(std::move(pointer_data_in)) {}

TouchPoint::~TouchPoint() = default;

bool TouchPoint::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TouchData::TouchData()
    : cancelable(),
      moved_beyond_slop_region(),
      touch_start_or_first_move(),
      hovering(),
      unique_touch_event_id(),
      touches() {}

TouchData::TouchData(
    blink::WebInputEvent::DispatchType cancelable_in,
    bool moved_beyond_slop_region_in,
    bool touch_start_or_first_move_in,
    bool hovering_in,
    uint32_t unique_touch_event_id_in,
    std::vector<TouchPointPtr> touches_in)
    : cancelable(std::move(cancelable_in)),
      moved_beyond_slop_region(std::move(moved_beyond_slop_region_in)),
      touch_start_or_first_move(std::move(touch_start_or_first_move_in)),
      hovering(std::move(hovering_in)),
      unique_touch_event_id(std::move(unique_touch_event_id_in)),
      touches(std::move(touches_in)) {}

TouchData::~TouchData() = default;

bool TouchData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Event::Event()
    : type(),
      modifiers(),
      timestamp(),
      latency(),
      key_data(),
      pointer_data(),
      gesture_data(),
      touch_data() {}

Event::Event(
    blink::WebInputEvent::Type type_in,
    int32_t modifiers_in,
    base::TimeTicks timestamp_in,
    const ui::LatencyInfo& latency_in,
    KeyDataPtr key_data_in,
    PointerDataPtr pointer_data_in,
    GestureDataPtr gesture_data_in,
    TouchDataPtr touch_data_in)
    : type(std::move(type_in)),
      modifiers(std::move(modifiers_in)),
      timestamp(std::move(timestamp_in)),
      latency(std::move(latency_in)),
      key_data(std::move(key_data_in)),
      pointer_data(std::move(pointer_data_in)),
      gesture_data(std::move(gesture_data_in)),
      touch_data(std::move(touch_data_in)) {}

Event::~Event() = default;

bool Event::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TouchActionOptional::TouchActionOptional()
    : touch_action() {}

TouchActionOptional::TouchActionOptional(
    cc::TouchAction touch_action_in)
    : touch_action(std::move(touch_action_in)) {}

TouchActionOptional::~TouchActionOptional() = default;

bool TouchActionOptional::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char WidgetInputHandlerHost::Name_[] = "content.mojom.WidgetInputHandlerHost";

WidgetInputHandlerHostProxy::WidgetInputHandlerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WidgetInputHandlerHostProxy::CancelTouchTimeout(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::CancelTouchTimeout");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_CancelTouchTimeout_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::SetWhiteListedTouchAction(
    cc::TouchAction in_touch_action, uint32_t in_unique_touch_event_id, content::InputEventAckState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::SetWhiteListedTouchAction");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::TouchAction>(
      in_touch_action, &params->touch_action);
  params->unique_touch_event_id = in_unique_touch_event_id;
  mojo::internal::Serialize<::content::mojom::InputEventAckState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::DidOverscroll(
    const ui::DidOverscrollParams& in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::DidOverscroll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_DidOverscroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_DidOverscroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::DidOverscrollParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in WidgetInputHandlerHost.DidOverscroll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::DidStopFlinging(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::DidStopFlinging");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_DidStopFlinging_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::DidStartScrollingViewport(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::DidStartScrollingViewport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_DidStartScrollingViewport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::ImeCancelComposition(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::ImeCancelComposition");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_ImeCancelComposition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerHostProxy::ImeCompositionRangeChanged(
    const gfx::Range& in_range, const std::vector<gfx::Rect>& in_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandlerHost::ImeCompositionRangeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->range)::BaseType::BufferWriter
      range_writer;
  mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
      in_range, buffer, &range_writer, &serialization_context);
  params->range.Set(
      range_writer.is_null() ? nullptr : range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null range in WidgetInputHandlerHost.ImeCompositionRangeChanged request");
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  const mojo::internal::ContainerValidateParams bounds_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_bounds, buffer, &bounds_writer, &bounds_validate_params,
      &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in WidgetInputHandlerHost.ImeCompositionRangeChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WidgetInputHandlerHostStubDispatch::Accept(
    WidgetInputHandlerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWidgetInputHandlerHost_CancelTouchTimeout_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::CancelTouchTimeout",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandlerHost_CancelTouchTimeout_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::CancelTouchTimeout deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelTouchTimeout();
      return true;
    }
    case internal::kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::SetWhiteListedTouchAction",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      cc::TouchAction p_touch_action{};
      uint32_t p_unique_touch_event_id{};
      content::InputEventAckState p_state{};
      WidgetInputHandlerHost_SetWhiteListedTouchAction_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTouchAction(&p_touch_action))
        success = false;
      p_unique_touch_event_id = input_data_view.unique_touch_event_id();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::SetWhiteListedTouchAction deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWhiteListedTouchAction(
std::move(p_touch_action), 
std::move(p_unique_touch_event_id), 
std::move(p_state));
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidOverscroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidOverscroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_DidOverscroll_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_DidOverscroll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::DidOverscrollParams p_params{};
      WidgetInputHandlerHost_DidOverscroll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::DidOverscroll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidOverscroll(
std::move(p_params));
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidStopFlinging_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidStopFlinging",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandlerHost_DidStopFlinging_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::DidStopFlinging deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidStopFlinging();
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidStartScrollingViewport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidStartScrollingViewport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandlerHost_DidStartScrollingViewport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::DidStartScrollingViewport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidStartScrollingViewport();
      return true;
    }
    case internal::kWidgetInputHandlerHost_ImeCancelComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::ImeCancelComposition",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandlerHost_ImeCancelComposition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::ImeCancelComposition deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImeCancelComposition();
      return true;
    }
    case internal::kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::ImeCompositionRangeChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Range p_range{};
      std::vector<gfx::Rect> p_bounds{};
      WidgetInputHandlerHost_ImeCompositionRangeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRange(&p_range))
        success = false;
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandlerHost::ImeCompositionRangeChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImeCompositionRangeChanged(
std::move(p_range), 
std::move(p_bounds));
      return true;
    }
  }
  return false;
}

// static
bool WidgetInputHandlerHostStubDispatch::AcceptWithResponder(
    WidgetInputHandlerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWidgetInputHandlerHost_CancelTouchTimeout_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::CancelTouchTimeout",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::SetWhiteListedTouchAction",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_DidOverscroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidOverscroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_DidStopFlinging_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidStopFlinging",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_DidStartScrollingViewport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::DidStartScrollingViewport",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_ImeCancelComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::ImeCancelComposition",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandlerHost::ImeCompositionRangeChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WidgetInputHandlerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WidgetInputHandlerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kWidgetInputHandlerHost_CancelTouchTimeout_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_CancelTouchTimeout_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_SetWhiteListedTouchAction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_SetWhiteListedTouchAction_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidOverscroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_DidOverscroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidStopFlinging_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_DidStopFlinging_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_DidStartScrollingViewport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_DidStartScrollingViewport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_ImeCancelComposition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_ImeCancelComposition_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandlerHost_ImeCompositionRangeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandlerHost_ImeCompositionRangeChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void WidgetInputHandlerHostInterceptorForTesting::CancelTouchTimeout() {
  GetForwardingInterface()->CancelTouchTimeout();
}
void WidgetInputHandlerHostInterceptorForTesting::SetWhiteListedTouchAction(cc::TouchAction touch_action, uint32_t unique_touch_event_id, content::InputEventAckState state) {
  GetForwardingInterface()->SetWhiteListedTouchAction(std::move(touch_action), std::move(unique_touch_event_id), std::move(state));
}
void WidgetInputHandlerHostInterceptorForTesting::DidOverscroll(const ui::DidOverscrollParams& params) {
  GetForwardingInterface()->DidOverscroll(std::move(params));
}
void WidgetInputHandlerHostInterceptorForTesting::DidStopFlinging() {
  GetForwardingInterface()->DidStopFlinging();
}
void WidgetInputHandlerHostInterceptorForTesting::DidStartScrollingViewport() {
  GetForwardingInterface()->DidStartScrollingViewport();
}
void WidgetInputHandlerHostInterceptorForTesting::ImeCancelComposition() {
  GetForwardingInterface()->ImeCancelComposition();
}
void WidgetInputHandlerHostInterceptorForTesting::ImeCompositionRangeChanged(const gfx::Range& range, const std::vector<gfx::Rect>& bounds) {
  GetForwardingInterface()->ImeCompositionRangeChanged(std::move(range), std::move(bounds));
}
WidgetInputHandlerHostAsyncWaiter::WidgetInputHandlerHostAsyncWaiter(
    WidgetInputHandlerHost* proxy) : proxy_(proxy) {}

WidgetInputHandlerHostAsyncWaiter::~WidgetInputHandlerHostAsyncWaiter() = default;


const char WidgetInputHandler::Name_[] = "content.mojom.WidgetInputHandler";

class WidgetInputHandler_DispatchEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WidgetInputHandler_DispatchEvent_ForwardToCallback(
      WidgetInputHandler::DispatchEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WidgetInputHandler::DispatchEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WidgetInputHandler_DispatchEvent_ForwardToCallback);
};

WidgetInputHandlerProxy::WidgetInputHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WidgetInputHandlerProxy::SetFocus(
    bool in_focused) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::SetFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_SetFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_SetFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->focused = in_focused;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::MouseCaptureLost(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::MouseCaptureLost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_MouseCaptureLost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_MouseCaptureLost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::SetEditCommandsForNextKeyEvent(
    const std::vector<content::EditCommand>& in_commands) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::SetEditCommandsForNextKeyEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->commands)::BaseType::BufferWriter
      commands_writer;
  const mojo::internal::ContainerValidateParams commands_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::EditCommandDataView>>(
      in_commands, buffer, &commands_writer, &commands_validate_params,
      &serialization_context);
  params->commands.Set(
      commands_writer.is_null() ? nullptr : commands_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->commands.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null commands in WidgetInputHandler.SetEditCommandsForNextKeyEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::CursorVisibilityChanged(
    bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::CursorVisibilityChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_CursorVisibilityChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::ImeSetComposition(
    const base::string16& in_text, const std::vector<ui::ImeTextSpan>& in_ime_text_spans, const gfx::Range& in_range, int32_t in_start, int32_t in_end) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::ImeSetComposition");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_ImeSetComposition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_ImeSetComposition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in WidgetInputHandler.ImeSetComposition request");
  typename decltype(params->ime_text_spans)::BaseType::BufferWriter
      ime_text_spans_writer;
  const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
      in_ime_text_spans, buffer, &ime_text_spans_writer, &ime_text_spans_validate_params,
      &serialization_context);
  params->ime_text_spans.Set(
      ime_text_spans_writer.is_null() ? nullptr : ime_text_spans_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ime_text_spans.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ime_text_spans in WidgetInputHandler.ImeSetComposition request");
  typename decltype(params->range)::BaseType::BufferWriter
      range_writer;
  mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
      in_range, buffer, &range_writer, &serialization_context);
  params->range.Set(
      range_writer.is_null() ? nullptr : range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null range in WidgetInputHandler.ImeSetComposition request");
  params->start = in_start;
  params->end = in_end;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::ImeCommitText(
    const base::string16& in_text, const std::vector<ui::ImeTextSpan>& in_ime_text_spans, const gfx::Range& in_range, int32_t in_relative_cursor_position) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::ImeCommitText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_ImeCommitText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_ImeCommitText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in WidgetInputHandler.ImeCommitText request");
  typename decltype(params->ime_text_spans)::BaseType::BufferWriter
      ime_text_spans_writer;
  const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
      in_ime_text_spans, buffer, &ime_text_spans_writer, &ime_text_spans_validate_params,
      &serialization_context);
  params->ime_text_spans.Set(
      ime_text_spans_writer.is_null() ? nullptr : ime_text_spans_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ime_text_spans.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ime_text_spans in WidgetInputHandler.ImeCommitText request");
  typename decltype(params->range)::BaseType::BufferWriter
      range_writer;
  mojo::internal::Serialize<::gfx::mojom::RangeDataView>(
      in_range, buffer, &range_writer, &serialization_context);
  params->range.Set(
      range_writer.is_null() ? nullptr : range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null range in WidgetInputHandler.ImeCommitText request");
  params->relative_cursor_position = in_relative_cursor_position;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::ImeFinishComposingText(
    bool in_keep_selection) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::ImeFinishComposingText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_ImeFinishComposingText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_ImeFinishComposingText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->keep_selection = in_keep_selection;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::RequestTextInputStateUpdate(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::RequestTextInputStateUpdate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_RequestTextInputStateUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::RequestCompositionUpdates(
    bool in_immediate_request, bool in_monitor_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::RequestCompositionUpdates");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_RequestCompositionUpdates_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->immediate_request = in_immediate_request;
  params->monitor_request = in_monitor_request;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::DispatchEvent(
    std::unique_ptr<content::InputEvent> in_event, DispatchEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::DispatchEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_DispatchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_DispatchEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::content::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WidgetInputHandler.DispatchEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WidgetInputHandler_DispatchEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WidgetInputHandlerProxy::DispatchNonBlockingEvent(
    std::unique_ptr<content::InputEvent> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::DispatchNonBlockingEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_DispatchNonBlockingEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::content::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WidgetInputHandler.DispatchNonBlockingEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WidgetInputHandlerProxy::AttachSynchronousCompositor(
    ::content::mojom::SynchronousCompositorControlHostPtr in_control_host, ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo in_host, ::content::mojom::SynchronousCompositorAssociatedRequest in_compositor_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::WidgetInputHandler::AttachSynchronousCompositor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_AttachSynchronousCompositor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::SynchronousCompositorControlHostPtrDataView>(
      in_control_host, &params->control_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->control_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid control_host in WidgetInputHandler.AttachSynchronousCompositor request");
  mojo::internal::Serialize<::content::mojom::SynchronousCompositorHostAssociatedPtrInfoDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid host in WidgetInputHandler.AttachSynchronousCompositor request");
  mojo::internal::Serialize<::content::mojom::SynchronousCompositorAssociatedRequestDataView>(
      in_compositor_request, &params->compositor_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid compositor_request in WidgetInputHandler.AttachSynchronousCompositor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WidgetInputHandler_DispatchEvent_ProxyToResponder {
 public:
  static WidgetInputHandler::DispatchEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WidgetInputHandler_DispatchEvent_ProxyToResponder> proxy(
        new WidgetInputHandler_DispatchEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WidgetInputHandler_DispatchEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WidgetInputHandler_DispatchEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  WidgetInputHandler_DispatchEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "WidgetInputHandler::DispatchEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      content::InputEventAckSource in_source, const ui::LatencyInfo& in_updated_latency, content::InputEventAckState in_state, const base::Optional<ui::DidOverscrollParams>& in_overscroll, const base::Optional<cc::TouchAction>& in_touch_action);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WidgetInputHandler_DispatchEvent_ProxyToResponder);
};

bool WidgetInputHandler_DispatchEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::WidgetInputHandler::DispatchEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::InputEventAckSource p_source{};
  ui::LatencyInfo p_updated_latency{};
  content::InputEventAckState p_state{};
  base::Optional<ui::DidOverscrollParams> p_overscroll{};
  base::Optional<cc::TouchAction> p_touch_action{};
  WidgetInputHandler_DispatchEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSource(&p_source))
    success = false;
  if (!input_data_view.ReadUpdatedLatency(&p_updated_latency))
    success = false;
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!input_data_view.ReadOverscroll(&p_overscroll))
    success = false;
  if (!input_data_view.ReadTouchAction(&p_touch_action))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WidgetInputHandler::DispatchEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_source), 
std::move(p_updated_latency), 
std::move(p_state), 
std::move(p_overscroll), 
std::move(p_touch_action));
  return true;
}

void WidgetInputHandler_DispatchEvent_ProxyToResponder::Run(
    content::InputEventAckSource in_source, const ui::LatencyInfo& in_updated_latency, content::InputEventAckState in_state, const base::Optional<ui::DidOverscrollParams>& in_overscroll, const base::Optional<cc::TouchAction>& in_touch_action) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidgetInputHandler_DispatchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::InputEventAckSource>(
      in_source, &params->source);
  typename decltype(params->updated_latency)::BaseType::BufferWriter
      updated_latency_writer;
  mojo::internal::Serialize<::ui::mojom::LatencyInfoDataView>(
      in_updated_latency, buffer, &updated_latency_writer, &serialization_context);
  params->updated_latency.Set(
      updated_latency_writer.is_null() ? nullptr : updated_latency_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->updated_latency.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null updated_latency in ");
  mojo::internal::Serialize<::content::mojom::InputEventAckState>(
      in_state, &params->state);
  typename decltype(params->overscroll)::BaseType::BufferWriter
      overscroll_writer;
  mojo::internal::Serialize<::content::mojom::DidOverscrollParamsDataView>(
      in_overscroll, buffer, &overscroll_writer, &serialization_context);
  params->overscroll.Set(
      overscroll_writer.is_null() ? nullptr : overscroll_writer.data());
  typename decltype(params->touch_action)::BaseType::BufferWriter
      touch_action_writer;
  mojo::internal::Serialize<::content::mojom::TouchActionOptionalDataView>(
      in_touch_action, buffer, &touch_action_writer, &serialization_context);
  params->touch_action.Set(
      touch_action_writer.is_null() ? nullptr : touch_action_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::DispatchEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WidgetInputHandlerStubDispatch::Accept(
    WidgetInputHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWidgetInputHandler_SetFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::SetFocus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_SetFocus_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_SetFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_focused{};
      WidgetInputHandler_SetFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_focused = input_data_view.focused();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::SetFocus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFocus(
std::move(p_focused));
      return true;
    }
    case internal::kWidgetInputHandler_MouseCaptureLost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::MouseCaptureLost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_MouseCaptureLost_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_MouseCaptureLost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandler_MouseCaptureLost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::MouseCaptureLost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MouseCaptureLost();
      return true;
    }
    case internal::kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::SetEditCommandsForNextKeyEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<content::EditCommand> p_commands{};
      WidgetInputHandler_SetEditCommandsForNextKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCommands(&p_commands))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::SetEditCommandsForNextKeyEvent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetEditCommandsForNextKeyEvent(
std::move(p_commands));
      return true;
    }
    case internal::kWidgetInputHandler_CursorVisibilityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::CursorVisibilityChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_visible{};
      WidgetInputHandler_CursorVisibilityChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::CursorVisibilityChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CursorVisibilityChanged(
std::move(p_visible));
      return true;
    }
    case internal::kWidgetInputHandler_ImeSetComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeSetComposition",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_ImeSetComposition_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_ImeSetComposition_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_text{};
      std::vector<ui::ImeTextSpan> p_ime_text_spans{};
      gfx::Range p_range{};
      int32_t p_start{};
      int32_t p_end{};
      WidgetInputHandler_ImeSetComposition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!input_data_view.ReadImeTextSpans(&p_ime_text_spans))
        success = false;
      if (!input_data_view.ReadRange(&p_range))
        success = false;
      p_start = input_data_view.start();
      p_end = input_data_view.end();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::ImeSetComposition deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImeSetComposition(
std::move(p_text), 
std::move(p_ime_text_spans), 
std::move(p_range), 
std::move(p_start), 
std::move(p_end));
      return true;
    }
    case internal::kWidgetInputHandler_ImeCommitText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeCommitText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_ImeCommitText_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_ImeCommitText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_text{};
      std::vector<ui::ImeTextSpan> p_ime_text_spans{};
      gfx::Range p_range{};
      int32_t p_relative_cursor_position{};
      WidgetInputHandler_ImeCommitText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!input_data_view.ReadImeTextSpans(&p_ime_text_spans))
        success = false;
      if (!input_data_view.ReadRange(&p_range))
        success = false;
      p_relative_cursor_position = input_data_view.relative_cursor_position();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::ImeCommitText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImeCommitText(
std::move(p_text), 
std::move(p_ime_text_spans), 
std::move(p_range), 
std::move(p_relative_cursor_position));
      return true;
    }
    case internal::kWidgetInputHandler_ImeFinishComposingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeFinishComposingText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_ImeFinishComposingText_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_ImeFinishComposingText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_keep_selection{};
      WidgetInputHandler_ImeFinishComposingText_ParamsDataView input_data_view(params, &serialization_context);
      
      p_keep_selection = input_data_view.keep_selection();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::ImeFinishComposingText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImeFinishComposingText(
std::move(p_keep_selection));
      return true;
    }
    case internal::kWidgetInputHandler_RequestTextInputStateUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::RequestTextInputStateUpdate",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandler_RequestTextInputStateUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::RequestTextInputStateUpdate deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestTextInputStateUpdate();
      return true;
    }
    case internal::kWidgetInputHandler_RequestCompositionUpdates_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::RequestCompositionUpdates",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_immediate_request{};
      bool p_monitor_request{};
      WidgetInputHandler_RequestCompositionUpdates_ParamsDataView input_data_view(params, &serialization_context);
      
      p_immediate_request = input_data_view.immediate_request();
      p_monitor_request = input_data_view.monitor_request();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::RequestCompositionUpdates deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestCompositionUpdates(
std::move(p_immediate_request), 
std::move(p_monitor_request));
      return true;
    }
    case internal::kWidgetInputHandler_DispatchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::DispatchEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_DispatchNonBlockingEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::DispatchNonBlockingEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<content::InputEvent> p_event{};
      WidgetInputHandler_DispatchNonBlockingEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::DispatchNonBlockingEvent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchNonBlockingEvent(
std::move(p_event));
      return true;
    }
    case internal::kWidgetInputHandler_AttachSynchronousCompositor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::AttachSynchronousCompositor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data* params =
          reinterpret_cast<internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::SynchronousCompositorControlHostPtr p_control_host{};
      ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo p_host{};
      ::content::mojom::SynchronousCompositorAssociatedRequest p_compositor_request{};
      WidgetInputHandler_AttachSynchronousCompositor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_control_host =
          input_data_view.TakeControlHost<decltype(p_control_host)>();
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      p_compositor_request =
          input_data_view.TakeCompositorRequest<decltype(p_compositor_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::AttachSynchronousCompositor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AttachSynchronousCompositor(
std::move(p_control_host), 
std::move(p_host), 
std::move(p_compositor_request));
      return true;
    }
  }
  return false;
}

// static
bool WidgetInputHandlerStubDispatch::AcceptWithResponder(
    WidgetInputHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWidgetInputHandler_SetFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::SetFocus",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_MouseCaptureLost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::MouseCaptureLost",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::SetEditCommandsForNextKeyEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_CursorVisibilityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::CursorVisibilityChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_ImeSetComposition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeSetComposition",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_ImeCommitText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeCommitText",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_ImeFinishComposingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::ImeFinishComposingText",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_RequestTextInputStateUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::RequestTextInputStateUpdate",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_RequestCompositionUpdates_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::RequestCompositionUpdates",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_DispatchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::DispatchEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WidgetInputHandler_DispatchEvent_Params_Data* params =
          reinterpret_cast<
              internal::WidgetInputHandler_DispatchEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<content::InputEvent> p_event{};
      WidgetInputHandler_DispatchEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WidgetInputHandler::DispatchEvent deserializer");
        return false;
      }
      WidgetInputHandler::DispatchEventCallback callback =
          WidgetInputHandler_DispatchEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchEvent(
std::move(p_event), std::move(callback));
      return true;
    }
    case internal::kWidgetInputHandler_DispatchNonBlockingEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::DispatchNonBlockingEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWidgetInputHandler_AttachSynchronousCompositor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::WidgetInputHandler::AttachSynchronousCompositor",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WidgetInputHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WidgetInputHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kWidgetInputHandler_SetFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_SetFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_MouseCaptureLost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_MouseCaptureLost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_SetEditCommandsForNextKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_SetEditCommandsForNextKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_CursorVisibilityChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_CursorVisibilityChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_ImeSetComposition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_ImeSetComposition_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_ImeCommitText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_ImeCommitText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_ImeFinishComposingText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_ImeFinishComposingText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_RequestTextInputStateUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_RequestTextInputStateUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_RequestCompositionUpdates_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_RequestCompositionUpdates_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_DispatchEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_DispatchEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_DispatchNonBlockingEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_DispatchNonBlockingEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWidgetInputHandler_AttachSynchronousCompositor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_AttachSynchronousCompositor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool WidgetInputHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WidgetInputHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWidgetInputHandler_DispatchEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WidgetInputHandler_DispatchEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void WidgetInputHandlerInterceptorForTesting::SetFocus(bool focused) {
  GetForwardingInterface()->SetFocus(std::move(focused));
}
void WidgetInputHandlerInterceptorForTesting::MouseCaptureLost() {
  GetForwardingInterface()->MouseCaptureLost();
}
void WidgetInputHandlerInterceptorForTesting::SetEditCommandsForNextKeyEvent(const std::vector<content::EditCommand>& commands) {
  GetForwardingInterface()->SetEditCommandsForNextKeyEvent(std::move(commands));
}
void WidgetInputHandlerInterceptorForTesting::CursorVisibilityChanged(bool visible) {
  GetForwardingInterface()->CursorVisibilityChanged(std::move(visible));
}
void WidgetInputHandlerInterceptorForTesting::ImeSetComposition(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t start, int32_t end) {
  GetForwardingInterface()->ImeSetComposition(std::move(text), std::move(ime_text_spans), std::move(range), std::move(start), std::move(end));
}
void WidgetInputHandlerInterceptorForTesting::ImeCommitText(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t relative_cursor_position) {
  GetForwardingInterface()->ImeCommitText(std::move(text), std::move(ime_text_spans), std::move(range), std::move(relative_cursor_position));
}
void WidgetInputHandlerInterceptorForTesting::ImeFinishComposingText(bool keep_selection) {
  GetForwardingInterface()->ImeFinishComposingText(std::move(keep_selection));
}
void WidgetInputHandlerInterceptorForTesting::RequestTextInputStateUpdate() {
  GetForwardingInterface()->RequestTextInputStateUpdate();
}
void WidgetInputHandlerInterceptorForTesting::RequestCompositionUpdates(bool immediate_request, bool monitor_request) {
  GetForwardingInterface()->RequestCompositionUpdates(std::move(immediate_request), std::move(monitor_request));
}
void WidgetInputHandlerInterceptorForTesting::DispatchEvent(std::unique_ptr<content::InputEvent> event, DispatchEventCallback callback) {
  GetForwardingInterface()->DispatchEvent(std::move(event), std::move(callback));
}
void WidgetInputHandlerInterceptorForTesting::DispatchNonBlockingEvent(std::unique_ptr<content::InputEvent> event) {
  GetForwardingInterface()->DispatchNonBlockingEvent(std::move(event));
}
void WidgetInputHandlerInterceptorForTesting::AttachSynchronousCompositor(::content::mojom::SynchronousCompositorControlHostPtr control_host, ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo host, ::content::mojom::SynchronousCompositorAssociatedRequest compositor_request) {
  GetForwardingInterface()->AttachSynchronousCompositor(std::move(control_host), std::move(host), std::move(compositor_request));
}
WidgetInputHandlerAsyncWaiter::WidgetInputHandlerAsyncWaiter(
    WidgetInputHandler* proxy) : proxy_(proxy) {}

WidgetInputHandlerAsyncWaiter::~WidgetInputHandlerAsyncWaiter() = default;

void WidgetInputHandlerAsyncWaiter::DispatchEvent(
    std::unique_ptr<content::InputEvent> event, content::InputEventAckSource* out_source, ui::LatencyInfo* out_updated_latency, content::InputEventAckState* out_state, base::Optional<ui::DidOverscrollParams>* out_overscroll, base::Optional<cc::TouchAction>* out_touch_action) {
  base::RunLoop loop;
  proxy_->DispatchEvent(std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             content::InputEventAckSource* out_source
,
             ui::LatencyInfo* out_updated_latency
,
             content::InputEventAckState* out_state
,
             base::Optional<ui::DidOverscrollParams>* out_overscroll
,
             base::Optional<cc::TouchAction>* out_touch_action
,
             content::InputEventAckSource source,
             const ui::LatencyInfo& updated_latency,
             content::InputEventAckState state,
             const base::Optional<ui::DidOverscrollParams>& overscroll,
             const base::Optional<cc::TouchAction>& touch_action) {*out_source = std::move(source);*out_updated_latency = std::move(updated_latency);*out_state = std::move(state);*out_overscroll = std::move(overscroll);*out_touch_action = std::move(touch_action);
            loop->Quit();
          },
          &loop,
          out_source,
          out_updated_latency,
          out_state,
          out_overscroll,
          out_touch_action));
  loop.Run();
}

const char FrameInputHandler::Name_[] = "content.mojom.FrameInputHandler";

FrameInputHandlerProxy::FrameInputHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameInputHandlerProxy::SetCompositionFromExistingText(
    int32_t in_start, int32_t in_end, const std::vector<ui::ImeTextSpan>& in_ime_text_spans) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::SetCompositionFromExistingText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_SetCompositionFromExistingText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->start = in_start;
  params->end = in_end;
  typename decltype(params->ime_text_spans)::BaseType::BufferWriter
      ime_text_spans_writer;
  const mojo::internal::ContainerValidateParams ime_text_spans_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::ImeTextSpanDataView>>(
      in_ime_text_spans, buffer, &ime_text_spans_writer, &ime_text_spans_validate_params,
      &serialization_context);
  params->ime_text_spans.Set(
      ime_text_spans_writer.is_null() ? nullptr : ime_text_spans_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ime_text_spans.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ime_text_spans in FrameInputHandler.SetCompositionFromExistingText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::ExtendSelectionAndDelete(
    int32_t in_before, int32_t in_after) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::ExtendSelectionAndDelete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_ExtendSelectionAndDelete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->before = in_before;
  params->after = in_after;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::DeleteSurroundingText(
    int32_t in_before, int32_t in_after) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::DeleteSurroundingText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_DeleteSurroundingText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_DeleteSurroundingText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->before = in_before;
  params->after = in_after;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::DeleteSurroundingTextInCodePoints(
    int32_t in_before, int32_t in_after) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::DeleteSurroundingTextInCodePoints");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->before = in_before;
  params->after = in_after;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::SetEditableSelectionOffsets(
    int32_t in_start, int32_t in_end) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::SetEditableSelectionOffsets");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_SetEditableSelectionOffsets_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->start = in_start;
  params->end = in_end;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::ExecuteEditCommand(
    const std::string& in_command, const base::Optional<base::string16>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::ExecuteEditCommand");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_ExecuteEditCommand_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_ExecuteEditCommand_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->command)::BaseType::BufferWriter
      command_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_command, buffer, &command_writer, &serialization_context);
  params->command.Set(
      command_writer.is_null() ? nullptr : command_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->command.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null command in FrameInputHandler.ExecuteEditCommand request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Undo(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Undo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Undo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Undo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Redo(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Redo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Redo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Redo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Cut(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Cut");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Cut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Cut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Copy(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Copy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Copy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Copy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::CopyToFindPboard(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::CopyToFindPboard");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_CopyToFindPboard_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_CopyToFindPboard_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Paste(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Paste");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Paste_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Paste_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::PasteAndMatchStyle(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::PasteAndMatchStyle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_PasteAndMatchStyle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_PasteAndMatchStyle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Delete(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Delete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::SelectAll(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::SelectAll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_SelectAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_SelectAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::CollapseSelection(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::CollapseSelection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_CollapseSelection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_CollapseSelection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::Replace(
    const base::string16& in_word) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::Replace");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_Replace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_Replace_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->word)::BaseType::BufferWriter
      word_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_word, buffer, &word_writer, &serialization_context);
  params->word.Set(
      word_writer.is_null() ? nullptr : word_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->word.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null word in FrameInputHandler.Replace request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::ReplaceMisspelling(
    const base::string16& in_word) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::ReplaceMisspelling");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_ReplaceMisspelling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_ReplaceMisspelling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->word)::BaseType::BufferWriter
      word_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_word, buffer, &word_writer, &serialization_context);
  params->word.Set(
      word_writer.is_null() ? nullptr : word_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->word.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null word in FrameInputHandler.ReplaceMisspelling request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::SelectRange(
    const gfx::Point& in_base, const gfx::Point& in_extent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::SelectRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_SelectRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_SelectRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->base)::BaseType::BufferWriter
      base_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_base, buffer, &base_writer, &serialization_context);
  params->base.Set(
      base_writer.is_null() ? nullptr : base_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->base.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null base in FrameInputHandler.SelectRange request");
  typename decltype(params->extent)::BaseType::BufferWriter
      extent_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_extent, buffer, &extent_writer, &serialization_context);
  params->extent.Set(
      extent_writer.is_null() ? nullptr : extent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extent in FrameInputHandler.SelectRange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::AdjustSelectionByCharacterOffset(
    int32_t in_start, int32_t in_end, ::blink::mojom::SelectionMenuBehavior in_behavior) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::AdjustSelectionByCharacterOffset");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_AdjustSelectionByCharacterOffset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->start = in_start;
  params->end = in_end;
  mojo::internal::Serialize<::blink::mojom::SelectionMenuBehavior>(
      in_behavior, &params->behavior);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::MoveRangeSelectionExtent(
    const gfx::Point& in_extent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::MoveRangeSelectionExtent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_MoveRangeSelectionExtent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->extent)::BaseType::BufferWriter
      extent_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_extent, buffer, &extent_writer, &serialization_context);
  params->extent.Set(
      extent_writer.is_null() ? nullptr : extent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extent in FrameInputHandler.MoveRangeSelectionExtent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::ScrollFocusedEditableNodeIntoRect(
    const gfx::Rect& in_rect) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::ScrollFocusedEditableNodeIntoRect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rect)::BaseType::BufferWriter
      rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_rect, buffer, &rect_writer, &serialization_context);
  params->rect.Set(
      rect_writer.is_null() ? nullptr : rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rect in FrameInputHandler.ScrollFocusedEditableNodeIntoRect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::MoveCaret(
    const gfx::Point& in_point) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::MoveCaret");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_MoveCaret_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_MoveCaret_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in FrameInputHandler.MoveCaret request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameInputHandlerProxy::GetWidgetInputHandler(
    WidgetInputHandlerAssociatedRequest in_interface_request, WidgetInputHandlerHostPtr in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameInputHandler::GetWidgetInputHandler");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameInputHandler_GetWidgetInputHandler_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameInputHandler_GetWidgetInputHandler_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::WidgetInputHandlerAssociatedRequestDataView>(
      in_interface_request, &params->interface_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid interface_request in FrameInputHandler.GetWidgetInputHandler request");
  mojo::internal::Serialize<::content::mojom::WidgetInputHandlerHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in FrameInputHandler.GetWidgetInputHandler request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameInputHandlerStubDispatch::Accept(
    FrameInputHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameInputHandler_SetCompositionFromExistingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SetCompositionFromExistingText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_start{};
      int32_t p_end{};
      std::vector<ui::ImeTextSpan> p_ime_text_spans{};
      FrameInputHandler_SetCompositionFromExistingText_ParamsDataView input_data_view(params, &serialization_context);
      
      p_start = input_data_view.start();
      p_end = input_data_view.end();
      if (!input_data_view.ReadImeTextSpans(&p_ime_text_spans))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::SetCompositionFromExistingText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCompositionFromExistingText(
std::move(p_start), 
std::move(p_end), 
std::move(p_ime_text_spans));
      return true;
    }
    case internal::kFrameInputHandler_ExtendSelectionAndDelete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ExtendSelectionAndDelete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_before{};
      int32_t p_after{};
      FrameInputHandler_ExtendSelectionAndDelete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_before = input_data_view.before();
      p_after = input_data_view.after();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::ExtendSelectionAndDelete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ExtendSelectionAndDelete(
std::move(p_before), 
std::move(p_after));
      return true;
    }
    case internal::kFrameInputHandler_DeleteSurroundingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::DeleteSurroundingText",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_DeleteSurroundingText_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_DeleteSurroundingText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_before{};
      int32_t p_after{};
      FrameInputHandler_DeleteSurroundingText_ParamsDataView input_data_view(params, &serialization_context);
      
      p_before = input_data_view.before();
      p_after = input_data_view.after();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::DeleteSurroundingText deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteSurroundingText(
std::move(p_before), 
std::move(p_after));
      return true;
    }
    case internal::kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::DeleteSurroundingTextInCodePoints",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_before{};
      int32_t p_after{};
      FrameInputHandler_DeleteSurroundingTextInCodePoints_ParamsDataView input_data_view(params, &serialization_context);
      
      p_before = input_data_view.before();
      p_after = input_data_view.after();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::DeleteSurroundingTextInCodePoints deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteSurroundingTextInCodePoints(
std::move(p_before), 
std::move(p_after));
      return true;
    }
    case internal::kFrameInputHandler_SetEditableSelectionOffsets_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SetEditableSelectionOffsets",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_start{};
      int32_t p_end{};
      FrameInputHandler_SetEditableSelectionOffsets_ParamsDataView input_data_view(params, &serialization_context);
      
      p_start = input_data_view.start();
      p_end = input_data_view.end();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::SetEditableSelectionOffsets deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetEditableSelectionOffsets(
std::move(p_start), 
std::move(p_end));
      return true;
    }
    case internal::kFrameInputHandler_ExecuteEditCommand_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ExecuteEditCommand",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_ExecuteEditCommand_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_ExecuteEditCommand_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_command{};
      base::Optional<base::string16> p_value{};
      FrameInputHandler_ExecuteEditCommand_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCommand(&p_command))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::ExecuteEditCommand deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ExecuteEditCommand(
std::move(p_command), 
std::move(p_value));
      return true;
    }
    case internal::kFrameInputHandler_Undo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Undo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Undo_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Undo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Undo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Undo deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Undo();
      return true;
    }
    case internal::kFrameInputHandler_Redo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Redo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Redo_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Redo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Redo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Redo deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Redo();
      return true;
    }
    case internal::kFrameInputHandler_Cut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Cut",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Cut_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Cut_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Cut_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Cut deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Cut();
      return true;
    }
    case internal::kFrameInputHandler_Copy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Copy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Copy_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Copy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Copy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Copy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Copy();
      return true;
    }
    case internal::kFrameInputHandler_CopyToFindPboard_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::CopyToFindPboard",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_CopyToFindPboard_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_CopyToFindPboard_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_CopyToFindPboard_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::CopyToFindPboard deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CopyToFindPboard();
      return true;
    }
    case internal::kFrameInputHandler_Paste_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Paste",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Paste_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Paste_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Paste_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Paste deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Paste();
      return true;
    }
    case internal::kFrameInputHandler_PasteAndMatchStyle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::PasteAndMatchStyle",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_PasteAndMatchStyle_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_PasteAndMatchStyle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_PasteAndMatchStyle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::PasteAndMatchStyle deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasteAndMatchStyle();
      return true;
    }
    case internal::kFrameInputHandler_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Delete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Delete_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Delete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Delete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Delete();
      return true;
    }
    case internal::kFrameInputHandler_SelectAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SelectAll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_SelectAll_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_SelectAll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_SelectAll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::SelectAll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectAll();
      return true;
    }
    case internal::kFrameInputHandler_CollapseSelection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::CollapseSelection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_CollapseSelection_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_CollapseSelection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameInputHandler_CollapseSelection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::CollapseSelection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CollapseSelection();
      return true;
    }
    case internal::kFrameInputHandler_Replace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Replace",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_Replace_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_Replace_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_word{};
      FrameInputHandler_Replace_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWord(&p_word))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::Replace deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Replace(
std::move(p_word));
      return true;
    }
    case internal::kFrameInputHandler_ReplaceMisspelling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ReplaceMisspelling",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_ReplaceMisspelling_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_ReplaceMisspelling_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_word{};
      FrameInputHandler_ReplaceMisspelling_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWord(&p_word))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::ReplaceMisspelling deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReplaceMisspelling(
std::move(p_word));
      return true;
    }
    case internal::kFrameInputHandler_SelectRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SelectRange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_SelectRange_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_SelectRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_base{};
      gfx::Point p_extent{};
      FrameInputHandler_SelectRange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBase(&p_base))
        success = false;
      if (!input_data_view.ReadExtent(&p_extent))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::SelectRange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SelectRange(
std::move(p_base), 
std::move(p_extent));
      return true;
    }
    case internal::kFrameInputHandler_AdjustSelectionByCharacterOffset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::AdjustSelectionByCharacterOffset",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_start{};
      int32_t p_end{};
      ::blink::mojom::SelectionMenuBehavior p_behavior{};
      FrameInputHandler_AdjustSelectionByCharacterOffset_ParamsDataView input_data_view(params, &serialization_context);
      
      p_start = input_data_view.start();
      p_end = input_data_view.end();
      if (!input_data_view.ReadBehavior(&p_behavior))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::AdjustSelectionByCharacterOffset deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AdjustSelectionByCharacterOffset(
std::move(p_start), 
std::move(p_end), 
std::move(p_behavior));
      return true;
    }
    case internal::kFrameInputHandler_MoveRangeSelectionExtent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::MoveRangeSelectionExtent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_extent{};
      FrameInputHandler_MoveRangeSelectionExtent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadExtent(&p_extent))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::MoveRangeSelectionExtent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MoveRangeSelectionExtent(
std::move(p_extent));
      return true;
    }
    case internal::kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ScrollFocusedEditableNodeIntoRect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_rect{};
      FrameInputHandler_ScrollFocusedEditableNodeIntoRect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRect(&p_rect))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::ScrollFocusedEditableNodeIntoRect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ScrollFocusedEditableNodeIntoRect(
std::move(p_rect));
      return true;
    }
    case internal::kFrameInputHandler_MoveCaret_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::MoveCaret",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_MoveCaret_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_MoveCaret_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_point{};
      FrameInputHandler_MoveCaret_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::MoveCaret deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->MoveCaret(
std::move(p_point));
      return true;
    }
    case internal::kFrameInputHandler_GetWidgetInputHandler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::GetWidgetInputHandler",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameInputHandler_GetWidgetInputHandler_Params_Data* params =
          reinterpret_cast<internal::FrameInputHandler_GetWidgetInputHandler_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WidgetInputHandlerAssociatedRequest p_interface_request{};
      WidgetInputHandlerHostPtr p_host{};
      FrameInputHandler_GetWidgetInputHandler_ParamsDataView input_data_view(params, &serialization_context);
      
      p_interface_request =
          input_data_view.TakeInterfaceRequest<decltype(p_interface_request)>();
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameInputHandler::GetWidgetInputHandler deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWidgetInputHandler(
std::move(p_interface_request), 
std::move(p_host));
      return true;
    }
  }
  return false;
}

// static
bool FrameInputHandlerStubDispatch::AcceptWithResponder(
    FrameInputHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameInputHandler_SetCompositionFromExistingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SetCompositionFromExistingText",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_ExtendSelectionAndDelete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ExtendSelectionAndDelete",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_DeleteSurroundingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::DeleteSurroundingText",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::DeleteSurroundingTextInCodePoints",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_SetEditableSelectionOffsets_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SetEditableSelectionOffsets",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_ExecuteEditCommand_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ExecuteEditCommand",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Undo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Undo",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Redo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Redo",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Cut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Cut",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Copy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Copy",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_CopyToFindPboard_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::CopyToFindPboard",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Paste_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Paste",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_PasteAndMatchStyle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::PasteAndMatchStyle",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Delete",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_SelectAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SelectAll",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_CollapseSelection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::CollapseSelection",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_Replace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::Replace",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_ReplaceMisspelling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ReplaceMisspelling",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_SelectRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::SelectRange",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_AdjustSelectionByCharacterOffset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::AdjustSelectionByCharacterOffset",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_MoveRangeSelectionExtent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::MoveRangeSelectionExtent",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::ScrollFocusedEditableNodeIntoRect",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_MoveCaret_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::MoveCaret",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameInputHandler_GetWidgetInputHandler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameInputHandler::GetWidgetInputHandler",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameInputHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameInputHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameInputHandler_SetCompositionFromExistingText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_SetCompositionFromExistingText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_ExtendSelectionAndDelete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_ExtendSelectionAndDelete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_DeleteSurroundingText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_DeleteSurroundingText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_DeleteSurroundingTextInCodePoints_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_DeleteSurroundingTextInCodePoints_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_SetEditableSelectionOffsets_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_SetEditableSelectionOffsets_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_ExecuteEditCommand_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_ExecuteEditCommand_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Undo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Undo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Redo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Redo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Cut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Cut_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Copy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Copy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_CopyToFindPboard_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_CopyToFindPboard_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Paste_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Paste_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_PasteAndMatchStyle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_PasteAndMatchStyle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_SelectAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_SelectAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_CollapseSelection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_CollapseSelection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_Replace_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_Replace_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_ReplaceMisspelling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_ReplaceMisspelling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_SelectRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_SelectRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_AdjustSelectionByCharacterOffset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_AdjustSelectionByCharacterOffset_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_MoveRangeSelectionExtent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_MoveRangeSelectionExtent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_ScrollFocusedEditableNodeIntoRect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_ScrollFocusedEditableNodeIntoRect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_MoveCaret_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_MoveCaret_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameInputHandler_GetWidgetInputHandler_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameInputHandler_GetWidgetInputHandler_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

void FrameInputHandlerInterceptorForTesting::SetCompositionFromExistingText(int32_t start, int32_t end, const std::vector<ui::ImeTextSpan>& ime_text_spans) {
  GetForwardingInterface()->SetCompositionFromExistingText(std::move(start), std::move(end), std::move(ime_text_spans));
}
void FrameInputHandlerInterceptorForTesting::ExtendSelectionAndDelete(int32_t before, int32_t after) {
  GetForwardingInterface()->ExtendSelectionAndDelete(std::move(before), std::move(after));
}
void FrameInputHandlerInterceptorForTesting::DeleteSurroundingText(int32_t before, int32_t after) {
  GetForwardingInterface()->DeleteSurroundingText(std::move(before), std::move(after));
}
void FrameInputHandlerInterceptorForTesting::DeleteSurroundingTextInCodePoints(int32_t before, int32_t after) {
  GetForwardingInterface()->DeleteSurroundingTextInCodePoints(std::move(before), std::move(after));
}
void FrameInputHandlerInterceptorForTesting::SetEditableSelectionOffsets(int32_t start, int32_t end) {
  GetForwardingInterface()->SetEditableSelectionOffsets(std::move(start), std::move(end));
}
void FrameInputHandlerInterceptorForTesting::ExecuteEditCommand(const std::string& command, const base::Optional<base::string16>& value) {
  GetForwardingInterface()->ExecuteEditCommand(std::move(command), std::move(value));
}
void FrameInputHandlerInterceptorForTesting::Undo() {
  GetForwardingInterface()->Undo();
}
void FrameInputHandlerInterceptorForTesting::Redo() {
  GetForwardingInterface()->Redo();
}
void FrameInputHandlerInterceptorForTesting::Cut() {
  GetForwardingInterface()->Cut();
}
void FrameInputHandlerInterceptorForTesting::Copy() {
  GetForwardingInterface()->Copy();
}
void FrameInputHandlerInterceptorForTesting::CopyToFindPboard() {
  GetForwardingInterface()->CopyToFindPboard();
}
void FrameInputHandlerInterceptorForTesting::Paste() {
  GetForwardingInterface()->Paste();
}
void FrameInputHandlerInterceptorForTesting::PasteAndMatchStyle() {
  GetForwardingInterface()->PasteAndMatchStyle();
}
void FrameInputHandlerInterceptorForTesting::Delete() {
  GetForwardingInterface()->Delete();
}
void FrameInputHandlerInterceptorForTesting::SelectAll() {
  GetForwardingInterface()->SelectAll();
}
void FrameInputHandlerInterceptorForTesting::CollapseSelection() {
  GetForwardingInterface()->CollapseSelection();
}
void FrameInputHandlerInterceptorForTesting::Replace(const base::string16& word) {
  GetForwardingInterface()->Replace(std::move(word));
}
void FrameInputHandlerInterceptorForTesting::ReplaceMisspelling(const base::string16& word) {
  GetForwardingInterface()->ReplaceMisspelling(std::move(word));
}
void FrameInputHandlerInterceptorForTesting::SelectRange(const gfx::Point& base, const gfx::Point& extent) {
  GetForwardingInterface()->SelectRange(std::move(base), std::move(extent));
}
void FrameInputHandlerInterceptorForTesting::AdjustSelectionByCharacterOffset(int32_t start, int32_t end, ::blink::mojom::SelectionMenuBehavior behavior) {
  GetForwardingInterface()->AdjustSelectionByCharacterOffset(std::move(start), std::move(end), std::move(behavior));
}
void FrameInputHandlerInterceptorForTesting::MoveRangeSelectionExtent(const gfx::Point& extent) {
  GetForwardingInterface()->MoveRangeSelectionExtent(std::move(extent));
}
void FrameInputHandlerInterceptorForTesting::ScrollFocusedEditableNodeIntoRect(const gfx::Rect& rect) {
  GetForwardingInterface()->ScrollFocusedEditableNodeIntoRect(std::move(rect));
}
void FrameInputHandlerInterceptorForTesting::MoveCaret(const gfx::Point& point) {
  GetForwardingInterface()->MoveCaret(std::move(point));
}
void FrameInputHandlerInterceptorForTesting::GetWidgetInputHandler(WidgetInputHandlerAssociatedRequest interface_request, WidgetInputHandlerHostPtr host) {
  GetForwardingInterface()->GetWidgetInputHandler(std::move(interface_request), std::move(host));
}
FrameInputHandlerAsyncWaiter::FrameInputHandlerAsyncWaiter(
    FrameInputHandler* proxy) : proxy_(proxy) {}

FrameInputHandlerAsyncWaiter::~FrameInputHandlerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::KeyData::DataView, ::content::mojom::KeyDataPtr>::Read(
    ::content::mojom::KeyData::DataView input,
    ::content::mojom::KeyDataPtr* output) {
  bool success = true;
  ::content::mojom::KeyDataPtr result(::content::mojom::KeyData::New());
  
      result->dom_key = input.dom_key();
      result->dom_code = input.dom_code();
      result->windows_key_code = input.windows_key_code();
      result->native_key_code = input.native_key_code();
      result->is_system_key = input.is_system_key();
      result->is_browser_shortcut = input.is_browser_shortcut();
      if (!input.ReadText(&result->text))
        success = false;
      if (!input.ReadUnmodifiedText(&result->unmodified_text))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::PointerData::DataView, ::content::mojom::PointerDataPtr>::Read(
    ::content::mojom::PointerData::DataView input,
    ::content::mojom::PointerDataPtr* output) {
  bool success = true;
  ::content::mojom::PointerDataPtr result(::content::mojom::PointerData::New());
  
      result->pointer_id = input.pointer_id();
      result->force = input.force();
      result->tilt_x = input.tilt_x();
      result->tilt_y = input.tilt_y();
      result->tangential_pressure = input.tangential_pressure();
      result->twist = input.twist();
      if (!input.ReadButton(&result->button))
        success = false;
      if (!input.ReadPointerType(&result->pointer_type))
        success = false;
      result->movement_x = input.movement_x();
      result->movement_y = input.movement_y();
      if (!input.ReadWidgetPosition(&result->widget_position))
        success = false;
      if (!input.ReadScreenPosition(&result->screen_position))
        success = false;
      if (!input.ReadMouseData(&result->mouse_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::WheelData::DataView, ::content::mojom::WheelDataPtr>::Read(
    ::content::mojom::WheelData::DataView input,
    ::content::mojom::WheelDataPtr* output) {
  bool success = true;
  ::content::mojom::WheelDataPtr result(::content::mojom::WheelData::New());
  
      result->delta_x = input.delta_x();
      result->delta_y = input.delta_y();
      result->wheel_ticks_x = input.wheel_ticks_x();
      result->wheel_ticks_y = input.wheel_ticks_y();
      result->acceleration_ratio_x = input.acceleration_ratio_x();
      result->acceleration_ratio_y = input.acceleration_ratio_y();
      result->resending_plugin_id = input.resending_plugin_id();
      result->phase = input.phase();
      result->momentum_phase = input.momentum_phase();
      result->scroll_by_page = input.scroll_by_page();
      result->has_precise_scrolling_deltas = input.has_precise_scrolling_deltas();
      if (!input.ReadCancelable(&result->cancelable))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::MouseData::DataView, ::content::mojom::MouseDataPtr>::Read(
    ::content::mojom::MouseData::DataView input,
    ::content::mojom::MouseDataPtr* output) {
  bool success = true;
  ::content::mojom::MouseDataPtr result(::content::mojom::MouseData::New());
  
      result->click_count = input.click_count();
      if (!input.ReadWheelData(&result->wheel_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ScrollUpdate::DataView, ::content::mojom::ScrollUpdatePtr>::Read(
    ::content::mojom::ScrollUpdate::DataView input,
    ::content::mojom::ScrollUpdatePtr* output) {
  bool success = true;
  ::content::mojom::ScrollUpdatePtr result(::content::mojom::ScrollUpdate::New());
  
      result->velocity_x = input.velocity_x();
      result->velocity_y = input.velocity_y();
      result->previous_update_in_sequence_prevented = input.previous_update_in_sequence_prevented();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ScrollData::DataView, ::content::mojom::ScrollDataPtr>::Read(
    ::content::mojom::ScrollData::DataView input,
    ::content::mojom::ScrollDataPtr* output) {
  bool success = true;
  ::content::mojom::ScrollDataPtr result(::content::mojom::ScrollData::New());
  
      result->delta_x = input.delta_x();
      result->delta_y = input.delta_y();
      if (!input.ReadDeltaUnits(&result->delta_units))
        success = false;
      result->target_viewport = input.target_viewport();
      if (!input.ReadInertialPhase(&result->inertial_phase))
        success = false;
      result->synthetic = input.synthetic();
      result->pointer_count = input.pointer_count();
      if (!input.ReadUpdateDetails(&result->update_details))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::PinchData::DataView, ::content::mojom::PinchDataPtr>::Read(
    ::content::mojom::PinchData::DataView input,
    ::content::mojom::PinchDataPtr* output) {
  bool success = true;
  ::content::mojom::PinchDataPtr result(::content::mojom::PinchData::New());
  
      result->zoom_disabled = input.zoom_disabled();
      result->scale = input.scale();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::FlingData::DataView, ::content::mojom::FlingDataPtr>::Read(
    ::content::mojom::FlingData::DataView input,
    ::content::mojom::FlingDataPtr* output) {
  bool success = true;
  ::content::mojom::FlingDataPtr result(::content::mojom::FlingData::New());
  
      result->velocity_x = input.velocity_x();
      result->velocity_y = input.velocity_y();
      result->target_viewport = input.target_viewport();
      result->prevent_boosting = input.prevent_boosting();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::TapData::DataView, ::content::mojom::TapDataPtr>::Read(
    ::content::mojom::TapData::DataView input,
    ::content::mojom::TapDataPtr* output) {
  bool success = true;
  ::content::mojom::TapDataPtr result(::content::mojom::TapData::New());
  
      result->tap_count = input.tap_count();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::GestureData::DataView, ::content::mojom::GestureDataPtr>::Read(
    ::content::mojom::GestureData::DataView input,
    ::content::mojom::GestureDataPtr* output) {
  bool success = true;
  ::content::mojom::GestureDataPtr result(::content::mojom::GestureData::New());
  
      if (!input.ReadScreenPosition(&result->screen_position))
        success = false;
      if (!input.ReadWidgetPosition(&result->widget_position))
        success = false;
      if (!input.ReadSourceDevice(&result->source_device))
        success = false;
      result->is_source_touch_event_set_non_blocking = input.is_source_touch_event_set_non_blocking();
      if (!input.ReadPrimaryPointerType(&result->primary_pointer_type))
        success = false;
      result->unique_touch_event_id = input.unique_touch_event_id();
      result->resending_plugin_id = input.resending_plugin_id();
      if (!input.ReadContactSize(&result->contact_size))
        success = false;
      if (!input.ReadScrollData(&result->scroll_data))
        success = false;
      if (!input.ReadPinchData(&result->pinch_data))
        success = false;
      if (!input.ReadTapData(&result->tap_data))
        success = false;
      if (!input.ReadFlingData(&result->fling_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::TouchPoint::DataView, ::content::mojom::TouchPointPtr>::Read(
    ::content::mojom::TouchPoint::DataView input,
    ::content::mojom::TouchPointPtr* output) {
  bool success = true;
  ::content::mojom::TouchPointPtr result(::content::mojom::TouchPoint::New());
  
      if (!input.ReadState(&result->state))
        success = false;
      result->radius_x = input.radius_x();
      result->radius_y = input.radius_y();
      result->rotation_angle = input.rotation_angle();
      if (!input.ReadPointerData(&result->pointer_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::TouchData::DataView, ::content::mojom::TouchDataPtr>::Read(
    ::content::mojom::TouchData::DataView input,
    ::content::mojom::TouchDataPtr* output) {
  bool success = true;
  ::content::mojom::TouchDataPtr result(::content::mojom::TouchData::New());
  
      if (!input.ReadCancelable(&result->cancelable))
        success = false;
      result->moved_beyond_slop_region = input.moved_beyond_slop_region();
      result->touch_start_or_first_move = input.touch_start_or_first_move();
      result->hovering = input.hovering();
      result->unique_touch_event_id = input.unique_touch_event_id();
      if (!input.ReadTouches(&result->touches))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::Event::DataView, ::content::mojom::EventPtr>::Read(
    ::content::mojom::Event::DataView input,
    ::content::mojom::EventPtr* output) {
  bool success = true;
  ::content::mojom::EventPtr result(::content::mojom::Event::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->modifiers = input.modifiers();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadLatency(&result->latency))
        success = false;
      if (!input.ReadKeyData(&result->key_data))
        success = false;
      if (!input.ReadPointerData(&result->pointer_data))
        success = false;
      if (!input.ReadGestureData(&result->gesture_data))
        success = false;
      if (!input.ReadTouchData(&result->touch_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::TouchActionOptional::DataView, ::content::mojom::TouchActionOptionalPtr>::Read(
    ::content::mojom::TouchActionOptional::DataView input,
    ::content::mojom::TouchActionOptionalPtr* output) {
  bool success = true;
  ::content::mojom::TouchActionOptionalPtr result(::content::mojom::TouchActionOptional::New());
  
      if (!input.ReadTouchAction(&result->touch_action))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif