// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 2082661608 value is based on sha256(salt + "MediaStreamDeviceObserver1").
constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceStopped_Name = 2082661608;
// The 88012877 value is based on sha256(salt + "MediaStreamDispatcherHost1").
constexpr uint32_t kMediaStreamDispatcherHost_GenerateStream_Name = 88012877;
// The 311943134 value is based on sha256(salt + "MediaStreamDispatcherHost2").
constexpr uint32_t kMediaStreamDispatcherHost_CancelRequest_Name = 311943134;
// The 950875823 value is based on sha256(salt + "MediaStreamDispatcherHost3").
constexpr uint32_t kMediaStreamDispatcherHost_StopStreamDevice_Name = 950875823;
// The 519173471 value is based on sha256(salt + "MediaStreamDispatcherHost4").
constexpr uint32_t kMediaStreamDispatcherHost_OpenDevice_Name = 519173471;
// The 969987833 value is based on sha256(salt + "MediaStreamDispatcherHost5").
constexpr uint32_t kMediaStreamDispatcherHost_CloseDevice_Name = 969987833;
// The 1344460159 value is based on sha256(salt + "MediaStreamDispatcherHost6").
constexpr uint32_t kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name = 1344460159;
// The 1891166826 value is based on sha256(salt + "MediaStreamDispatcherHost7").
constexpr uint32_t kMediaStreamDispatcherHost_OnStreamStarted_Name = 1891166826;
// The 2141798759 value is based on sha256(salt + "MediaStreamTrackMetricsHost1").
constexpr uint32_t kMediaStreamTrackMetricsHost_AddTrack_Name = 2141798759;
// The 1390925918 value is based on sha256(salt + "MediaStreamTrackMetricsHost2").
constexpr uint32_t kMediaStreamTrackMetricsHost_RemoveTrack_Name = 1390925918;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_