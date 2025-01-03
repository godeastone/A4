// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace file {
namespace mojom {

namespace internal {


// The 1260550802 value is based on sha256(salt + "FileSystem1").
constexpr uint32_t kFileSystem_GetDirectory_Name = 1260550802;
// The 378302921 value is based on sha256(salt + "FileSystem2").
constexpr uint32_t kFileSystem_GetSubDirectory_Name = 378302921;

}  // namespace internal
}  // namespace mojom
}  // namespace file

#endif  // SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_