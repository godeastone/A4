// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 1879321381 value is based on sha256(salt + "File1").
constexpr uint32_t kFile_Close_Name = 1879321381;
// The 1746256521 value is based on sha256(salt + "File2").
constexpr uint32_t kFile_Read_Name = 1746256521;
// The 1633638980 value is based on sha256(salt + "File3").
constexpr uint32_t kFile_Write_Name = 1633638980;
// The 1219641702 value is based on sha256(salt + "File4").
constexpr uint32_t kFile_Tell_Name = 1219641702;
// The 12740908 value is based on sha256(salt + "File5").
constexpr uint32_t kFile_Seek_Name = 12740908;
// The 1162038014 value is based on sha256(salt + "File6").
constexpr uint32_t kFile_Stat_Name = 1162038014;
// The 1376113949 value is based on sha256(salt + "File7").
constexpr uint32_t kFile_Truncate_Name = 1376113949;
// The 1060022652 value is based on sha256(salt + "File8").
constexpr uint32_t kFile_Touch_Name = 1060022652;
// The 135328884 value is based on sha256(salt + "File9").
constexpr uint32_t kFile_Dup_Name = 135328884;
// The 1223678908 value is based on sha256(salt + "File10").
constexpr uint32_t kFile_Flush_Name = 1223678908;
// The 1813429016 value is based on sha256(salt + "File11").
constexpr uint32_t kFile_Lock_Name = 1813429016;
// The 2024797390 value is based on sha256(salt + "File12").
constexpr uint32_t kFile_Unlock_Name = 2024797390;
// The 233069678 value is based on sha256(salt + "File13").
constexpr uint32_t kFile_AsHandle_Name = 233069678;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_