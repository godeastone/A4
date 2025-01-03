// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 421463624 value is based on sha256(salt + "GamepadObserver1").
constexpr uint32_t kGamepadObserver_GamepadConnected_Name = 421463624;
// The 815437150 value is based on sha256(salt + "GamepadObserver2").
constexpr uint32_t kGamepadObserver_GamepadDisconnected_Name = 815437150;
// The 179841203 value is based on sha256(salt + "GamepadMonitor1").
constexpr uint32_t kGamepadMonitor_GamepadStartPolling_Name = 179841203;
// The 1377380772 value is based on sha256(salt + "GamepadMonitor2").
constexpr uint32_t kGamepadMonitor_GamepadStopPolling_Name = 1377380772;
// The 1714800156 value is based on sha256(salt + "GamepadMonitor3").
constexpr uint32_t kGamepadMonitor_SetObserver_Name = 1714800156;
// The 1159565199 value is based on sha256(salt + "GamepadHapticsManager1").
constexpr uint32_t kGamepadHapticsManager_PlayVibrationEffectOnce_Name = 1159565199;
// The 884413605 value is based on sha256(salt + "GamepadHapticsManager2").
constexpr uint32_t kGamepadHapticsManager_ResetVibrationActuator_Name = 884413605;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_SHARED_MESSAGE_IDS_H_