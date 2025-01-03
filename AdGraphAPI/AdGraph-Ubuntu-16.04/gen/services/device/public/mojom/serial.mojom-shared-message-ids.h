// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1315988929 value is based on sha256(salt + "SerialDeviceEnumerator1").
constexpr uint32_t kSerialDeviceEnumerator_GetDevices_Name = 1315988929;
// The 373433852 value is based on sha256(salt + "SerialIoHandler1").
constexpr uint32_t kSerialIoHandler_Open_Name = 373433852;
// The 988671442 value is based on sha256(salt + "SerialIoHandler2").
constexpr uint32_t kSerialIoHandler_Read_Name = 988671442;
// The 306454044 value is based on sha256(salt + "SerialIoHandler3").
constexpr uint32_t kSerialIoHandler_Write_Name = 306454044;
// The 647511362 value is based on sha256(salt + "SerialIoHandler4").
constexpr uint32_t kSerialIoHandler_CancelRead_Name = 647511362;
// The 330625775 value is based on sha256(salt + "SerialIoHandler5").
constexpr uint32_t kSerialIoHandler_CancelWrite_Name = 330625775;
// The 94164995 value is based on sha256(salt + "SerialIoHandler6").
constexpr uint32_t kSerialIoHandler_Flush_Name = 94164995;
// The 1354787244 value is based on sha256(salt + "SerialIoHandler7").
constexpr uint32_t kSerialIoHandler_GetControlSignals_Name = 1354787244;
// The 402064914 value is based on sha256(salt + "SerialIoHandler8").
constexpr uint32_t kSerialIoHandler_SetControlSignals_Name = 402064914;
// The 681653089 value is based on sha256(salt + "SerialIoHandler9").
constexpr uint32_t kSerialIoHandler_ConfigurePort_Name = 681653089;
// The 1394595160 value is based on sha256(salt + "SerialIoHandler10").
constexpr uint32_t kSerialIoHandler_GetPortInfo_Name = 1394595160;
// The 1094274528 value is based on sha256(salt + "SerialIoHandler11").
constexpr uint32_t kSerialIoHandler_SetBreak_Name = 1094274528;
// The 216313107 value is based on sha256(salt + "SerialIoHandler12").
constexpr uint32_t kSerialIoHandler_ClearBreak_Name = 216313107;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_MESSAGE_IDS_H_