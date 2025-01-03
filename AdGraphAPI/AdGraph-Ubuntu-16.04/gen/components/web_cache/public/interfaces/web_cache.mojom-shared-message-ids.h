// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace web_cache {
namespace mojom {

namespace internal {


// The 1455629533 value is based on sha256(salt + "WebCache1").
constexpr uint32_t kWebCache_SetCacheCapacity_Name = 1455629533;
// The 1993075729 value is based on sha256(salt + "WebCache2").
constexpr uint32_t kWebCache_ClearCache_Name = 1993075729;

}  // namespace internal
}  // namespace mojom
}  // namespace web_cache

#endif  // COMPONENTS_WEB_CACHE_PUBLIC_INTERFACES_WEB_CACHE_MOJOM_SHARED_MESSAGE_IDS_H_