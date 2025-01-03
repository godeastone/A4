// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1609217198 value is based on sha256(salt + "AppBannerController1").
constexpr uint32_t kAppBannerController_BannerPromptRequest_Name = 1609217198;
// The 1880746901 value is based on sha256(salt + "AppBannerEvent1").
constexpr uint32_t kAppBannerEvent_BannerAccepted_Name = 1880746901;
// The 1944544702 value is based on sha256(salt + "AppBannerEvent2").
constexpr uint32_t kAppBannerEvent_BannerDismissed_Name = 1944544702;
// The 278563638 value is based on sha256(salt + "AppBannerService1").
constexpr uint32_t kAppBannerService_DisplayAppBanner_Name = 278563638;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_