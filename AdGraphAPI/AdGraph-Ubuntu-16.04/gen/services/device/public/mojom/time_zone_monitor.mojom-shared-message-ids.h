// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1932300107 value is based on sha256(salt + "TimeZoneMonitor1").
constexpr uint32_t kTimeZoneMonitor_AddClient_Name = 1932300107;
// The 1446370289 value is based on sha256(salt + "TimeZoneMonitorClient1").
constexpr uint32_t kTimeZoneMonitorClient_OnTimeZoneChange_Name = 1446370289;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_