// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace webauth {
namespace test {
namespace mojom {

namespace internal {


// The 189513917 value is based on sha256(salt + "VirtualAuthenticator1").
constexpr uint32_t kVirtualAuthenticator_GetUniqueId_Name = 189513917;
// The 443845986 value is based on sha256(salt + "VirtualAuthenticator2").
constexpr uint32_t kVirtualAuthenticator_AddRegistration_Name = 443845986;
// The 1304560793 value is based on sha256(salt + "VirtualAuthenticator3").
constexpr uint32_t kVirtualAuthenticator_GetRegistrations_Name = 1304560793;
// The 1271279678 value is based on sha256(salt + "VirtualAuthenticator4").
constexpr uint32_t kVirtualAuthenticator_ClearRegistrations_Name = 1271279678;
// The 382998706 value is based on sha256(salt + "VirtualAuthenticator5").
constexpr uint32_t kVirtualAuthenticator_SetUserPresence_Name = 382998706;
// The 1121913490 value is based on sha256(salt + "VirtualAuthenticator6").
constexpr uint32_t kVirtualAuthenticator_GetUserPresence_Name = 1121913490;
// The 336396233 value is based on sha256(salt + "VirtualAuthenticatorManager1").
constexpr uint32_t kVirtualAuthenticatorManager_CreateAuthenticator_Name = 336396233;
// The 508722242 value is based on sha256(salt + "VirtualAuthenticatorManager2").
constexpr uint32_t kVirtualAuthenticatorManager_GetAuthenticators_Name = 508722242;
// The 323185560 value is based on sha256(salt + "VirtualAuthenticatorManager3").
constexpr uint32_t kVirtualAuthenticatorManager_RemoveAuthenticator_Name = 323185560;
// The 1670243577 value is based on sha256(salt + "VirtualAuthenticatorManager4").
constexpr uint32_t kVirtualAuthenticatorManager_ClearAuthenticators_Name = 1670243577;

}  // namespace internal
}  // namespace mojom
}  // namespace test
}  // namespace webauth

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_