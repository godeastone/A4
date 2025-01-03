// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 267735235 value is based on sha256(salt + "TCPConnectedSocket1").
constexpr uint32_t kTCPConnectedSocket_GetLocalAddress_Name = 267735235;
// The 1847561748 value is based on sha256(salt + "TCPConnectedSocket2").
constexpr uint32_t kTCPConnectedSocket_UpgradeToTLS_Name = 1847561748;
// The 1483343230 value is based on sha256(salt + "SocketObserver1").
constexpr uint32_t kSocketObserver_OnReadError_Name = 1483343230;
// The 882449363 value is based on sha256(salt + "SocketObserver2").
constexpr uint32_t kSocketObserver_OnWriteError_Name = 882449363;
// The 1320659026 value is based on sha256(salt + "TCPServerSocket1").
constexpr uint32_t kTCPServerSocket_Accept_Name = 1320659026;
// The 2076275939 value is based on sha256(salt + "TCPServerSocket2").
constexpr uint32_t kTCPServerSocket_GetLocalAddress_Name = 2076275939;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_MESSAGE_IDS_H_