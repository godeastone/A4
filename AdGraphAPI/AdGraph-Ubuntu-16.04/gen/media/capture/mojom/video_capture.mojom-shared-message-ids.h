// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1421919982 value is based on sha256(salt + "VideoCaptureObserver1").
constexpr uint32_t kVideoCaptureObserver_OnStateChanged_Name = 1421919982;
// The 984089791 value is based on sha256(salt + "VideoCaptureObserver2").
constexpr uint32_t kVideoCaptureObserver_OnNewBuffer_Name = 984089791;
// The 2058214540 value is based on sha256(salt + "VideoCaptureObserver3").
constexpr uint32_t kVideoCaptureObserver_OnBufferReady_Name = 2058214540;
// The 885341460 value is based on sha256(salt + "VideoCaptureObserver4").
constexpr uint32_t kVideoCaptureObserver_OnBufferDestroyed_Name = 885341460;
// The 1639215341 value is based on sha256(salt + "VideoCaptureHost1").
constexpr uint32_t kVideoCaptureHost_Start_Name = 1639215341;
// The 1152807932 value is based on sha256(salt + "VideoCaptureHost2").
constexpr uint32_t kVideoCaptureHost_Stop_Name = 1152807932;
// The 800546144 value is based on sha256(salt + "VideoCaptureHost3").
constexpr uint32_t kVideoCaptureHost_Pause_Name = 800546144;
// The 1962795423 value is based on sha256(salt + "VideoCaptureHost4").
constexpr uint32_t kVideoCaptureHost_Resume_Name = 1962795423;
// The 1347976582 value is based on sha256(salt + "VideoCaptureHost5").
constexpr uint32_t kVideoCaptureHost_RequestRefreshFrame_Name = 1347976582;
// The 243782806 value is based on sha256(salt + "VideoCaptureHost6").
constexpr uint32_t kVideoCaptureHost_ReleaseBuffer_Name = 243782806;
// The 138728695 value is based on sha256(salt + "VideoCaptureHost7").
constexpr uint32_t kVideoCaptureHost_GetDeviceSupportedFormats_Name = 138728695;
// The 1423284828 value is based on sha256(salt + "VideoCaptureHost8").
constexpr uint32_t kVideoCaptureHost_GetDeviceFormatsInUse_Name = 1423284828;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_