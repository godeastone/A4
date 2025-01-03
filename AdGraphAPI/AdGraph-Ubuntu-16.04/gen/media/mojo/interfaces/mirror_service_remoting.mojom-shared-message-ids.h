// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1844107303 value is based on sha256(salt + "MirrorServiceRemoter1").
constexpr uint32_t kMirrorServiceRemoter_Start_Name = 1844107303;
// The 1175046345 value is based on sha256(salt + "MirrorServiceRemoter2").
constexpr uint32_t kMirrorServiceRemoter_StartDataStreams_Name = 1175046345;
// The 384221531 value is based on sha256(salt + "MirrorServiceRemoter3").
constexpr uint32_t kMirrorServiceRemoter_Stop_Name = 384221531;
// The 226184609 value is based on sha256(salt + "MirrorServiceRemoter4").
constexpr uint32_t kMirrorServiceRemoter_SendMessageToSink_Name = 226184609;
// The 825117958 value is based on sha256(salt + "MirrorServiceRemoter5").
constexpr uint32_t kMirrorServiceRemoter_EstimateTransmissionCapacity_Name = 825117958;
// The 101924686 value is based on sha256(salt + "MirrorServiceRemotingSource1").
constexpr uint32_t kMirrorServiceRemotingSource_OnSinkAvailable_Name = 101924686;
// The 849204405 value is based on sha256(salt + "MirrorServiceRemotingSource2").
constexpr uint32_t kMirrorServiceRemotingSource_OnMessageFromSink_Name = 849204405;
// The 514992717 value is based on sha256(salt + "MirrorServiceRemotingSource3").
constexpr uint32_t kMirrorServiceRemotingSource_OnStopped_Name = 514992717;
// The 1925601013 value is based on sha256(salt + "MirrorServiceRemotingSource4").
constexpr uint32_t kMirrorServiceRemotingSource_OnError_Name = 1925601013;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_