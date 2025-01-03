// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2139565163 value is based on sha256(salt + "PermissionObserver1").
constexpr uint32_t kPermissionObserver_OnPermissionStatusChange_Name = 2139565163;
// The 814299949 value is based on sha256(salt + "PermissionService1").
constexpr uint32_t kPermissionService_HasPermission_Name = 814299949;
// The 513144481 value is based on sha256(salt + "PermissionService2").
constexpr uint32_t kPermissionService_RequestPermission_Name = 513144481;
// The 1918832659 value is based on sha256(salt + "PermissionService3").
constexpr uint32_t kPermissionService_RequestPermissions_Name = 1918832659;
// The 839536071 value is based on sha256(salt + "PermissionService4").
constexpr uint32_t kPermissionService_RevokePermission_Name = 839536071;
// The 643282611 value is based on sha256(salt + "PermissionService5").
constexpr uint32_t kPermissionService_AddPermissionObserver_Name = 643282611;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_MESSAGE_IDS_H_