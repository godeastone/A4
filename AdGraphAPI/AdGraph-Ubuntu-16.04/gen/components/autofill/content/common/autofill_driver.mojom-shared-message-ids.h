// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace autofill {
namespace mojom {

namespace internal {


// The 1800839219 value is based on sha256(salt + "AutofillDriver1").
constexpr uint32_t kAutofillDriver_FormsSeen_Name = 1800839219;
// The 1603036303 value is based on sha256(salt + "AutofillDriver2").
constexpr uint32_t kAutofillDriver_FormSubmitted_Name = 1603036303;
// The 1761487088 value is based on sha256(salt + "AutofillDriver3").
constexpr uint32_t kAutofillDriver_TextFieldDidChange_Name = 1761487088;
// The 1975592945 value is based on sha256(salt + "AutofillDriver4").
constexpr uint32_t kAutofillDriver_TextFieldDidScroll_Name = 1975592945;
// The 552036930 value is based on sha256(salt + "AutofillDriver5").
constexpr uint32_t kAutofillDriver_SelectControlDidChange_Name = 552036930;
// The 357243727 value is based on sha256(salt + "AutofillDriver6").
constexpr uint32_t kAutofillDriver_SelectFieldOptionsDidChange_Name = 357243727;
// The 1924289780 value is based on sha256(salt + "AutofillDriver7").
constexpr uint32_t kAutofillDriver_QueryFormFieldAutofill_Name = 1924289780;
// The 711560379 value is based on sha256(salt + "AutofillDriver8").
constexpr uint32_t kAutofillDriver_HidePopup_Name = 711560379;
// The 1313736359 value is based on sha256(salt + "AutofillDriver9").
constexpr uint32_t kAutofillDriver_FocusNoLongerOnForm_Name = 1313736359;
// The 1701682731 value is based on sha256(salt + "AutofillDriver10").
constexpr uint32_t kAutofillDriver_FocusOnFormField_Name = 1701682731;
// The 268729676 value is based on sha256(salt + "AutofillDriver11").
constexpr uint32_t kAutofillDriver_DidFillAutofillFormData_Name = 268729676;
// The 340432667 value is based on sha256(salt + "AutofillDriver12").
constexpr uint32_t kAutofillDriver_DidPreviewAutofillFormData_Name = 340432667;
// The 1536139201 value is based on sha256(salt + "AutofillDriver13").
constexpr uint32_t kAutofillDriver_DidEndTextFieldEditing_Name = 1536139201;
// The 130843550 value is based on sha256(salt + "AutofillDriver14").
constexpr uint32_t kAutofillDriver_SetDataList_Name = 130843550;
// The 1230585859 value is based on sha256(salt + "PasswordManagerDriver1").
constexpr uint32_t kPasswordManagerDriver_PasswordFormsParsed_Name = 1230585859;
// The 981067721 value is based on sha256(salt + "PasswordManagerDriver2").
constexpr uint32_t kPasswordManagerDriver_PasswordFormsRendered_Name = 981067721;
// The 563257872 value is based on sha256(salt + "PasswordManagerDriver3").
constexpr uint32_t kPasswordManagerDriver_PasswordFormSubmitted_Name = 563257872;
// The 436745123 value is based on sha256(salt + "PasswordManagerDriver4").
constexpr uint32_t kPasswordManagerDriver_ShowManualFallbackForSaving_Name = 436745123;
// The 1309713847 value is based on sha256(salt + "PasswordManagerDriver5").
constexpr uint32_t kPasswordManagerDriver_HideManualFallbackForSaving_Name = 1309713847;
// The 2038518669 value is based on sha256(salt + "PasswordManagerDriver6").
constexpr uint32_t kPasswordManagerDriver_SameDocumentNavigation_Name = 2038518669;
// The 294555761 value is based on sha256(salt + "PasswordManagerDriver7").
constexpr uint32_t kPasswordManagerDriver_RecordSavePasswordProgress_Name = 294555761;
// The 376845145 value is based on sha256(salt + "PasswordManagerDriver8").
constexpr uint32_t kPasswordManagerDriver_UserModifiedPasswordField_Name = 376845145;
// The 1629634864 value is based on sha256(salt + "PasswordManagerDriver9").
constexpr uint32_t kPasswordManagerDriver_ShowPasswordSuggestions_Name = 1629634864;
// The 234167736 value is based on sha256(salt + "PasswordManagerDriver10").
constexpr uint32_t kPasswordManagerDriver_ShowManualFallbackSuggestion_Name = 234167736;
// The 1701295777 value is based on sha256(salt + "PasswordManagerDriver11").
constexpr uint32_t kPasswordManagerDriver_PresaveGeneratedPassword_Name = 1701295777;
// The 778300311 value is based on sha256(salt + "PasswordManagerDriver12").
constexpr uint32_t kPasswordManagerDriver_PasswordNoLongerGenerated_Name = 778300311;
// The 706987276 value is based on sha256(salt + "PasswordManagerDriver13").
constexpr uint32_t kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name = 706987276;
// The 1358622876 value is based on sha256(salt + "PasswordManagerDriver14").
constexpr uint32_t kPasswordManagerDriver_CheckSafeBrowsingReputation_Name = 1358622876;
// The 1474041243 value is based on sha256(salt + "PasswordManagerClient1").
constexpr uint32_t kPasswordManagerClient_GenerationAvailableForForm_Name = 1474041243;
// The 353079853 value is based on sha256(salt + "PasswordManagerClient2").
constexpr uint32_t kPasswordManagerClient_ShowPasswordGenerationPopup_Name = 353079853;
// The 1616560626 value is based on sha256(salt + "PasswordManagerClient3").
constexpr uint32_t kPasswordManagerClient_ShowPasswordEditingPopup_Name = 1616560626;
// The 1838861804 value is based on sha256(salt + "PasswordManagerClient4").
constexpr uint32_t kPasswordManagerClient_HidePasswordGenerationPopup_Name = 1838861804;

}  // namespace internal
}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_AUTOFILL_DRIVER_MOJOM_SHARED_MESSAGE_IDS_H_