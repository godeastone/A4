// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 884649392 value is based on sha256(salt + "ServiceWorkerEventDispatcher1").
constexpr uint32_t kServiceWorkerEventDispatcher_InitializeGlobalScope_Name = 884649392;
// The 2031777592 value is based on sha256(salt + "ServiceWorkerEventDispatcher2").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchInstallEvent_Name = 2031777592;
// The 1874409532 value is based on sha256(salt + "ServiceWorkerEventDispatcher3").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchActivateEvent_Name = 1874409532;
// The 1930006967 value is based on sha256(salt + "ServiceWorkerEventDispatcher4").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name = 1930006967;
// The 965504636 value is based on sha256(salt + "ServiceWorkerEventDispatcher5").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name = 965504636;
// The 2113095411 value is based on sha256(salt + "ServiceWorkerEventDispatcher6").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name = 2113095411;
// The 1411114485 value is based on sha256(salt + "ServiceWorkerEventDispatcher7").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name = 1411114485;
// The 743409748 value is based on sha256(salt + "ServiceWorkerEventDispatcher8").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name = 743409748;
// The 1658145333 value is based on sha256(salt + "ServiceWorkerEventDispatcher9").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchFetchEvent_Name = 1658145333;
// The 2056991824 value is based on sha256(salt + "ServiceWorkerEventDispatcher10").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name = 2056991824;
// The 923991331 value is based on sha256(salt + "ServiceWorkerEventDispatcher11").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name = 923991331;
// The 442879750 value is based on sha256(salt + "ServiceWorkerEventDispatcher12").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchPushEvent_Name = 442879750;
// The 1456564181 value is based on sha256(salt + "ServiceWorkerEventDispatcher13").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchSyncEvent_Name = 1456564181;
// The 1393147543 value is based on sha256(salt + "ServiceWorkerEventDispatcher14").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name = 1393147543;
// The 1978922521 value is based on sha256(salt + "ServiceWorkerEventDispatcher15").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name = 1978922521;
// The 2080659891 value is based on sha256(salt + "ServiceWorkerEventDispatcher16").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name = 2080659891;
// The 726374231 value is based on sha256(salt + "ServiceWorkerEventDispatcher17").
constexpr uint32_t kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name = 726374231;
// The 1254589108 value is based on sha256(salt + "ServiceWorkerEventDispatcher18").
constexpr uint32_t kServiceWorkerEventDispatcher_Ping_Name = 1254589108;
// The 1254176940 value is based on sha256(salt + "ServiceWorkerEventDispatcher19").
constexpr uint32_t kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name = 1254176940;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_MESSAGE_IDS_H_