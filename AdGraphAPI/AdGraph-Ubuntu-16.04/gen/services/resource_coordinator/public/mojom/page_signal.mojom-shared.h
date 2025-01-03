// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/page_signal.mojom-shared-internal.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PageSignalReceiverInterfaceBase {};

using PageSignalReceiverPtrDataView =
    mojo::InterfacePtrDataView<PageSignalReceiverInterfaceBase>;
using PageSignalReceiverRequestDataView =
    mojo::InterfaceRequestDataView<PageSignalReceiverInterfaceBase>;
using PageSignalReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PageSignalReceiverInterfaceBase>;
using PageSignalReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PageSignalReceiverInterfaceBase>;
class PageSignalGeneratorInterfaceBase {};

using PageSignalGeneratorPtrDataView =
    mojo::InterfacePtrDataView<PageSignalGeneratorInterfaceBase>;
using PageSignalGeneratorRequestDataView =
    mojo::InterfaceRequestDataView<PageSignalGeneratorInterfaceBase>;
using PageSignalGeneratorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PageSignalGeneratorInterfaceBase>;
using PageSignalGeneratorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PageSignalGeneratorInterfaceBase>;
class PageSignalReceiver_NotifyPageAlmostIdle_ParamsDataView {
 public:
  PageSignalReceiver_NotifyPageAlmostIdle_ParamsDataView() {}

  PageSignalReceiver_NotifyPageAlmostIdle_ParamsDataView(
      internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageSignalReceiver_NotifyPageAlmostIdle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView {
 public:
  PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView() {}

  PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView(
      internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::PageSignalReceiver_SetExpectedTaskQueueingDuration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageSignalReceiver_SetLifecycleState_ParamsDataView {
 public:
  PageSignalReceiver_SetLifecycleState_ParamsDataView() {}

  PageSignalReceiver_SetLifecycleState_ParamsDataView(
      internal::PageSignalReceiver_SetLifecycleState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCuIdDataView(
      ::resource_coordinator::mojom::CoordinationUnitIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCuId(UserType* output) {
    auto* pointer = data_->cu_id.Get();
    return mojo::internal::Deserialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
        pointer, output, context_);
  }
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
  internal::PageSignalReceiver_SetLifecycleState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PageSignalGenerator_AddReceiver_ParamsDataView {
 public:
  PageSignalGenerator_AddReceiver_ParamsDataView() {}

  PageSignalGenerator_AddReceiver_ParamsDataView(
      internal::PageSignalGenerator_AddReceiver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::resource_coordinator::mojom::PageSignalReceiverPtrDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PageSignalGenerator_AddReceiver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {

inline void PageSignalReceiver_NotifyPageAlmostIdle_ParamsDataView::GetCuIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}


inline void PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView::GetCuIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}
inline void PageSignalReceiver_SetExpectedTaskQueueingDuration_ParamsDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void PageSignalReceiver_SetLifecycleState_ParamsDataView::GetCuIdDataView(
    ::resource_coordinator::mojom::CoordinationUnitIDDataView* output) {
  auto pointer = data_->cu_id.Get();
  *output = ::resource_coordinator::mojom::CoordinationUnitIDDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_PAGE_SIGNAL_MOJOM_SHARED_H_
