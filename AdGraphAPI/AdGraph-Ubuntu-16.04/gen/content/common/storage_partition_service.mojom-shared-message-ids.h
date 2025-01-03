// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 797546590 value is based on sha256(salt + "SessionStorageNamespace1").
constexpr uint32_t kSessionStorageNamespace_OpenArea_Name = 797546590;
// The 1086706622 value is based on sha256(salt + "SessionStorageNamespace2").
constexpr uint32_t kSessionStorageNamespace_Clone_Name = 1086706622;
// The 1839939109 value is based on sha256(salt + "StoragePartitionService1").
constexpr uint32_t kStoragePartitionService_OpenLocalStorage_Name = 1839939109;
// The 1202541363 value is based on sha256(salt + "StoragePartitionService2").
constexpr uint32_t kStoragePartitionService_OpenSessionStorage_Name = 1202541363;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_STORAGE_PARTITION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_