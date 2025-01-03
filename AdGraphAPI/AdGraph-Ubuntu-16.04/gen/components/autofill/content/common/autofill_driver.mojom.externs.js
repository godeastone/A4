// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let autofill = {};
/** @const */
autofill.mojom = {};
/** @implements {mojo.InterfacePtr} */
autofill.mojom.AutofillDriverPtr = class {

  /**
   * @param { !Array<autofill.mojom.FormData> } forms
   * @param { !mojoBase.mojom.TimeTicks } timestamp
   */
   formsSeen(forms, timestamp) {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !boolean } knownSuccess
   * @param { !autofill.mojom.SubmissionSource } source
   * @param { !mojoBase.mojom.TimeTicks } timestamp
   */
   formSubmitted(form, knownSuccess, source, timestamp) {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !autofill.mojom.FormFieldData } field
   * @param { !gfx.mojom.RectF } boundingBox
   * @param { !mojoBase.mojom.TimeTicks } timestamp
   */
   textFieldDidChange(form, field, boundingBox, timestamp) {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !autofill.mojom.FormFieldData } field
   * @param { !gfx.mojom.RectF } boundingBox
   */
   textFieldDidScroll(form, field, boundingBox) {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !autofill.mojom.FormFieldData } field
   * @param { !gfx.mojom.RectF } boundingBox
   */
   selectControlDidChange(form, field, boundingBox) {}
  /**
   * @param { !autofill.mojom.FormData } form
   */
   selectFieldOptionsDidChange(form) {}
  /**
   * @param { !number } id
   * @param { !autofill.mojom.FormData } form
   * @param { !autofill.mojom.FormFieldData } field
   * @param { !gfx.mojom.RectF } boundingBox
   */
   queryFormFieldAutofill(id, form, field, boundingBox) {}
  /**
   */
   hidePopup() {}
  /**
   */
   focusNoLongerOnForm() {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !autofill.mojom.FormFieldData } field
   * @param { !gfx.mojom.RectF } boundingBox
   */
   focusOnFormField(form, field, boundingBox) {}
  /**
   * @param { !autofill.mojom.FormData } form
   * @param { !mojoBase.mojom.TimeTicks } timestamp
   */
   didFillAutofillFormData(form, timestamp) {}
  /**
   */
   didPreviewAutofillFormData() {}
  /**
   */
   didEndTextFieldEditing() {}
  /**
   * @param { !Array<mojoBase.mojom.String16> } values
   * @param { !Array<mojoBase.mojom.String16> } labels
   */
   setDataList(values, labels) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.AutofillDriver;
/** @implements {mojo.InterfacePtr} */
autofill.mojom.PasswordManagerDriverPtr = class {

  /**
   * @param { !Array<autofill.mojom.PasswordForm> } forms
   */
   passwordFormsParsed(forms) {}
  /**
   * @param { !Array<autofill.mojom.PasswordForm> } visibleForms
   * @param { !boolean } didStopLoading
   */
   passwordFormsRendered(visibleForms, didStopLoading) {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   passwordFormSubmitted(passwordForm) {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   showManualFallbackForSaving(passwordForm) {}
  /**
   */
   hideManualFallbackForSaving() {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   sameDocumentNavigation(passwordForm) {}
  /**
   * @param { !string } log
   */
   recordSavePasswordProgress(log) {}
  /**
   */
   userModifiedPasswordField() {}
  /**
   * @param { !number } key
   * @param { !mojoBase.mojom.TextDirection } textDirection
   * @param { !mojoBase.mojom.String16 } typedUsername
   * @param { !number } options
   * @param { !gfx.mojom.RectF } bounds
   */
   showPasswordSuggestions(key, textDirection, typedUsername, options, bounds) {}
  /**
   * @param { !mojoBase.mojom.TextDirection } textDirection
   * @param { !gfx.mojom.RectF } bounds
   */
   showManualFallbackSuggestion(textDirection, bounds) {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   presaveGeneratedPassword(passwordForm) {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   passwordNoLongerGenerated(passwordForm) {}
  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   * @param { !mojoBase.mojom.String16 } generationField
   */
   saveGenerationFieldDetectedByClassifier(passwordForm, generationField) {}
  /**
   * @param { !url.mojom.Url } formAction
   * @param { !url.mojom.Url } frameUrl
   */
   checkSafeBrowsingReputation(formAction, frameUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.PasswordManagerDriver;
/** @implements {mojo.InterfacePtr} */
autofill.mojom.PasswordManagerClientPtr = class {

  /**
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   generationAvailableForForm(passwordForm) {}
  /**
   * @param { !gfx.mojom.RectF } bounds
   * @param { !number } maxLength
   * @param { !mojoBase.mojom.String16 } generationElement
   * @param { !boolean } isManuallyTriggered
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   showPasswordGenerationPopup(bounds, maxLength, generationElement, isManuallyTriggered, passwordForm) {}
  /**
   * @param { !gfx.mojom.RectF } bounds
   * @param { !autofill.mojom.PasswordForm } passwordForm
   */
   showPasswordEditingPopup(bounds, passwordForm) {}
  /**
   */
   hidePasswordGenerationPopup() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.PasswordManagerClient;
autofill.mojom.AutofillDriver_FormsSeen_Params = class {
  constructor() {
    /** @type { !Array<autofill.mojom.FormData> } */
    this.forms;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
  }
};
autofill.mojom.AutofillDriver_FormSubmitted_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !boolean } */
    this.knownSuccess;
    /** @type { !autofill.mojom.SubmissionSource } */
    this.source;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
  }
};
autofill.mojom.AutofillDriver_TextFieldDidChange_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
  }
};
autofill.mojom.AutofillDriver_TextFieldDidScroll_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
  }
};
autofill.mojom.AutofillDriver_SelectControlDidChange_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
  }
};
autofill.mojom.AutofillDriver_SelectFieldOptionsDidChange_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
  }
};
autofill.mojom.AutofillDriver_QueryFormFieldAutofill_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
  }
};
autofill.mojom.AutofillDriver_HidePopup_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillDriver_FocusNoLongerOnForm_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillDriver_FocusOnFormField_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !gfx.mojom.RectF } */
    this.boundingBox;
  }
};
autofill.mojom.AutofillDriver_DidFillAutofillFormData_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.form;
    /** @type { !mojoBase.mojom.TimeTicks } */
    this.timestamp;
  }
};
autofill.mojom.AutofillDriver_DidPreviewAutofillFormData_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillDriver_DidEndTextFieldEditing_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillDriver_SetDataList_Params = class {
  constructor() {
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.values;
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.labels;
  }
};
autofill.mojom.PasswordManagerDriver_PasswordFormsParsed_Params = class {
  constructor() {
    /** @type { !Array<autofill.mojom.PasswordForm> } */
    this.forms;
  }
};
autofill.mojom.PasswordManagerDriver_PasswordFormsRendered_Params = class {
  constructor() {
    /** @type { !Array<autofill.mojom.PasswordForm> } */
    this.visibleForms;
    /** @type { !boolean } */
    this.didStopLoading;
  }
};
autofill.mojom.PasswordManagerDriver_PasswordFormSubmitted_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerDriver_ShowManualFallbackForSaving_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerDriver_HideManualFallbackForSaving_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordManagerDriver_SameDocumentNavigation_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerDriver_RecordSavePasswordProgress_Params = class {
  constructor() {
    /** @type { !string } */
    this.log;
  }
};
autofill.mojom.PasswordManagerDriver_UserModifiedPasswordField_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordManagerDriver_ShowPasswordSuggestions_Params = class {
  constructor() {
    /** @type { !number } */
    this.key;
    /** @type { !mojoBase.mojom.TextDirection } */
    this.textDirection;
    /** @type { !mojoBase.mojom.String16 } */
    this.typedUsername;
    /** @type { !number } */
    this.options;
    /** @type { !gfx.mojom.RectF } */
    this.bounds;
  }
};
autofill.mojom.PasswordManagerDriver_ShowManualFallbackSuggestion_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.TextDirection } */
    this.textDirection;
    /** @type { !gfx.mojom.RectF } */
    this.bounds;
  }
};
autofill.mojom.PasswordManagerDriver_PresaveGeneratedPassword_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerDriver_PasswordNoLongerGenerated_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
    /** @type { !mojoBase.mojom.String16 } */
    this.generationField;
  }
};
autofill.mojom.PasswordManagerDriver_CheckSafeBrowsingReputation_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.formAction;
    /** @type { !url.mojom.Url } */
    this.frameUrl;
  }
};
autofill.mojom.PasswordManagerClient_GenerationAvailableForForm_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerClient_ShowPasswordGenerationPopup_Params = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.bounds;
    /** @type { !number } */
    this.maxLength;
    /** @type { !boolean } */
    this.isManuallyTriggered;
    /** @type { !mojoBase.mojom.String16 } */
    this.generationElement;
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerClient_ShowPasswordEditingPopup_Params = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.bounds;
    /** @type { !autofill.mojom.PasswordForm } */
    this.passwordForm;
  }
};
autofill.mojom.PasswordManagerClient_HidePasswordGenerationPopup_Params = class {
  constructor() {
  }
};
