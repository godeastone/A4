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

#include "ui/events/mojo/event.mojom.h"

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

#include "ui/events/mojo/event.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace ui {
namespace mojom {
KeyData::KeyData()
    : key_code(),
      is_char(),
      character(),
      windows_key_code(),
      native_key_code(),
      text(),
      unmodified_text(),
      properties() {}

KeyData::KeyData(
    int32_t key_code_in,
    bool is_char_in,
    uint16_t character_in,
    ::ui::mojom::KeyboardCode windows_key_code_in,
    int32_t native_key_code_in,
    uint16_t text_in,
    uint16_t unmodified_text_in,
    const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties_in)
    : key_code(std::move(key_code_in)),
      is_char(std::move(is_char_in)),
      character(std::move(character_in)),
      windows_key_code(std::move(windows_key_code_in)),
      native_key_code(std::move(native_key_code_in)),
      text(std::move(text_in)),
      unmodified_text(std::move(unmodified_text_in)),
      properties(std::move(properties_in)) {}

KeyData::~KeyData() = default;

bool KeyData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
LocationData::LocationData()
    : x(),
      y(),
      screen_x(),
      screen_y() {}

LocationData::LocationData(
    float x_in,
    float y_in,
    float screen_x_in,
    float screen_y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      screen_x(std::move(screen_x_in)),
      screen_y(std::move(screen_y_in)) {}

LocationData::~LocationData() = default;
size_t LocationData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->y);
  seed = mojo::internal::Hash(seed, this->screen_x);
  seed = mojo::internal::Hash(seed, this->screen_y);
  return seed;
}

bool LocationData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointerData::PointerData()
    : pointer_id(),
      changed_button_flags(),
      kind(),
      location(),
      brush_data(),
      wheel_data() {}

PointerData::PointerData(
    int32_t pointer_id_in,
    int32_t changed_button_flags_in,
    ::ui::mojom::PointerKind kind_in,
    LocationDataPtr location_in,
    BrushDataPtr brush_data_in,
    WheelDataPtr wheel_data_in)
    : pointer_id(std::move(pointer_id_in)),
      changed_button_flags(std::move(changed_button_flags_in)),
      kind(std::move(kind_in)),
      location(std::move(location_in)),
      brush_data(std::move(brush_data_in)),
      wheel_data(std::move(wheel_data_in)) {}

PointerData::~PointerData() = default;

bool PointerData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WheelData::WheelData()
    : mode(),
      delta_x(),
      delta_y(),
      delta_z() {}

WheelData::WheelData(
    ::ui::mojom::WheelMode mode_in,
    float delta_x_in,
    float delta_y_in,
    float delta_z_in)
    : mode(std::move(mode_in)),
      delta_x(std::move(delta_x_in)),
      delta_y(std::move(delta_y_in)),
      delta_z(std::move(delta_z_in)) {}

WheelData::~WheelData() = default;
size_t WheelData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->mode);
  seed = mojo::internal::Hash(seed, this->delta_x);
  seed = mojo::internal::Hash(seed, this->delta_y);
  seed = mojo::internal::Hash(seed, this->delta_z);
  return seed;
}

bool WheelData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BrushData::BrushData()
    : width(),
      height(),
      pressure(),
      tilt_x(),
      tilt_y(),
      tangential_pressure(),
      twist() {}

BrushData::BrushData(
    float width_in,
    float height_in,
    float pressure_in,
    float tilt_x_in,
    float tilt_y_in,
    float tangential_pressure_in,
    int32_t twist_in)
    : width(std::move(width_in)),
      height(std::move(height_in)),
      pressure(std::move(pressure_in)),
      tilt_x(std::move(tilt_x_in)),
      tilt_y(std::move(tilt_y_in)),
      tangential_pressure(std::move(tangential_pressure_in)),
      twist(std::move(twist_in)) {}

BrushData::~BrushData() = default;
size_t BrushData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->height);
  seed = mojo::internal::Hash(seed, this->pressure);
  seed = mojo::internal::Hash(seed, this->tilt_x);
  seed = mojo::internal::Hash(seed, this->tilt_y);
  seed = mojo::internal::Hash(seed, this->tangential_pressure);
  seed = mojo::internal::Hash(seed, this->twist);
  return seed;
}

bool BrushData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GestureData::GestureData()
    : location() {}

GestureData::GestureData(
    LocationDataPtr location_in)
    : location(std::move(location_in)) {}

GestureData::~GestureData() = default;
size_t GestureData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->location);
  return seed;
}

bool GestureData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScrollData::ScrollData()
    : location(),
      x_offset(),
      y_offset(),
      x_offset_ordinal(),
      y_offset_ordinal(),
      finger_count(),
      momentum_phase(),
      scroll_event_phase() {}

ScrollData::ScrollData(
    LocationDataPtr location_in,
    float x_offset_in,
    float y_offset_in,
    float x_offset_ordinal_in,
    float y_offset_ordinal_in,
    int32_t finger_count_in,
    ui::EventMomentumPhase momentum_phase_in,
    ui::ScrollEventPhase scroll_event_phase_in)
    : location(std::move(location_in)),
      x_offset(std::move(x_offset_in)),
      y_offset(std::move(y_offset_in)),
      x_offset_ordinal(std::move(x_offset_ordinal_in)),
      y_offset_ordinal(std::move(y_offset_ordinal_in)),
      finger_count(std::move(finger_count_in)),
      momentum_phase(std::move(momentum_phase_in)),
      scroll_event_phase(std::move(scroll_event_phase_in)) {}

ScrollData::~ScrollData() = default;

