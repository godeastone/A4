// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 577348307 value is based on sha256(salt + "Directory1").
constexpr uint32_t kDirectory_Read_Name = 577348307;
// The 376720446 value is based on sha256(salt + "Directory2").
constexpr uint32_t kDirectory_OpenFile_Name = 376720446;
// The 664225539 value is based on sha256(salt + "Directory3").
constexpr uint32_t kDirectory_OpenFileHandle_Name = 664225539;
// The 2121110283 value is based on sha256(salt + "Directory4").
constexpr uint32_t kDirectory_OpenFileHandles_Name = 2121110283;
// The 203043754 value is based on sha256(salt + "Directory5").
constexpr uint32_t kDirectory_OpenDirectory_Name = 203043754;
// The 1113700185 value is based on sha256(salt + "Directory6").
constexpr uint32_t kDirectory_Rename_Name = 1113700185;
// The 21051079 value is based on sha256(salt + "Directory7").
constexpr uint32_t kDirectory_Replace_Name = 21051079;
// The 781001073 value is based on sha256(salt + "Directory8").
constexpr uint32_t kDirectory_Delete_Name = 781001073;
// The 2027525954 value is based on sha256(salt + "Directory9").
constexpr uint32_t kDirectory_Exists_Name = 2027525954;
// The 542486529 value is based on sha256(salt + "Directory10").
constexpr uint32_t kDirectory_IsWritable_Name = 542486529;
// The 1827145731 value is based on sha256(salt + "Directory11").
constexpr uint32_t kDirectory_Flush_Name = 1827145731;
// The 1867869564 value is based on sha256(salt + "Directory12").
constexpr uint32_t kDirectory_StatFile_Name = 1867869564;
// The 568806245 value is based on sha256(salt + "Directory13").
constexpr uint32_t kDirectory_Clone_Name = 568806245;
// The 1539199935 value is based on sha256(salt + "Directory14").
constexpr uint32_t kDirectory_ReadEntireFile_Name = 1539199935;
// The 1335364038 value is based on sha256(salt + "Directory15").
constexpr uint32_t kDirectory_WriteFile_Name = 1335364038;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_