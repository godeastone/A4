// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_router {
namespace mojom {

namespace internal {


// The 346059826 value is based on sha256(salt + "MediaRouteProvider1").
constexpr uint32_t kMediaRouteProvider_CreateRoute_Name = 346059826;
// The 1634581121 value is based on sha256(salt + "MediaRouteProvider2").
constexpr uint32_t kMediaRouteProvider_JoinRoute_Name = 1634581121;
// The 931809421 value is based on sha256(salt + "MediaRouteProvider3").
constexpr uint32_t kMediaRouteProvider_ConnectRouteByRouteId_Name = 931809421;
// The 1215468733 value is based on sha256(salt + "MediaRouteProvider4").
constexpr uint32_t kMediaRouteProvider_TerminateRoute_Name = 1215468733;
// The 1566672344 value is based on sha256(salt + "MediaRouteProvider5").
constexpr uint32_t kMediaRouteProvider_SendRouteMessage_Name = 1566672344;
// The 1700479493 value is based on sha256(salt + "MediaRouteProvider6").
constexpr uint32_t kMediaRouteProvider_SendRouteBinaryMessage_Name = 1700479493;
// The 884455874 value is based on sha256(salt + "MediaRouteProvider7").
constexpr uint32_t kMediaRouteProvider_StartObservingMediaSinks_Name = 884455874;
// The 1623962878 value is based on sha256(salt + "MediaRouteProvider8").
constexpr uint32_t kMediaRouteProvider_StopObservingMediaSinks_Name = 1623962878;
// The 1075945847 value is based on sha256(salt + "MediaRouteProvider9").
constexpr uint32_t kMediaRouteProvider_StartObservingMediaRoutes_Name = 1075945847;
// The 1294341778 value is based on sha256(salt + "MediaRouteProvider10").
constexpr uint32_t kMediaRouteProvider_StopObservingMediaRoutes_Name = 1294341778;
// The 810430649 value is based on sha256(salt + "MediaRouteProvider11").
constexpr uint32_t kMediaRouteProvider_StartListeningForRouteMessages_Name = 810430649;
// The 1622692681 value is based on sha256(salt + "MediaRouteProvider12").
constexpr uint32_t kMediaRouteProvider_StopListeningForRouteMessages_Name = 1622692681;
// The 780549444 value is based on sha256(salt + "MediaRouteProvider13").
constexpr uint32_t kMediaRouteProvider_DetachRoute_Name = 780549444;
// The 772102009 value is based on sha256(salt + "MediaRouteProvider14").
constexpr uint32_t kMediaRouteProvider_EnableMdnsDiscovery_Name = 772102009;
// The 1022068689 value is based on sha256(salt + "MediaRouteProvider15").
constexpr uint32_t kMediaRouteProvider_UpdateMediaSinks_Name = 1022068689;
// The 451966715 value is based on sha256(salt + "MediaRouteProvider16").
constexpr uint32_t kMediaRouteProvider_SearchSinks_Name = 451966715;
// The 869677498 value is based on sha256(salt + "MediaRouteProvider17").
constexpr uint32_t kMediaRouteProvider_ProvideSinks_Name = 869677498;
// The 1059821624 value is based on sha256(salt + "MediaRouteProvider18").
constexpr uint32_t kMediaRouteProvider_CreateMediaRouteController_Name = 1059821624;
// The 760392631 value is based on sha256(salt + "MediaRouter1").
constexpr uint32_t kMediaRouter_RegisterMediaRouteProvider_Name = 760392631;
// The 865095268 value is based on sha256(salt + "MediaRouter2").
constexpr uint32_t kMediaRouter_OnSinksReceived_Name = 865095268;
// The 597604475 value is based on sha256(salt + "MediaRouter3").
constexpr uint32_t kMediaRouter_OnIssue_Name = 597604475;
// The 20391116 value is based on sha256(salt + "MediaRouter4").
constexpr uint32_t kMediaRouter_OnRoutesUpdated_Name = 20391116;
// The 1188176856 value is based on sha256(salt + "MediaRouter5").
constexpr uint32_t kMediaRouter_OnSinkAvailabilityUpdated_Name = 1188176856;
// The 1171390639 value is based on sha256(salt + "MediaRouter6").
constexpr uint32_t kMediaRouter_OnPresentationConnectionStateChanged_Name = 1171390639;
// The 409655927 value is based on sha256(salt + "MediaRouter7").
constexpr uint32_t kMediaRouter_OnPresentationConnectionClosed_Name = 409655927;
// The 803590677 value is based on sha256(salt + "MediaRouter8").
constexpr uint32_t kMediaRouter_OnRouteMessagesReceived_Name = 803590677;
// The 1544186047 value is based on sha256(salt + "MediaRouter9").
constexpr uint32_t kMediaRouter_OnMediaRemoterCreated_Name = 1544186047;
// The 439770316 value is based on sha256(salt + "MediaRouter10").
constexpr uint32_t kMediaRouter_GetMediaSinkServiceStatus_Name = 439770316;

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_ROUTER_MOJOM_SHARED_MESSAGE_IDS_H_