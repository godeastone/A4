// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_

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
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class WindowDataDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::WindowDataDataView> {
  using Data = ::ui::mojom::internal::WindowData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class EventResult : int32_t {
  HANDLED,
  UNHANDLED,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, EventResult value) {
  switch(value) {
    case EventResult::HANDLED:
      return os << "EventResult::HANDLED";
    case EventResult::UNHANDLED:
      return os << "EventResult::UNHANDLED";
    default:
      return os << "Unknown EventResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventResult value) {
  return internal::EventResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EventTargetingPolicy : int32_t {
  TARGET_ONLY,
  TARGET_AND_DESCENDANTS,
  DESCENDANTS_ONLY,
  NONE,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, EventTargetingPolicy value) {
  switch(value) {
    case EventTargetingPolicy::TARGET_ONLY:
      return os << "EventTargetingPolicy::TARGET_ONLY";
    case EventTargetingPolicy::TARGET_AND_DESCENDANTS:
      return os << "EventTargetingPolicy::TARGET_AND_DESCENDANTS";
    case EventTargetingPolicy::DESCENDANTS_ONLY:
      return os << "EventTargetingPolicy::DESCENDANTS_ONLY";
    case EventTargetingPolicy::NONE:
      return os << "EventTargetingPolicy::NONE";
    default:
      return os << "Unknown EventTargetingPolicy value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventTargetingPolicy value) {
  return internal::EventTargetingPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class WindowDataDataView {
 public:
  WindowDataDataView() {}

  WindowDataDataView(
      internal::WindowData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t parent_id() const {
    return data_->parent_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  uint64_t transient_parent_id() const {
    return data_->transient_parent_id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::EventResult>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventResult> {};

template <>
struct hash<::ui::mojom::EventTargetingPolicy>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventTargetingPolicy> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::EventResult, ::ui::mojom::EventResult> {
  static ::ui::mojom::EventResult ToMojom(::ui::mojom::EventResult input) { return input; }
  static bool FromMojom(::ui::mojom::EventResult input, ::ui::mojom::EventResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventTargetingPolicy, ::ui::mojom::EventTargetingPolicy> {
  static ::ui::mojom::EventTargetingPolicy ToMojom(::ui::mojom::EventTargetingPolicy input) { return input; }
  static bool FromMojom(::ui::mojom::EventTargetingPolicy input, ::ui::mojom::EventTargetingPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventTargetingPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventTargetingPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventTargetingPolicy>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WindowDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WindowData_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->parent_id = CallWithContext(Traits::parent_id, input, custom_context);
    (*output)->window_id = CallWithContext(Traits::window_id, input, custom_context);
    (*output)->transient_parent_id = CallWithContext(Traits::transient_parent_id, input, custom_context);
    decltype(CallWithContext(Traits::bounds, input, custom_context)) in_bounds = CallWithContext(Traits::bounds, input, custom_context);
    typename decltype((*output)->bounds)::BaseType::BufferWriter
        bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_bounds, buffer, &bounds_writer, context);
    (*output)->bounds.Set(
        bounds_writer.is_null() ? nullptr : bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounds in WindowData struct");
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
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null properties in WindowData struct");
    (*output)->visible = CallWithContext(Traits::visible, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WindowData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WindowDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void WindowDataDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void WindowDataDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_
