// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 643183917 value is based on sha256(salt + "ServiceWorkerDispatcherHost1").
constexpr uint32_t kServiceWorkerDispatcherHost_OnProviderCreated_Name = 643183917;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_