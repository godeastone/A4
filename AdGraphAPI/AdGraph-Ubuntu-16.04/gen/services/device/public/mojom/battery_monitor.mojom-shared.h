// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/battery_monitor.mojom-shared-internal.h"
#include "services/device/public/mojom/battery_status.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace device {
namespace mojom {


}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
// Interface base classes. They are used for type safety check.
class BatteryMonitorInterfaceBase {};

using BatteryMonitorPtrDataView =
    mojo::InterfacePtrDataView<BatteryMonitorInterfaceBase>;
using BatteryMonitorRequestDataView =
    mojo::InterfaceRequestDataView<BatteryMonitorInterfaceBase>;
using BatteryMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BatteryMonitorInterfaceBase>;
using BatteryMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BatteryMonitorInterfaceBase>;
class BatteryMonitor_QueryNextStatus_ParamsDataView {
 public:
  BatteryMonitor_QueryNextStatus_ParamsDataView() {}

  BatteryMonitor_QueryNextStatus_ParamsDataView(
      internal::BatteryMonitor_QueryNextStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BatteryMonitor_QueryNextStatus_Params_Data* data_ = nullptr;
};

class BatteryMonitor_QueryNextStatus_ResponseParamsDataView {
 public:
  BatteryMonitor_QueryNextStatus_ResponseParamsDataView() {}

  BatteryMonitor_QueryNextStatus_ResponseParamsDataView(
      internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      ::device::mojom::BatteryStatusDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<::device::mojom::BatteryStatusDataView>(
        pointer, output, context_);
  }
 private:
  internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace device {
namespace mojom {



inline void BatteryMonitor_QueryNextStatus_ResponseParamsDataView::GetStatusDataView(
    ::device::mojom::BatteryStatusDataView* output) {
  auto pointer = data_->status.Get();
  *output = ::device::mojom::BatteryStatusDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_SHARED_H_
