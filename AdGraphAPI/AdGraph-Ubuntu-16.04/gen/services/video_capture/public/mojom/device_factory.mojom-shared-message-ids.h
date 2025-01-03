// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


// The 665015271 value is based on sha256(salt + "DeviceFactory1").
constexpr uint32_t kDeviceFactory_GetDeviceInfos_Name = 665015271;
// The 399109294 value is based on sha256(salt + "DeviceFactory2").
constexpr uint32_t kDeviceFactory_CreateDevice_Name = 399109294;
// The 1098533106 value is based on sha256(salt + "DeviceFactory3").
constexpr uint32_t kDeviceFactory_AddSharedMemoryVirtualDevice_Name = 1098533106;
// The 159117196 value is based on sha256(salt + "DeviceFactory4").
constexpr uint32_t kDeviceFactory_AddTextureVirtualDevice_Name = 159117196;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_DEVICE_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_