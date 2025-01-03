// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace heap_profiling {
namespace mojom {

namespace internal {


// The 2072943956 value is based on sha256(salt + "ProfilingService1").
constexpr uint32_t kProfilingService_AddProfilingClient_Name = 2072943956;
// The 163775354 value is based on sha256(salt + "ProfilingService2").
constexpr uint32_t kProfilingService_SetKeepSmallAllocations_Name = 163775354;
// The 2048561738 value is based on sha256(salt + "ProfilingService3").
constexpr uint32_t kProfilingService_GetProfiledPids_Name = 2048561738;

}  // namespace internal
}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_