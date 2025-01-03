// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 759769783 value is based on sha256(salt + "CdmProxy1").
constexpr uint32_t kCdmProxy_Initialize_Name = 759769783;
// The 1109775906 value is based on sha256(salt + "CdmProxy2").
constexpr uint32_t kCdmProxy_Process_Name = 1109775906;
// The 399884768 value is based on sha256(salt + "CdmProxy3").
constexpr uint32_t kCdmProxy_CreateMediaCryptoSession_Name = 399884768;
// The 673836647 value is based on sha256(salt + "CdmProxy4").
constexpr uint32_t kCdmProxy_SetKey_Name = 673836647;
// The 807260657 value is based on sha256(salt + "CdmProxy5").
constexpr uint32_t kCdmProxy_RemoveKey_Name = 807260657;
// The 379062941 value is based on sha256(salt + "CdmProxyClient1").
constexpr uint32_t kCdmProxyClient_NotifyHardwareReset_Name = 379062941;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_