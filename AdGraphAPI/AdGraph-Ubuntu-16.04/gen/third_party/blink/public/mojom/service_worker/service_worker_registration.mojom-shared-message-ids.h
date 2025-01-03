// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 728437447 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost1").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Update_Name = 728437447;
// The 1153455587 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost2").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Unregister_Name = 1153455587;
// The 1809771769 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost3").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name = 1809771769;
// The 2056948131 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost4").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name = 2056948131;
// The 927482916 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost5").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name = 927482916;
// The 1968946741 value is based on sha256(salt + "ServiceWorkerRegistrationObject1").
constexpr uint32_t kServiceWorkerRegistrationObject_SetVersionAttributes_Name = 1968946741;
// The 945406847 value is based on sha256(salt + "ServiceWorkerRegistrationObject2").
constexpr uint32_t kServiceWorkerRegistrationObject_SetUpdateViaCache_Name = 945406847;
// The 9947814 value is based on sha256(salt + "ServiceWorkerRegistrationObject3").
constexpr uint32_t kServiceWorkerRegistrationObject_UpdateFound_Name = 9947814;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_