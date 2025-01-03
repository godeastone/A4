// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 1024347767 value is based on sha256(salt + "DisplayPrivate1").
constexpr uint32_t kDisplayPrivate_SetDisplayVisible_Name = 1024347767;
// The 184884121 value is based on sha256(salt + "DisplayPrivate2").
constexpr uint32_t kDisplayPrivate_SetDisplayColorMatrix_Name = 184884121;
// The 1387133283 value is based on sha256(salt + "DisplayPrivate3").
constexpr uint32_t kDisplayPrivate_SetDisplayColorSpace_Name = 1387133283;
// The 1048001517 value is based on sha256(salt + "DisplayPrivate4").
constexpr uint32_t kDisplayPrivate_SetOutputIsSecure_Name = 1048001517;
// The 1934321452 value is based on sha256(salt + "DisplayPrivate5").
constexpr uint32_t kDisplayPrivate_SetAuthoritativeVSyncInterval_Name = 1934321452;
// The 2066486583 value is based on sha256(salt + "DisplayPrivate6").
constexpr uint32_t kDisplayPrivate_SetDisplayVSyncParameters_Name = 2066486583;
// The 1840974551 value is based on sha256(salt + "DisplayClient1").
constexpr uint32_t kDisplayClient_OnDisplayReceivedCALayerParams_Name = 1840974551;
// The 165752090 value is based on sha256(salt + "DisplayClient2").
constexpr uint32_t kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name = 165752090;
// The 1768644852 value is based on sha256(salt + "DisplayClient3").
constexpr uint32_t kDisplayClient_CreateLayeredWindowUpdater_Name = 1768644852;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_DISPLAY_PRIVATE_MOJOM_SHARED_MESSAGE_IDS_H_