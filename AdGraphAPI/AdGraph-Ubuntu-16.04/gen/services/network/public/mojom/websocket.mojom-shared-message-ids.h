// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 573270214 value is based on sha256(salt + "WebSocketClient1").
constexpr uint32_t kWebSocketClient_OnFailChannel_Name = 573270214;
// The 1009229181 value is based on sha256(salt + "WebSocketClient2").
constexpr uint32_t kWebSocketClient_OnStartOpeningHandshake_Name = 1009229181;
// The 575754037 value is based on sha256(salt + "WebSocketClient3").
constexpr uint32_t kWebSocketClient_OnFinishOpeningHandshake_Name = 575754037;
// The 891818547 value is based on sha256(salt + "WebSocketClient4").
constexpr uint32_t kWebSocketClient_OnAddChannelResponse_Name = 891818547;
// The 111695481 value is based on sha256(salt + "WebSocketClient5").
constexpr uint32_t kWebSocketClient_OnDataFrame_Name = 111695481;
// The 1987608225 value is based on sha256(salt + "WebSocketClient6").
constexpr uint32_t kWebSocketClient_OnFlowControl_Name = 1987608225;
// The 1952864819 value is based on sha256(salt + "WebSocketClient7").
constexpr uint32_t kWebSocketClient_OnDropChannel_Name = 1952864819;
// The 599567602 value is based on sha256(salt + "WebSocketClient8").
constexpr uint32_t kWebSocketClient_OnClosingHandshake_Name = 599567602;
// The 828944462 value is based on sha256(salt + "WebSocket1").
constexpr uint32_t kWebSocket_AddChannelRequest_Name = 828944462;
// The 654008999 value is based on sha256(salt + "WebSocket2").
constexpr uint32_t kWebSocket_SendFrame_Name = 654008999;
// The 1860865345 value is based on sha256(salt + "WebSocket3").
constexpr uint32_t kWebSocket_SendFlowControl_Name = 1860865345;
// The 1177708263 value is based on sha256(salt + "WebSocket4").
constexpr uint32_t kWebSocket_StartClosingHandshake_Name = 1177708263;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_MESSAGE_IDS_H_