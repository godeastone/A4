// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace visitedlink {
namespace mojom {

namespace internal {


// The 1736659486 value is based on sha256(salt + "VisitedLinkNotificationSink1").
constexpr uint32_t kVisitedLinkNotificationSink_UpdateVisitedLinks_Name = 1736659486;
// The 27536901 value is based on sha256(salt + "VisitedLinkNotificationSink2").
constexpr uint32_t kVisitedLinkNotificationSink_AddVisitedLinks_Name = 27536901;
// The 1689061284 value is based on sha256(salt + "VisitedLinkNotificationSink3").
constexpr uint32_t kVisitedLinkNotificationSink_ResetVisitedLinks_Name = 1689061284;

}  // namespace internal
}  // namespace mojom
}  // namespace visitedlink

#endif  // COMPONENTS_VISITEDLINK_COMMON_VISITEDLINK_MOJOM_SHARED_MESSAGE_IDS_H_