// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 369360367 value is based on sha256(salt + "ServiceWorkerStreamCallback1").
constexpr uint32_t kServiceWorkerStreamCallback_OnCompleted_Name = 369360367;
// The 1197262715 value is based on sha256(salt + "ServiceWorkerStreamCallback2").
constexpr uint32_t kServiceWorkerStreamCallback_OnAborted_Name = 1197262715;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_