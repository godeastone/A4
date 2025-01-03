// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1297825762 value is based on sha256(salt + "UDPSocket1").
constexpr uint32_t kUDPSocket_Bind_Name = 1297825762;
// The 865717733 value is based on sha256(salt + "UDPSocket2").
constexpr uint32_t kUDPSocket_Connect_Name = 865717733;
// The 2003866824 value is based on sha256(salt + "UDPSocket3").
constexpr uint32_t kUDPSocket_SetBroadcast_Name = 2003866824;
// The 74067377 value is based on sha256(salt + "UDPSocket4").
constexpr uint32_t kUDPSocket_JoinGroup_Name = 74067377;
// The 1380224374 value is based on sha256(salt + "UDPSocket5").
constexpr uint32_t kUDPSocket_LeaveGroup_Name = 1380224374;
// The 2057057777 value is based on sha256(salt + "UDPSocket6").
constexpr uint32_t kUDPSocket_ReceiveMore_Name = 2057057777;
// The 1145683292 value is based on sha256(salt + "UDPSocket7").
constexpr uint32_t kUDPSocket_ReceiveMoreWithBufferSize_Name = 1145683292;
// The 18870768 value is based on sha256(salt + "UDPSocket8").
constexpr uint32_t kUDPSocket_SendTo_Name = 18870768;
// The 290308768 value is based on sha256(salt + "UDPSocket9").
constexpr uint32_t kUDPSocket_Send_Name = 290308768;
// The 2007840678 value is based on sha256(salt + "UDPSocket10").
constexpr uint32_t kUDPSocket_Close_Name = 2007840678;
// The 1807364616 value is based on sha256(salt + "UDPSocketReceiver1").
constexpr uint32_t kUDPSocketReceiver_OnReceived_Name = 1807364616;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_