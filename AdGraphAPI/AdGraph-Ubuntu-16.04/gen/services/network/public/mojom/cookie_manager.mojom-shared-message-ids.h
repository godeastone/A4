// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1629058545 value is based on sha256(salt + "CookieChangeListener1").
constexpr uint32_t kCookieChangeListener_OnCookieChange_Name = 1629058545;
// The 1659563453 value is based on sha256(salt + "CookieManager1").
constexpr uint32_t kCookieManager_GetAllCookies_Name = 1659563453;
// The 641823728 value is based on sha256(salt + "CookieManager2").
constexpr uint32_t kCookieManager_GetCookieList_Name = 641823728;
// The 1149816449 value is based on sha256(salt + "CookieManager3").
constexpr uint32_t kCookieManager_SetCanonicalCookie_Name = 1149816449;
// The 1949521559 value is based on sha256(salt + "CookieManager4").
constexpr uint32_t kCookieManager_DeleteCookies_Name = 1949521559;
// The 1694432380 value is based on sha256(salt + "CookieManager5").
constexpr uint32_t kCookieManager_AddCookieChangeListener_Name = 1694432380;
// The 1018926856 value is based on sha256(salt + "CookieManager6").
constexpr uint32_t kCookieManager_AddGlobalChangeListener_Name = 1018926856;
// The 41920164 value is based on sha256(salt + "CookieManager7").
constexpr uint32_t kCookieManager_CloneInterface_Name = 41920164;
// The 569856254 value is based on sha256(salt + "CookieManager8").
constexpr uint32_t kCookieManager_FlushCookieStore_Name = 569856254;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_