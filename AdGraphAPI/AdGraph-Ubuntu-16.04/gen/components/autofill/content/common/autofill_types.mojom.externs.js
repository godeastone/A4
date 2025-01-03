// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let autofill = {};
/** @const */
autofill.mojom = {};
autofill.mojom.FormFieldData = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.label;
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !mojoBase.mojom.String16 } */
    this.id;
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
    /** @type { !string } */
    this.formControlType;
    /** @type { !string } */
    this.autocompleteAttribute;
    /** @type { !mojoBase.mojom.String16 } */
    this.placeholder;
    /** @type { !mojoBase.mojom.String16 } */
    this.cssClasses;
    /** @type { !number } */
    this.uniqueRendererId;
    /** @type { !number } */
    this.propertiesMask;
    /** @type { !number } */
    this.maxLength;
    /** @type { !boolean } */
    this.isAutofilled;
    /** @type { !boolean } */
    this.isFocusable;
    /** @type { !boolean } */
    this.shouldAutocomplete;
    /** @type { !boolean } */
    this.isEnabled;
    /** @type { !boolean } */
    this.isReadonly;
    /** @type { !boolean } */
    this.isDefault;
    /** @type { !autofill.mojom.CheckStatus } */
    this.checkStatus;
    /** @type { !string } */
    this.section;
    /** @type { !autofill.mojom.RoleAttribute } */
    this.role;
    /** @type { !mojoBase.mojom.TextDirection } */
    this.textDirection;
    /** @type { !mojoBase.mojom.String16 } */
    this.typedValue;
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.optionValues;
    /** @type { !Array<mojoBase.mojom.String16> } */
    this.optionContents;
    /** @type { !autofill.mojom.LabelSource } */
    this.labelSource;
  }
};
autofill.mojom.FormData = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !url.mojom.Url } */
    this.origin;
    /** @type { !url.mojom.Url } */
    this.action;
    /** @type { !url.mojom.Origin } */
    this.mainFrameOrigin;
    /** @type { !boolean } */
    this.isFormTag;
    /** @type { !boolean } */
    this.isFormlessCheckout;
    /** @type { !number } */
    this.uniqueRendererId;
    /** @type { !Array<autofill.mojom.FormFieldData> } */
    this.fields;
  }
};
autofill.mojom.FormFieldDataPredictions = class {
  constructor() {
    /** @type { !autofill.mojom.FormFieldData } */
    this.field;
    /** @type { !string } */
    this.signature;
    /** @type { !string } */
    this.heuristicType;
    /** @type { !string } */
    this.serverType;
    /** @type { !string } */
    this.overallType;
    /** @type { !string } */
    this.parseableName;
    /** @type { !string } */
    this.section;
  }
};
autofill.mojom.FormDataPredictions = class {
  constructor() {
    /** @type { !autofill.mojom.FormData } */
    this.data;
    /** @type { !string } */
    this.signature;
    /** @type { !Array<autofill.mojom.FormFieldDataPredictions> } */
    this.fields;
  }
};
autofill.mojom.PasswordAndRealm = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.password;
    /** @type { !string } */
    this.realm;
  }
};
autofill.mojom.PasswordFormFillData = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
    /** @type { !url.mojom.Url } */
    this.origin;
    /** @type { !url.mojom.Url } */
    this.action;
    /** @type { !autofill.mojom.FormFieldData } */
    this.usernameField;
    /** @type { !autofill.mojom.FormFieldData } */
    this.passwordField;
    /** @type { !string } */
    this.preferredRealm;
    /** @type { !Map<mojoBase.mojom.String16, autofill.mojom.PasswordAndRealm> } */
    this.additionalLogins;
    /** @type { !boolean } */
    this.waitForUsername;
    /** @type { !boolean } */
    this.isPossibleChangePasswordForm;
  }
};
autofill.mojom.PasswordFormGenerationData = class {
  constructor() {
    /** @type { !number } */
    this.formSignature;
    /** @type { !number } */
    this.fieldSignature;
    /** @type { !boolean } */
    this.hasConfirmationField;
    /** @type { !number } */
    this.confirmationFieldSignature;
  }
};
autofill.mojom.ValueElementPair = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.value;
    /** @type { !mojoBase.mojom.String16 } */
    this.fieldName;
  }
};
autofill.mojom.PasswordForm = class {
  constructor() {
    /** @type { !autofill.mojom.PasswordFormScheme } */
    this.scheme;
    /** @type { !boolean } */
    this.usernameMarkedBySite;
    /** @type { !boolean } */
    this.formHasAutofilledValue;
    /** @type { !boolean } */
    this.passwordValueIsDefault;
    /** @type { !boolean } */
    this.newPasswordValueIsDefault;
    /** @type { !boolean } */
    this.newPasswordMarkedBySite;
    /** @type { !boolean } */
    this.preferred;
    /** @type { !boolean } */
    this.blacklistedByUser;
    /** @type { !boolean } */
    this.skipZeroClick;
    /** @type { !boolean } */
    this.wasParsedUsingAutofillPredictions;
    /** @type { !boolean } */
    this.isPublicSuffixMatch;
    /** @type { !boolean } */
    this.isAffiliationBasedMatch;
    /** @type { !boolean } */
    this.onlyForFallbackSaving;
    /** @type { !string } */
    this.signonRealm;
    /** @type { !url.mojom.Url } */
    this.originWithPath;
    /** @type { !url.mojom.Url } */
    this.action;
    /** @type { !string } */
    this.affiliatedWebRealm;
    /** @type { !mojoBase.mojom.String16 } */
    this.submitElement;
    /** @type { !mojoBase.mojom.String16 } */
    this.usernameElement;
    /** @type { !mojoBase.mojom.String16 } */
    this.usernameValue;
    /** @type { !Array<autofill.mojom.ValueElementPair> } */
    this.otherPossibleUsernames;
    /** @type { !Array<autofill.mojom.ValueElementPair> } */
    this.allPossiblePasswords;
    /** @type { !mojoBase.mojom.String16 } */
    this.passwordElement;
    /** @type { !mojoBase.mojom.String16 } */
    this.passwordValue;
    /** @type { !mojoBase.mojom.String16 } */
    this.newPasswordElement;
    /** @type { !mojoBase.mojom.String16 } */
    this.newPasswordValue;
    /** @type { !mojoBase.mojom.String16 } */
    this.confirmationPasswordElement;
    /** @type { !mojoBase.mojom.Time } */
    this.dateCreated;
    /** @type { !mojoBase.mojom.Time } */
    this.dateSynced;
    /** @type { !autofill.mojom.PasswordFormType } */
    this.type;
    /** @type { !number } */
    this.timesUsed;
    /** @type { !autofill.mojom.FormData } */
    this.formData;
    /** @type { !autofill.mojom.GenerationUploadStatus } */
    this.generationUploadStatus;
    /** @type { !autofill.mojom.PasswordFormLayout } */
    this.layout;
    /** @type { !mojoBase.mojom.String16 } */
    this.displayName;
    /** @type { !url.mojom.Url } */
    this.iconUrl;
    /** @type { !url.mojom.Origin } */
    this.federationOrigin;
    /** @type { !autofill.mojom.PasswordFormSubmissionIndicatorEvent } */
    this.submissionEvent;
  }
};
autofill.mojom.PasswordFormFieldPredictionMap = class {
  constructor() {
    /** @type { !Array<autofill.mojom.FormFieldData> } */
    this.keys;
    /** @type { !Array<autofill.mojom.PasswordFormFieldPredictionType> } */
    this.values;
  }
};
autofill.mojom.FormsPredictionsMap = class {
  constructor() {
    /** @type { !Array<autofill.mojom.FormData> } */
    this.keys;
    /** @type { !Array<autofill.mojom.PasswordFormFieldPredictionMap> } */
    this.values;
  }
};
