// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


// The 1428139441 value is based on sha256(salt + "AppCacheBackend1").
constexpr uint32_t kAppCacheBackend_RegisterHost_Name = 1428139441;
// The 144193815 value is based on sha256(salt + "AppCacheBackend2").
constexpr uint32_t kAppCacheBackend_UnregisterHost_Name = 144193815;
// The 1933959 value is based on sha256(salt + "AppCacheBackend3").
constexpr uint32_t kAppCacheBackend_SetSpawningHostId_Name = 1933959;
// The 1791027772 value is based on sha256(salt + "AppCacheBackend4").
constexpr uint32_t kAppCacheBackend_SelectCache_Name = 1791027772;
// The 219084143 value is based on sha256(salt + "AppCacheBackend5").
constexpr uint32_t kAppCacheBackend_SelectCacheForSharedWorker_Name = 219084143;
// The 385785124 value is based on sha256(salt + "AppCacheBackend6").
constexpr uint32_t kAppCacheBackend_MarkAsForeignEntry_Name = 385785124;
// The 1239291770 value is based on sha256(salt + "AppCacheBackend7").
constexpr uint32_t kAppCacheBackend_GetStatus_Name = 1239291770;
// The 1372409373 value is based on sha256(salt + "AppCacheBackend8").
constexpr uint32_t kAppCacheBackend_StartUpdate_Name = 1372409373;
// The 1955430586 value is based on sha256(salt + "AppCacheBackend9").
constexpr uint32_t kAppCacheBackend_SwapCache_Name = 1955430586;
// The 76364060 value is based on sha256(salt + "AppCacheBackend10").
constexpr uint32_t kAppCacheBackend_GetResourceList_Name = 76364060;
// The 1191479826 value is based on sha256(salt + "AppCacheFrontend1").
constexpr uint32_t kAppCacheFrontend_CacheSelected_Name = 1191479826;
// The 1670419799 value is based on sha256(salt + "AppCacheFrontend2").
constexpr uint32_t kAppCacheFrontend_StatusChanged_Name = 1670419799;
// The 1743046301 value is based on sha256(salt + "AppCacheFrontend3").
constexpr uint32_t kAppCacheFrontend_EventRaised_Name = 1743046301;
// The 552104520 value is based on sha256(salt + "AppCacheFrontend4").
constexpr uint32_t kAppCacheFrontend_ProgressEventRaised_Name = 552104520;
// The 1778985184 value is based on sha256(salt + "AppCacheFrontend5").
constexpr uint32_t kAppCacheFrontend_ErrorEventRaised_Name = 1778985184;
// The 148560429 value is based on sha256(salt + "AppCacheFrontend6").
constexpr uint32_t kAppCacheFrontend_LogMessage_Name = 148560429;
// The 381891975 value is based on sha256(salt + "AppCacheFrontend7").
constexpr uint32_t kAppCacheFrontend_ContentBlocked_Name = 381891975;
// The 494902240 value is based on sha256(salt + "AppCacheFrontend8").
constexpr uint32_t kAppCacheFrontend_SetSubresourceFactory_Name = 494902240;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_APPCACHE_MOJOM_SHARED_MESSAGE_IDS_H_