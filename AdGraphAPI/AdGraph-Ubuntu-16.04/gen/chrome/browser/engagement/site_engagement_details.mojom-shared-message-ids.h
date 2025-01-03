// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 1431958920 value is based on sha256(salt + "SiteEngagementDetailsProvider1").
constexpr uint32_t kSiteEngagementDetailsProvider_GetSiteEngagementDetails_Name = 1431958920;
// The 901014382 value is based on sha256(salt + "SiteEngagementDetailsProvider2").
constexpr uint32_t kSiteEngagementDetailsProvider_SetSiteEngagementBaseScoreForUrl_Name = 901014382;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_ENGAGEMENT_SITE_ENGAGEMENT_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_