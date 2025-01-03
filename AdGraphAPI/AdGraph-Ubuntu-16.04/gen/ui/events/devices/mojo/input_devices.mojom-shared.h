// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_H_
#define UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_H_

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
#include "ui/events/devices/mojo/input_devices.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class InputDeviceDataView;

class TouchscreenDeviceDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::InputDeviceDataView> {
  using Data = ::ui::mojom::internal::InputDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::TouchscreenDeviceDataView> {
  using Data = ::ui::mojom::internal::TouchscreenDevice_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class InputDeviceType : int32_t {
  INPUT_DEVICE_INTERNAL,
  INPUT_DEVICE_EXTERNAL,
  INPUT_DEVICE_UNKNOWN,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, InputDeviceType value) {
  switch(value) {
    case InputDeviceType::INPUT_DEVICE_INTERNAL:
      return os << "InputDeviceType::INPUT_DEVICE_INTERNAL";
    case InputDeviceType::INPUT_DEVICE_EXTERNAL:
      return os << "InputDeviceType::INPUT_DEVICE_EXTERNAL";
    case InputDeviceType::INPUT_DEVICE_UNKNOWN:
      return os << "InputDeviceType::INPUT_DEVICE_UNKNOWN";
    default:
      return os << "Unknown InputDeviceType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(InputDeviceType value) {
  return internal::InputDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class StylusState : int32_t {
  REMOVED,
  INSERTED,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, StylusState value) {
  switch(value) {
    case StylusState::REMOVED:
      return os << "StylusState::REMOVED";
    case StylusState::INSERTED:
      return os << "StylusState::INSERTED";
    default:
      return os << "Unknown StylusState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(StylusState value) {
  return internal::StylusState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class InputDeviceDataView {
 public:
  InputDeviceDataView() {}

  InputDeviceDataView(
      internal::InputDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::InputDeviceType>(
        data_value, output);
  }

  InputDeviceType type() const {
    return static_cast<InputDeviceType>(data_->type);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enabled() const {
    return data_->enabled;
  }
  inline void GetSysPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSysPath(UserType* output) {
    auto* pointer = data_->sys_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
 private:
  internal::InputDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TouchscreenDeviceDataView {
 public:
  TouchscreenDeviceDataView() {}

  TouchscreenDeviceDataView(
      internal::TouchscreenDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDeviceDataView(
      InputDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputDevice(UserType* output) {
    auto* pointer = data_->input_device.Get();
    return mojo::internal::Deserialize<::ui::mojom::InputDeviceDataView>(
        pointer, output, context_);
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  int32_t touch_points() const {
    return data_->touch_points;
  }
  bool has_stylus() const {
    return data_->has_stylus;
  }
 private:
  internal::TouchscreenDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::InputDeviceType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::InputDeviceType> {};

template <>
struct hash<::ui::mojom::StylusState>
    : public mojo::internal::EnumHashImpl<::ui::mojom::StylusState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::InputDeviceType, ::ui::mojom::InputDeviceType> {
  static ::ui::mojom::InputDeviceType ToMojom(::ui::mojom::InputDeviceType input) { return input; }
  static bool FromMojom(::ui::mojom::InputDeviceType input, ::ui::mojom::InputDeviceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::InputDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::InputDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::InputDeviceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::StylusState, ::ui::mojom::StylusState> {
  static ::ui::mojom::StylusState ToMojom(::ui::mojom::StylusState input) { return input; }
  static bool FromMojom(::ui::mojom::StylusState input, ::ui::mojom::StylusState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::StylusState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::StylusState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::StylusState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::InputDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::InputDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::InputDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::InputDeviceType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in InputDevice struct");
    (*output)->enabled = CallWithContext(Traits::enabled, input, custom_context);
    decltype(CallWithContext(Traits::sys_path, input, custom_context)) in_sys_path = CallWithContext(Traits::sys_path, input, custom_context);
    typename decltype((*output)->sys_path)::BaseType::BufferWriter
        sys_path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sys_path, buffer, &sys_path_writer, context);
    (*output)->sys_path.Set(
        sys_path_writer.is_null() ? nullptr : sys_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sys_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sys_path in InputDevice struct");
    (*output)->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
    (*output)->product_id = CallWithContext(Traits::product_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::InputDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::InputDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TouchscreenDeviceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::TouchscreenDeviceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::TouchscreenDevice_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::input_device, input, custom_context)) in_input_device = CallWithContext(Traits::input_device, input, custom_context);
    typename decltype((*output)->input_device)::BaseType::BufferWriter
        input_device_writer;
    mojo::internal::Serialize<::ui::mojom::InputDeviceDataView>(
        in_input_device, buffer, &input_device_writer, context);
    (*output)->input_device.Set(
        input_device_writer.is_null() ? nullptr : input_device_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->input_device.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input_device in TouchscreenDevice struct");
    decltype(CallWithContext(Traits::size, input, custom_context)) in_size = CallWithContext(Traits::size, input, custom_context);
    typename decltype((*output)->size)::BaseType::BufferWriter
        size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_size, buffer, &size_writer, context);
    (*output)->size.Set(
        size_writer.is_null() ? nullptr : size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null size in TouchscreenDevice struct");
    (*output)->touch_points = CallWithContext(Traits::touch_points, input, custom_context);
    (*output)->has_stylus = CallWithContext(Traits::has_stylus, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::TouchscreenDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::TouchscreenDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void InputDeviceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void InputDeviceDataView::GetSysPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sys_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TouchscreenDeviceDataView::GetInputDeviceDataView(
    InputDeviceDataView* output) {
  auto pointer = data_->input_device.Get();
  *output = InputDeviceDataView(pointer, context_);
}
inline void TouchscreenDeviceDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_SHARED_H_
