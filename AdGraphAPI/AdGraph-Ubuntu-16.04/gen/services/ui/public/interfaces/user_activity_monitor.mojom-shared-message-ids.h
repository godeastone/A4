// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 689634773 value is based on sha256(salt + "UserActivityObserver1").
constexpr uint32_t kUserActivityObserver_OnUserActivity_Name = 689634773;
// The 733113051 value is based on sha256(salt + "UserIdleObserver1").
constexpr uint32_t kUserIdleObserver_OnUserIdleStateChanged_Name = 733113051;
// The 2054135144 value is based on sha256(salt + "UserActivityMonitor1").
constexpr uint32_t kUserActivityMonitor_AddUserActivityObserver_Name = 2054135144;
// The 85097039 value is based on sha256(salt + "UserActivityMonitor2").
constexpr uint32_t kUserActivityMonitor_AddUserIdleObserver_Name = 85097039;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_USER_ACTIVITY_MONITOR_MOJOM_SHARED_MESSAGE_IDS_H_