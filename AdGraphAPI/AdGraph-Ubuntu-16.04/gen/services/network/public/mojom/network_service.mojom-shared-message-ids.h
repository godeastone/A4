// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 444714333 value is based on sha256(salt + "SSLPrivateKey1").
constexpr uint32_t kSSLPrivateKey_Sign_Name = 444714333;
// The 1627449351 value is based on sha256(salt + "AuthChallengeResponder1").
constexpr uint32_t kAuthChallengeResponder_OnAuthCredentials_Name = 1627449351;
// The 807022739 value is based on sha256(salt + "NetworkServiceClient1").
constexpr uint32_t kNetworkServiceClient_OnAuthRequired_Name = 807022739;
// The 1986556047 value is based on sha256(salt + "NetworkServiceClient2").
constexpr uint32_t kNetworkServiceClient_OnCertificateRequested_Name = 1986556047;
// The 187239211 value is based on sha256(salt + "NetworkServiceClient3").
constexpr uint32_t kNetworkServiceClient_OnSSLCertificateError_Name = 187239211;
// The 779156562 value is based on sha256(salt + "NetworkService1").
constexpr uint32_t kNetworkService_SetClient_Name = 779156562;
// The 805688084 value is based on sha256(salt + "NetworkService2").
constexpr uint32_t kNetworkService_CreateNetworkContext_Name = 805688084;
// The 1459203628 value is based on sha256(salt + "NetworkService3").
constexpr uint32_t kNetworkService_DisableQuic_Name = 1459203628;
// The 979136440 value is based on sha256(salt + "NetworkService4").
constexpr uint32_t kNetworkService_SetRawHeadersAccess_Name = 979136440;
// The 1645362113 value is based on sha256(salt + "NetworkService5").
constexpr uint32_t kNetworkService_GetNetworkChangeManager_Name = 1645362113;
// The 1007273066 value is based on sha256(salt + "NetworkService6").
constexpr uint32_t kNetworkService_GetTotalNetworkUsages_Name = 1007273066;
// The 50895349 value is based on sha256(salt + "NetworkService7").
constexpr uint32_t kNetworkService_UpdateSignedTreeHead_Name = 50895349;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_