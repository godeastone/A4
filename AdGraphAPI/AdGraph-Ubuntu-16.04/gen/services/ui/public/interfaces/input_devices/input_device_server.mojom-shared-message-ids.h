// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 1315182318 value is based on sha256(salt + "InputDeviceObserverMojo1").
constexpr uint32_t kInputDeviceObserverMojo_OnKeyboardDeviceConfigurationChanged_Name = 1315182318;
// The 1518650183 value is based on sha256(salt + "InputDeviceObserverMojo2").
constexpr uint32_t kInputDeviceObserverMojo_OnTouchscreenDeviceConfigurationChanged_Name = 1518650183;
// The 1012585390 value is based on sha256(salt + "InputDeviceObserverMojo3").
constexpr uint32_t kInputDeviceObserverMojo_OnMouseDeviceConfigurationChanged_Name = 1012585390;
// The 2127499013 value is based on sha256(salt + "InputDeviceObserverMojo4").
constexpr uint32_t kInputDeviceObserverMojo_OnTouchpadDeviceConfigurationChanged_Name = 2127499013;
// The 23386550 value is based on sha256(salt + "InputDeviceObserverMojo5").
constexpr uint32_t kInputDeviceObserverMojo_OnDeviceListsComplete_Name = 23386550;
// The 936212037 value is based on sha256(salt + "InputDeviceObserverMojo6").
constexpr uint32_t kInputDeviceObserverMojo_OnStylusStateChanged_Name = 936212037;
// The 102888946 value is based on sha256(salt + "InputDeviceServer1").
constexpr uint32_t kInputDeviceServer_AddObserver_Name = 102888946;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_INPUT_DEVICES_INPUT_DEVICE_SERVER_MOJOM_SHARED_MESSAGE_IDS_H_