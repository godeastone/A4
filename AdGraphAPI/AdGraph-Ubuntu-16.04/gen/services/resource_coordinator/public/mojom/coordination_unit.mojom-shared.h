// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/signals.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {
class CoordinationUnitIDDataView;

class ProcessResourceMeasurementDataView;

class ProcessResourceMeasurementBatchDataView;



}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::resource_coordinator::mojom::CoordinationUnitIDDataView> {
  using Data = ::resource_coordinator::mojom::internal::CoordinationUnitID_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::resource_coordinator::mojom::ProcessResourceMeasurementDataView> {
  using Data = ::resource_coordinator::mojom::internal::ProcessResourceMeasurement_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView> {
  using Data = ::resource_coordinator::mojom::internal::ProcessResourceMeasurementBatch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {

enum class CoordinationUnitType : int32_t {
  kFrame,
  kPage,
  kProcess,
  kSystem,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, CoordinationUnitType value) {
  switch(value) {
    case CoordinationUnitType::kFrame:
      return os << "CoordinationUnitType::kFrame";
    case CoordinationUnitType::kPage:
      return os << "CoordinationUnitType::kPage";
    case CoordinationUnitType::kProcess:
      return os << "CoordinationUnitType::kProcess";
    case CoordinationUnitType::kSystem:
      return os << "CoordinationUnitType::kSystem";
    default:
      return os << "Unknown CoordinationUnitType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CoordinationUnitType value) {
  return internal::CoordinationUnitType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FrameCoordinationUnitInterfaceBase {};

using FrameCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<FrameCoordinationUnitInterfaceBase>;
using FrameCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<FrameCoordinationUnitInterfaceBase>;
using FrameCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FrameCoordinationUnitInterfaceBase>;
using FrameCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FrameCoordinationUnitInterfaceBase>;
class PageCoordinationUnitInterfaceBase {};

using PageCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<PageCoordinationUnitInterfaceBase>;
using PageCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<PageCoordinationUnitInterfaceBase>;
using PageCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PageCoordinationUnitInterfaceBase>;
using PageCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PageCoordinationUnitInterfaceBase>;
class ProcessCoordinationUnitInterfaceBase {};

using ProcessCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProcessCoordinationUnitInterfaceBase>;
class SystemCoordinationUnitInterfaceBase {};

using SystemCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<SystemCoordinationUnitInterfaceBase>;
using SystemCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<SystemCoordinationUnitInterfaceBase>;
using SystemCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SystemCoordinationUnitInterfaceBase>;
using SystemCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SystemCoordinationUnitInterfaceBase>;
class CoordinationUnitIDDataView {
 public:
  CoordinationUnitIDDataView() {}

  CoordinationUnitIDDataView(
      internal::CoordinationUnitID_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitType>(
        data_value, output);
  }

  CoordinationUnitType type() const {
    return static_cast<CoordinationUnitType>(data_->type);
  }
  int64_t id() const {
    return data_->id;
  }
 private:
  internal::CoordinationUnitID_Data* data_ = nullptr;
};

class ProcessResourceMeasurementDataView {
 public:
  ProcessResourceMeasurementDataView() {}

  ProcessResourceMeasurementDataView(
      internal::ProcessResourceMeasurement_Data* data,
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
  inline void GetCpuUsageDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCpuUsage(UserType* output) {
    auto* pointer = data_->cpu_usage.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  uint32_t private_footprint_kb() const {
    return data_->private_footprint_kb;
  }
 private:
  internal::ProcessResourceMeasurement_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessResourceMeasurementBatchDataView {
 public:
  ProcessResourceMeasurementBatchDataView() {}

  ProcessResourceMeasurementBatchDataView(
      internal::ProcessResourceMeasurementBatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBatchStartedTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBatchStartedTime(UserType* output) {
    auto* pointer = data_->batch_started_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetBatchEndedTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBatchEndedTime(UserType* output) {
    auto* pointer = data_->batch_ended_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetMeasurementsDataView(
      mojo::ArrayDataView<ProcessResourceMeasurementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMeasurements(UserType* output) {
    auto* pointer = data_->measurements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::resource_coordinator::mojom::ProcessResourceMeasurementDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProcessResourceMeasurementBatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameCoordinationUnit_GetID_ParamsDataView {
 public:
  FrameCoordinationUnit_GetID_ParamsDataView() {}

  FrameCoordinationUnit_GetID_ParamsDataView(
      internal::FrameCoordinationUnit_GetID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameCoordinationUnit_GetID_Params_Data* data_ = nullptr;
};

class FrameCoordinationUnit_GetID_ResponseParamsDataView {
 public:
  FrameCoordinationUnit_GetID_ResponseParamsDataView() {}

  FrameCoordinationUnit_GetID_ResponseParamsDataView(
      internal::FrameCoordinationUnit_GetID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameCoordinationUnit_GetID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameCoordinationUnit_AddBinding_ParamsDataView {
 public:
  FrameCoordinationUnit_AddBinding_ParamsDataView() {}

  FrameCoordinationUnit_AddBinding_ParamsDataView(
      internal::FrameCoordinationUnit_AddBinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::FrameCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FrameCoordinationUnit_AddBinding_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameCoordinationUnit_AddChildFrame_ParamsDataView {
 public:
  FrameCoordinationUnit_AddChildFrame_ParamsDataView() {}

  FrameCoordinationUnit_AddChildFrame_ParamsDataView(
      internal::FrameCoordinationUnit_AddChildFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameCoordinationUnit_AddChildFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameCoordinationUnit_RemoveChildFrame_ParamsDataView {
 public:
  FrameCoordinationUnit_RemoveChildFrame_ParamsDataView() {}

  FrameCoordinationUnit_RemoveChildFrame_ParamsDataView(
      internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::FrameCoordinationUnit_RemoveChildFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FrameCoordinationUnit_SetAudibility_ParamsDataView {
 public:
  FrameCoordinationUnit_SetAudibility_ParamsDataView() {}

  FrameCoordinationUnit_SetAudibility_ParamsDataView(
      internal::FrameCoordinationUnit_SetAudibility_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool audible() const {
    return data_->audible;
  }
 private:
  internal::FrameCoordinationUnit_SetAudibility_Params_Data* data_ = nullptr;
};

class FrameCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView {
 public:
  FrameCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView() {}

  FrameCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView(
      internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool idle() const {
    return data_->idle;
  }
 private:
  internal::FrameCoordinationUnit_SetNetworkAlmostIdle_Params_Data* data_ = nullptr;
};

class FrameCoordinationUnit_SetLifecycleState_ParamsDataView {
 public:
  FrameCoordinationUnit_SetLifecycleState_ParamsDataView() {}

  FrameCoordinationUnit_SetLifecycleState_ParamsDataView(
      internal::FrameCoordinationUnit_SetLifecycleState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::resource_coordinator::mojom::LifecycleState>(
        data_value, output);
  }

  ::resource_coordinator::mojom::LifecycleState state() const {
    return static_cast<::resource_coordinator::mojom::LifecycleState>(data_->state);
  }
 private:
  internal::FrameCoordinationUnit_SetLifecycleState_Params_Data* data_ = nullptr;
};

class FrameCoordinationUnit_OnAlertFired_ParamsDataView {
 public:
  FrameCoordinationUnit_OnAlertFired_ParamsDataView() {}

  FrameCoordinationUnit_OnAlertFired_ParamsDataView(
      internal::FrameCoordinationUnit_OnAlertFired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameCoordinationUnit_OnAlertFired_Params_Data* data_ = nullptr;
};

class FrameCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView {
 public:
  FrameCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView() {}

  FrameCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView(
      internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::FrameCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_GetID_ParamsDataView {
 public:
  PageCoordinationUnit_GetID_ParamsDataView() {}

  PageCoordinationUnit_GetID_ParamsDataView(
      internal::PageCoordinationUnit_GetID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PageCoordinationUnit_GetID_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_GetID_ResponseParamsDataView {
 public:
  PageCoordinationUnit_GetID_ResponseParamsDataView() {}

  PageCoordinationUnit_GetID_ResponseParamsDataView(
      internal::PageCoordinationUnit_GetID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageCoordinationUnit_GetID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageCoordinationUnit_AddBinding_ParamsDataView {
 public:
  PageCoordinationUnit_AddBinding_ParamsDataView() {}

  PageCoordinationUnit_AddBinding_ParamsDataView(
      internal::PageCoordinationUnit_AddBinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::PageCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PageCoordinationUnit_AddBinding_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageCoordinationUnit_AddFrame_ParamsDataView {
 public:
  PageCoordinationUnit_AddFrame_ParamsDataView() {}

  PageCoordinationUnit_AddFrame_ParamsDataView(
      internal::PageCoordinationUnit_AddFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageCoordinationUnit_AddFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageCoordinationUnit_RemoveFrame_ParamsDataView {
 public:
  PageCoordinationUnit_RemoveFrame_ParamsDataView() {}

  PageCoordinationUnit_RemoveFrame_ParamsDataView(
      internal::PageCoordinationUnit_RemoveFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageCoordinationUnit_RemoveFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageCoordinationUnit_SetIsLoading_ParamsDataView {
 public:
  PageCoordinationUnit_SetIsLoading_ParamsDataView() {}

  PageCoordinationUnit_SetIsLoading_ParamsDataView(
      internal::PageCoordinationUnit_SetIsLoading_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_loading() const {
    return data_->is_loading;
  }
 private:
  internal::PageCoordinationUnit_SetIsLoading_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_SetVisibility_ParamsDataView {
 public:
  PageCoordinationUnit_SetVisibility_ParamsDataView() {}

  PageCoordinationUnit_SetVisibility_ParamsDataView(
      internal::PageCoordinationUnit_SetVisibility_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::PageCoordinationUnit_SetVisibility_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_SetUKMSourceId_ParamsDataView {
 public:
  PageCoordinationUnit_SetUKMSourceId_ParamsDataView() {}

  PageCoordinationUnit_SetUKMSourceId_ParamsDataView(
      internal::PageCoordinationUnit_SetUKMSourceId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t ukm_source_id() const {
    return data_->ukm_source_id;
  }
 private:
  internal::PageCoordinationUnit_SetUKMSourceId_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_OnFaviconUpdated_ParamsDataView {
 public:
  PageCoordinationUnit_OnFaviconUpdated_ParamsDataView() {}

  PageCoordinationUnit_OnFaviconUpdated_ParamsDataView(
      internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PageCoordinationUnit_OnFaviconUpdated_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_OnTitleUpdated_ParamsDataView {
 public:
  PageCoordinationUnit_OnTitleUpdated_ParamsDataView() {}

  PageCoordinationUnit_OnTitleUpdated_ParamsDataView(
      internal::PageCoordinationUnit_OnTitleUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PageCoordinationUnit_OnTitleUpdated_Params_Data* data_ = nullptr;
};

class PageCoordinationUnit_OnMainFrameNavigationCommitted_ParamsDataView {
 public:
  PageCoordinationUnit_OnMainFrameNavigationCommitted_ParamsDataView() {}

  PageCoordinationUnit_OnMainFrameNavigationCommitted_ParamsDataView(
      internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PageCoordinationUnit_OnMainFrameNavigationCommitted_Params_Data* data_ = nullptr;
};

class ProcessCoordinationUnit_GetID_ParamsDataView {
 public:
  ProcessCoordinationUnit_GetID_ParamsDataView() {}

  ProcessCoordinationUnit_GetID_ParamsDataView(
      internal::ProcessCoordinationUnit_GetID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProcessCoordinationUnit_GetID_Params_Data* data_ = nullptr;
};

class ProcessCoordinationUnit_GetID_ResponseParamsDataView {
 public:
  ProcessCoordinationUnit_GetID_ResponseParamsDataView() {}

  ProcessCoordinationUnit_GetID_ResponseParamsDataView(
      internal::ProcessCoordinationUnit_GetID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_GetID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_AddBinding_ParamsDataView {
 public:
  ProcessCoordinationUnit_AddBinding_ParamsDataView() {}

  ProcessCoordinationUnit_AddBinding_ParamsDataView(
      internal::ProcessCoordinationUnit_AddBinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::ProcessCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProcessCoordinationUnit_AddBinding_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_AddFrame_ParamsDataView {
 public:
  ProcessCoordinationUnit_AddFrame_ParamsDataView() {}

  ProcessCoordinationUnit_AddFrame_ParamsDataView(
      internal::ProcessCoordinationUnit_AddFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_AddFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_RemoveFrame_ParamsDataView {
 public:
  ProcessCoordinationUnit_RemoveFrame_ParamsDataView() {}

  ProcessCoordinationUnit_RemoveFrame_ParamsDataView(
      internal::ProcessCoordinationUnit_RemoveFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_RemoveFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_SetCPUUsage_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetCPUUsage_ParamsDataView() {}

  ProcessCoordinationUnit_SetCPUUsage_ParamsDataView(
      internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double cpu_usage() const {
    return data_->cpu_usage;
  }
 private:
  internal::ProcessCoordinationUnit_SetCPUUsage_Params_Data* data_ = nullptr;
};

class ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView() {}

  ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView(
      internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_SetLaunchTime_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetLaunchTime_ParamsDataView() {}

  ProcessCoordinationUnit_SetLaunchTime_ParamsDataView(
      internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLaunchTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLaunchTime(UserType* output) {
    auto* pointer = data_->launch_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProcessCoordinationUnit_SetLaunchTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView() {}

  ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView(
      internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool main_thread_task_load_is_low() const {
    return data_->main_thread_task_load_is_low;
  }
 private:
  internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* data_ = nullptr;
};

class ProcessCoordinationUnit_SetPID_ParamsDataView {
 public:
  ProcessCoordinationUnit_SetPID_ParamsDataView() {}

  ProcessCoordinationUnit_SetPID_ParamsDataView(
      internal::ProcessCoordinationUnit_SetPID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t pid() const {
    return data_->pid;
  }
 private:
  internal::ProcessCoordinationUnit_SetPID_Params_Data* data_ = nullptr;
};

class SystemCoordinationUnit_GetID_ParamsDataView {
 public:
  SystemCoordinationUnit_GetID_ParamsDataView() {}

  SystemCoordinationUnit_GetID_ParamsDataView(
      internal::SystemCoordinationUnit_GetID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemCoordinationUnit_GetID_Params_Data* data_ = nullptr;
};

class SystemCoordinationUnit_GetID_ResponseParamsDataView {
 public:
  SystemCoordinationUnit_GetID_ResponseParamsDataView() {}

  SystemCoordinationUnit_GetID_ResponseParamsDataView(
      internal::SystemCoordinationUnit_GetID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemCoordinationUnit_GetID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemCoordinationUnit_AddBinding_ParamsDataView {
 public:
  SystemCoordinationUnit_AddBinding_ParamsDataView() {}

  SystemCoordinationUnit_AddBinding_ParamsDataView(
      internal::SystemCoordinationUnit_AddBinding_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::SystemCoordinationUnitRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SystemCoordinationUnit_AddBinding_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SystemCoordinationUnit_OnProcessCPUUsageReady_ParamsDataView {
 public:
  SystemCoordinationUnit_OnProcessCPUUsageReady_ParamsDataView() {}

  SystemCoordinationUnit_OnProcessCPUUsageReady_ParamsDataView(
      internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SystemCoordinationUnit_OnProcessCPUUsageReady_Params_Data* data_ = nullptr;
};

class SystemCoordinationUnit_DistributeMeasurementBatch_ParamsDataView {
 public:
  SystemCoordinationUnit_DistributeMeasurementBatch_ParamsDataView() {}

  SystemCoordinationUnit_DistributeMeasurementBatch_ParamsDataView(
      internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMeasurementBatchDataView(
      ProcessResourceMeasurementBatchDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMeasurementBatch(UserType* output) {
    auto* pointer = data_->measurement_batch.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView>(
        pointer, output, context_);
  }
 private:
  internal::SystemCoordinationUnit_DistributeMeasurementBatch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

template <>
struct hash<::resource_coordinator::mojom::CoordinationUnitType>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::CoordinationUnitType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::resource_coordinator::mojom::CoordinationUnitType, ::resource_coordinator::mojom::CoordinationUnitType> {
  static ::resource_coordinator::mojom::CoordinationUnitType ToMojom(::resource_coordinator::mojom::CoordinationUnitType input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::CoordinationUnitType input, ::resource_coordinator::mojom::CoordinationUnitType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::CoordinationUnitType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::CoordinationUnitType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::CoordinationUnitType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::CoordinationUnitIDDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::resource_coordinator::mojom::CoordinationUnitIDDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::resource_coordinator::mojom::internal::CoordinationUnitID_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::resource_coordinator::mojom::internal::CoordinationUnitID_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::resource_coordinator::mojom::CoordinationUnitIDDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::ProcessResourceMeasurementDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::resource_coordinator::mojom::ProcessResourceMeasurementDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::resource_coordinator::mojom::internal::ProcessResourceMeasurement_Data::BufferWriter* output,
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
        "null pid in ProcessResourceMeasurement struct");
    decltype(CallWithContext(Traits::cpu_usage, input, custom_context)) in_cpu_usage = CallWithContext(Traits::cpu_usage, input, custom_context);
    typename decltype((*output)->cpu_usage)::BaseType::BufferWriter
        cpu_usage_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_cpu_usage, buffer, &cpu_usage_writer, context);
    (*output)->cpu_usage.Set(
        cpu_usage_writer.is_null() ? nullptr : cpu_usage_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cpu_usage.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cpu_usage in ProcessResourceMeasurement struct");
    (*output)->private_footprint_kb = CallWithContext(Traits::private_footprint_kb, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::resource_coordinator::mojom::internal::ProcessResourceMeasurement_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::resource_coordinator::mojom::ProcessResourceMeasurementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::resource_coordinator::mojom::internal::ProcessResourceMeasurementBatch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::batch_started_time, input, custom_context)) in_batch_started_time = CallWithContext(Traits::batch_started_time, input, custom_context);
    typename decltype((*output)->batch_started_time)::BaseType::BufferWriter
        batch_started_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_batch_started_time, buffer, &batch_started_time_writer, context);
    (*output)->batch_started_time.Set(
        batch_started_time_writer.is_null() ? nullptr : batch_started_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->batch_started_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null batch_started_time in ProcessResourceMeasurementBatch struct");
    decltype(CallWithContext(Traits::batch_ended_time, input, custom_context)) in_batch_ended_time = CallWithContext(Traits::batch_ended_time, input, custom_context);
    typename decltype((*output)->batch_ended_time)::BaseType::BufferWriter
        batch_ended_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_batch_ended_time, buffer, &batch_ended_time_writer, context);
    (*output)->batch_ended_time.Set(
        batch_ended_time_writer.is_null() ? nullptr : batch_ended_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->batch_ended_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null batch_ended_time in ProcessResourceMeasurementBatch struct");
    decltype(CallWithContext(Traits::measurements, input, custom_context)) in_measurements = CallWithContext(Traits::measurements, input, custom_context);
    typename decltype((*output)->measurements)::BaseType::BufferWriter
        measurements_writer;
    const mojo::internal::ContainerValidateParams measurements_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::resource_coordinator::mojom::ProcessResourceMeasurementDataView>>(
        in_measurements, buffer, &measurements_writer, &measurements_validate_params,
        context);
    (*output)->measurements.Set(
        measurements_writer.is_null() ? nullptr : measurements_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->measurements.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null measurements in ProcessResourceMeasurementBatch struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::resource_coordinator::mojom::internal::ProcessResourceMeasurementBatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::resource_coordinator::mojom::ProcessResourceMeasurementBatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {



inline void ProcessResourceMeasurementDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void ProcessResourceMeasurementDataView::GetCpuUsageDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->cpu_usage.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ProcessResourceMeasurementBatchDataView::GetBatchStartedTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->batch_started_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void ProcessResourceMeasurementBatchDataView::GetBatchEndedTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->batch_ended_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void ProcessResourceMeasurementBatchDataView::GetMeasurementsDataView(
    mojo::ArrayDataView<ProcessResourceMeasurementDataView>* output) {
  auto pointer = data_->measurements.Get();
  *output = mojo::ArrayDataView<ProcessResourceMeasurementDataView>(pointer, context_);
}




inline void FrameCoordinationUnit_GetID_ResponseParamsDataView::GetIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}




inline void FrameCoordinationUnit_AddChildFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}


inline void FrameCoordinationUnit_RemoveChildFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}














inline void PageCoordinationUnit_GetID_ResponseParamsDataView::GetIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}




inline void PageCoordinationUnit_AddFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}


inline void PageCoordinationUnit_RemoveFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}
















inline void ProcessCoordinationUnit_GetID_ResponseParamsDataView::GetIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}




inline void ProcessCoordinationUnit_AddFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}


inline void ProcessCoordinationUnit_RemoveFrame_ParamsDataView::GetCuIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}




inline void ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ProcessCoordinationUnit_SetLaunchTime_ParamsDataView::GetLaunchTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->launch_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}








inline void SystemCoordinationUnit_GetID_ResponseParamsDataView::GetIdDataView(
    CoordinationUnitIDDataView* output) {
  auto pointer = data_->id.Get();
  *output = CoordinationUnitIDDataView(pointer, context_);
}






inline void SystemCoordinationUnit_DistributeMeasurementBatch_ParamsDataView::GetMeasurementBatchDataView(
    ProcessResourceMeasurementBatchDataView* output) {
  auto pointer = data_->measurement_batch.Get();
  *output = ProcessResourceMeasurementBatchDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_
