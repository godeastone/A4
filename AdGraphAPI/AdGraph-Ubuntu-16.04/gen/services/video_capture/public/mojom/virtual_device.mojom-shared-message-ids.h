// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


// The 1389501555 value is based on sha256(salt + "SharedMemoryVirtualDevice1").
constexpr uint32_t kSharedMemoryVirtualDevice_RequestFrameBuffer_Name = 1389501555;
// The 1274422974 value is based on sha256(salt + "SharedMemoryVirtualDevice2").
constexpr uint32_t kSharedMemoryVirtualDevice_OnFrameReadyInBuffer_Name = 1274422974;
// The 1443704500 value is based on sha256(salt + "TextureVirtualDevice1").
constexpr uint32_t kTextureVirtualDevice_OnNewMailboxHolderBufferHandle_Name = 1443704500;
// The 1647331652 value is based on sha256(salt + "TextureVirtualDevice2").
constexpr uint32_t kTextureVirtualDevice_OnFrameReadyInBuffer_Name = 1647331652;
// The 1303964669 value is based on sha256(salt + "TextureVirtualDevice3").
constexpr uint32_t kTextureVirtualDevice_OnBufferRetired_Name = 1303964669;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIRTUAL_DEVICE_MOJOM_SHARED_MESSAGE_IDS_H_