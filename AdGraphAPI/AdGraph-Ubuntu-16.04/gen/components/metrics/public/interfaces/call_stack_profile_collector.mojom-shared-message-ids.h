// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace metrics {
namespace mojom {

namespace internal {


// The 1243129886 value is based on sha256(salt + "CallStackProfileCollector1").
constexpr uint32_t kCallStackProfileCollector_Collect_Name = 1243129886;

}  // namespace internal
}  // namespace mojom
}  // namespace metrics

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_CALL_STACK_PROFILE_COLLECTOR_MOJOM_SHARED_MESSAGE_IDS_H_