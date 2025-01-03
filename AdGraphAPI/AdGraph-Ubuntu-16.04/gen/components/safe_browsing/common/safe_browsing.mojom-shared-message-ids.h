// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace safe_browsing {
namespace mojom {

namespace internal {


// The 1417225138 value is based on sha256(salt + "SafeBrowsing1").
constexpr uint32_t kSafeBrowsing_CreateCheckerAndCheck_Name = 1417225138;
// The 495794651 value is based on sha256(salt + "SafeBrowsing2").
constexpr uint32_t kSafeBrowsing_Clone_Name = 495794651;
// The 884449355 value is based on sha256(salt + "SafeBrowsingUrlChecker1").
constexpr uint32_t kSafeBrowsingUrlChecker_CheckUrl_Name = 884449355;
// The 2081323460 value is based on sha256(salt + "UrlCheckNotifier1").
constexpr uint32_t kUrlCheckNotifier_OnCompleteCheck_Name = 2081323460;
// The 159972716 value is based on sha256(salt + "ThreatReporter1").
constexpr uint32_t kThreatReporter_GetThreatDOMDetails_Name = 159972716;
// The 1313062564 value is based on sha256(salt + "PhishingDetector1").
constexpr uint32_t kPhishingDetector_StartPhishingDetection_Name = 1313062564;
// The 236960708 value is based on sha256(salt + "PhishingDetectorClient1").
constexpr uint32_t kPhishingDetectorClient_PhishingDetectionDone_Name = 236960708;
// The 2025810824 value is based on sha256(salt + "PhishingModelSetter1").
constexpr uint32_t kPhishingModelSetter_SetPhishingModel_Name = 2025810824;

}  // namespace internal
}  // namespace mojom
}  // namespace safe_browsing

#endif  // COMPONENTS_SAFE_BROWSING_COMMON_SAFE_BROWSING_MOJOM_SHARED_MESSAGE_IDS_H_