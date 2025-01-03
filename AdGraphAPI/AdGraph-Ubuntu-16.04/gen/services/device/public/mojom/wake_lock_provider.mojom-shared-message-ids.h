// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 626366045 value is based on sha256(salt + "WakeLockProvider1").
constexpr uint32_t kWakeLockProvider_GetWakeLockContextForID_Name = 626366045;
// The 138186657 value is based on sha256(salt + "WakeLockProvider2").
constexpr uint32_t kWakeLockProvider_GetWakeLockWithoutContext_Name = 138186657;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_