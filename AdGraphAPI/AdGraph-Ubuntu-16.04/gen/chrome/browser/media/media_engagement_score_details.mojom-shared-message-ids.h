// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 359830271 value is based on sha256(salt + "MediaEngagementScoreDetailsProvider1").
constexpr uint32_t kMediaEngagementScoreDetailsProvider_GetMediaEngagementScoreDetails_Name = 359830271;
// The 458642880 value is based on sha256(salt + "MediaEngagementScoreDetailsProvider2").
constexpr uint32_t kMediaEngagementScoreDetailsProvider_GetMediaEngagementConfig_Name = 458642880;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_SHARED_MESSAGE_IDS_H_