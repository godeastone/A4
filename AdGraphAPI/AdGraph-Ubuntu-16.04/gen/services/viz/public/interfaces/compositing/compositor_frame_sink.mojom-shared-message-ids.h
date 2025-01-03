// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 629734880 value is based on sha256(salt + "CompositorFrameSink1").
constexpr uint32_t kCompositorFrameSink_SetNeedsBeginFrame_Name = 629734880;
// The 720688781 value is based on sha256(salt + "CompositorFrameSink2").
constexpr uint32_t kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name = 720688781;
// The 1172138732 value is based on sha256(salt + "CompositorFrameSink3").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrame_Name = 1172138732;
// The 485482590 value is based on sha256(salt + "CompositorFrameSink4").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrameSync_Name = 485482590;
// The 1356103403 value is based on sha256(salt + "CompositorFrameSink5").
constexpr uint32_t kCompositorFrameSink_DidNotProduceFrame_Name = 1356103403;
// The 1192640918 value is based on sha256(salt + "CompositorFrameSink6").
constexpr uint32_t kCompositorFrameSink_DidAllocateSharedBitmap_Name = 1192640918;
// The 1889209876 value is based on sha256(salt + "CompositorFrameSink7").
constexpr uint32_t kCompositorFrameSink_DidDeleteSharedBitmap_Name = 1889209876;
// The 2091721636 value is based on sha256(salt + "CompositorFrameSinkClient1").
constexpr uint32_t kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name = 2091721636;
// The 1020469272 value is based on sha256(salt + "CompositorFrameSinkClient2").
constexpr uint32_t kCompositorFrameSinkClient_DidPresentCompositorFrame_Name = 1020469272;
// The 1243417957 value is based on sha256(salt + "CompositorFrameSinkClient3").
constexpr uint32_t kCompositorFrameSinkClient_DidDiscardCompositorFrame_Name = 1243417957;
// The 1294799090 value is based on sha256(salt + "CompositorFrameSinkClient4").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFrame_Name = 1294799090;
// The 1104580602 value is based on sha256(salt + "CompositorFrameSinkClient5").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name = 1104580602;
// The 574045756 value is based on sha256(salt + "CompositorFrameSinkClient6").
constexpr uint32_t kCompositorFrameSinkClient_ReclaimResources_Name = 574045756;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_