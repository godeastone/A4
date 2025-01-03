// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1367817540 value is based on sha256(salt + "ProxyConfigClient1").
constexpr uint32_t kProxyConfigClient_OnProxyConfigUpdated_Name = 1367817540;
// The 878322621 value is based on sha256(salt + "ProxyConfigPollerClient1").
constexpr uint32_t kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name = 878322621;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_MESSAGE_IDS_H_