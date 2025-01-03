// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 257074495 value is based on sha256(salt + "ServiceWorkerHost1").
constexpr uint32_t kServiceWorkerHost_SetCachedMetadata_Name = 257074495;
// The 1703860958 value is based on sha256(salt + "ServiceWorkerHost2").
constexpr uint32_t kServiceWorkerHost_ClearCachedMetadata_Name = 1703860958;
// The 1020349700 value is based on sha256(salt + "ServiceWorkerHost3").
constexpr uint32_t kServiceWorkerHost_GetClients_Name = 1020349700;
// The 1533896119 value is based on sha256(salt + "ServiceWorkerHost4").
constexpr uint32_t kServiceWorkerHost_GetClient_Name = 1533896119;
// The 576806566 value is based on sha256(salt + "ServiceWorkerHost5").
constexpr uint32_t kServiceWorkerHost_OpenNewTab_Name = 576806566;
// The 265749181 value is based on sha256(salt + "ServiceWorkerHost6").
constexpr uint32_t kServiceWorkerHost_OpenPaymentHandlerWindow_Name = 265749181;
// The 1294251600 value is based on sha256(salt + "ServiceWorkerHost7").
constexpr uint32_t kServiceWorkerHost_PostMessageToClient_Name = 1294251600;
// The 1506913444 value is based on sha256(salt + "ServiceWorkerHost8").
constexpr uint32_t kServiceWorkerHost_FocusClient_Name = 1506913444;
// The 1227242774 value is based on sha256(salt + "ServiceWorkerHost9").
constexpr uint32_t kServiceWorkerHost_NavigateClient_Name = 1227242774;
// The 832064142 value is based on sha256(salt + "ServiceWorkerHost10").
constexpr uint32_t kServiceWorkerHost_SkipWaiting_Name = 832064142;
// The 352945372 value is based on sha256(salt + "ServiceWorkerHost11").
constexpr uint32_t kServiceWorkerHost_ClaimClients_Name = 352945372;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_