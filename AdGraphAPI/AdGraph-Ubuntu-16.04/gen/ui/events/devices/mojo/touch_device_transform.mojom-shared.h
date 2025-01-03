// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_H_
#define UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_H_

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
#include "ui/events/devices/mojo/touch_device_transform.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class TouchDeviceTransformDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::TouchDeviceTransformDataView> {
  using Data = ::ui::mojom::internal::TouchDeviceTransform_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
class TouchDeviceTransformDataView {
 public:
  TouchDeviceTransformDataView() {}

  TouchDeviceTransformDataView(
      internal::TouchDeviceTransform_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  int32_t device_id() const {
    return data_->device_id;
  }
  inline void GetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransform(UserType* output) {
    auto* pointer = data_->transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  double radius_scale() const {
    return data_->radius_scale;
  }
 private:
  internal::TouchDeviceTransform_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TouchDeviceTransformDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::TouchDeviceTransformDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::TouchDeviceTransform_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->display_id = CallWithContext(Traits::display_id, input, custom_context);
    (*output)->device_id = CallWithContext(Traits::device_id, input, custom_context);
    decltype(CallWithContext(Traits::transform, input, custom_context)) in_transform = CallWithContext(Traits::transform, input, custom_context);
    typename decltype((*output)->transform)::BaseType::BufferWriter
        transform_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_transform, buffer, &transform_writer, context);
    (*output)->transform.Set(
        transform_writer.is_null() ? nullptr : transform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transform in TouchDeviceTransform struct");
    (*output)->radius_scale = CallWithContext(Traits::radius_scale, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::TouchDeviceTransform_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::TouchDeviceTransformDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void TouchDeviceTransformDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_DEVICES_MOJO_TOUCH_DEVICE_TRANSFORM_MOJOM_SHARED_H_
