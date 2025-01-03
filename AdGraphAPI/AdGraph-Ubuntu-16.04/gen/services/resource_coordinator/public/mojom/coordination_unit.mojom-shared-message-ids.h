// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace resource_coordinator {
namespace mojom {

namespace internal {


// The 1005412637 value is based on sha256(salt + "FrameCoordinationUnit1").
constexpr uint32_t kFrameCoordinationUnit_GetID_Name = 1005412637;
// The 311578233 value is based on sha256(salt + "FrameCoordinationUnit2").
constexpr uint32_t kFrameCoordinationUnit_AddBinding_Name = 311578233;
// The 1565813046 value is based on sha256(salt + "FrameCoordinationUnit3").
constexpr uint32_t kFrameCoordinationUnit_AddChildFrame_Name = 1565813046;
// The 185132182 value is based on sha256(salt + "FrameCoordinationUnit4").
constexpr uint32_t kFrameCoordinationUnit_RemoveChildFrame_Name = 185132182;
// The 1938834439 value is based on sha256(salt + "FrameCoordinationUnit5").
constexpr uint32_t kFrameCoordinationUnit_SetAudibility_Name = 1938834439;
// The 1124385538 value is based on sha256(salt + "FrameCoordinationUnit6").
constexpr uint32_t kFrameCoordinationUnit_SetNetworkAlmostIdle_Name = 1124385538;
// The 1422730930 value is based on sha256(salt + "FrameCoordinationUnit7").
constexpr uint32_t kFrameCoordinationUnit_SetLifecycleState_Name = 1422730930;
// The 1696380374 value is based on sha256(salt + "FrameCoordinationUnit8").
constexpr uint32_t kFrameCoordinationUnit_OnAlertFired_Name = 1696380374;
// The 560172682 value is based on sha256(salt + "FrameCoordinationUnit9").
constexpr uint32_t kFrameCoordinationUnit_OnNonPersistentNotificationCreated_Name = 560172682;
// The 355677280 value is based on sha256(salt + "PageCoordinationUnit1").
constexpr uint32_t kPageCoordinationUnit_GetID_Name = 355677280;
// The 296016099 value is based on sha256(salt + "PageCoordinationUnit2").
constexpr uint32_t kPageCoordinationUnit_AddBinding_Name = 296016099;
// The 1683228358 value is based on sha256(salt + "PageCoordinationUnit3").
constexpr uint32_t kPageCoordinationUnit_AddFrame_Name = 1683228358;
// The 1107043064 value is based on sha256(salt + "PageCoordinationUnit4").
constexpr uint32_t kPageCoordinationUnit_RemoveFrame_Name = 1107043064;
// The 1319590595 value is based on sha256(salt + "PageCoordinationUnit5").
constexpr uint32_t kPageCoordinationUnit_SetIsLoading_Name = 1319590595;
// The 1464991824 value is based on sha256(salt + "PageCoordinationUnit6").
constexpr uint32_t kPageCoordinationUnit_SetVisibility_Name = 1464991824;
// The 1131606186 value is based on sha256(salt + "PageCoordinationUnit7").
constexpr uint32_t kPageCoordinationUnit_SetUKMSourceId_Name = 1131606186;
// The 1621742523 value is based on sha256(salt + "PageCoordinationUnit8").
constexpr uint32_t kPageCoordinationUnit_OnFaviconUpdated_Name = 1621742523;
// The 1387997604 value is based on sha256(salt + "PageCoordinationUnit9").
constexpr uint32_t kPageCoordinationUnit_OnTitleUpdated_Name = 1387997604;
// The 1007081071 value is based on sha256(salt + "PageCoordinationUnit10").
constexpr uint32_t kPageCoordinationUnit_OnMainFrameNavigationCommitted_Name = 1007081071;
// The 1901414827 value is based on sha256(salt + "ProcessCoordinationUnit1").
constexpr uint32_t kProcessCoordinationUnit_GetID_Name = 1901414827;
// The 726227113 value is based on sha256(salt + "ProcessCoordinationUnit2").
constexpr uint32_t kProcessCoordinationUnit_AddBinding_Name = 726227113;
// The 1672230825 value is based on sha256(salt + "ProcessCoordinationUnit3").
constexpr uint32_t kProcessCoordinationUnit_AddFrame_Name = 1672230825;
// The 1043777556 value is based on sha256(salt + "ProcessCoordinationUnit4").
constexpr uint32_t kProcessCoordinationUnit_RemoveFrame_Name = 1043777556;
// The 770240560 value is based on sha256(salt + "ProcessCoordinationUnit5").
constexpr uint32_t kProcessCoordinationUnit_SetCPUUsage_Name = 770240560;
// The 1926069265 value is based on sha256(salt + "ProcessCoordinationUnit6").
constexpr uint32_t kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name = 1926069265;
// The 544791133 value is based on sha256(salt + "ProcessCoordinationUnit7").
constexpr uint32_t kProcessCoordinationUnit_SetLaunchTime_Name = 544791133;
// The 883201896 value is based on sha256(salt + "ProcessCoordinationUnit8").
constexpr uint32_t kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name = 883201896;
// The 1393431947 value is based on sha256(salt + "ProcessCoordinationUnit9").
constexpr uint32_t kProcessCoordinationUnit_SetPID_Name = 1393431947;
// The 2006247798 value is based on sha256(salt + "SystemCoordinationUnit1").
constexpr uint32_t kSystemCoordinationUnit_GetID_Name = 2006247798;
// The 1725516096 value is based on sha256(salt + "SystemCoordinationUnit2").
constexpr uint32_t kSystemCoordinationUnit_AddBinding_Name = 1725516096;
// The 1503374405 value is based on sha256(salt + "SystemCoordinationUnit3").
constexpr uint32_t kSystemCoordinationUnit_OnProcessCPUUsageReady_Name = 1503374405;
// The 567044770 value is based on sha256(salt + "SystemCoordinationUnit4").
constexpr uint32_t kSystemCoordinationUnit_DistributeMeasurementBatch_Name = 567044770;

}  // namespace internal
}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_MESSAGE_IDS_H_