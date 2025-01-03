// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


// The 981211895 value is based on sha256(salt + "VideoHost1").
constexpr uint32_t kVideoHost_OnBootstrapVideoAcceleratorFactory_Name = 981211895;
// The 284057960 value is based on sha256(salt + "VideoInstance1").
constexpr uint32_t kVideoInstance_InitDeprecated_Name = 284057960;
// The 1487752150 value is based on sha256(salt + "VideoInstance2").
constexpr uint32_t kVideoInstance_Init_Name = 1487752150;
// The 986841847 value is based on sha256(salt + "VideoAcceleratorFactory1").
constexpr uint32_t kVideoAcceleratorFactory_CreateEncodeAccelerator_Name = 986841847;
// The 1701484851 value is based on sha256(salt + "VideoAcceleratorFactory2").
constexpr uint32_t kVideoAcceleratorFactory_CreateDecodeAccelerator_Name = 1701484851;
// The 1948826328 value is based on sha256(salt + "VideoAcceleratorFactory3").
constexpr uint32_t kVideoAcceleratorFactory_CreateProtectedBufferAllocator_Name = 1948826328;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_MOJOM_SHARED_MESSAGE_IDS_H_