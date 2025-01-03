// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace autofill {
namespace mojom {

namespace internal {


// The 286374558 value is based on sha256(salt + "AutofillAgent1").
constexpr uint32_t kAutofillAgent_FillForm_Name = 286374558;
// The 456702500 value is based on sha256(salt + "AutofillAgent2").
constexpr uint32_t kAutofillAgent_PreviewForm_Name = 456702500;
// The 1709736901 value is based on sha256(salt + "AutofillAgent3").
constexpr uint32_t kAutofillAgent_FieldTypePredictionsAvailable_Name = 1709736901;
// The 1947202814 value is based on sha256(salt + "AutofillAgent4").
constexpr uint32_t kAutofillAgent_ClearSection_Name = 1947202814;
// The 2019128582 value is based on sha256(salt + "AutofillAgent5").
constexpr uint32_t kAutofillAgent_ClearPreviewedForm_Name = 2019128582;
// The 953394399 value is based on sha256(salt + "AutofillAgent6").
constexpr uint32_t kAutofillAgent_FillFieldWithValue_Name = 953394399;
// The 660460679 value is based on sha256(salt + "AutofillAgent7").
constexpr uint32_t kAutofillAgent_PreviewFieldWithValue_Name = 660460679;
// The 1477425159 value is based on sha256(salt + "AutofillAgent8").
constexpr uint32_t kAutofillAgent_AcceptDataListSuggestion_Name = 1477425159;
// The 345395335 value is based on sha256(salt + "AutofillAgent9").
constexpr uint32_t kAutofillAgent_FillPasswordSuggestion_Name = 345395335;
// The 69311302 value is based on sha256(salt + "AutofillAgent10").
constexpr uint32_t kAutofillAgent_PreviewPasswordSuggestion_Name = 69311302;
// The 249521668 value is based on sha256(salt + "AutofillAgent11").
constexpr uint32_t kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name = 249521668;
// The 1297397915 value is based on sha256(salt + "AutofillAgent12").
constexpr uint32_t kAutofillAgent_SetUserGestureRequired_Name = 1297397915;
// The 1901024807 value is based on sha256(salt + "AutofillAgent13").
constexpr uint32_t kAutofillAgent_SetSecureContextRequired_Name = 1901024807;
// The 1649439090 value is based on sha256(salt + "AutofillAgent14").
constexpr uint32_t kAutofillAgent_SetFocusRequiresScroll_Name = 1649439090;
// The 688170277 value is based on sha256(salt + "AutofillAgent15").
constexpr uint32_t kAutofillAgent_SetQueryPasswordSuggestion_Name = 688170277;
// The 1167976070 value is based on sha256(salt + "PasswordAutofillAgent1").
constexpr uint32_t kPasswordAutofillAgent_FillPasswordForm_Name = 1167976070;
// The 142849469 value is based on sha256(salt + "PasswordAutofillAgent2").
constexpr uint32_t kPasswordAutofillAgent_SetLoggingState_Name = 142849469;
// The 921256887 value is based on sha256(salt + "PasswordAutofillAgent3").
constexpr uint32_t kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name = 921256887;
// The 1122761448 value is based on sha256(salt + "PasswordAutofillAgent4").
constexpr uint32_t kPasswordAutofillAgent_FindFocusedPasswordForm_Name = 1122761448;
// The 1632588293 value is based on sha256(salt + "PasswordAutofillAgent5").
constexpr uint32_t kPasswordAutofillAgent_BlacklistedFormFound_Name = 1632588293;
// The 1457595254 value is based on sha256(salt + "PasswordGenerationAgent1").
constexpr uint32_t kPasswordGenerationAgent_GeneratedPasswordAccepted_Name = 1457595254;
// The 1809334430 value is based on sha256(salt + "PasswordGenerationAgent2").
constexpr uint32_t kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name = 1809334430;
// The 234652695 value is based on sha256(salt + "PasswordGenerationAgent3").
constexpr uint32_t kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name = 234652695;
// The 797283073 value is based on sha256(salt + "PasswordGenerationAgent4").
constexpr uint32_t kPasswordGenerationAgent_FormNotBlacklisted_Name = 797283073;
// The 220524880 value is based on sha256(salt + "PasswordGenerationAgent5").
constexpr uint32_t kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name = 220524880;
// The 515305491 value is based on sha256(salt + "PasswordGenerationAgent6").
constexpr uint32_t kPasswordGenerationAgent_AllowToRunFormClassifier_Name = 515305491;

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_