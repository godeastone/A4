// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1969000429 value is based on sha256(salt + "PushMessaging1").
constexpr uint32_t kPushMessaging_Subscribe_Name = 1969000429;
// The 449174392 value is based on sha256(salt + "PushMessaging2").
constexpr uint32_t kPushMessaging_Unsubscribe_Name = 449174392;
// The 625595270 value is based on sha256(salt + "PushMessaging3").
constexpr uint32_t kPushMessaging_GetSubscription_Name = 625595270;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_PUSH_MESSAGING_MOJOM_SHARED_MESSAGE_IDS_H_