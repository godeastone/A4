// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace bluetooth {
namespace mojom {

namespace internal {


// The 340483405 value is based on sha256(salt + "DiscoverySession1").
constexpr uint32_t kDiscoverySession_IsActive_Name = 340483405;
// The 177557085 value is based on sha256(salt + "DiscoverySession2").
constexpr uint32_t kDiscoverySession_Stop_Name = 177557085;
// The 1306584794 value is based on sha256(salt + "Adapter1").
constexpr uint32_t kAdapter_ConnectToDevice_Name = 1306584794;
// The 1142962145 value is based on sha256(salt + "Adapter2").
constexpr uint32_t kAdapter_GetDevices_Name = 1142962145;
// The 537288616 value is based on sha256(salt + "Adapter3").
constexpr uint32_t kAdapter_GetInfo_Name = 537288616;
// The 593176261 value is based on sha256(salt + "Adapter4").
constexpr uint32_t kAdapter_SetClient_Name = 593176261;
// The 1474676452 value is based on sha256(salt + "Adapter5").
constexpr uint32_t kAdapter_StartDiscoverySession_Name = 1474676452;
// The 833965209 value is based on sha256(salt + "AdapterClient1").
constexpr uint32_t kAdapterClient_PresentChanged_Name = 833965209;
// The 458079496 value is based on sha256(salt + "AdapterClient2").
constexpr uint32_t kAdapterClient_PoweredChanged_Name = 458079496;
// The 322321863 value is based on sha256(salt + "AdapterClient3").
constexpr uint32_t kAdapterClient_DiscoverableChanged_Name = 322321863;
// The 34513367 value is based on sha256(salt + "AdapterClient4").
constexpr uint32_t kAdapterClient_DiscoveringChanged_Name = 34513367;
// The 1513877682 value is based on sha256(salt + "AdapterClient5").
constexpr uint32_t kAdapterClient_DeviceAdded_Name = 1513877682;
// The 89424536 value is based on sha256(salt + "AdapterClient6").
constexpr uint32_t kAdapterClient_DeviceChanged_Name = 89424536;
// The 383630257 value is based on sha256(salt + "AdapterClient7").
constexpr uint32_t kAdapterClient_DeviceRemoved_Name = 383630257;

}  // namespace internal
}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_ADAPTER_MOJOM_SHARED_MESSAGE_IDS_H_