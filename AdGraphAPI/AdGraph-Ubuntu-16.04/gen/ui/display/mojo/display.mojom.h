// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_H_

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
#include "ui/display/mojo/display.mojom-shared.h"
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
#include "ui/display/display.h"


namespace display {
namespace mojom {
class Display;
using DisplayPtr = mojo::StructPtr<Display>;






class  Display {
 public:
  using DataView = DisplayDataView;
  using Data_ = internal::Display_Data;

  template <typename... Args>
  static DisplayPtr New(Args&&... args) {
    return DisplayPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayPtr From(const U& u) {
    return mojo::TypeConverter<DisplayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Display>::Convert(*this);
  }


  Display();

  Display(
      int64_t id,
      const gfx::Rect& bounds,
      const gfx::Size& size_in_pixels,
      const gfx::Rect& work_area,
      float device_scale_factor,
      display::Display::Rotation rotation,
      display::Display::TouchSupport touch_support,
      display::Display::AccelerometerSupport accelerometer_support,
      const gfx::Size& maximum_cursor_size,
      int32_t color_depth,
      int32_t depth_per_component,
      bool is_monochrome);

  ~Display();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayPtr>
  DisplayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Display>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Display::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Display::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Display_UnserializedMessageContext<
            UserType, Display::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Display::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Display::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Display_UnserializedMessageContext<
            UserType, Display::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Display::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t id;
  gfx::Rect bounds;
  gfx::Size size_in_pixels;
  gfx::Rect work_area;
  float device_scale_factor;
  display::Display::Rotation rotation;
  display::Display::TouchSupport touch_support;
  display::Display::AccelerometerSupport accelerometer_support;
  gfx::Size maximum_cursor_size;
  int32_t color_depth;
  int32_t depth_per_component;
  bool is_monochrome;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
DisplayPtr Display::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(bounds),
      mojo::Clone(size_in_pixels),
      mojo::Clone(work_area),
      mojo::Clone(device_scale_factor),
      mojo::Clone(rotation),
      mojo::Clone(touch_support),
      mojo::Clone(accelerometer_support),
      mojo::Clone(maximum_cursor_size),
      mojo::Clone(color_depth),
      mojo::Clone(depth_per_component),
      mojo::Clone(is_monochrome)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Display>::value>::type*>
bool Display::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  if (!mojo::Equals(this->size_in_pixels, other_struct.size_in_pixels))
    return false;
  if (!mojo::Equals(this->work_area, other_struct.work_area))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->rotation, other_struct.rotation))
    return false;
  if (!mojo::Equals(this->touch_support, other_struct.touch_support))
    return false;
  if (!mojo::Equals(this->accelerometer_support, other_struct.accelerometer_support))
    return false;
  if (!mojo::Equals(this->maximum_cursor_size, other_struct.maximum_cursor_size))
    return false;
  if (!mojo::Equals(this->color_depth, other_struct.color_depth))
    return false;
  if (!mojo::Equals(this->depth_per_component, other_struct.depth_per_component))
    return false;
  if (!mojo::Equals(this->is_monochrome, other_struct.is_monochrome))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::Display::DataView,
                                         ::display::mojom::DisplayPtr> {
  static bool IsNull(const ::display::mojom::DisplayPtr& input) { return !input; }
  static void SetToNull(::display::mojom::DisplayPtr* output) { output->reset(); }

  static decltype(::display::mojom::Display::id) id(
      const ::display::mojom::DisplayPtr& input) {
    return input->id;
  }

  static const decltype(::display::mojom::Display::bounds)& bounds(
      const ::display::mojom::DisplayPtr& input) {
    return input->bounds;
  }

  static const decltype(::display::mojom::Display::size_in_pixels)& size_in_pixels(
      const ::display::mojom::DisplayPtr& input) {
    return input->size_in_pixels;
  }

  static const decltype(::display::mojom::Display::work_area)& work_area(
      const ::display::mojom::DisplayPtr& input) {
    return input->work_area;
  }

  static decltype(::display::mojom::Display::device_scale_factor) device_scale_factor(
      const ::display::mojom::DisplayPtr& input) {
    return input->device_scale_factor;
  }

  static decltype(::display::mojom::Display::rotation) rotation(
      const ::display::mojom::DisplayPtr& input) {
    return input->rotation;
  }

  static decltype(::display::mojom::Display::touch_support) touch_support(
      const ::display::mojom::DisplayPtr& input) {
    return input->touch_support;
  }

  static decltype(::display::mojom::Display::accelerometer_support) accelerometer_support(
      const ::display::mojom::DisplayPtr& input) {
    return input->accelerometer_support;
  }

  static const decltype(::display::mojom::Display::maximum_cursor_size)& maximum_cursor_size(
      const ::display::mojom::DisplayPtr& input) {
    return input->maximum_cursor_size;
  }

  static decltype(::display::mojom::Display::color_depth) color_depth(
      const ::display::mojom::DisplayPtr& input) {
    return input->color_depth;
  }

  static decltype(::display::mojom::Display::depth_per_component) depth_per_component(
      const ::display::mojom::DisplayPtr& input) {
    return input->depth_per_component;
  }

  static decltype(::display::mojom::Display::is_monochrome) is_monochrome(
      const ::display::mojom::DisplayPtr& input) {
    return input->is_monochrome;
  }

  static bool Read(::display::mojom::Display::DataView input, ::display::mojom::DisplayPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJO_DISPLAY_MOJOM_H_