bool ScrollData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Event::Event()
    : action(),
      flags(),
      time_stamp(),
      latency(),
      key_data(),
      pointer_data(),
      gesture_data(),
      scroll_data() {}

Event::Event(
    ::ui::mojom::EventType action_in,
    int32_t flags_in,
    base::TimeTicks time_stamp_in,
    const ui::LatencyInfo& latency_in,
    KeyDataPtr key_data_in,
    PointerDataPtr pointer_data_in,
    GestureDataPtr gesture_data_in,
    ScrollDataPtr scroll_data_in)
    : action(std::move(action_in)),
      flags(std::move(flags_in)),
      time_stamp(std::move(time_stamp_in)),
      latency(std::move(latency_in)),
      key_data(std::move(key_data_in)),
      pointer_data(std::move(pointer_data_in)),
      gesture_data(std::move(gesture_data_in)),
      scroll_data(std::move(scroll_data_in)) {}

Event::~Event() = default;

bool Event::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::KeyData::DataView, ::ui::mojom::KeyDataPtr>::Read(
    ::ui::mojom::KeyData::DataView input,
    ::ui::mojom::KeyDataPtr* output) {
  bool success = true;
  ::ui::mojom::KeyDataPtr result(::ui::mojom::KeyData::New());
  
      result->key_code = input.key_code();
      result->is_char = input.is_char();
      result->character = input.character();
      if (!input.ReadWindowsKeyCode(&result->windows_key_code))
        success = false;
      result->native_key_code = input.native_key_code();
      result->text = input.text();
      result->unmodified_text = input.unmodified_text();
      if (!input.ReadProperties(&result->properties))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::LocationData::DataView, ::ui::mojom::LocationDataPtr>::Read(
    ::ui::mojom::LocationData::DataView input,
    ::ui::mojom::LocationDataPtr* output) {
  bool success = true;
  ::ui::mojom::LocationDataPtr result(::ui::mojom::LocationData::New());
  
      result->x = input.x();
      result->y = input.y();
      result->screen_x = input.screen_x();
      result->screen_y = input.screen_y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::PointerData::DataView, ::ui::mojom::PointerDataPtr>::Read(
    ::ui::mojom::PointerData::DataView input,
    ::ui::mojom::PointerDataPtr* output) {
  bool success = true;
  ::ui::mojom::PointerDataPtr result(::ui::mojom::PointerData::New());
  
      result->pointer_id = input.pointer_id();
      result->changed_button_flags = input.changed_button_flags();
      if (!input.ReadKind(&result->kind))
        success = false;
      if (!input.ReadLocation(&result->location))
        success = false;
      if (!input.ReadBrushData(&result->brush_data))
        success = false;
      if (!input.ReadWheelData(&result->wheel_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::WheelData::DataView, ::ui::mojom::WheelDataPtr>::Read(
    ::ui::mojom::WheelData::DataView input,
    ::ui::mojom::WheelDataPtr* output) {
  bool success = true;
  ::ui::mojom::WheelDataPtr result(::ui::mojom::WheelData::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      result->delta_x = input.delta_x();
      result->delta_y = input.delta_y();
      result->delta_z = input.delta_z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::BrushData::DataView, ::ui::mojom::BrushDataPtr>::Read(
    ::ui::mojom::BrushData::DataView input,
    ::ui::mojom::BrushDataPtr* output) {
  bool success = true;
  ::ui::mojom::BrushDataPtr result(::ui::mojom::BrushData::New());
  
      result->width = input.width();
      result->height = input.height();
      result->pressure = input.pressure();
      result->tilt_x = input.tilt_x();
      result->tilt_y = input.tilt_y();
      result->tangential_pressure = input.tangential_pressure();
      result->twist = input.twist();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::GestureData::DataView, ::ui::mojom::GestureDataPtr>::Read(
    ::ui::mojom::GestureData::DataView input,
    ::ui::mojom::GestureDataPtr* output) {
  bool success = true;
  ::ui::mojom::GestureDataPtr result(::ui::mojom::GestureData::New());
  
      if (!input.ReadLocation(&result->location))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::ScrollData::DataView, ::ui::mojom::ScrollDataPtr>::Read(
    ::ui::mojom::ScrollData::DataView input,
    ::ui::mojom::ScrollDataPtr* output) {
  bool success = true;
  ::ui::mojom::ScrollDataPtr result(::ui::mojom::ScrollData::New());
  
      if (!input.ReadLocation(&result->location))
        success = false;
      result->x_offset = input.x_offset();
      result->y_offset = input.y_offset();
      result->x_offset_ordinal = input.x_offset_ordinal();
      result->y_offset_ordinal = input.y_offset_ordinal();
      result->finger_count = input.finger_count();
      if (!input.ReadMomentumPhase(&result->momentum_phase))
        success = false;
      if (!input.ReadScrollEventPhase(&result->scroll_event_phase))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::Event::DataView, ::ui::mojom::EventPtr>::Read(
    ::ui::mojom::Event::DataView input,
    ::ui::mojom::EventPtr* output) {
  bool success = true;
  ::ui::mojom::EventPtr result(::ui::mojom::Event::New());
  
      if (!input.ReadAction(&result->action))
        success = false;
      result->flags = input.flags();
      if (!input.ReadTimeStamp(&result->time_stamp))
        success = false;
      if (!input.ReadLatency(&result->latency))
        success = false;
      if (!input.ReadKeyData(&result->key_data))
        success = false;
      if (!input.ReadPointerData(&result->pointer_data))
        success = false;
      if (!input.ReadGestureData(&result->gesture_data))
        success = false;
      if (!input.ReadScrollData(&result->scroll_data))
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