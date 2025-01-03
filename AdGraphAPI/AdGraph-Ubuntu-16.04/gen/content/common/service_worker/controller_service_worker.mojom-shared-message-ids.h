// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1975801641 value is based on sha256(salt + "ControllerServiceWorker1").
constexpr uint32_t kControllerServiceWorker_DispatchFetchEvent_Name = 1975801641;
// The 1202040573 value is based on sha256(salt + "ControllerServiceWorker2").
constexpr uint32_t kControllerServiceWorker_Clone_Name = 1202040573;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_