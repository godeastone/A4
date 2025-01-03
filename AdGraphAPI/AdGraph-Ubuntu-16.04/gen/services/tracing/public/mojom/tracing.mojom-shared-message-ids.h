// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 27340847 value is based on sha256(salt + "AgentRegistry1").
constexpr uint32_t kAgentRegistry_RegisterAgent_Name = 27340847;
// The 1898398812 value is based on sha256(salt + "Agent1").
constexpr uint32_t kAgent_StartTracing_Name = 1898398812;
// The 52677470 value is based on sha256(salt + "Agent2").
constexpr uint32_t kAgent_StopAndFlush_Name = 52677470;
// The 449366164 value is based on sha256(salt + "Agent3").
constexpr uint32_t kAgent_RequestClockSyncMarker_Name = 449366164;
// The 979562997 value is based on sha256(salt + "Agent4").
constexpr uint32_t kAgent_RequestBufferStatus_Name = 979562997;
// The 1969089178 value is based on sha256(salt + "Agent5").
constexpr uint32_t kAgent_GetCategories_Name = 1969089178;
// The 1217833258 value is based on sha256(salt + "Recorder1").
constexpr uint32_t kRecorder_AddChunk_Name = 1217833258;
// The 2051774681 value is based on sha256(salt + "Recorder2").
constexpr uint32_t kRecorder_AddMetadata_Name = 2051774681;
// The 1421760957 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_StartTracing_Name = 1421760957;
// The 174269745 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_StopAndFlush_Name = 174269745;
// The 2015672563 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_StopAndFlushAgent_Name = 2015672563;
// The 1146331625 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_IsTracing_Name = 1146331625;
// The 1702669038 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RequestBufferUsage_Name = 1702669038;
// The 312588085 value is based on sha256(salt + "Coordinator6").
constexpr uint32_t kCoordinator_GetCategories_Name = 312588085;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_