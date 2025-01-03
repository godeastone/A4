// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_H_
#define UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_H_

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
#include "ui/events/devices/mojo/touch_device_transform.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom.h"
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
#include "ui/events/devices/touch_device_transform.h"


namespace ui {
namespace mojom {
class TouchDeviceTransform;
using TouchDeviceTransformPtr = mojo::StructPtr<TouchDeviceTransform>;






class  TouchDeviceTransform {
 public:
  using DataView = TouchDeviceTransformDataView;
  using Data_ = internal::TouchDeviceTransform_Data;

  template <typename... Args>
  static TouchDeviceTransformPtr New(Args&&... args) {
    return TouchDeviceTransformPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchDeviceTransformPtr From(const U& u) {
    return mojo::TypeConverter<TouchDeviceTransformPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchDeviceTransform>::Convert(*this);
  }


  TouchDeviceTransform();

  TouchDeviceTransform(
      int64_t display_id,
      int32_t device_id,
      const gfx::Transform& transform,
      double radius_scale);

  ~TouchDeviceTransform();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchDeviceTransformPtr>
  TouchDeviceTransformPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchDeviceTransform>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchDeviceTransform::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchDeviceTransform::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchDeviceTransform_UnserializedMessageContext<
            UserType, TouchDeviceTransform::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchDeviceTransform::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchDeviceTransform::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchDeviceTransform_UnserializedMessageContext<
            UserType, TouchDeviceTransform::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchDeviceTransform::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int64_t display_id;
  int32_t device_id;
  gfx::Transform transform;
  double radius_scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TouchDeviceTransformPtr TouchDeviceTransform::Clone() const {
  return New(
      mojo::Clone(display_id),
      mojo::Clone(device_id),
      mojo::Clone(transform),
      mojo::Clone(radius_scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchDeviceTransform>::value>::type*>
bool TouchDeviceTransform::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->transform, other_struct.transform))
    return false;
  if (!mojo::Equals(this->radius_scale, other_struct.radius_scale))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::TouchDeviceTransform::DataView,
                                         ::ui::mojom::TouchDeviceTransformPtr> {
  static bool IsNull(const ::ui::mojom::TouchDeviceTransformPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::TouchDeviceTransformPtr* output) { output->reset(); }

  static decltype(::ui::mojom::TouchDeviceTransform::display_id) display_id(
      const ::ui::mojom::TouchDeviceTransformPtr& input) {
    return input->display_id;
  }

  static decltype(::ui::mojom::TouchDeviceTransform::device_id) device_id(
      const ::ui::mojom::TouchDeviceTransformPtr& input) {
    return input->device_id;
  }

  static const decltype(::ui::mojom::TouchDeviceTransform::transform)& transform(
      const ::ui::mojom::TouchDeviceTransformPtr& input) {
    return input->transform;
  }

  static decltype(::ui::mojom::TouchDeviceTransform::radius_scale) radius_scale(
      const ::ui::mojom::TouchDeviceTransformPtr& input) {
    return input->radius_scale;
  }

  static bool Read(::ui::mojom::TouchDeviceTransform::DataView input, ::ui::mojom::TouchDeviceTransformPtr* output);
};

}  // namespace mojo

#endif  // UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_H_