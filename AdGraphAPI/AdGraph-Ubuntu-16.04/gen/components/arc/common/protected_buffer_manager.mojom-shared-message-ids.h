// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace arc {
namespace mojom {

namespace internal {


// The 745299217 value is based on sha256(salt + "ProtectedBufferManager1").
constexpr uint32_t kProtectedBufferManager_GetProtectedSharedMemoryFromHandle_Name = 745299217;

}  // namespace internal
}  // namespace mojom
}  // namespace arc

#endif  // COMPONENTS_ARC_COMMON_PROTECTED_BUFFER_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_