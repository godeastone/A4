// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace memory_instrumentation {
namespace mojom {

namespace internal {


// The 1734704789 value is based on sha256(salt + "ClientProcess1").
constexpr uint32_t kClientProcess_RequestChromeMemoryDump_Name = 1734704789;
// The 38350103 value is based on sha256(salt + "ClientProcess2").
constexpr uint32_t kClientProcess_EnableHeapProfiling_Name = 38350103;
// The 1163127121 value is based on sha256(salt + "ClientProcess3").
constexpr uint32_t kClientProcess_RequestOSMemoryDump_Name = 1163127121;
// The 486807395 value is based on sha256(salt + "HeapProfiler1").
constexpr uint32_t kHeapProfiler_DumpProcessesForTracing_Name = 486807395;
// The 1503289514 value is based on sha256(salt + "HeapProfilerHelper1").
constexpr uint32_t kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 1503289514;
// The 1421760957 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_RegisterClientProcess_Name = 1421760957;
// The 174269745 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDump_Name = 174269745;
// The 2015672563 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpForPid_Name = 2015672563;
// The 1146331625 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 1146331625;
// The 1702669038 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RegisterHeapProfiler_Name = 1702669038;

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_