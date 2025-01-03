// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 295003961 value is based on sha256(salt + "NetLogExporter1").
constexpr uint32_t kNetLogExporter_Start_Name = 295003961;
// The 1785108324 value is based on sha256(salt + "NetLogExporter2").
constexpr uint32_t kNetLogExporter_Stop_Name = 1785108324;
// The 1546000268 value is based on sha256(salt + "NetworkContext1").
constexpr uint32_t kNetworkContext_CreateURLLoaderFactory_Name = 1546000268;
// The 49020691 value is based on sha256(salt + "NetworkContext2").
constexpr uint32_t kNetworkContext_GetCookieManager_Name = 49020691;
// The 1777688777 value is based on sha256(salt + "NetworkContext3").
constexpr uint32_t kNetworkContext_GetRestrictedCookieManager_Name = 1777688777;
// The 1306238744 value is based on sha256(salt + "NetworkContext4").
constexpr uint32_t kNetworkContext_ClearNetworkingHistorySince_Name = 1306238744;
// The 1398965692 value is based on sha256(salt + "NetworkContext5").
constexpr uint32_t kNetworkContext_ClearHttpCache_Name = 1398965692;
// The 1865368962 value is based on sha256(salt + "NetworkContext6").
constexpr uint32_t kNetworkContext_ClearChannelIds_Name = 1865368962;
// The 1282379986 value is based on sha256(salt + "NetworkContext7").
constexpr uint32_t kNetworkContext_ClearHttpAuthCache_Name = 1282379986;
// The 1962635743 value is based on sha256(salt + "NetworkContext8").
constexpr uint32_t kNetworkContext_ClearReportingCacheReports_Name = 1962635743;
// The 1581440053 value is based on sha256(salt + "NetworkContext9").
constexpr uint32_t kNetworkContext_ClearReportingCacheClients_Name = 1581440053;
// The 1776982539 value is based on sha256(salt + "NetworkContext10").
constexpr uint32_t kNetworkContext_ClearNetworkErrorLogging_Name = 1776982539;
// The 1174756895 value is based on sha256(salt + "NetworkContext11").
constexpr uint32_t kNetworkContext_SetNetworkConditions_Name = 1174756895;
// The 1823731390 value is based on sha256(salt + "NetworkContext12").
constexpr uint32_t kNetworkContext_SetAcceptLanguage_Name = 1823731390;
// The 742998906 value is based on sha256(salt + "NetworkContext13").
constexpr uint32_t kNetworkContext_SetCTPolicy_Name = 742998906;
// The 1503059985 value is based on sha256(salt + "NetworkContext14").
constexpr uint32_t kNetworkContext_CreateUDPSocket_Name = 1503059985;
// The 1044730004 value is based on sha256(salt + "NetworkContext15").
constexpr uint32_t kNetworkContext_CreateTCPServerSocket_Name = 1044730004;
// The 434699588 value is based on sha256(salt + "NetworkContext16").
constexpr uint32_t kNetworkContext_CreateTCPConnectedSocket_Name = 434699588;
// The 65414029 value is based on sha256(salt + "NetworkContext17").
constexpr uint32_t kNetworkContext_CreateWebSocket_Name = 65414029;
// The 855500053 value is based on sha256(salt + "NetworkContext18").
constexpr uint32_t kNetworkContext_CreateNetLogExporter_Name = 855500053;
// The 1091239746 value is based on sha256(salt + "NetworkContext19").
constexpr uint32_t kNetworkContext_BlockThirdPartyCookies_Name = 1091239746;
// The 1285671615 value is based on sha256(salt + "NetworkContext20").
constexpr uint32_t kNetworkContext_AddHSTSForTesting_Name = 1285671615;
// The 966303885 value is based on sha256(salt + "NetworkContext21").
constexpr uint32_t kNetworkContext_SetFailingHttpTransactionForTesting_Name = 966303885;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_