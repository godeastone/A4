// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace security_interstitials {
namespace mojom {

namespace internal {


// The 120471663 value is based on sha256(salt + "InterstitialCommands1").
constexpr uint32_t kInterstitialCommands_DontProceed_Name = 120471663;
// The 51045096 value is based on sha256(salt + "InterstitialCommands2").
constexpr uint32_t kInterstitialCommands_Proceed_Name = 51045096;
// The 1166580056 value is based on sha256(salt + "InterstitialCommands3").
constexpr uint32_t kInterstitialCommands_ShowMoreSection_Name = 1166580056;
// The 610808083 value is based on sha256(salt + "InterstitialCommands4").
constexpr uint32_t kInterstitialCommands_OpenHelpCenter_Name = 610808083;
// The 1724995818 value is based on sha256(salt + "InterstitialCommands5").
constexpr uint32_t kInterstitialCommands_OpenDiagnostic_Name = 1724995818;
// The 268347643 value is based on sha256(salt + "InterstitialCommands6").
constexpr uint32_t kInterstitialCommands_Reload_Name = 268347643;
// The 38950909 value is based on sha256(salt + "InterstitialCommands7").
constexpr uint32_t kInterstitialCommands_OpenDateSettings_Name = 38950909;
// The 306609738 value is based on sha256(salt + "InterstitialCommands8").
constexpr uint32_t kInterstitialCommands_OpenLogin_Name = 306609738;
// The 976738136 value is based on sha256(salt + "InterstitialCommands9").
constexpr uint32_t kInterstitialCommands_DoReport_Name = 976738136;
// The 722525424 value is based on sha256(salt + "InterstitialCommands10").
constexpr uint32_t kInterstitialCommands_DontReport_Name = 722525424;
// The 1219899892 value is based on sha256(salt + "InterstitialCommands11").
constexpr uint32_t kInterstitialCommands_OpenReportingPrivacy_Name = 1219899892;
// The 510402959 value is based on sha256(salt + "InterstitialCommands12").
constexpr uint32_t kInterstitialCommands_OpenWhitepaper_Name = 510402959;
// The 314196157 value is based on sha256(salt + "InterstitialCommands13").
constexpr uint32_t kInterstitialCommands_ReportPhishingError_Name = 314196157;

}  // namespace internal
}  // namespace mojom
}  // namespace security_interstitials

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_INTERFACES_INTERSTITIAL_COMMANDS_MOJOM_SHARED_MESSAGE_IDS_H_