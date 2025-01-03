// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 1478894947 value is based on sha256(salt + "PIDReceiver1").
constexpr uint32_t kPIDReceiver_SetPID_Name = 1478894947;
// The 332803258 value is based on sha256(salt + "Connector1").
constexpr uint32_t kConnector_BindInterface_Name = 332803258;
// The 18254395 value is based on sha256(salt + "Connector2").
constexpr uint32_t kConnector_QueryService_Name = 18254395;
// The 907324192 value is based on sha256(salt + "Connector3").
constexpr uint32_t kConnector_StartService_Name = 907324192;
// The 1813486717 value is based on sha256(salt + "Connector4").
constexpr uint32_t kConnector_StartServiceWithProcess_Name = 1813486717;
// The 1390571789 value is based on sha256(salt + "Connector5").
constexpr uint32_t kConnector_Clone_Name = 1390571789;
// The 531874370 value is based on sha256(salt + "Connector6").
constexpr uint32_t kConnector_FilterInterfaces_Name = 531874370;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_