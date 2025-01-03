// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit_introspector.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
class PageInfoDataView;

class ProcessInfoDataView;



}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::resource_coordinator::mojom::PageInfoDataView> {
  using Data = ::resource_coordinator::mojom::internal::PageInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::resource_coordinator::mojom::ProcessInfoDataView> {
  using Data = ::resource_coordinator::mojom::internal::ProcessInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CoordinationUnitIntrospectorInterfaceBase {};

using CoordinationUnitIntrospectorPtrDataView =
    mojo::InterfacePtrDataView<CoordinationUnitIntrospectorInterfaceBase>;
using CoordinationUnitIntrospectorRequestDataView =
    mojo::InterfaceRequestDataView<CoordinationUnitIntrospectorInterfaceBase>;
using CoordinationUnitIntrospectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinationUnitIntrospectorInterfaceBase>;
using CoordinationUnitIntrospectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinationUnitIntrospectorInterfaceBase>;
class PageInfoDataView {
 public:
  PageInfoDataView() {}

  PageInfoDataView(
      internal::PageInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t ukm_source_id() const {
    return data_->ukm_source_id;
  }
  bool is_visible() const {
    return data_->is_visible;
  }
  inline void GetTimeSinceLastNavigationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeSinceLastNavigation(UserType* output) {
    auto* pointer = data_->time_since_last_navigation.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetTimeSinceLastVisibilityChangeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeSinceLastVisibilityChange(UserType* output) {
    auto* pointer = data_->time_since_last_visibility_change.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessInfoDataView {
 public:
  ProcessInfoDataView() {}

  ProcessInfoDataView(
      internal::ProcessInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  inline void GetPageInfosDataView(
      mojo::ArrayDataView<PageInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPageInfos(UserType* output) {
    auto* pointer = data_->page_infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::resource_coordinator::mojom::PageInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetLaunchTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLaunchTime(UserType* output) {
    auto* pointer = data_->launch_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CoordinationUnitIntrospector_GetProcessToURLMap_ParamsDataView {
 public:
  CoordinationUnitIntrospector_GetProcessToURLMap_ParamsDataView() {}

  CoordinationUnitIntrospector_GetProcessToURLMap_ParamsDataView(
      internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CoordinationUnitIntrospector_GetProcessToURLMap_Params_Data* data_ = nullptr;
};

class CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParamsDataView {
 public:
  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParamsDataView() {}

  CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParamsDataView(
      internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProcessInfosDataView(
      mojo::ArrayDataView<ProcessInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessInfos(UserType* output) {
    auto* pointer = data_->process_infos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::resource_coordinator::mojom::ProcessInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::PageInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::resource_coordinator::mojom::PageInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::resource_coordinator::mojom::internal::PageInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->ukm_source_id = CallWithContext(Traits::ukm_source_id, input, custom_context);
    (*output)->is_visible = CallWithContext(Traits::is_visible, input, custom_context);
    decltype(CallWithContext(Traits::time_since_last_navigation, input, custom_context)) in_time_since_last_navigation = CallWithContext(Traits::time_since_last_navigation, input, custom_context);
    typename decltype((*output)->time_since_last_navigation)::BaseType::BufferWriter
        time_since_last_navigation_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_time_since_last_navigation, buffer, &time_since_last_navigation_writer, context);
    (*output)->time_since_last_navigation.Set(
        time_since_last_navigation_writer.is_null() ? nullptr : time_since_last_navigation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_since_last_navigation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_since_last_navigation in PageInfo struct");
    decltype(CallWithContext(Traits::time_since_last_visibility_change, input, custom_context)) in_time_since_last_visibility_change = CallWithContext(Traits::time_since_last_visibility_change, input, custom_context);
    typename decltype((*output)->time_since_last_visibility_change)::BaseType::BufferWriter
        time_since_last_visibility_change_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_time_since_last_visibility_change, buffer, &time_since_last_visibility_change_writer, context);
    (*output)->time_since_last_visibility_change.Set(
        time_since_last_visibility_change_writer.is_null() ? nullptr : time_since_last_visibility_change_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->time_since_last_visibility_change.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null time_since_last_visibility_change in PageInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::resource_coordinator::mojom::internal::PageInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::resource_coordinator::mojom::PageInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::ProcessInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::resource_coordinator::mojom::ProcessInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::resource_coordinator::mojom::internal::ProcessInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::pid, input, custom_context)) in_pid = CallWithContext(Traits::pid, input, custom_context);
    typename decltype((*output)->pid)::BaseType::BufferWriter
        pid_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
        in_pid, buffer, &pid_writer, context);
    (*output)->pid.Set(
        pid_writer.is_null() ? nullptr : pid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pid in ProcessInfo struct");
    decltype(CallWithContext(Traits::page_infos, input, custom_context)) in_page_infos = CallWithContext(Traits::page_infos, input, custom_context);
    typename decltype((*output)->page_infos)::BaseType::BufferWriter
        page_infos_writer;
    const mojo::internal::ContainerValidateParams page_infos_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::resource_coordinator::mojom::PageInfoDataView>>(
        in_page_infos, buffer, &page_infos_writer, &page_infos_validate_params,
        context);
    (*output)->page_infos.Set(
        page_infos_writer.is_null() ? nullptr : page_infos_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->page_infos.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null page_infos in ProcessInfo struct");
    decltype(CallWithContext(Traits::launch_time, input, custom_context)) in_launch_time = CallWithContext(Traits::launch_time, input, custom_context);
    typename decltype((*output)->launch_time)::BaseType::BufferWriter
        launch_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_launch_time, buffer, &launch_time_writer, context);
    (*output)->launch_time.Set(
        launch_time_writer.is_null() ? nullptr : launch_time_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::resource_coordinator::mojom::internal::ProcessInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::resource_coordinator::mojom::ProcessInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {

inline void PageInfoDataView::GetTimeSinceLastNavigationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_since_last_navigation.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PageInfoDataView::GetTimeSinceLastVisibilityChangeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_since_last_visibility_change.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ProcessInfoDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void ProcessInfoDataView::GetPageInfosDataView(
    mojo::ArrayDataView<PageInfoDataView>* output) {
  auto pointer = data_->page_infos.Get();
  *output = mojo::ArrayDataView<PageInfoDataView>(pointer, context_);
}
inline void ProcessInfoDataView::GetLaunchTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->launch_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void CoordinationUnitIntrospector_GetProcessToURLMap_ResponseParamsDataView::GetProcessInfosDataView(
    mojo::ArrayDataView<ProcessInfoDataView>* output) {
  auto pointer = data_->process_infos.Get();
  *output = mojo::ArrayDataView<ProcessInfoDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_INTROSPECTOR_MOJOM_SHARED_H_
