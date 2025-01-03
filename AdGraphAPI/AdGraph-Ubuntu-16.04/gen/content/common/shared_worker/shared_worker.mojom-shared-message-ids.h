// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 961343460 value is based on sha256(salt + "SharedWorker1").
constexpr uint32_t kSharedWorker_Connect_Name = 961343460;
// The 1192382150 value is based on sha256(salt + "SharedWorker2").
constexpr uint32_t kSharedWorker_Terminate_Name = 1192382150;
// The 961695679 value is based on sha256(salt + "SharedWorker3").
constexpr uint32_t kSharedWorker_BindDevToolsAgent_Name = 961695679;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SHARED_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_