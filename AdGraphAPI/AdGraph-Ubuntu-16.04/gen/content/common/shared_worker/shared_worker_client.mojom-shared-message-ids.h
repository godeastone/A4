// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1687928138 value is based on sha256(salt + "SharedWorkerClient1").
constexpr uint32_t kSharedWorkerClient_OnCreated_Name = 1687928138;
// The 628583920 value is based on sha256(salt + "SharedWorkerClient2").
constexpr uint32_t kSharedWorkerClient_OnConnected_Name = 628583920;
// The 1974710772 value is based on sha256(salt + "SharedWorkerClient3").
constexpr uint32_t kSharedWorkerClient_OnScriptLoadFailed_Name = 1974710772;
// The 1499103182 value is based on sha256(salt + "SharedWorkerClient4").
constexpr uint32_t kSharedWorkerClient_OnFeatureUsed_Name = 1499103182;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_