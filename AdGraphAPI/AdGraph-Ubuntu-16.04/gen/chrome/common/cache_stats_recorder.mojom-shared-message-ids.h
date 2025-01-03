// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 418277286 value is based on sha256(salt + "CacheStatsRecorder1").
constexpr uint32_t kCacheStatsRecorder_RecordCacheStats_Name = 418277286;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_CACHE_STATS_RECORDER_MOJOM_SHARED_MESSAGE_IDS_H_