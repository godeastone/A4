// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_

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
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class LatencyComponentIdDataView;

class LatencyComponentDataView;

class LatencyComponentPairDataView;

class LatencyInfoDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::LatencyComponentIdDataView> {
  using Data = ::ui::mojom::internal::LatencyComponentId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::LatencyComponentDataView> {
  using Data = ::ui::mojom::internal::LatencyComponent_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::LatencyComponentPairDataView> {
  using Data = ::ui::mojom::internal::LatencyComponentPair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::ui::mojom::LatencyInfoDataView> {
  using Data = ::ui::mojom::internal::LatencyInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {

enum class LatencyComponentType : int32_t {
  INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT,
  LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT,
  LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT,
  LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT,
  LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT,
  LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT,
  LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT,
  LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT,
  INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_UI_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT,
  INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT,
  TAB_SHOW_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT,
  DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT,
  INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT,
  INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL,
  INPUT_EVENT_LATENCY_TERMINATED_NO_SWAP_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT,
  LATENCY_COMPONENT_TYPE_LAST = LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT,
  kMinValue = 0,
  kMaxValue = 26,
};

inline std::ostream& operator<<(std::ostream& os, LatencyComponentType value) {
  switch(value) {
    case LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT";
    case LatencyComponentType::TAB_SHOW_COMPONENT:
      return os << "LatencyComponentType::TAB_SHOW_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT";
    case LatencyComponentType::DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT:
      return os << "LatencyComponentType::DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_NO_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_NO_SWAP_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT:
      return os << "LatencyComponentType::{INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT, LATENCY_COMPONENT_TYPE_LAST}";
    default:
      return os << "Unknown LatencyComponentType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LatencyComponentType value) {
  return internal::LatencyComponentType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SourceEventType : int32_t {
  UNKNOWN,
  WHEEL,
  MOUSE,
  TOUCH,
  INERTIAL,
  KEY_PRESS,
  FRAME,
  OTHER,
  SOURCE_EVENT_TYPE_LAST = SourceEventType::OTHER,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, SourceEventType value) {
  switch(value) {
    case SourceEventType::UNKNOWN:
      return os << "SourceEventType::UNKNOWN";
    case SourceEventType::WHEEL:
      return os << "SourceEventType::WHEEL";
    case SourceEventType::MOUSE:
      return os << "SourceEventType::MOUSE";
    case SourceEventType::TOUCH:
      return os << "SourceEventType::TOUCH";
    case SourceEventType::INERTIAL:
      return os << "SourceEventType::INERTIAL";
    case SourceEventType::KEY_PRESS:
      return os << "SourceEventType::KEY_PRESS";
    case SourceEventType::FRAME:
      return os << "SourceEventType::FRAME";
    case SourceEventType::OTHER:
      return os << "SourceEventType::{OTHER, SOURCE_EVENT_TYPE_LAST}";
    default:
      return os << "Unknown SourceEventType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SourceEventType value) {
  return internal::SourceEventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class LatencyComponentIdDataView {
 public:
  LatencyComponentIdDataView() {}

  LatencyComponentIdDataView(
      internal::LatencyComponentId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentType>(
        data_value, output);
  }

  LatencyComponentType type() const {
    return static_cast<LatencyComponentType>(data_->type);
  }
  int64_t id() const {
    return data_->id;
  }
 private:
  internal::LatencyComponentId_Data* data_ = nullptr;
};

class LatencyComponentDataView {
 public:
  LatencyComponentDataView() {}

  LatencyComponentDataView(
      internal::LatencyComponent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventTime(UserType* output) {
    auto* pointer = data_->event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  uint32_t event_count() const {
    return data_->event_count;
  }
  inline void GetFirstEventTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstEventTime(UserType* output) {
    auto* pointer = data_->first_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetLastEventTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastEventTime(UserType* output) {
    auto* pointer = data_->last_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::LatencyComponent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LatencyComponentPairDataView {
 public:
  LatencyComponentPairDataView() {}

  LatencyComponentPairDataView(
      internal::LatencyComponentPair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      LatencyComponentIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentIdDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      LatencyComponentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentDataView>(
        pointer, output, context_);
  }
 private:
  internal::LatencyComponentPair_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LatencyInfoDataView {
 public:
  LatencyInfoDataView() {}

  LatencyInfoDataView(
      internal::LatencyInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTraceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTraceName(UserType* output) {
    auto* pointer = data_->trace_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLatencyComponentsDataView(
      mojo::ArrayDataView<LatencyComponentPairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatencyComponents(UserType* output) {
    auto* pointer = data_->latency_components.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::LatencyComponentPairDataView>>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
  inline void GetSnapshotsDataView(
      mojo::MapDataView<int64_t, int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSnapshots(UserType* output) {
    auto* pointer = data_->snapshots.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int64_t, int64_t>>(
        pointer, output, context_);
  }
  int64_t ukm_source_id() const {
    return data_->ukm_source_id;
  }
  bool coalesced() const {
    return data_->coalesced;
  }
  bool began() const {
    return data_->began;
  }
  bool terminated() const {
    return data_->terminated;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceEventType(UserType* output) const {
    auto data_value = data_->source_event_type;
    return mojo::internal::Deserialize<::ui::mojom::SourceEventType>(
        data_value, output);
  }

  SourceEventType source_event_type() const {
    return static_cast<SourceEventType>(data_->source_event_type);
  }
 private:
  internal::LatencyInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::LatencyComponentType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::LatencyComponentType> {};

template <>
struct hash<::ui::mojom::SourceEventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::SourceEventType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::LatencyComponentType, ::ui::mojom::LatencyComponentType> {
  static ::ui::mojom::LatencyComponentType ToMojom(::ui::mojom::LatencyComponentType input) { return input; }
  static bool FromMojom(::ui::mojom::LatencyComponentType input, ::ui::mojom::LatencyComponentType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::LatencyComponentType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::LatencyComponentType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::SourceEventType, ::ui::mojom::SourceEventType> {
  static ::ui::mojom::SourceEventType ToMojom(::ui::mojom::SourceEventType input) { return input; }
  static bool FromMojom(::ui::mojom::SourceEventType input, ::ui::mojom::SourceEventType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::SourceEventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::SourceEventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::SourceEventType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponentIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponentId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::LatencyComponentType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponentId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponentDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponent_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::event_time, input, custom_context)) in_event_time = CallWithContext(Traits::event_time, input, custom_context);
    typename decltype((*output)->event_time)::BaseType::BufferWriter
        event_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_event_time, buffer, &event_time_writer, context);
    (*output)->event_time.Set(
        event_time_writer.is_null() ? nullptr : event_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->event_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null event_time in LatencyComponent struct");
    (*output)->event_count = CallWithContext(Traits::event_count, input, custom_context);
    decltype(CallWithContext(Traits::first_event_time, input, custom_context)) in_first_event_time = CallWithContext(Traits::first_event_time, input, custom_context);
    typename decltype((*output)->first_event_time)::BaseType::BufferWriter
        first_event_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_first_event_time, buffer, &first_event_time_writer, context);
    (*output)->first_event_time.Set(
        first_event_time_writer.is_null() ? nullptr : first_event_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->first_event_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null first_event_time in LatencyComponent struct");
    decltype(CallWithContext(Traits::last_event_time, input, custom_context)) in_last_event_time = CallWithContext(Traits::last_event_time, input, custom_context);
    typename decltype((*output)->last_event_time)::BaseType::BufferWriter
        last_event_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_last_event_time, buffer, &last_event_time_writer, context);
    (*output)->last_event_time.Set(
        last_event_time_writer.is_null() ? nullptr : last_event_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_event_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_event_time in LatencyComponent struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentPairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponentPairDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponentPair_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    mojo::internal::Serialize<::ui::mojom::LatencyComponentIdDataView>(
        in_key, buffer, &key_writer, context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in LatencyComponentPair struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::ui::mojom::LatencyComponentDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in LatencyComponentPair struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponentPair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentPairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::trace_name, input, custom_context)) in_trace_name = CallWithContext(Traits::trace_name, input, custom_context);
    typename decltype((*output)->trace_name)::BaseType::BufferWriter
        trace_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_trace_name, buffer, &trace_name_writer, context);
    (*output)->trace_name.Set(
        trace_name_writer.is_null() ? nullptr : trace_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->trace_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null trace_name in LatencyInfo struct");
    decltype(CallWithContext(Traits::latency_components, input, custom_context)) in_latency_components = CallWithContext(Traits::latency_components, input, custom_context);
    typename decltype((*output)->latency_components)::BaseType::BufferWriter
        latency_components_writer;
    const mojo::internal::ContainerValidateParams latency_components_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::LatencyComponentPairDataView>>(
        in_latency_components, buffer, &latency_components_writer, &latency_components_validate_params,
        context);
    (*output)->latency_components.Set(
        latency_components_writer.is_null() ? nullptr : latency_components_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency_components.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency_components in LatencyInfo struct");
    (*output)->trace_id = CallWithContext(Traits::trace_id, input, custom_context);
    decltype(CallWithContext(Traits::snapshots, input, custom_context)) in_snapshots = CallWithContext(Traits::snapshots, input, custom_context);
    typename decltype((*output)->snapshots)::BaseType::BufferWriter
        snapshots_writer;
    const mojo::internal::ContainerValidateParams snapshots_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int64_t, int64_t>>(
        in_snapshots, buffer, &snapshots_writer, &snapshots_validate_params,
        context);
    (*output)->snapshots.Set(
        snapshots_writer.is_null() ? nullptr : snapshots_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->snapshots.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null snapshots in LatencyInfo struct");
    (*output)->ukm_source_id = CallWithContext(Traits::ukm_source_id, input, custom_context);
    (*output)->coalesced = CallWithContext(Traits::coalesced, input, custom_context);
    (*output)->began = CallWithContext(Traits::began, input, custom_context);
    (*output)->terminated = CallWithContext(Traits::terminated, input, custom_context);
    mojo::internal::Serialize<::ui::mojom::SourceEventType>(
        CallWithContext(Traits::source_event_type, input, custom_context), &(*output)->source_event_type);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {



inline void LatencyComponentDataView::GetEventTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->event_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LatencyComponentDataView::GetFirstEventTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->first_event_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void LatencyComponentDataView::GetLastEventTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->last_event_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}


inline void LatencyComponentPairDataView::GetKeyDataView(
    LatencyComponentIdDataView* output) {
  auto pointer = data_->key.Get();
  *output = LatencyComponentIdDataView(pointer, context_);
}
inline void LatencyComponentPairDataView::GetValueDataView(
    LatencyComponentDataView* output) {
  auto pointer = data_->value.Get();
  *output = LatencyComponentDataView(pointer, context_);
}


inline void LatencyInfoDataView::GetTraceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trace_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LatencyInfoDataView::GetLatencyComponentsDataView(
    mojo::ArrayDataView<LatencyComponentPairDataView>* output) {
  auto pointer = data_->latency_components.Get();
  *output = mojo::ArrayDataView<LatencyComponentPairDataView>(pointer, context_);
}
inline void LatencyInfoDataView::GetSnapshotsDataView(
    mojo::MapDataView<int64_t, int64_t>* output) {
  auto pointer = data_->snapshots.Get();
  *output = mojo::MapDataView<int64_t, int64_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_
