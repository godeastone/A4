// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 453336324 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback1").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponse_Name = 453336324;
// The 1433495083 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback2").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseBlob_Name = 1433495083;
// The 1765342305 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback3").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name = 1765342305;
// The 1777608001 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback4").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 1777608001;
// The 1865068214 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback5").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnFallback_Name = 1865068214;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_