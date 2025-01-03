// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


// The 2048965610 value is based on sha256(salt + "CoordinationUnitProvider1").
constexpr uint32_t kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name = 2048965610;
// The 1948073315 value is based on sha256(salt + "CoordinationUnitProvider2").
constexpr uint32_t kCoordinationUnitProvider_CreatePageCoordinationUnit_Name = 1948073315;
// The 1304701292 value is based on sha256(salt + "CoordinationUnitProvider3").
constexpr uint32_t kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name = 1304701292;
// The 1618299542 value is based on sha256(salt + "CoordinationUnitProvider4").
constexpr uint32_t kCoordinationUnitProvider_GetSystemCoordinationUnit_Name = 1618299542;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_