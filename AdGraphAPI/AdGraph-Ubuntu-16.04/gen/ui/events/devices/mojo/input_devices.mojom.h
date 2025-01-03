// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_H_
#define UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/events/devices/mojo/input_devices.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "ui/events/devices/input_device.h"
#include "ui/events/devices/stylus_state.h"
#include "ui/events/devices/touchscreen_device.h"


namespace ui {
namespace mojom {
class InputDevice;
using InputDevicePtr = mojo::StructPtr<InputDevice>;

class TouchscreenDevice;
using TouchscreenDevicePtr = mojo::StructPtr<TouchscreenDevice>;







class  InputDevice {
 public:
  using DataView = InputDeviceDataView;
  using Data_ = internal::InputDevice_Data;

  template <typename... Args>
  static InputDevicePtr New(Args&&... args) {
    return InputDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InputDevicePtr From(const U& u) {
    return mojo::TypeConverter<InputDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InputDevice>::Convert(*this);
  }


  InputDevice();

  InputDevice(
      int32_t id,
      ui::InputDeviceType type,
      const std::string& name,
      bool enabled,
      const std::string& sys_path,
      uint16_t vendor_id,
      uint16_t product_id);

  ~InputDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InputDevicePtr>
  InputDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InputDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InputDevice::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InputDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InputDevice_UnserializedMessageContext<
            UserType, InputDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InputDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return InputDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InputDevice_UnserializedMessageContext<
            UserType, InputDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InputDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t id;
  ui::InputDeviceType type;
  std::string name;
  bool enabled;
  std::string sys_path;
  uint16_t vendor_id;
  uint16_t product_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  TouchscreenDevice {
 public:
  using DataView = TouchscreenDeviceDataView;
  using Data_ = internal::TouchscreenDevice_Data;

  template <typename... Args>
  static TouchscreenDevicePtr New(Args&&... args) {
    return TouchscreenDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchscreenDevicePtr From(const U& u) {
    return mojo::TypeConverter<TouchscreenDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchscreenDevice>::Convert(*this);
  }


  TouchscreenDevice();

  TouchscreenDevice(
      const ui::InputDevice& input_device,
      const gfx::Size& size,
      int32_t touch_points,
      bool has_stylus);

  ~TouchscreenDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchscreenDevicePtr>
  TouchscreenDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchscreenDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchscreenDevice::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchscreenDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchscreenDevice_UnserializedMessageContext<
            UserType, TouchscreenDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchscreenDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchscreenDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchscreenDevice_UnserializedMessageContext<
            UserType, TouchscreenDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchscreenDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ui::InputDevice input_device;
  gfx::Size size;
  int32_t touch_points;
  bool has_stylus;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
InputDevicePtr InputDevice::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(type),
      mojo::Clone(name),
      mojo::Clone(enabled),
      mojo::Clone(sys_path),
      mojo::Clone(vendor_id),
      mojo::Clone(product_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InputDevice>::value>::type*>
bool InputDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->enabled, other_struct.enabled))
    return false;
  if (!mojo::Equals(this->sys_path, other_struct.sys_path))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  return true;
}
template <typename StructPtrType>
TouchscreenDevicePtr TouchscreenDevice::Clone() const {
  return New(
      mojo::Clone(input_device),
      mojo::Clone(size),
      mojo::Clone(touch_points),
      mojo::Clone(has_stylus)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchscreenDevice>::value>::type*>
bool TouchscreenDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->input_device, other_struct.input_device))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->touch_points, other_struct.touch_points))
    return false;
  if (!mojo::Equals(this->has_stylus, other_struct.has_stylus))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::InputDevice::DataView,
                                         ::ui::mojom::InputDevicePtr> {
  static bool IsNull(const ::ui::mojom::InputDevicePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::InputDevicePtr* output) { output->reset(); }

  static decltype(::ui::mojom::InputDevice::id) id(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->id;
  }

  static decltype(::ui::mojom::InputDevice::type) type(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->type;
  }

  static const decltype(::ui::mojom::InputDevice::name)& name(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->name;
  }

  static decltype(::ui::mojom::InputDevice::enabled) enabled(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->enabled;
  }

  static const decltype(::ui::mojom::InputDevice::sys_path)& sys_path(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->sys_path;
  }

  static decltype(::ui::mojom::InputDevice::vendor_id) vendor_id(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->vendor_id;
  }

  static decltype(::ui::mojom::InputDevice::product_id) product_id(
      const ::ui::mojom::InputDevicePtr& input) {
    return input->product_id;
  }

  static bool Read(::ui::mojom::InputDevice::DataView input, ::ui::mojom::InputDevicePtr* output);
};


template <>
struct  StructTraits<::ui::mojom::TouchscreenDevice::DataView,
                                         ::ui::mojom::TouchscreenDevicePtr> {
  static bool IsNull(const ::ui::mojom::TouchscreenDevicePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::TouchscreenDevicePtr* output) { output->reset(); }

  static const decltype(::ui::mojom::TouchscreenDevice::input_device)& input_device(
      const ::ui::mojom::TouchscreenDevicePtr& input) {
    return input->input_device;
  }

  static const decltype(::ui::mojom::TouchscreenDevice::size)& size(
      const ::ui::mojom::TouchscreenDevicePtr& input) {
    return input->size;
  }

  static decltype(::ui::mojom::TouchscreenDevice::touch_points) touch_points(
      const ::ui::mojom::TouchscreenDevicePtr& input) {
    return input->touch_points;
  }

  static decltype(::ui::mojom::TouchscreenDevice::has_stylus) has_stylus(
      const ::ui::mojom::TouchscreenDevicePtr& input) {
    return input->has_stylus;
  }

  static bool Read(::ui::mojom::TouchscreenDevice::DataView input, ::ui::mojom::TouchscreenDevicePtr* output);
};

}  // namespace mojo

#endif  // UI_EVENTS_DEVICES_MOJO_INPUT_DEVICES_MOJOM_H_