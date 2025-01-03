// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 120453855 value is based on sha256(salt + "MediaDevicesDispatcherHost1").
constexpr uint32_t kMediaDevicesDispatcherHost_EnumerateDevices_Name = 120453855;
// The 1019092370 value is based on sha256(salt + "MediaDevicesDispatcherHost2").
constexpr uint32_t kMediaDevicesDispatcherHost_GetVideoInputCapabilities_Name = 1019092370;
// The 282403794 value is based on sha256(salt + "MediaDevicesDispatcherHost3").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAllVideoInputDeviceFormats_Name = 282403794;
// The 1300422374 value is based on sha256(salt + "MediaDevicesDispatcherHost4").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAvailableVideoInputDeviceFormats_Name = 1300422374;
// The 1693769212 value is based on sha256(salt + "MediaDevicesDispatcherHost5").
constexpr uint32_t kMediaDevicesDispatcherHost_GetAudioInputCapabilities_Name = 1693769212;
// The 729447600 value is based on sha256(salt + "MediaDevicesDispatcherHost6").
constexpr uint32_t kMediaDevicesDispatcherHost_AddMediaDevicesListener_Name = 729447600;
// The 861623040 value is based on sha256(salt + "MediaDevicesListener1").
constexpr uint32_t kMediaDevicesListener_OnDevicesChanged_Name = 861623040;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_SHARED_MESSAGE_IDS_H_