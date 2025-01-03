// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace leveldb {
namespace mojom {

namespace internal {


// The 323402305 value is based on sha256(salt + "LevelDBService1").
constexpr uint32_t kLevelDBService_Open_Name = 323402305;
// The 1639745257 value is based on sha256(salt + "LevelDBService2").
constexpr uint32_t kLevelDBService_OpenWithOptions_Name = 1639745257;
// The 77845067 value is based on sha256(salt + "LevelDBService3").
constexpr uint32_t kLevelDBService_OpenInMemory_Name = 77845067;
// The 356058014 value is based on sha256(salt + "LevelDBService4").
constexpr uint32_t kLevelDBService_Destroy_Name = 356058014;
// The 510452762 value is based on sha256(salt + "LevelDBDatabase1").
constexpr uint32_t kLevelDBDatabase_Put_Name = 510452762;
// The 517353850 value is based on sha256(salt + "LevelDBDatabase2").
constexpr uint32_t kLevelDBDatabase_Delete_Name = 517353850;
// The 1990851671 value is based on sha256(salt + "LevelDBDatabase3").
constexpr uint32_t kLevelDBDatabase_DeletePrefixed_Name = 1990851671;
// The 588934051 value is based on sha256(salt + "LevelDBDatabase4").
constexpr uint32_t kLevelDBDatabase_Write_Name = 588934051;
// The 480525397 value is based on sha256(salt + "LevelDBDatabase5").
constexpr uint32_t kLevelDBDatabase_Get_Name = 480525397;
// The 1795462018 value is based on sha256(salt + "LevelDBDatabase6").
constexpr uint32_t kLevelDBDatabase_GetPrefixed_Name = 1795462018;
// The 3533507 value is based on sha256(salt + "LevelDBDatabase7").
constexpr uint32_t kLevelDBDatabase_CopyPrefixed_Name = 3533507;
// The 1937343977 value is based on sha256(salt + "LevelDBDatabase8").
constexpr uint32_t kLevelDBDatabase_GetSnapshot_Name = 1937343977;
// The 689129822 value is based on sha256(salt + "LevelDBDatabase9").
constexpr uint32_t kLevelDBDatabase_ReleaseSnapshot_Name = 689129822;
// The 1696094320 value is based on sha256(salt + "LevelDBDatabase10").
constexpr uint32_t kLevelDBDatabase_GetFromSnapshot_Name = 1696094320;
// The 1834955633 value is based on sha256(salt + "LevelDBDatabase11").
constexpr uint32_t kLevelDBDatabase_NewIterator_Name = 1834955633;
// The 1901445472 value is based on sha256(salt + "LevelDBDatabase12").
constexpr uint32_t kLevelDBDatabase_NewIteratorFromSnapshot_Name = 1901445472;
// The 2020896995 value is based on sha256(salt + "LevelDBDatabase13").
constexpr uint32_t kLevelDBDatabase_ReleaseIterator_Name = 2020896995;
// The 113658225 value is based on sha256(salt + "LevelDBDatabase14").
constexpr uint32_t kLevelDBDatabase_IteratorSeekToFirst_Name = 113658225;
// The 688193252 value is based on sha256(salt + "LevelDBDatabase15").
constexpr uint32_t kLevelDBDatabase_IteratorSeekToLast_Name = 688193252;
// The 1796482655 value is based on sha256(salt + "LevelDBDatabase16").
constexpr uint32_t kLevelDBDatabase_IteratorSeek_Name = 1796482655;
// The 339133571 value is based on sha256(salt + "LevelDBDatabase17").
constexpr uint32_t kLevelDBDatabase_IteratorNext_Name = 339133571;
// The 869409495 value is based on sha256(salt + "LevelDBDatabase18").
constexpr uint32_t kLevelDBDatabase_IteratorPrev_Name = 869409495;

}  // namespace internal
}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_