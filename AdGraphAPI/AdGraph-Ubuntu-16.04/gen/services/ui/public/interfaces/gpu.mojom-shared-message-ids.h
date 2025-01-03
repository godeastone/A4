// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ui {
namespace mojom {

namespace internal {


// The 2121004993 value is based on sha256(salt + "Gpu1").
constexpr uint32_t kGpu_EstablishGpuChannel_Name = 2121004993;
// The 1995357702 value is based on sha256(salt + "Gpu2").
constexpr uint32_t kGpu_CreateJpegDecodeAccelerator_Name = 1995357702;
// The 126544520 value is based on sha256(salt + "Gpu3").
constexpr uint32_t kGpu_CreateVideoEncodeAcceleratorProvider_Name = 126544520;
// The 745264821 value is based on sha256(salt + "Gpu4").
constexpr uint32_t kGpu_CreateGpuMemoryBuffer_Name = 745264821;
// The 537416398 value is based on sha256(salt + "Gpu5").
constexpr uint32_t kGpu_DestroyGpuMemoryBuffer_Name = 537416398;

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MOJOM_SHARED_MESSAGE_IDS_H_