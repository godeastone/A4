// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace video_capture {
namespace mojom {

namespace internal {


// The 1845677971 value is based on sha256(salt + "Receiver1").
constexpr uint32_t kReceiver_OnNewBuffer_Name = 1845677971;
// The 242183228 value is based on sha256(salt + "Receiver2").
constexpr uint32_t kReceiver_OnFrameReadyInBuffer_Name = 242183228;
// The 1215530509 value is based on sha256(salt + "Receiver3").
constexpr uint32_t kReceiver_OnBufferRetired_Name = 1215530509;
// The 1421881275 value is based on sha256(salt + "Receiver4").
constexpr uint32_t kReceiver_OnError_Name = 1421881275;
// The 678713302 value is based on sha256(salt + "Receiver5").
constexpr uint32_t kReceiver_OnLog_Name = 678713302;
// The 211451137 value is based on sha256(salt + "Receiver6").
constexpr uint32_t kReceiver_OnStarted_Name = 211451137;
// The 1550276271 value is based on sha256(salt + "Receiver7").
constexpr uint32_t kReceiver_OnStartedUsingGpuDecode_Name = 1550276271;

}  // namespace internal
}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_RECEIVER_MOJOM_SHARED_MESSAGE_IDS_H_