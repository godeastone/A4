// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 579618442 value is based on sha256(salt + "AssociatedInterfaceProvider1").
constexpr uint32_t kAssociatedInterfaceProvider_GetAssociatedInterface_Name = 579618442;
// The 1764642656 value is based on sha256(salt + "RouteProvider1").
constexpr uint32_t kRouteProvider_GetRoute_Name = 1764642656;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_ASSOCIATED_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_