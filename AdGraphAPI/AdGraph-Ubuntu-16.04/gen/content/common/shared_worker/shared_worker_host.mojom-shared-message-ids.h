// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1622259979 value is based on sha256(salt + "SharedWorkerHost1").
constexpr uint32_t kSharedWorkerHost_OnConnected_Name = 1622259979;
// The 1049070397 value is based on sha256(salt + "SharedWorkerHost2").
constexpr uint32_t kSharedWorkerHost_OnContextClosed_Name = 1049070397;
// The 1981641178 value is based on sha256(salt + "SharedWorkerHost3").
constexpr uint32_t kSharedWorkerHost_OnReadyForInspection_Name = 1981641178;
// The 374388852 value is based on sha256(salt + "SharedWorkerHost4").
constexpr uint32_t kSharedWorkerHost_OnScriptLoaded_Name = 374388852;
// The 2061519889 value is based on sha256(salt + "SharedWorkerHost5").
constexpr uint32_t kSharedWorkerHost_OnScriptLoadFailed_Name = 2061519889;
// The 1702568745 value is based on sha256(salt + "SharedWorkerHost6").
constexpr uint32_t kSharedWorkerHost_OnFeatureUsed_Name = 1702568745;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_