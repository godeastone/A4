// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace indexed_db {
namespace mojom {

namespace internal {


// The 1704267775 value is based on sha256(salt + "Callbacks1").
constexpr uint32_t kCallbacks_Error_Name = 1704267775;
// The 1296219251 value is based on sha256(salt + "Callbacks2").
constexpr uint32_t kCallbacks_SuccessStringList_Name = 1296219251;
// The 1069116382 value is based on sha256(salt + "Callbacks3").
constexpr uint32_t kCallbacks_Blocked_Name = 1069116382;
// The 834385793 value is based on sha256(salt + "Callbacks4").
constexpr uint32_t kCallbacks_UpgradeNeeded_Name = 834385793;
// The 2058414174 value is based on sha256(salt + "Callbacks5").
constexpr uint32_t kCallbacks_SuccessDatabase_Name = 2058414174;
// The 2080992435 value is based on sha256(salt + "Callbacks6").
constexpr uint32_t kCallbacks_SuccessCursor_Name = 2080992435;
// The 1543064769 value is based on sha256(salt + "Callbacks7").
constexpr uint32_t kCallbacks_SuccessValue_Name = 1543064769;
// The 1266989822 value is based on sha256(salt + "Callbacks8").
constexpr uint32_t kCallbacks_SuccessCursorContinue_Name = 1266989822;
// The 1247349540 value is based on sha256(salt + "Callbacks9").
constexpr uint32_t kCallbacks_SuccessCursorPrefetch_Name = 1247349540;
// The 1677473174 value is based on sha256(salt + "Callbacks10").
constexpr uint32_t kCallbacks_SuccessArray_Name = 1677473174;
// The 1610818786 value is based on sha256(salt + "Callbacks11").
constexpr uint32_t kCallbacks_SuccessKey_Name = 1610818786;
// The 1044651033 value is based on sha256(salt + "Callbacks12").
constexpr uint32_t kCallbacks_SuccessInteger_Name = 1044651033;
// The 2040871186 value is based on sha256(salt + "Callbacks13").
constexpr uint32_t kCallbacks_Success_Name = 2040871186;
// The 1015979021 value is based on sha256(salt + "DatabaseCallbacks1").
constexpr uint32_t kDatabaseCallbacks_ForcedClose_Name = 1015979021;
// The 1565007038 value is based on sha256(salt + "DatabaseCallbacks2").
constexpr uint32_t kDatabaseCallbacks_VersionChange_Name = 1565007038;
// The 643297420 value is based on sha256(salt + "DatabaseCallbacks3").
constexpr uint32_t kDatabaseCallbacks_Abort_Name = 643297420;
// The 1499073358 value is based on sha256(salt + "DatabaseCallbacks4").
constexpr uint32_t kDatabaseCallbacks_Complete_Name = 1499073358;
// The 221327923 value is based on sha256(salt + "DatabaseCallbacks5").
constexpr uint32_t kDatabaseCallbacks_Changes_Name = 221327923;
// The 294740863 value is based on sha256(salt + "Cursor1").
constexpr uint32_t kCursor_Advance_Name = 294740863;
// The 146092808 value is based on sha256(salt + "Cursor2").
constexpr uint32_t kCursor_Continue_Name = 146092808;
// The 70046031 value is based on sha256(salt + "Cursor3").
constexpr uint32_t kCursor_Prefetch_Name = 70046031;
// The 1598061037 value is based on sha256(salt + "Cursor4").
constexpr uint32_t kCursor_PrefetchReset_Name = 1598061037;
// The 1680176745 value is based on sha256(salt + "Database1").
constexpr uint32_t kDatabase_CreateObjectStore_Name = 1680176745;
// The 271351708 value is based on sha256(salt + "Database2").
constexpr uint32_t kDatabase_DeleteObjectStore_Name = 271351708;
// The 1299723774 value is based on sha256(salt + "Database3").
constexpr uint32_t kDatabase_RenameObjectStore_Name = 1299723774;
// The 355009780 value is based on sha256(salt + "Database4").
constexpr uint32_t kDatabase_CreateTransaction_Name = 355009780;
// The 1927144712 value is based on sha256(salt + "Database5").
constexpr uint32_t kDatabase_Close_Name = 1927144712;
// The 1887832005 value is based on sha256(salt + "Database6").
constexpr uint32_t kDatabase_VersionChangeIgnored_Name = 1887832005;
// The 1212594476 value is based on sha256(salt + "Database7").
constexpr uint32_t kDatabase_AddObserver_Name = 1212594476;
// The 1751687905 value is based on sha256(salt + "Database8").
constexpr uint32_t kDatabase_RemoveObservers_Name = 1751687905;
// The 1830349647 value is based on sha256(salt + "Database9").
constexpr uint32_t kDatabase_Get_Name = 1830349647;
// The 1375430761 value is based on sha256(salt + "Database10").
constexpr uint32_t kDatabase_GetAll_Name = 1375430761;
// The 14027217 value is based on sha256(salt + "Database11").
constexpr uint32_t kDatabase_Put_Name = 14027217;
// The 1738260849 value is based on sha256(salt + "Database12").
constexpr uint32_t kDatabase_SetIndexKeys_Name = 1738260849;
// The 518362868 value is based on sha256(salt + "Database13").
constexpr uint32_t kDatabase_SetIndexesReady_Name = 518362868;
// The 1469196604 value is based on sha256(salt + "Database14").
constexpr uint32_t kDatabase_OpenCursor_Name = 1469196604;
// The 1635308413 value is based on sha256(salt + "Database15").
constexpr uint32_t kDatabase_Count_Name = 1635308413;
// The 1138531216 value is based on sha256(salt + "Database16").
constexpr uint32_t kDatabase_DeleteRange_Name = 1138531216;
// The 1404381027 value is based on sha256(salt + "Database17").
constexpr uint32_t kDatabase_Clear_Name = 1404381027;
// The 799727366 value is based on sha256(salt + "Database18").
constexpr uint32_t kDatabase_CreateIndex_Name = 799727366;
// The 26574815 value is based on sha256(salt + "Database19").
constexpr uint32_t kDatabase_DeleteIndex_Name = 26574815;
// The 1324130065 value is based on sha256(salt + "Database20").
constexpr uint32_t kDatabase_RenameIndex_Name = 1324130065;
// The 416346440 value is based on sha256(salt + "Database21").
constexpr uint32_t kDatabase_Abort_Name = 416346440;
// The 1237642780 value is based on sha256(salt + "Database22").
constexpr uint32_t kDatabase_Commit_Name = 1237642780;
// The 1778805985 value is based on sha256(salt + "Factory1").
constexpr uint32_t kFactory_GetDatabaseNames_Name = 1778805985;
// The 199874022 value is based on sha256(salt + "Factory2").
constexpr uint32_t kFactory_Open_Name = 199874022;
// The 470458337 value is based on sha256(salt + "Factory3").
constexpr uint32_t kFactory_DeleteDatabase_Name = 470458337;
// The 557936831 value is based on sha256(salt + "Factory4").
constexpr uint32_t kFactory_AbortTransactionsAndCompactDatabase_Name = 557936831;
// The 897499022 value is based on sha256(salt + "Factory5").
constexpr uint32_t kFactory_AbortTransactionsForDatabase_Name = 897499022;

}  // namespace internal
}  // namespace mojom
}  // namespace indexed_db

#endif  // CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_MESSAGE_IDS_H_