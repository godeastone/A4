// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1653519595 value is based on sha256(salt + "ScreenOrientation1").
constexpr uint32_t kScreenOrientation_LockOrientation_Name = 1653519595;
// The 2046759444 value is based on sha256(salt + "ScreenOrientation2").
constexpr uint32_t kScreenOrientation_UnlockOrientation_Name = 2046759444;
// The 729177633 value is based on sha256(salt + "ScreenOrientationListener1").
constexpr uint32_t kScreenOrientationListener_Start_Name = 729177633;
// The 382096098 value is based on sha256(salt + "ScreenOrientationListener2").
constexpr uint32_t kScreenOrientationListener_Stop_Name = 382096098;
// The 1098328191 value is based on sha256(salt + "ScreenOrientationListener3").
constexpr uint32_t kScreenOrientationListener_IsAutoRotateEnabledByUser_Name = 1098328191;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_SHARED_MESSAGE_IDS_H_