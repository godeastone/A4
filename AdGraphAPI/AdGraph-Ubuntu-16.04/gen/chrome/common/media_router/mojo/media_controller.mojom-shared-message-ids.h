// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_router {
namespace mojom {

namespace internal {


// The 604246163 value is based on sha256(salt + "MediaController1").
constexpr uint32_t kMediaController_Play_Name = 604246163;
// The 1874961250 value is based on sha256(salt + "MediaController2").
constexpr uint32_t kMediaController_Pause_Name = 1874961250;
// The 1483127611 value is based on sha256(salt + "MediaController3").
constexpr uint32_t kMediaController_SetMute_Name = 1483127611;
// The 606689490 value is based on sha256(salt + "MediaController4").
constexpr uint32_t kMediaController_SetVolume_Name = 606689490;
// The 916641662 value is based on sha256(salt + "MediaController5").
constexpr uint32_t kMediaController_Seek_Name = 916641662;
// The 610014724 value is based on sha256(salt + "MediaController6").
constexpr uint32_t kMediaController_ConnectHangoutsMediaRouteController_Name = 610014724;
// The 1731023776 value is based on sha256(salt + "HangoutsMediaRouteController1").
constexpr uint32_t kHangoutsMediaRouteController_SetLocalPresent_Name = 1731023776;

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_