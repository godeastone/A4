// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace identity {
namespace mojom {

namespace internal {


// The 1055857850 value is based on sha256(salt + "IdentityManager1").
constexpr uint32_t kIdentityManager_GetPrimaryAccountInfo_Name = 1055857850;
// The 809043706 value is based on sha256(salt + "IdentityManager2").
constexpr uint32_t kIdentityManager_GetPrimaryAccountWhenAvailable_Name = 809043706;
// The 1569544951 value is based on sha256(salt + "IdentityManager3").
constexpr uint32_t kIdentityManager_GetAccountInfoFromGaiaId_Name = 1569544951;
// The 1530225581 value is based on sha256(salt + "IdentityManager4").
constexpr uint32_t kIdentityManager_GetAccounts_Name = 1530225581;
// The 2044115150 value is based on sha256(salt + "IdentityManager5").
constexpr uint32_t kIdentityManager_GetAccessToken_Name = 2044115150;

}  // namespace internal
}  // namespace mojom
}  // namespace identity

#endif  // SERVICES_IDENTITY_PUBLIC_MOJOM_IDENTITY_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_