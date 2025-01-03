// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace prefs {
namespace mojom {

namespace internal {


// The 1742021376 value is based on sha256(salt + "PrefStoreObserver1").
constexpr uint32_t kPrefStoreObserver_OnPrefsChanged_Name = 1742021376;
// The 100146566 value is based on sha256(salt + "PrefStoreObserver2").
constexpr uint32_t kPrefStoreObserver_OnInitializationCompleted_Name = 100146566;
// The 16289728 value is based on sha256(salt + "PrefStoreObserver3").
constexpr uint32_t kPrefStoreObserver_OnPrefChangeAck_Name = 16289728;
// The 463378864 value is based on sha256(salt + "PrefStoreConnector1").
constexpr uint32_t kPrefStoreConnector_Connect_Name = 463378864;
// The 1636660291 value is based on sha256(salt + "PersistentPrefStore1").
constexpr uint32_t kPersistentPrefStore_SetValues_Name = 1636660291;
// The 1787249327 value is based on sha256(salt + "PersistentPrefStore2").
constexpr uint32_t kPersistentPrefStore_RequestValue_Name = 1787249327;
// The 2116824076 value is based on sha256(salt + "PersistentPrefStore3").
constexpr uint32_t kPersistentPrefStore_CommitPendingWrite_Name = 2116824076;
// The 65381140 value is based on sha256(salt + "PersistentPrefStore4").
constexpr uint32_t kPersistentPrefStore_SchedulePendingLossyWrites_Name = 65381140;
// The 634285844 value is based on sha256(salt + "PersistentPrefStore5").
constexpr uint32_t kPersistentPrefStore_ClearMutableValues_Name = 634285844;
// The 677434478 value is based on sha256(salt + "PersistentPrefStore6").
constexpr uint32_t kPersistentPrefStore_OnStoreDeletionFromDisk_Name = 677434478;
// The 1936927769 value is based on sha256(salt + "ResetOnLoadObserver1").
constexpr uint32_t kResetOnLoadObserver_OnResetOnLoad_Name = 1936927769;

}  // namespace internal
}  // namespace mojom
}  // namespace prefs

#endif  // SERVICES_PREFERENCES_PUBLIC_MOJOM_PREFERENCES_MOJOM_SHARED_MESSAGE_IDS_H_