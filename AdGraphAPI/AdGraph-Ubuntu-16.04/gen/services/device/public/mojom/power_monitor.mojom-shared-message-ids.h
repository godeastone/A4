// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1592602367 value is based on sha256(salt + "PowerMonitor1").
constexpr uint32_t kPowerMonitor_AddClient_Name = 1592602367;
// The 1649313543 value is based on sha256(salt + "PowerMonitorClient1").
constexpr uint32_t kPowerMonitorClient_PowerStateChange_Name = 1649313543;
// The 1081522928 value is based on sha256(salt + "PowerMonitorClient2").
constexpr uint32_t kPowerMonitorClient_Suspend_Name = 1081522928;
// The 2046170076 value is based on sha256(salt + "PowerMonitorClient3").
constexpr uint32_t kPowerMonitorClient_Resume_Name = 2046170076;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_