// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1205438868 value is based on sha256(salt + "InsecureInputService1").
constexpr uint32_t kInsecureInputService_PasswordFieldVisibleInInsecureContext_Name = 1205438868;
// The 472860340 value is based on sha256(salt + "InsecureInputService2").
constexpr uint32_t kInsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Name = 472860340;
// The 345601225 value is based on sha256(salt + "InsecureInputService3").
constexpr uint32_t kInsecureInputService_DidEditFieldInInsecureContext_Name = 345601225;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_