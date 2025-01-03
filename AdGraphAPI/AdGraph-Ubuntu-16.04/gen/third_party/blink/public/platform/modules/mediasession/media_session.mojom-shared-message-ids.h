// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2061730700 value is based on sha256(salt + "MediaSessionClient1").
constexpr uint32_t kMediaSessionClient_DidReceiveAction_Name = 2061730700;
// The 1205083209 value is based on sha256(salt + "MediaSessionService1").
constexpr uint32_t kMediaSessionService_SetClient_Name = 1205083209;
// The 1945870571 value is based on sha256(salt + "MediaSessionService2").
constexpr uint32_t kMediaSessionService_SetPlaybackState_Name = 1945870571;
// The 831853815 value is based on sha256(salt + "MediaSessionService3").
constexpr uint32_t kMediaSessionService_SetMetadata_Name = 831853815;
// The 1046519861 value is based on sha256(salt + "MediaSessionService4").
constexpr uint32_t kMediaSessionService_EnableAction_Name = 1046519861;
// The 1962629212 value is based on sha256(salt + "MediaSessionService5").
constexpr uint32_t kMediaSessionService_DisableAction_Name = 1962629212;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_