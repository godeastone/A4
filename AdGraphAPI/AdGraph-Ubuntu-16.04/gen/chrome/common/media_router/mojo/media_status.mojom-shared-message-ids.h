// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_router {
namespace mojom {

namespace internal {


// The 710879278 value is based on sha256(salt + "MediaStatusObserver1").
constexpr uint32_t kMediaStatusObserver_OnMediaStatusUpdated_Name = 710879278;

}  // namespace internal
}  // namespace mojom
}  // namespace media_router

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_SHARED_MESSAGE_IDS_H_