// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let autofill = {};
/** @const */
autofill.mojom = {};
/** @implements {mojo.InterfacePtr} */
autofill.mojom.AutofillAgentPtr = class {

  /**
   * @param { !number } id
   * @param { !autofill.mojom.FormData } form
   */
   fillForm(id, form) {}
  /**
   * @param { !number } id
   * @param { !autofill.mojom.FormData } form
   */
   previewForm(id, form) {}
  /**
   * @param { !Array<autofill.mojom.FormDataPredictions> } forms
   */
   fieldTypePredictionsAvailable(forms) {}
  /**
   */
   clearSection() {}
  /**
   */
   clearPreviewedForm() {}
  /**
   * @param { !mojoBase.mojom.String16 } value
   */
   fillFieldWithValue(value) {}
  /**
   * @param { !mojoBase.mojom.String16 } value
   */
   previewFieldWithValue(value) {}
  /**
   * @param { !mojoBase.mojom.String16 } value
   */
   acceptDataListSuggestion(value) {}
  /**
   * @param { !mojoBase.mojom.String16 } username
   * @param { !mojoBase.mojom.String16 } password
   */
   fillPasswordSuggestion(username, password) {}
  /**
   * @param { !mojoBase.mojom.String16 } username
   * @param { !mojoBase.mojom.String16 } password
   */
   previewPasswordSuggestion(username, password) {}
  /**
   * @param { !number } key
   * @param { !autofill.mojom.PasswordFormFillData } formData
   */
   showInitialPasswordAccountSuggestions(key, formData) {}
  /**
   * @param { !boolean } required
   */
   setUserGestureRequired(required) {}
  /**
   * @param { !boolean } required
   */
   setSecureContextRequired(required) {}
  /**
   * @param { !boolean } require
   */
   setFocusRequiresScroll(require) {}
  /**
   * @param { !boolean } query
   */
   setQueryPasswordSuggestion(query) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.AutofillAgent;
/** @implements {mojo.InterfacePtr} */
autofill.mojom.PasswordAutofillAgentPtr = class {

  /**
   * @param { !number } key
   * @param { !autofill.mojom.PasswordFormFillData } formData
   */
   fillPasswordForm(key, formData) {}
  /**
   * @param { !boolean } active
   */
   setLoggingState(active) {}
  /**
   * @param { !autofill.mojom.FormsPredictionsMap } predictions
   */
   autofillUsernameAndPasswordDataReceived(predictions) {}
  /**
   * @return {Promise}
   */
   findFocusedPasswordForm() {}
  /**
   */
   blacklistedFormFound() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.PasswordAutofillAgent;
/** @implements {mojo.InterfacePtr} */
autofill.mojom.PasswordGenerationAgentPtr = class {

  /**
   * @param { !mojoBase.mojom.String16 } generatedPassword
   */
   generatedPasswordAccepted(generatedPassword) {}
  /**
   */
   userTriggeredGeneratePassword() {}
  /**
   */
   userSelectedManualGenerationOption() {}
  /**
   * @param { !autofill.mojom.PasswordForm } form
   */
   formNotBlacklisted(form) {}
  /**
   * @param { !Array<autofill.mojom.PasswordFormGenerationData> } forms
   */
   foundFormsEligibleForGeneration(forms) {}
  /**
   */
   allowToRunFormClassifier() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
autofill.mojom.PasswordGenerationAgent;
autofill.mojom.AutofillAgent_FillForm_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !autofill.mojom.FormData } */
    this.form;
  }
};
autofill.mojom.AutofillAgent_PreviewForm_Params = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !autofill.mojom.FormData } */
    this.form;
  }
};
autofill.mojom.AutofillAgent_FieldTypePredictionsAvailable_Params = class {
  constructor() {
    /** @type { !Array<autofill.mojom.FormDataPredictions> } */
    this.forms;
  }
};
autofill.mojom.AutofillAgent_ClearSection_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillAgent_ClearPreviewedForm_Params = class {
  constructor() {
  }
};
autofill.mojom.AutofillAgent_FillFieldWithValue_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
  }
};
autofill.mojom.AutofillAgent_PreviewFieldWithValue_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
  }
};
autofill.mojom.AutofillAgent_AcceptDataListSuggestion_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
  }
};
autofill.mojom.AutofillAgent_FillPasswordSuggestion_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.username;
    /** @type { !mojoBase.mojom.String16 } */
    this.password;
  }
};
autofill.mojom.AutofillAgent_PreviewPasswordSuggestion_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.username;
    /** @type { !mojoBase.mojom.String16 } */
    this.password;
  }
};
autofill.mojom.AutofillAgent_ShowInitialPasswordAccountSuggestions_Params = class {
  constructor() {
    /** @type { !number } */
    this.key;
    /** @type { !autofill.mojom.PasswordFormFillData } */
    this.formData;
  }
};
autofill.mojom.AutofillAgent_SetUserGestureRequired_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.required;
  }
};
autofill.mojom.AutofillAgent_SetSecureContextRequired_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.required;
  }
};
autofill.mojom.AutofillAgent_SetFocusRequiresScroll_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.require;
  }
};
autofill.mojom.AutofillAgent_SetQueryPasswordSuggestion_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.query;
  }
};
autofill.mojom.PasswordAutofillAgent_FillPasswordForm_Params = class {
  constructor() {
    /** @type { !number } */
    this.key;
    /** @type { !autofill.mojom.PasswordFormFillData } */
    this.formData;
  }
};
autofill.mojom.PasswordAutofillAgent_SetLoggingState_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.active;
  }
};
autofill.mojom.PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params = class {
  constructor() {
    /** @type { !autofill.mojom.FormsPredictionsMap } */
    this.predictions;
  }
};
autofill.mojom.PasswordAutofillAgent_FindFocusedPasswordForm_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.form;
  }
};
autofill.mojom.PasswordAutofillAgent_BlacklistedFormFound_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordGenerationAgent_GeneratedPasswordAccepted_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.generatedPassword;
  }
};
autofill.mojom.PasswordGenerationAgent_UserTriggeredGeneratePassword_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordGenerationAgent_UserSelectedManualGenerationOption_Params = class {
  constructor() {
  }
};
autofill.mojom.PasswordGenerationAgent_FormNotBlacklisted_Params = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordForm } */
    this.form;
  }
};
autofill.mojom.PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params = class {
  constructor() {
    /** @type { !Array<autofill.mojom.PasswordFormGenerationData> } */
    this.forms;
  }
};
autofill.mojom.PasswordGenerationAgent_AllowToRunFormClassifier_Params = class {
  constructor() {
  }
};
