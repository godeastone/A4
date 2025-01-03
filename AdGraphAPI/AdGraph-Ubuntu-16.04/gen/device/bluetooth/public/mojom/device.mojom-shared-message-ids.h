// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace bluetooth {
namespace mojom {

namespace internal {


// The 451558468 value is based on sha256(salt + "Device1").
constexpr uint32_t kDevice_Disconnect_Name = 451558468;
// The 873596870 value is based on sha256(salt + "Device2").
constexpr uint32_t kDevice_GetInfo_Name = 873596870;
// The 467274438 value is based on sha256(salt + "Device3").
constexpr uint32_t kDevice_GetServices_Name = 467274438;
// The 1141899083 value is based on sha256(salt + "Device4").
constexpr uint32_t kDevice_GetCharacteristics_Name = 1141899083;
// The 2115220288 value is based on sha256(salt + "Device5").
constexpr uint32_t kDevice_ReadValueForCharacteristic_Name = 2115220288;
// The 1312725024 value is based on sha256(salt + "Device6").
constexpr uint32_t kDevice_WriteValueForCharacteristic_Name = 1312725024;
// The 343308883 value is based on sha256(salt + "Device7").
constexpr uint32_t kDevice_GetDescriptors_Name = 343308883;
// The 340663221 value is based on sha256(salt + "Device8").
constexpr uint32_t kDevice_ReadValueForDescriptor_Name = 340663221;
// The 52225338 value is based on sha256(salt + "Device9").
constexpr uint32_t kDevice_WriteValueForDescriptor_Name = 52225338;

}  // namespace internal
}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_