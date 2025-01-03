// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_
#define CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojom {

namespace internal {


// The 566017371 value is based on sha256(salt + "InterventionsInternalsPageHandler1").
constexpr uint32_t kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name = 566017371;
// The 1990470945 value is based on sha256(salt + "InterventionsInternalsPageHandler2").
constexpr uint32_t kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name = 1990470945;
// The 932828406 value is based on sha256(salt + "InterventionsInternalsPageHandler3").
constexpr uint32_t kInterventionsInternalsPageHandler_SetClientPage_Name = 932828406;
// The 1284878884 value is based on sha256(salt + "InterventionsInternalsPageHandler4").
constexpr uint32_t kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name = 1284878884;
// The 1168422227 value is based on sha256(salt + "InterventionsInternalsPage1").
constexpr uint32_t kInterventionsInternalsPage_LogNewMessage_Name = 1168422227;
// The 1556392970 value is based on sha256(salt + "InterventionsInternalsPage2").
constexpr uint32_t kInterventionsInternalsPage_OnBlacklistedHost_Name = 1556392970;
// The 644387413 value is based on sha256(salt + "InterventionsInternalsPage3").
constexpr uint32_t kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name = 644387413;
// The 945997866 value is based on sha256(salt + "InterventionsInternalsPage4").
constexpr uint32_t kInterventionsInternalsPage_OnBlacklistCleared_Name = 945997866;
// The 1723229037 value is based on sha256(salt + "InterventionsInternalsPage5").
constexpr uint32_t kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name = 1723229037;
// The 964719960 value is based on sha256(salt + "InterventionsInternalsPage6").
constexpr uint32_t kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name = 964719960;

}  // namespace internal
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_INTERVENTIONS_INTERNALS_INTERVENTIONS_INTERNALS_MOJOM_SHARED_MESSAGE_IDS_H_