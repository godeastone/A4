// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 909556426 value is based on sha256(salt + "CacheStorageCache1").
constexpr uint32_t kCacheStorageCache_Match_Name = 909556426;
// The 1919577747 value is based on sha256(salt + "CacheStorageCache2").
constexpr uint32_t kCacheStorageCache_MatchAll_Name = 1919577747;
// The 387873664 value is based on sha256(salt + "CacheStorageCache3").
constexpr uint32_t kCacheStorageCache_Keys_Name = 387873664;
// The 384368206 value is based on sha256(salt + "CacheStorageCache4").
constexpr uint32_t kCacheStorageCache_Batch_Name = 384368206;
// The 796694802 value is based on sha256(salt + "CacheStorage1").
constexpr uint32_t kCacheStorage_Has_Name = 796694802;
// The 146205632 value is based on sha256(salt + "CacheStorage2").
constexpr uint32_t kCacheStorage_Delete_Name = 146205632;
// The 1509486074 value is based on sha256(salt + "CacheStorage3").
constexpr uint32_t kCacheStorage_Keys_Name = 1509486074;
// The 1424668048 value is based on sha256(salt + "CacheStorage4").
constexpr uint32_t kCacheStorage_Match_Name = 1424668048;
// The 1015391685 value is based on sha256(salt + "CacheStorage5").
constexpr uint32_t kCacheStorage_Open_Name = 1015391685;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_