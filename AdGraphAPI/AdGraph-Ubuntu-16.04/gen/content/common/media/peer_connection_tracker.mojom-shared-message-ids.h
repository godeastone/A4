// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1050640245 value is based on sha256(salt + "PeerConnectionTrackerHost1").
constexpr uint32_t kPeerConnectionTrackerHost_RemovePeerConnection_Name = 1050640245;
// The 1636161584 value is based on sha256(salt + "PeerConnectionTrackerHost2").
constexpr uint32_t kPeerConnectionTrackerHost_UpdatePeerConnection_Name = 1636161584;
// The 835697576 value is based on sha256(salt + "PeerConnectionTrackerHost3").
constexpr uint32_t kPeerConnectionTrackerHost_GetUserMedia_Name = 835697576;
// The 889273828 value is based on sha256(salt + "PeerConnectionTrackerHost4").
constexpr uint32_t kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name = 889273828;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_PEER_CONNECTION_TRACKER_MOJOM_SHARED_MESSAGE_IDS_H_