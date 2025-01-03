// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1178877215 value is based on sha256(salt + "WebBluetoothService1").
constexpr uint32_t kWebBluetoothService_RequestDevice_Name = 1178877215;
// The 1721467368 value is based on sha256(salt + "WebBluetoothService2").
constexpr uint32_t kWebBluetoothService_RemoteServerConnect_Name = 1721467368;
// The 1988099096 value is based on sha256(salt + "WebBluetoothService3").
constexpr uint32_t kWebBluetoothService_RemoteServerDisconnect_Name = 1988099096;
// The 2145299045 value is based on sha256(salt + "WebBluetoothService4").
constexpr uint32_t kWebBluetoothService_RemoteServerGetPrimaryServices_Name = 2145299045;
// The 56523252 value is based on sha256(salt + "WebBluetoothService5").
constexpr uint32_t kWebBluetoothService_RemoteServiceGetCharacteristics_Name = 56523252;
// The 979302071 value is based on sha256(salt + "WebBluetoothService6").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicReadValue_Name = 979302071;
// The 1387620711 value is based on sha256(salt + "WebBluetoothService7").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicWriteValue_Name = 1387620711;
// The 1662203966 value is based on sha256(salt + "WebBluetoothService8").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStartNotifications_Name = 1662203966;
// The 998963622 value is based on sha256(salt + "WebBluetoothService9").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicStopNotifications_Name = 998963622;
// The 1962721040 value is based on sha256(salt + "WebBluetoothService10").
constexpr uint32_t kWebBluetoothService_RemoteCharacteristicGetDescriptors_Name = 1962721040;
// The 421813605 value is based on sha256(salt + "WebBluetoothService11").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorReadValue_Name = 421813605;
// The 1431690076 value is based on sha256(salt + "WebBluetoothService12").
constexpr uint32_t kWebBluetoothService_RemoteDescriptorWriteValue_Name = 1431690076;
// The 972914556 value is based on sha256(salt + "WebBluetoothServerClient1").
constexpr uint32_t kWebBluetoothServerClient_GATTServerDisconnected_Name = 972914556;
// The 1649934569 value is based on sha256(salt + "WebBluetoothCharacteristicClient1").
constexpr uint32_t kWebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Name = 1649934569;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_MESSAGE_IDS_H_