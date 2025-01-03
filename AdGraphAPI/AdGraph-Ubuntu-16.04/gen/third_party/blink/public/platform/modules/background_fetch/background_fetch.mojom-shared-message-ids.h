// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 372294729 value is based on sha256(salt + "BackgroundFetchRegistrationObserver1").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnProgress_Name = 372294729;
// The 179154092 value is based on sha256(salt + "BackgroundFetchService1").
constexpr uint32_t kBackgroundFetchService_Fetch_Name = 179154092;
// The 607772620 value is based on sha256(salt + "BackgroundFetchService2").
constexpr uint32_t kBackgroundFetchService_UpdateUI_Name = 607772620;
// The 2085463140 value is based on sha256(salt + "BackgroundFetchService3").
constexpr uint32_t kBackgroundFetchService_Abort_Name = 2085463140;
// The 260971885 value is based on sha256(salt + "BackgroundFetchService4").
constexpr uint32_t kBackgroundFetchService_GetRegistration_Name = 260971885;
// The 896914755 value is based on sha256(salt + "BackgroundFetchService5").
constexpr uint32_t kBackgroundFetchService_GetDeveloperIds_Name = 896914755;
// The 1814898260 value is based on sha256(salt + "BackgroundFetchService6").
constexpr uint32_t kBackgroundFetchService_GetIconDisplaySize_Name = 1814898260;
// The 476345723 value is based on sha256(salt + "BackgroundFetchService7").
constexpr uint32_t kBackgroundFetchService_AddRegistrationObserver_Name = 476345723;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_