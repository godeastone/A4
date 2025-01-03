// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 286118353 value is based on sha256(salt + "SynchronousCompositor1").
constexpr uint32_t kSynchronousCompositor_ComputeScroll_Name = 286118353;
// The 507053162 value is based on sha256(salt + "SynchronousCompositor2").
constexpr uint32_t kSynchronousCompositor_DemandDrawHwAsync_Name = 507053162;
// The 444280150 value is based on sha256(salt + "SynchronousCompositor3").
constexpr uint32_t kSynchronousCompositor_DemandDrawHw_Name = 444280150;
// The 1484784000 value is based on sha256(salt + "SynchronousCompositor4").
constexpr uint32_t kSynchronousCompositor_SetSharedMemory_Name = 1484784000;
// The 2089107563 value is based on sha256(salt + "SynchronousCompositor5").
constexpr uint32_t kSynchronousCompositor_DemandDrawSw_Name = 2089107563;
// The 1736192262 value is based on sha256(salt + "SynchronousCompositor6").
constexpr uint32_t kSynchronousCompositor_ZeroSharedMemory_Name = 1736192262;
// The 1465815187 value is based on sha256(salt + "SynchronousCompositor7").
constexpr uint32_t kSynchronousCompositor_ZoomBy_Name = 1465815187;
// The 824777130 value is based on sha256(salt + "SynchronousCompositor8").
constexpr uint32_t kSynchronousCompositor_SetMemoryPolicy_Name = 824777130;
// The 259946049 value is based on sha256(salt + "SynchronousCompositor9").
constexpr uint32_t kSynchronousCompositor_ReclaimResources_Name = 259946049;
// The 107200661 value is based on sha256(salt + "SynchronousCompositor10").
constexpr uint32_t kSynchronousCompositor_SetScroll_Name = 107200661;
// The 1962919686 value is based on sha256(salt + "SynchronousCompositor11").
constexpr uint32_t kSynchronousCompositor_BeginFrame_Name = 1962919686;
// The 1191799552 value is based on sha256(salt + "SynchronousCompositor12").
constexpr uint32_t kSynchronousCompositor_SetBeginFrameSourcePaused_Name = 1191799552;
// The 1780471468 value is based on sha256(salt + "SynchronousCompositorHost1").
constexpr uint32_t kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name = 1780471468;
// The 1130795770 value is based on sha256(salt + "SynchronousCompositorHost2").
constexpr uint32_t kSynchronousCompositorHost_UpdateState_Name = 1130795770;
// The 1965888808 value is based on sha256(salt + "SynchronousCompositorHost3").
constexpr uint32_t kSynchronousCompositorHost_SetNeedsBeginFrames_Name = 1965888808;
// The 320650776 value is based on sha256(salt + "SynchronousCompositorControlHost1").
constexpr uint32_t kSynchronousCompositorControlHost_ReturnFrame_Name = 320650776;
// The 801266427 value is based on sha256(salt + "SynchronousCompositorControlHost2").
constexpr uint32_t kSynchronousCompositorControlHost_BeginFrameResponse_Name = 801266427;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_INPUT_SYNCHRONOUS_COMPOSITOR_MOJOM_SHARED_MESSAGE_IDS_H_