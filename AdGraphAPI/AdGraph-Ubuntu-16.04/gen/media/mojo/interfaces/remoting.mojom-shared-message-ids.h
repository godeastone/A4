// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 223331420 value is based on sha256(salt + "RemoterFactory1").
constexpr uint32_t kRemoterFactory_Create_Name = 223331420;
// The 125716312 value is based on sha256(salt + "RemotingDataStreamSender1").
constexpr uint32_t kRemotingDataStreamSender_SendFrame_Name = 125716312;
// The 1950198336 value is based on sha256(salt + "RemotingDataStreamSender2").
constexpr uint32_t kRemotingDataStreamSender_CancelInFlightData_Name = 1950198336;
// The 1978931199 value is based on sha256(salt + "Remoter1").
constexpr uint32_t kRemoter_Start_Name = 1978931199;
// The 902132579 value is based on sha256(salt + "Remoter2").
constexpr uint32_t kRemoter_StartDataStreams_Name = 902132579;
// The 1713261963 value is based on sha256(salt + "Remoter3").
constexpr uint32_t kRemoter_Stop_Name = 1713261963;
// The 188095499 value is based on sha256(salt + "Remoter4").
constexpr uint32_t kRemoter_SendMessageToSink_Name = 188095499;
// The 1106052443 value is based on sha256(salt + "Remoter5").
constexpr uint32_t kRemoter_EstimateTransmissionCapacity_Name = 1106052443;
// The 1135434350 value is based on sha256(salt + "RemotingSource1").
constexpr uint32_t kRemotingSource_OnSinkAvailable_Name = 1135434350;
// The 872908775 value is based on sha256(salt + "RemotingSource2").
constexpr uint32_t kRemotingSource_OnSinkGone_Name = 872908775;
// The 2066516917 value is based on sha256(salt + "RemotingSource3").
constexpr uint32_t kRemotingSource_OnStarted_Name = 2066516917;
// The 1515455899 value is based on sha256(salt + "RemotingSource4").
constexpr uint32_t kRemotingSource_OnStartFailed_Name = 1515455899;
// The 307106264 value is based on sha256(salt + "RemotingSource5").
constexpr uint32_t kRemotingSource_OnMessageFromSink_Name = 307106264;
// The 336593123 value is based on sha256(salt + "RemotingSource6").
constexpr uint32_t kRemotingSource_OnStopped_Name = 336593123;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_