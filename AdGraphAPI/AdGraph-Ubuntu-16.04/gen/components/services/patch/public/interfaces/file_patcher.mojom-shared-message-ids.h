// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace patch {
namespace mojom {

namespace internal {


// The 2109217512 value is based on sha256(salt + "FilePatcher1").
constexpr uint32_t kFilePatcher_PatchFileBsdiff_Name = 2109217512;
// The 1984167195 value is based on sha256(salt + "FilePatcher2").
constexpr uint32_t kFilePatcher_PatchFileCourgette_Name = 1984167195;

}  // namespace internal
}  // namespace mojom
}  // namespace patch

#endif  // COMPONENTS_SERVICES_PATCH_PUBLIC_INTERFACES_FILE_PATCHER_MOJOM_SHARED_MESSAGE_IDS_H_