// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 367442456 value is based on sha256(salt + "NavigationCorrector1").
constexpr uint32_t kNavigationCorrector_SetNavigationCorrectionInfo_Name = 367442456;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NAVIGATION_CORRECTOR_MOJOM_SHARED_MESSAGE_IDS_H_