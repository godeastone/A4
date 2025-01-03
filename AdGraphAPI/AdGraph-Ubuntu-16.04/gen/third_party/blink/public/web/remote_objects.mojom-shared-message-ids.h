// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_WEB_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_WEB_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 106154403 value is based on sha256(salt + "RemoteObject1").
constexpr uint32_t kRemoteObject_HasMethod_Name = 106154403;
// The 1392940425 value is based on sha256(salt + "RemoteObject2").
constexpr uint32_t kRemoteObject_GetMethods_Name = 1392940425;
// The 695179320 value is based on sha256(salt + "RemoteObject3").
constexpr uint32_t kRemoteObject_InvokeMethod_Name = 695179320;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_WEB_REMOTE_OBJECTS_MOJOM_SHARED_MESSAGE_IDS_H_