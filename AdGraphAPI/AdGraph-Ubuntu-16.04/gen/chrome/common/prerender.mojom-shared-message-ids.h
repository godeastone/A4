// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PRERENDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_COMMON_PRERENDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace chrome {
namespace mojom {

namespace internal {


// The 63631421 value is based on sha256(salt + "PrerenderCanceler1").
constexpr uint32_t kPrerenderCanceler_CancelPrerenderForPrinting_Name = 63631421;
// The 1216691590 value is based on sha256(salt + "PrerenderCanceler2").
constexpr uint32_t kPrerenderCanceler_CancelPrerenderForUnsupportedMethod_Name = 1216691590;
// The 52798314 value is based on sha256(salt + "PrerenderCanceler3").
constexpr uint32_t kPrerenderCanceler_CancelPrerenderForUnsupportedScheme_Name = 52798314;
// The 1005179227 value is based on sha256(salt + "PrerenderCanceler4").
constexpr uint32_t kPrerenderCanceler_CancelPrerenderForSyncDeferredRedirect_Name = 1005179227;
// The 684857254 value is based on sha256(salt + "PrerenderDispatcher1").
constexpr uint32_t kPrerenderDispatcher_PrerenderStart_Name = 684857254;
// The 723978957 value is based on sha256(salt + "PrerenderDispatcher2").
constexpr uint32_t kPrerenderDispatcher_PrerenderStopLoading_Name = 723978957;
// The 1945066323 value is based on sha256(salt + "PrerenderDispatcher3").
constexpr uint32_t kPrerenderDispatcher_PrerenderDomContentLoaded_Name = 1945066323;
// The 30442468 value is based on sha256(salt + "PrerenderDispatcher4").
constexpr uint32_t kPrerenderDispatcher_PrerenderAddAlias_Name = 30442468;
// The 1011428126 value is based on sha256(salt + "PrerenderDispatcher5").
constexpr uint32_t kPrerenderDispatcher_PrerenderRemoveAliases_Name = 1011428126;
// The 995694911 value is based on sha256(salt + "PrerenderDispatcher6").
constexpr uint32_t kPrerenderDispatcher_PrerenderStop_Name = 995694911;

}  // namespace internal
}  // namespace mojom
}  // namespace chrome

#endif  // CHROME_COMMON_PRERENDER_MOJOM_SHARED_MESSAGE_IDS_H_