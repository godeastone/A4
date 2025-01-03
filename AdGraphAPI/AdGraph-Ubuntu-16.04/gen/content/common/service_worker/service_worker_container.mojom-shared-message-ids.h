// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 646319056 value is based on sha256(salt + "ServiceWorkerContainerHost1").
constexpr uint32_t kServiceWorkerContainerHost_Register_Name = 646319056;
// The 537172226 value is based on sha256(salt + "ServiceWorkerContainerHost2").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistration_Name = 537172226;
// The 2071118573 value is based on sha256(salt + "ServiceWorkerContainerHost3").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrations_Name = 2071118573;
// The 1617858776 value is based on sha256(salt + "ServiceWorkerContainerHost4").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrationForReady_Name = 1617858776;
// The 2141030188 value is based on sha256(salt + "ServiceWorkerContainerHost5").
constexpr uint32_t kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name = 2141030188;
// The 1901208602 value is based on sha256(salt + "ServiceWorkerContainerHost6").
constexpr uint32_t kServiceWorkerContainerHost_CloneForWorker_Name = 1901208602;
// The 1965277887 value is based on sha256(salt + "ServiceWorkerContainerHost7").
constexpr uint32_t kServiceWorkerContainerHost_Ping_Name = 1965277887;
// The 756623220 value is based on sha256(salt + "ServiceWorkerContainer1").
constexpr uint32_t kServiceWorkerContainer_SetController_Name = 756623220;
// The 125221263 value is based on sha256(salt + "ServiceWorkerContainer2").
constexpr uint32_t kServiceWorkerContainer_PostMessageToClient_Name = 125221263;
// The 169939921 value is based on sha256(salt + "ServiceWorkerContainer3").
constexpr uint32_t kServiceWorkerContainer_CountFeature_Name = 169939921;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_