// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace password_manager {
namespace mojom {

namespace internal {


// The 1692408550 value is based on sha256(salt + "CredentialManager1").
constexpr uint32_t kCredentialManager_Store_Name = 1692408550;
// The 189961867 value is based on sha256(salt + "CredentialManager2").
constexpr uint32_t kCredentialManager_PreventSilentAccess_Name = 189961867;
// The 2084592728 value is based on sha256(salt + "CredentialManager3").
constexpr uint32_t kCredentialManager_Get_Name = 2084592728;

}  // namespace internal
}  // namespace mojom
}  // namespace password_manager

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_