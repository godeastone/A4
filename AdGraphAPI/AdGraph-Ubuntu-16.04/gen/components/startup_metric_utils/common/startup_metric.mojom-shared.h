// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_H_
#define COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_H_

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
#include "components/startup_metric_utils/common/startup_metric.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace startup_metric_utils {
namespace mojom {


}  // namespace mojom
}  // namespace startup_metric_utils

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace startup_metric_utils {
namespace mojom {
// Interface base classes. They are used for type safety check.
class StartupMetricHostInterfaceBase {};

using StartupMetricHostPtrDataView =
    mojo::InterfacePtrDataView<StartupMetricHostInterfaceBase>;
using StartupMetricHostRequestDataView =
    mojo::InterfaceRequestDataView<StartupMetricHostInterfaceBase>;
using StartupMetricHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<StartupMetricHostInterfaceBase>;
using StartupMetricHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<StartupMetricHostInterfaceBase>;
class StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView {
 public:
  StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView() {}

  StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView(
      internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRendererMainEntryTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRendererMainEntryTime(UserType* output) {
    auto* pointer = data_->renderer_main_entry_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::StartupMetricHost_RecordRendererMainEntryTime_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace startup_metric_utils

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace startup_metric_utils {
namespace mojom {

inline void StartupMetricHost_RecordRendererMainEntryTime_ParamsDataView::GetRendererMainEntryTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->renderer_main_entry_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace startup_metric_utils

#endif  // COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_H_
