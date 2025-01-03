// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


// The 1543581538 value is based on sha256(salt + "VideoDecodeAccelerator1").
constexpr uint32_t kVideoDecodeAccelerator_Initialize_Name = 1543581538;
// The 248755457 value is based on sha256(salt + "VideoDecodeAccelerator2").
constexpr uint32_t kVideoDecodeAccelerator_Decode_Name = 248755457;
// The 1619854363 value is based on sha256(salt + "VideoDecodeAccelerator3").
constexpr uint32_t kVideoDecodeAccelerator_AssignPictureBuffers_Name = 1619854363;
// The 1752006300 value is based on sha256(salt + "VideoDecodeAccelerator4").
constexpr uint32_t kVideoDecodeAccelerator_ImportBufferForPicture_Name = 1752006300;
// The 1542629252 value is based on sha256(salt + "VideoDecodeAccelerator5").
constexpr uint32_t kVideoDecodeAccelerator_ReusePictureBuffer_Name = 1542629252;
// The 194024395 value is based on sha256(salt + "VideoDecodeAccelerator6").
constexpr uint32_t kVideoDecodeAccelerator_Reset_Name = 194024395;
// The 1853523313 value is based on sha256(salt + "VideoDecodeAccelerator7").
constexpr uint32_t kVideoDecodeAccelerator_Flush_Name = 1853523313;
// The 1463202235 value is based on sha256(salt + "VideoDecodeClient1").
constexpr uint32_t kVideoDecodeClient_ProvidePictureBuffers_Name = 1463202235;
// The 2048873723 value is based on sha256(salt + "VideoDecodeClient2").
constexpr uint32_t kVideoDecodeClient_PictureReady_Name = 2048873723;
// The 1689076977 value is based on sha256(salt + "VideoDecodeClient3").
constexpr uint32_t kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name = 1689076977;
// The 1519140349 value is based on sha256(salt + "VideoDecodeClient4").
constexpr uint32_t kVideoDecodeClient_NotifyError_Name = 1519140349;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_VIDEO_DECODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_