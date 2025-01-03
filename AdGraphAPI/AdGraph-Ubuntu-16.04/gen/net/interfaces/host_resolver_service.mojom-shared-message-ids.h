// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace net {
namespace interfaces {

namespace internal {


// The 1214059367 value is based on sha256(salt + "HostResolverRequestClient1").
constexpr uint32_t kHostResolverRequestClient_ReportResult_Name = 1214059367;

}  // namespace internal
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_