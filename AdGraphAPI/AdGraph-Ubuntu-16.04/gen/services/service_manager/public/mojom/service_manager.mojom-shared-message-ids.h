// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 1443055873 value is based on sha256(salt + "ServiceManagerListener1").
constexpr uint32_t kServiceManagerListener_OnInit_Name = 1443055873;
// The 1757796305 value is based on sha256(salt + "ServiceManagerListener2").
constexpr uint32_t kServiceManagerListener_OnServiceCreated_Name = 1757796305;
// The 1440047778 value is based on sha256(salt + "ServiceManagerListener3").
constexpr uint32_t kServiceManagerListener_OnServiceStarted_Name = 1440047778;
// The 564436935 value is based on sha256(salt + "ServiceManagerListener4").
constexpr uint32_t kServiceManagerListener_OnServicePIDReceived_Name = 564436935;
// The 2034361328 value is based on sha256(salt + "ServiceManagerListener5").
constexpr uint32_t kServiceManagerListener_OnServiceFailedToStart_Name = 2034361328;
// The 766283001 value is based on sha256(salt + "ServiceManagerListener6").
constexpr uint32_t kServiceManagerListener_OnServiceStopped_Name = 766283001;
// The 388783384 value is based on sha256(salt + "ServiceManager1").
constexpr uint32_t kServiceManager_AddListener_Name = 388783384;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_