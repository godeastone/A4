// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


// The 1129039403 value is based on sha256(salt + "VideoEncodeAccelerator1").
constexpr uint32_t kVideoEncodeAccelerator_GetSupportedProfiles_Name = 1129039403;
// The 1256570445 value is based on sha256(salt + "VideoEncodeAccelerator2").
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 1256570445;
// The 1253159633 value is based on sha256(salt + "VideoEncodeAccelerator3").
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 1253159633;
// The 1222763237 value is based on sha256(salt + "VideoEncodeAccelerator4").
constexpr uint32_t kVideoEncodeAccelerator_UseBitstreamBuffer_Name = 1222763237;
// The 246181798 value is based on sha256(salt + "VideoEncodeAccelerator5").
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 246181798;
// The 844100780 value is based on sha256(salt + "VideoEncodeAccelerator6").
constexpr uint32_t kVideoEncodeAccelerator_Flush_Name = 844100780;
// The 1149227798 value is based on sha256(salt + "VideoEncodeClient1").
constexpr uint32_t kVideoEncodeClient_RequireBitstreamBuffers_Name = 1149227798;
// The 307113308 value is based on sha256(salt + "VideoEncodeClient2").
constexpr uint32_t kVideoEncodeClient_NotifyError_Name = 307113308;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_