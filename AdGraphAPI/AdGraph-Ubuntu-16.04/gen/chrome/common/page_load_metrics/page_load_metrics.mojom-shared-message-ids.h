// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace page_load_metrics {
namespace mojom {

namespace internal {


// The 1001720482 value is based on sha256(salt + "PageLoadMetrics1").
constexpr uint32_t kPageLoadMetrics_UpdateTiming_Name = 1001720482;

}  // namespace internal
}  // namespace mojom
}  // namespace page_load_metrics

#endif  // CHROME_COMMON_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_MOJOM_SHARED_MESSAGE_IDS_H_