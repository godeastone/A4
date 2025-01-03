// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1663311113 value is based on sha256(salt + "VideoEncodeAcceleratorProvider1").
constexpr uint32_t kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name = 1663311113;
// The 1129039403 value is based on sha256(salt + "VideoEncodeAccelerator1").
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 1129039403;
// The 1256570445 value is based on sha256(salt + "VideoEncodeAccelerator2").
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 1256570445;
// The 1253159633 value is based on sha256(salt + "VideoEncodeAccelerator3").
constexpr uint32_t kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name = 1253159633;
// The 1222763237 value is based on sha256(salt + "VideoEncodeAccelerator4").
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 1222763237;
// The 1229097999 value is based on sha256(salt + "VideoEncodeAcceleratorClient1").
constexpr uint32_t kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name = 1229097999;
// The 1995826931 value is based on sha256(salt + "VideoEncodeAcceleratorClient2").
constexpr uint32_t kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name = 1995826931;
// The 925135413 value is based on sha256(salt + "VideoEncodeAcceleratorClient3").
constexpr uint32_t kVideoEncodeAcceleratorClient_NotifyError_Name = 925135413;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_