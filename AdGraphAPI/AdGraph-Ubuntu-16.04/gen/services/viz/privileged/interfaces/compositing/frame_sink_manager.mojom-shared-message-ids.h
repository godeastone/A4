// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 757378363 value is based on sha256(salt + "FrameSinkManager1").
constexpr uint32_t kFrameSinkManager_RegisterFrameSinkId_Name = 757378363;
// The 1300414562 value is based on sha256(salt + "FrameSinkManager2").
constexpr uint32_t kFrameSinkManager_InvalidateFrameSinkId_Name = 1300414562;
// The 16619313 value is based on sha256(salt + "FrameSinkManager3").
constexpr uint32_t kFrameSinkManager_EnableSynchronizationReporting_Name = 16619313;
// The 1246569811 value is based on sha256(salt + "FrameSinkManager4").
constexpr uint32_t kFrameSinkManager_SetFrameSinkDebugLabel_Name = 1246569811;
// The 41062304 value is based on sha256(salt + "FrameSinkManager5").
constexpr uint32_t kFrameSinkManager_CreateRootCompositorFrameSink_Name = 41062304;
// The 345992590 value is based on sha256(salt + "FrameSinkManager6").
constexpr uint32_t kFrameSinkManager_CreateCompositorFrameSink_Name = 345992590;
// The 1703206269 value is based on sha256(salt + "FrameSinkManager7").
constexpr uint32_t kFrameSinkManager_DestroyCompositorFrameSink_Name = 1703206269;
// The 1928556807 value is based on sha256(salt + "FrameSinkManager8").
constexpr uint32_t kFrameSinkManager_RegisterFrameSinkHierarchy_Name = 1928556807;
// The 1521645240 value is based on sha256(salt + "FrameSinkManager9").
constexpr uint32_t kFrameSinkManager_UnregisterFrameSinkHierarchy_Name = 1521645240;
// The 1946407373 value is based on sha256(salt + "FrameSinkManager10").
constexpr uint32_t kFrameSinkManager_AssignTemporaryReference_Name = 1946407373;
// The 323413015 value is based on sha256(salt + "FrameSinkManager11").
constexpr uint32_t kFrameSinkManager_DropTemporaryReference_Name = 323413015;
// The 580310205 value is based on sha256(salt + "FrameSinkManager12").
constexpr uint32_t kFrameSinkManager_AddVideoDetectorObserver_Name = 580310205;
// The 2134994527 value is based on sha256(salt + "FrameSinkManager13").
constexpr uint32_t kFrameSinkManager_CreateVideoCapturer_Name = 2134994527;
// The 187200848 value is based on sha256(salt + "FrameSinkManager14").
constexpr uint32_t kFrameSinkManager_EvictSurfaces_Name = 187200848;
// The 606815420 value is based on sha256(salt + "FrameSinkManager15").
constexpr uint32_t kFrameSinkManager_RequestCopyOfOutput_Name = 606815420;
// The 997492612 value is based on sha256(salt + "FrameSinkManagerClient1").
constexpr uint32_t kFrameSinkManagerClient_OnSurfaceCreated_Name = 997492612;
// The 896881227 value is based on sha256(salt + "FrameSinkManagerClient2").
constexpr uint32_t kFrameSinkManagerClient_OnFirstSurfaceActivation_Name = 896881227;
// The 2133495397 value is based on sha256(salt + "FrameSinkManagerClient3").
constexpr uint32_t kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name = 2133495397;
// The 1949797652 value is based on sha256(salt + "FrameSinkManagerClient4").
constexpr uint32_t kFrameSinkManagerClient_OnFrameTokenChanged_Name = 1949797652;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_