// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1087753295 value is based on sha256(salt + "ChildHistogramFetcherFactory1").
constexpr uint32_t kChildHistogramFetcherFactory_CreateFetcher_Name = 1087753295;
// The 880218584 value is based on sha256(salt + "ChildHistogramFetcher1").
constexpr uint32_t kChildHistogramFetcher_GetChildNonPersistentHistogramData_Name = 880218584;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_SHARED_MESSAGE_IDS_H_