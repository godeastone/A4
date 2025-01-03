// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 789742714 value is based on sha256(salt + "ChildMemoryCoordinator1").
constexpr uint32_t kChildMemoryCoordinator_OnStateChange_Name = 789742714;
// The 931291760 value is based on sha256(salt + "ChildMemoryCoordinator2").
constexpr uint32_t kChildMemoryCoordinator_PurgeMemory_Name = 931291760;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_MESSAGE_IDS_H_