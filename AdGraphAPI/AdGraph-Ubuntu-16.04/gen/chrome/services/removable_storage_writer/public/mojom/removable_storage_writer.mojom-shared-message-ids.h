// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 1295217357 value is based on sha256(salt + "RemovableStorageWriter1").
constexpr uint32_t kRemovableStorageWriter_Write_Name = 1295217357;
// The 1098032172 value is based on sha256(salt + "RemovableStorageWriter2").
constexpr uint32_t kRemovableStorageWriter_Verify_Name = 1098032172;
// The 1287574613 value is based on sha256(salt + "RemovableStorageWriterClient1").
constexpr uint32_t kRemovableStorageWriterClient_Progress_Name = 1287574613;
// The 307416964 value is based on sha256(salt + "RemovableStorageWriterClient2").
constexpr uint32_t kRemovableStorageWriterClient_Complete_Name = 307416964;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_SERVICES_REMOVABLE_STORAGE_WRITER_PUBLIC_MOJOM_REMOVABLE_STORAGE_WRITER_MOJOM_SHARED_MESSAGE_IDS_H_