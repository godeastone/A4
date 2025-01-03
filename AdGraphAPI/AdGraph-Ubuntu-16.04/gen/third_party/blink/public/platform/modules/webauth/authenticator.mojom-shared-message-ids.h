// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace webauth {
namespace mojom {

namespace internal {


// The 1186258052 value is based on sha256(salt + "Authenticator1").
constexpr uint32_t kAuthenticator_MakeCredential_Name = 1186258052;
// The 1372252603 value is based on sha256(salt + "Authenticator2").
constexpr uint32_t kAuthenticator_GetAssertion_Name = 1372252603;

}  // namespace internal
}  // namespace mojom
}  // namespace webauth

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBAUTH_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_