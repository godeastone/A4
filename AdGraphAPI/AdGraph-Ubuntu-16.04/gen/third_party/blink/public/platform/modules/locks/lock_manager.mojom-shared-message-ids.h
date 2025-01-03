// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 745040424 value is based on sha256(salt + "LockRequest1").
constexpr uint32_t kLockRequest_Granted_Name = 745040424;
// The 378680434 value is based on sha256(salt + "LockRequest2").
constexpr uint32_t kLockRequest_Failed_Name = 378680434;
// The 1769957536 value is based on sha256(salt + "LockRequest3").
constexpr uint32_t kLockRequest_Abort_Name = 1769957536;
// The 989702302 value is based on sha256(salt + "LockManager1").
constexpr uint32_t kLockManager_RequestLock_Name = 989702302;
// The 1321170101 value is based on sha256(salt + "LockManager2").
constexpr uint32_t kLockManager_QueryState_Name = 1321170101;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_LOCKS_LOCK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_