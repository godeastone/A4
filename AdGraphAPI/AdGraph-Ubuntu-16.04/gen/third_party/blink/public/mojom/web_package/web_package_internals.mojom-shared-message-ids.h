// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace test {
namespace mojom {

namespace internal {


// The 3007492 value is based on sha256(salt + "WebPackageInternals1").
constexpr uint32_t kWebPackageInternals_SetSignedExchangeVerificationTime_Name = 3007492;

}  // namespace internal
}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_PACKAGE_WEB_PACKAGE_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_