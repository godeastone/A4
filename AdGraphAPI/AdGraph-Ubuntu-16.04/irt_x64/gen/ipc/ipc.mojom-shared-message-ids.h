// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_
#define IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace IPC {
namespace mojom {

namespace internal {


// The 869602244 value is based on sha256(salt + "Channel1").
constexpr uint32_t kChannel_SetPeerPid_Name = 869602244;
// The 1768910370 value is based on sha256(salt + "Channel2").
constexpr uint32_t kChannel_Receive_Name = 1768910370;
// The 178427831 value is based on sha256(salt + "Channel3").
constexpr uint32_t kChannel_GetAssociatedInterface_Name = 178427831;

}  // namespace internal
}  // namespace mojom
}  // namespace IPC

#endif  // IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_