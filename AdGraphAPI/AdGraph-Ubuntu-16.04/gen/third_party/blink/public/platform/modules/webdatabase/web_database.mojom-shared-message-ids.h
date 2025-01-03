// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1046974770 value is based on sha256(salt + "WebDatabase1").
constexpr uint32_t kWebDatabase_UpdateSize_Name = 1046974770;
// The 1471343071 value is based on sha256(salt + "WebDatabase2").
constexpr uint32_t kWebDatabase_CloseImmediately_Name = 1471343071;
// The 1395751331 value is based on sha256(salt + "WebDatabaseHost1").
constexpr uint32_t kWebDatabaseHost_OpenFile_Name = 1395751331;
// The 515052861 value is based on sha256(salt + "WebDatabaseHost2").
constexpr uint32_t kWebDatabaseHost_DeleteFile_Name = 515052861;
// The 1956128572 value is based on sha256(salt + "WebDatabaseHost3").
constexpr uint32_t kWebDatabaseHost_GetFileAttributes_Name = 1956128572;
// The 1455489744 value is based on sha256(salt + "WebDatabaseHost4").
constexpr uint32_t kWebDatabaseHost_GetFileSize_Name = 1455489744;
// The 388098893 value is based on sha256(salt + "WebDatabaseHost5").
constexpr uint32_t kWebDatabaseHost_SetFileSize_Name = 388098893;
// The 984846450 value is based on sha256(salt + "WebDatabaseHost6").
constexpr uint32_t kWebDatabaseHost_GetSpaceAvailable_Name = 984846450;
// The 190789758 value is based on sha256(salt + "WebDatabaseHost7").
constexpr uint32_t kWebDatabaseHost_Opened_Name = 190789758;
// The 753268365 value is based on sha256(salt + "WebDatabaseHost8").
constexpr uint32_t kWebDatabaseHost_Modified_Name = 753268365;
// The 347332854 value is based on sha256(salt + "WebDatabaseHost9").
constexpr uint32_t kWebDatabaseHost_Closed_Name = 347332854;
// The 1218763422 value is based on sha256(salt + "WebDatabaseHost10").
constexpr uint32_t kWebDatabaseHost_HandleSqliteError_Name = 1218763422;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_