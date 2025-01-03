// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 12423431 value is based on sha256(salt + "InputDeviceManagerClient1").
constexpr uint32_t kInputDeviceManagerClient_InputDeviceAdded_Name = 12423431;
// The 946130986 value is based on sha256(salt + "InputDeviceManagerClient2").
constexpr uint32_t kInputDeviceManagerClient_InputDeviceRemoved_Name = 946130986;
// The 1572871451 value is based on sha256(salt + "InputDeviceManager1").
constexpr uint32_t kInputDeviceManager_GetDevicesAndSetClient_Name = 1572871451;
// The 847999774 value is based on sha256(salt + "InputDeviceManager2").
constexpr uint32_t kInputDeviceManager_GetDevices_Name = 847999774;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_