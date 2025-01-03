// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 1442662274 value is based on sha256(salt + "GpuHost1").
constexpr uint32_t kGpuHost_DidInitialize_Name = 1442662274;
// The 659135548 value is based on sha256(salt + "GpuHost2").
constexpr uint32_t kGpuHost_DidFailInitialize_Name = 659135548;
// The 304174932 value is based on sha256(salt + "GpuHost3").
constexpr uint32_t kGpuHost_DidCreateContextSuccessfully_Name = 304174932;
// The 2053134371 value is based on sha256(salt + "GpuHost4").
constexpr uint32_t kGpuHost_DidCreateOffscreenContext_Name = 2053134371;
// The 348654728 value is based on sha256(salt + "GpuHost5").
constexpr uint32_t kGpuHost_DidDestroyOffscreenContext_Name = 348654728;
// The 2133583369 value is based on sha256(salt + "GpuHost6").
constexpr uint32_t kGpuHost_DidDestroyChannel_Name = 2133583369;
// The 1794310194 value is based on sha256(salt + "GpuHost7").
constexpr uint32_t kGpuHost_DidLoseContext_Name = 1794310194;
// The 574900669 value is based on sha256(salt + "GpuHost8").
constexpr uint32_t kGpuHost_SetChildSurface_Name = 574900669;
// The 1700505320 value is based on sha256(salt + "GpuHost9").
constexpr uint32_t kGpuHost_StoreShaderToDisk_Name = 1700505320;
// The 1797861638 value is based on sha256(salt + "GpuHost10").
constexpr uint32_t kGpuHost_RecordLogMessage_Name = 1797861638;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_GL_GPU_HOST_MOJOM_SHARED_MESSAGE_IDS_H_