// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1928862291 value is based on sha256(salt + "HidManagerClient1").
constexpr uint32_t kHidManagerClient_DeviceAdded_Name = 1928862291;
// The 746581233 value is based on sha256(salt + "HidManagerClient2").
constexpr uint32_t kHidManagerClient_DeviceRemoved_Name = 746581233;
// The 1277197721 value is based on sha256(salt + "HidManager1").
constexpr uint32_t kHidManager_GetDevicesAndSetClient_Name = 1277197721;
// The 1801430960 value is based on sha256(salt + "HidManager2").
constexpr uint32_t kHidManager_GetDevices_Name = 1801430960;
// The 222010320 value is based on sha256(salt + "HidManager3").
constexpr uint32_t kHidManager_Connect_Name = 222010320;
// The 676942201 value is based on sha256(salt + "HidConnection1").
constexpr uint32_t kHidConnection_Read_Name = 676942201;
// The 1798032964 value is based on sha256(salt + "HidConnection2").
constexpr uint32_t kHidConnection_Write_Name = 1798032964;
// The 1297706690 value is based on sha256(salt + "HidConnection3").
constexpr uint32_t kHidConnection_GetFeatureReport_Name = 1297706690;
// The 1472959130 value is based on sha256(salt + "HidConnection4").
constexpr uint32_t kHidConnection_SendFeatureReport_Name = 1472959130;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_MESSAGE_IDS_H_