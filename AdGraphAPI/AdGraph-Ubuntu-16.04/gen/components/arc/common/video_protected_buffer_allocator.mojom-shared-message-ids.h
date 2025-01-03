// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


// The 2093457920 value is based on sha256(salt + "VideoProtectedBufferAllocator1").
constexpr uint32_t kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name = 2093457920;
// The 1073679355 value is based on sha256(salt + "VideoProtectedBufferAllocator2").
constexpr uint32_t kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name = 1073679355;
// The 1892124961 value is based on sha256(salt + "VideoProtectedBufferAllocator3").
constexpr uint32_t kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name = 1892124961;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_PROTECTED_BUFFER_ALLOCATOR_MOJOM_SHARED_MESSAGE_IDS_H_