// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 886880009 value is based on sha256(salt + "ResourceUsageReporter1").
constexpr uint32_t kResourceUsageReporter_GetUsageData_Name = 886880009;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_PUBLIC_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_SHARED_MESSAGE_IDS_H_