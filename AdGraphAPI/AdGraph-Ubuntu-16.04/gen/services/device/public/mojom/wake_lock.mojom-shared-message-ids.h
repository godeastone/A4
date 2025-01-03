// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 2044804429 value is based on sha256(salt + "WakeLock1").
constexpr uint32_t kWakeLock_RequestWakeLock_Name = 2044804429;
// The 546717726 value is based on sha256(salt + "WakeLock2").
constexpr uint32_t kWakeLock_CancelWakeLock_Name = 546717726;
// The 559213251 value is based on sha256(salt + "WakeLock3").
constexpr uint32_t kWakeLock_AddClient_Name = 559213251;
// The 1215390489 value is based on sha256(salt + "WakeLock4").
constexpr uint32_t kWakeLock_ChangeType_Name = 1215390489;
// The 2022667482 value is based on sha256(salt + "WakeLock5").
constexpr uint32_t kWakeLock_HasWakeLockForTests_Name = 2022667482;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_SHARED_MESSAGE_IDS_H_