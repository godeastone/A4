// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 1548581297 value is based on sha256(salt + "FrameSinkVideoConsumerFrameCallbacks1").
constexpr uint32_t kFrameSinkVideoConsumerFrameCallbacks_Done_Name = 1548581297;
// The 1072359301 value is based on sha256(salt + "FrameSinkVideoConsumerFrameCallbacks2").
constexpr uint32_t kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name = 1072359301;
// The 850061272 value is based on sha256(salt + "FrameSinkVideoConsumer1").
constexpr uint32_t kFrameSinkVideoConsumer_OnFrameCaptured_Name = 850061272;
// The 354527018 value is based on sha256(salt + "FrameSinkVideoConsumer2").
constexpr uint32_t kFrameSinkVideoConsumer_OnTargetLost_Name = 354527018;
// The 1037244159 value is based on sha256(salt + "FrameSinkVideoConsumer3").
constexpr uint32_t kFrameSinkVideoConsumer_OnStopped_Name = 1037244159;
// The 900168683 value is based on sha256(salt + "FrameSinkVideoCapturer1").
constexpr uint32_t kFrameSinkVideoCapturer_SetFormat_Name = 900168683;
// The 1896176480 value is based on sha256(salt + "FrameSinkVideoCapturer2").
constexpr uint32_t kFrameSinkVideoCapturer_SetMinCapturePeriod_Name = 1896176480;
// The 1567982844 value is based on sha256(salt + "FrameSinkVideoCapturer3").
constexpr uint32_t kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name = 1567982844;
// The 1561622464 value is based on sha256(salt + "FrameSinkVideoCapturer4").
constexpr uint32_t kFrameSinkVideoCapturer_SetResolutionConstraints_Name = 1561622464;
// The 819280628 value is based on sha256(salt + "FrameSinkVideoCapturer5").
constexpr uint32_t kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name = 819280628;
// The 1961373202 value is based on sha256(salt + "FrameSinkVideoCapturer6").
constexpr uint32_t kFrameSinkVideoCapturer_ChangeTarget_Name = 1961373202;
// The 196870321 value is based on sha256(salt + "FrameSinkVideoCapturer7").
constexpr uint32_t kFrameSinkVideoCapturer_Start_Name = 196870321;
// The 1996887941 value is based on sha256(salt + "FrameSinkVideoCapturer8").
constexpr uint32_t kFrameSinkVideoCapturer_Stop_Name = 1996887941;
// The 304763690 value is based on sha256(salt + "FrameSinkVideoCapturer9").
constexpr uint32_t kFrameSinkVideoCapturer_RequestRefreshFrame_Name = 304763690;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PRIVILEGED_INTERFACES_COMPOSITING_FRAME_SINK_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_