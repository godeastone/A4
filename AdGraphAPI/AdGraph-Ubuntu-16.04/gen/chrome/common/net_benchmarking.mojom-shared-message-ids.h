// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1869619581 value is based on sha256(salt + "NetBenchmarking1").
constexpr uint32_t kNetBenchmarking_CloseCurrentConnections_Name = 1869619581;
// The 1640264919 value is based on sha256(salt + "NetBenchmarking2").
constexpr uint32_t kNetBenchmarking_ClearCache_Name = 1640264919;
// The 521805295 value is based on sha256(salt + "NetBenchmarking3").
constexpr uint32_t kNetBenchmarking_ClearHostResolverCache_Name = 521805295;
// The 298145591 value is based on sha256(salt + "NetBenchmarking4").
constexpr uint32_t kNetBenchmarking_ClearPredictorCache_Name = 298145591;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_NET_BENCHMARKING_MOJOM_SHARED_MESSAGE_IDS_H_