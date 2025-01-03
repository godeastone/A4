// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 711500370 value is based on sha256(salt + "LevelDBObserver1").
constexpr uint32_t kLevelDBObserver_KeyAdded_Name = 711500370;
// The 1516579929 value is based on sha256(salt + "LevelDBObserver2").
constexpr uint32_t kLevelDBObserver_KeyChanged_Name = 1516579929;
// The 330695549 value is based on sha256(salt + "LevelDBObserver3").
constexpr uint32_t kLevelDBObserver_KeyDeleted_Name = 330695549;
// The 680692123 value is based on sha256(salt + "LevelDBObserver4").
constexpr uint32_t kLevelDBObserver_AllDeleted_Name = 680692123;
// The 1122177602 value is based on sha256(salt + "LevelDBObserver5").
constexpr uint32_t kLevelDBObserver_ShouldSendOldValueOnMutations_Name = 1122177602;
// The 1383444463 value is based on sha256(salt + "LevelDBWrapperGetAllCallback1").
constexpr uint32_t kLevelDBWrapperGetAllCallback_Complete_Name = 1383444463;
// The 379942705 value is based on sha256(salt + "LevelDBWrapper1").
constexpr uint32_t kLevelDBWrapper_AddObserver_Name = 379942705;
// The 481043627 value is based on sha256(salt + "LevelDBWrapper2").
constexpr uint32_t kLevelDBWrapper_Put_Name = 481043627;
// The 1157319483 value is based on sha256(salt + "LevelDBWrapper3").
constexpr uint32_t kLevelDBWrapper_Delete_Name = 1157319483;
// The 327470485 value is based on sha256(salt + "LevelDBWrapper4").
constexpr uint32_t kLevelDBWrapper_DeleteAll_Name = 327470485;
// The 1337199723 value is based on sha256(salt + "LevelDBWrapper5").
constexpr uint32_t kLevelDBWrapper_Get_Name = 1337199723;
// The 1313693382 value is based on sha256(salt + "LevelDBWrapper6").
constexpr uint32_t kLevelDBWrapper_GetAll_Name = 1313693382;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_LEVELDB_WRAPPER_MOJOM_SHARED_MESSAGE_IDS_H_