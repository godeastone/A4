// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 635551477 value is based on sha256(salt + "VizMain1").
constexpr uint32_t kVizMain_CreateFrameSinkManager_Name = 635551477;
// The 2058263064 value is based on sha256(salt + "VizMain2").
constexpr uint32_t kVizMain_CreateGpuService_Name = 2058263064;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_VIZ_MAIN_MOJOM_SHARED_MESSAGE_IDS_H_