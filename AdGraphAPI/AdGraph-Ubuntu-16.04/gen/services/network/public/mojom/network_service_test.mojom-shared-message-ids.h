// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1878687837 value is based on sha256(salt + "NetworkServiceTest1").
constexpr uint32_t kNetworkServiceTest_AddRules_Name = 1878687837;
// The 1138227348 value is based on sha256(salt + "NetworkServiceTest2").
constexpr uint32_t kNetworkServiceTest_SimulateNetworkChange_Name = 1138227348;
// The 840022144 value is based on sha256(salt + "NetworkServiceTest3").
constexpr uint32_t kNetworkServiceTest_SimulateCrash_Name = 840022144;
// The 1738761184 value is based on sha256(salt + "NetworkServiceTest4").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name = 1738761184;
// The 616860871 value is based on sha256(salt + "NetworkServiceTest5").
constexpr uint32_t kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name = 616860871;
// The 1875015643 value is based on sha256(salt + "NetworkServiceTest6").
constexpr uint32_t kNetworkServiceTest_SetShouldRequireCT_Name = 1875015643;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_