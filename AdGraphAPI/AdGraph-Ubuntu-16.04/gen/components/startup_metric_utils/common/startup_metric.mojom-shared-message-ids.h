// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace startup_metric_utils {
namespace mojom {

namespace internal {


// The 154218589 value is based on sha256(salt + "StartupMetricHost1").
constexpr uint32_t kStartupMetricHost_RecordRendererMainEntryTime_Name = 154218589;

}  // namespace internal
}  // namespace mojom
}  // namespace startup_metric_utils

#endif  // COMPONENTS_STARTUP_METRIC_UTILS_COMMON_STARTUP_METRIC_MOJOM_SHARED_MESSAGE_IDS_H_