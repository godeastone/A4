// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1132197761 value is based on sha256(salt + "CookieStore1").
constexpr uint32_t kCookieStore_AppendSubscriptions_Name = 1132197761;
// The 1739843402 value is based on sha256(salt + "CookieStore2").
constexpr uint32_t kCookieStore_GetSubscriptions_Name = 1739843402;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_SHARED_MESSAGE_IDS_H_