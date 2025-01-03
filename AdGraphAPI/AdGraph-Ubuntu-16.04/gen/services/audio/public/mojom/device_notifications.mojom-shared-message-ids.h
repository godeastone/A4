// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace audio {
namespace mojom {

namespace internal {


// The 620730891 value is based on sha256(salt + "DeviceListener1").
constexpr uint32_t kDeviceListener_DevicesChanged_Name = 620730891;
// The 723746560 value is based on sha256(salt + "DeviceNotifier1").
constexpr uint32_t kDeviceNotifier_RegisterListener_Name = 723746560;

}  // namespace internal
}  // namespace mojom
}  // namespace audio

#endif  // SERVICES_AUDIO_PUBLIC_MOJOM_DEVICE_NOTIFICATIONS_MOJOM_SHARED_MESSAGE_IDS_H_