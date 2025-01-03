// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/oom_intervention.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class OomInterventionHostInterfaceBase {};

using OomInterventionHostPtrDataView =
    mojo::InterfacePtrDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostRequestDataView =
    mojo::InterfaceRequestDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OomInterventionHostInterfaceBase>;
class OomInterventionInterfaceBase {};

using OomInterventionPtrDataView =
    mojo::InterfacePtrDataView<OomInterventionInterfaceBase>;
using OomInterventionRequestDataView =
    mojo::InterfaceRequestDataView<OomInterventionInterfaceBase>;
using OomInterventionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OomInterventionInterfaceBase>;
using OomInterventionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OomInterventionInterfaceBase>;
class OomInterventionHost_OnHighMemoryUsage_ParamsDataView {
 public:
  OomInterventionHost_OnHighMemoryUsage_ParamsDataView() {}

  OomInterventionHost_OnHighMemoryUsage_ParamsDataView(
      internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool intervention_triggered() const {
    return data_->intervention_triggered;
  }
 private:
  internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* data_ = nullptr;
};

class OomIntervention_StartDetection_ParamsDataView {
 public:
  OomIntervention_StartDetection_ParamsDataView() {}

  OomIntervention_StartDetection_ParamsDataView(
      internal::OomIntervention_StartDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::OomInterventionHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSharedMetricsBufferDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMetricsBuffer(UserType* output) {
    auto* pointer = data_->shared_metrics_buffer.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, context_);
  }
  uint64_t memory_workload_threshold() const {
    return data_->memory_workload_threshold;
  }
  bool trigger_intervention() const {
    return data_->trigger_intervention;
  }
 private:
  internal::OomIntervention_StartDetection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace blink {
namespace mojom {



inline void OomIntervention_StartDetection_ParamsDataView::GetSharedMetricsBufferDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_metrics_buffer.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_OOM_INTERVENTION_MOJOM_SHARED_H_
