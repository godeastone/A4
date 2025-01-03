// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_

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
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/events/mojo/keyboard_codes.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class KeyDataDataView;

class LocationDataDataView;

class PointerDataDataView;

class WheelDataDataView;

class BrushDataDataView;

class GestureDataDataView;

class ScrollDataDataView;

class EventDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::KeyDataDataView> {
  using Data = ::ui::mojom::internal::KeyData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::LocationDataDataView> {
  using Data = ::ui::mojom::internal::LocationData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::PointerDataDataView> {
  using Data = ::ui::mojom::internal::PointerData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::WheelDataDataView> {
  using Data = ::ui::mojom::internal::WheelData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::BrushDataDataView> {
  using Data = ::ui::mojom::internal::BrushData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::GestureDataDataView> {
  using Data = ::ui::mojom::internal::GestureData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::ScrollDataDataView> {
  using Data = ::ui::mojom::internal::ScrollData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::EventDataView> {
  using Data = ::ui::mojom::internal::Event_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
class KeyDataDataView {
 public:
  KeyDataDataView() {}

  KeyDataDataView(
      internal::KeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t key_code() const {
    return data_->key_code;
  }
  bool is_char() const {
    return data_->is_char;
  }
  uint16_t character() const {
    return data_->character;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWindowsKeyCode(UserType* output) const {
    auto data_value = data_->windows_key_code;
    return mojo::internal::Deserialize<::ui::mojom::KeyboardCode>(
        data_value, output);
  }

  ::ui::mojom::KeyboardCode windows_key_code() const {
    return static_cast<::ui::mojom::KeyboardCode>(data_->windows_key_code);
  }
  int32_t native_key_code() const {
    return data_->native_key_code;
  }
  uint16_t text() const {
    return data_->text;
  }
  uint16_t unmodified_text() const {
    return data_->unmodified_text;
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::KeyData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LocationDataDataView {
 public:
  LocationDataDataView() {}

  LocationDataDataView(
      internal::LocationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float screen_x() const {
    return data_->screen_x;
  }
  float screen_y() const {
    return data_->screen_y;
  }
 private:
  internal::LocationData_Data* data_ = nullptr;
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
  int32_t changed_button_flags() const {
    return data_->changed_button_flags;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKind(UserType* output) const {
    auto data_value = data_->kind;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind kind() const {
    return static_cast<::ui::mojom::PointerKind>(data_->kind);
  }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  inline void GetBrushDataDataView(
      BrushDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBrushData(UserType* output) {
    auto* pointer = data_->brush_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::BrushDataDataView>(
        pointer, output, context_);
  }
  inline void GetWheelDataDataView(
      WheelDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWheelData(UserType* output) {
    auto* pointer = data_->wheel_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::WheelDataDataView>(
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::ui::mojom::WheelMode>(
        data_value, output);
  }

  ::ui::mojom::WheelMode mode() const {
    return static_cast<::ui::mojom::WheelMode>(data_->mode);
  }
  float delta_x() const {
    return data_->delta_x;
  }
  float delta_y() const {
    return data_->delta_y;
  }
  float delta_z() const {
    return data_->delta_z;
  }
 private:
  internal::WheelData_Data* data_ = nullptr;
};

class BrushDataDataView {
 public:
  BrushDataDataView() {}

  BrushDataDataView(
      internal::BrushData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
  float pressure() const {
    return data_->pressure;
  }
  float tilt_x() const {
    return data_->tilt_x;
  }
  float tilt_y() const {
    return data_->tilt_y;
  }
  float tangential_pressure() const {
    return data_->tangential_pressure;
  }
  int32_t twist() const {
    return data_->twist;
  }
 private:
  internal::BrushData_Data* data_ = nullptr;
};

class GestureDataDataView {
 public:
  GestureDataDataView() {}

  GestureDataDataView(
      internal::GestureData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::GestureData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ScrollDataDataView {
 public:
  ScrollDataDataView() {}

  ScrollDataDataView(
      internal::ScrollData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataDataView>(
        pointer, output, context_);
  }
  float x_offset() const {
    return data_->x_offset;
  }
  float y_offset() const {
    return data_->y_offset;
  }
  float x_offset_ordinal() const {
    return data_->x_offset_ordinal;
  }
  float y_offset_ordinal() const {
    return data_->y_offset_ordinal;
  }
  int32_t finger_count() const {
    return data_->finger_count;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMomentumPhase(UserType* output) const {
    auto data_value = data_->momentum_phase;
    return mojo::internal::Deserialize<::ui::mojom::EventMomentumPhase>(
        data_value, output);
  }

  ::ui::mojom::EventMomentumPhase momentum_phase() const {
    return static_cast<::ui::mojom::EventMomentumPhase>(data_->momentum_phase);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollEventPhase(UserType* output) const {
    auto data_value = data_->scroll_event_phase;
    return mojo::internal::Deserialize<::ui::mojom::ScrollEventPhase>(
        data_value, output);
  }

  ::ui::mojom::ScrollEventPhase scroll_event_phase() const {
    return static_cast<::ui::mojom::ScrollEventPhase>(data_->scroll_event_phase);
  }
 private:
  internal::ScrollData_Data* data_ = nullptr;
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
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::ui::mojom::EventType>(
        data_value, output);
  }

  ::ui::mojom::EventType action() const {
    return static_cast<::ui::mojom::EventType>(data_->action);
  }
  int32_t flags() const {
    return data_->flags;
  }
  inline void GetTimeStampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeStamp(UserType* output) {
    auto* pointer = data_->time_stamp.Get();
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
    return mojo::internal::Deserialize<::ui::mojom::KeyDataDataView>(
        pointer, output, context_);
  }
  inline void GetPointerDataDataView(
      PointerDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointerData(UserType* output) {
    auto* pointer = data_->pointer_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerDataDataView>(
        pointer, output, context_);
  }
  inline void GetGestureDataDataView(
      GestureDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGestureData(UserType* output) {
    auto* pointer = data_->gesture_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::GestureDataDataView>(
        pointer, output, context_);
  }
  inline void GetScrollDataDataView(
      ScrollDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollData(UserType* output) {
    auto* pointer = data_->scroll_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::ScrollDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::Event_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::KeyDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::KeyDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::KeyData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->key_code = CallWithContext(Traits::key_code, input, custom_context);
    (*output)->is_char = CallWithContext(Traits::is_char, input, custom_context);
    (*output)->character = CallWithContext(Traits::character, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::KeyboardCode>(
        CallWithContext(Traits::windows_key_code, input, custom_context), &(*output)->windows_key_code);
    (*output)->native_key_code = CallWithContext(Traits::native_key_code, input, custom_context);
    (*output)->text = CallWithContext(Traits::text, input, custom_context);
    (*output)->unmodified_text = CallWithContext(Traits::unmodified_text, input, custom_context);
    decltype(CallWithContext(Traits::properties, input, custom_context)) in_properties = CallWithContext(Traits::properties, input, custom_context);
    typename decltype((*output)->properties)::BaseType::BufferWriter
        properties_writer;
    const mojo::internal::ContainerValidateParams properties_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        in_properties, buffer, &properties_writer, &properties_validate_params,
        context);
    (*output)->properties.Set(
        properties_writer.is_null() ? nullptr : properties_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::KeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::KeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LocationDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LocationDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LocationData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->x = CallWithContext(Traits::x, input, custom_context);
    (*output)->y = CallWithContext(Traits::y, input, custom_context);
    (*output)->screen_x = CallWithContext(Traits::screen_x, input, custom_context);
    (*output)->screen_y = CallWithContext(Traits::screen_y, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LocationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LocationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::PointerDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::PointerData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->pointer_id = CallWithContext(Traits::pointer_id, input, custom_context);
    (*output)->changed_button_flags = CallWithContext(Traits::changed_button_flags, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::PointerKind>(
        CallWithContext(Traits::kind, input, custom_context), &(*output)->kind);
    decltype(CallWithContext(Traits::location, input, custom_context)) in_location = CallWithContext(Traits::location, input, custom_context);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in PointerData struct");
    decltype(CallWithContext(Traits::brush_data, input, custom_context)) in_brush_data = CallWithContext(Traits::brush_data, input, custom_context);
    typename decltype((*output)->brush_data)::BaseType::BufferWriter
        brush_data_writer;
    mojo::internal::Serialize<::ui::mojom::BrushDataDataView>(
        in_brush_data, buffer, &brush_data_writer, context);
    (*output)->brush_data.Set(
        brush_data_writer.is_null() ? nullptr : brush_data_writer.data());
    decltype(CallWithContext(Traits::wheel_data, input, custom_context)) in_wheel_data = CallWithContext(Traits::wheel_data, input, custom_context);
    typename decltype((*output)->wheel_data)::BaseType::BufferWriter
        wheel_data_writer;
    mojo::internal::Serialize<::ui::mojom::WheelDataDataView>(
        in_wheel_data, buffer, &wheel_data_writer, context);
    (*output)->wheel_data.Set(
        wheel_data_writer.is_null() ? nullptr : wheel_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::PointerData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::PointerDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WheelDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WheelDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WheelData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::WheelMode>(
        CallWithContext(Traits::mode, input, custom_context), &(*output)->mode);
    (*output)->delta_x = CallWithContext(Traits::delta_x, input, custom_context);
    (*output)->delta_y = CallWithContext(Traits::delta_y, input, custom_context);
    (*output)->delta_z = CallWithContext(Traits::delta_z, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WheelData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WheelDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::BrushDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::BrushDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::BrushData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->width = CallWithContext(Traits::width, input, custom_context);
    (*output)->height = CallWithContext(Traits::height, input, custom_context);
    (*output)->pressure = CallWithContext(Traits::pressure, input, custom_context);
    (*output)->tilt_x = CallWithContext(Traits::tilt_x, input, custom_context);
    (*output)->tilt_y = CallWithContext(Traits::tilt_y, input, custom_context);
    (*output)->tangential_pressure = CallWithContext(Traits::tangential_pressure, input, custom_context);
    (*output)->twist = CallWithContext(Traits::twist, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::BrushData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::BrushDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GestureDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::GestureDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::GestureData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::location, input, custom_context)) in_location = CallWithContext(Traits::location, input, custom_context);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in GestureData struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::GestureData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::GestureDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ScrollDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::ScrollDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::ScrollData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::location, input, custom_context)) in_location = CallWithContext(Traits::location, input, custom_context);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::ui::mojom::LocationDataDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in ScrollData struct");
    (*output)->x_offset = CallWithContext(Traits::x_offset, input, custom_context);
    (*output)->y_offset = CallWithContext(Traits::y_offset, input, custom_context);
    (*output)->x_offset_ordinal = CallWithContext(Traits::x_offset_ordinal, input, custom_context);
    (*output)->y_offset_ordinal = CallWithContext(Traits::y_offset_ordinal, input, custom_context);
    (*output)->finger_count = CallWithContext(Traits::finger_count, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::EventMomentumPhase>(
        CallWithContext(Traits::momentum_phase, input, custom_context), &(*output)->momentum_phase);
    mojo::internal::Serialize<::ui::mojom::ScrollEventPhase>(
        CallWithContext(Traits::scroll_event_phase, input, custom_context), &(*output)->scroll_event_phase);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::ScrollData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::ScrollDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::EventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::Event_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::EventType>(
        CallWithContext(Traits::action, input, custom_context), &(*output)->action);
    (*output)->flags = CallWithContext(Traits::flags, input, custom_context);
    decltype(CallWithContext(Traits::time_stamp, input, custom_context)) in_time_stamp = CallWithContext(Traits::time_stamp, input, custom_context);
    typename decltype((*output)->time_stamp)::BaseType::BufferWriter
        time_stamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_time_stamp, buffer, &time_stamp_writer, context);
    (*output)->time_stamp.Set(
        time_stamp_writer.is_null() ? nullptr : time_stamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_stamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_stamp in Event struct");
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
    mojo::internal::Serialize<::ui::mojom::KeyDataDataView>(
        in_key_data, buffer, &key_data_writer, context);
    (*output)->key_data.Set(
        key_data_writer.is_null() ? nullptr : key_data_writer.data());
    decltype(CallWithContext(Traits::pointer_data, input, custom_context)) in_pointer_data = CallWithContext(Traits::pointer_data, input, custom_context);
    typename decltype((*output)->pointer_data)::BaseType::BufferWriter
        pointer_data_writer;
    mojo::internal::Serialize<::ui::mojom::PointerDataDataView>(
        in_pointer_data, buffer, &pointer_data_writer, context);
    (*output)->pointer_data.Set(
        pointer_data_writer.is_null() ? nullptr : pointer_data_writer.data());
    decltype(CallWithContext(Traits::gesture_data, input, custom_context)) in_gesture_data = CallWithContext(Traits::gesture_data, input, custom_context);
    typename decltype((*output)->gesture_data)::BaseType::BufferWriter
        gesture_data_writer;
    mojo::internal::Serialize<::ui::mojom::GestureDataDataView>(
        in_gesture_data, buffer, &gesture_data_writer, context);
    (*output)->gesture_data.Set(
        gesture_data_writer.is_null() ? nullptr : gesture_data_writer.data());
    decltype(CallWithContext(Traits::scroll_data, input, custom_context)) in_scroll_data = CallWithContext(Traits::scroll_data, input, custom_context);
    typename decltype((*output)->scroll_data)::BaseType::BufferWriter
        scroll_data_writer;
    mojo::internal::Serialize<::ui::mojom::ScrollDataDataView>(
        in_scroll_data, buffer, &scroll_data_writer, context);
    (*output)->scroll_data.Set(
        scroll_data_writer.is_null() ? nullptr : scroll_data_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::Event_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void KeyDataDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}




inline void PointerDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}
inline void PointerDataDataView::GetBrushDataDataView(
    BrushDataDataView* output) {
  auto pointer = data_->brush_data.Get();
  *output = BrushDataDataView(pointer, context_);
}
inline void PointerDataDataView::GetWheelDataDataView(
    WheelDataDataView* output) {
  auto pointer = data_->wheel_data.Get();
  *output = WheelDataDataView(pointer, context_);
}






inline void GestureDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}


inline void ScrollDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}


inline void EventDataView::GetTimeStampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->time_stamp.Get();
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
inline void EventDataView::GetScrollDataDataView(
    ScrollDataDataView* output) {
  auto pointer = data_->scroll_data.Get();
  *output = ScrollDataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_H_
