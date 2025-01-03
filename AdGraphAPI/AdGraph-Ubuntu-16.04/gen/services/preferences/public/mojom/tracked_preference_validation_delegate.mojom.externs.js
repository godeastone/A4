// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let prefs = {};
/** @const */
prefs.mojom = {};
/** @implements {mojo.InterfacePtr} */
prefs.mojom.TrackedPreferenceValidationDelegatePtr = class {

  /**
   * @param { !string } prefPath
   * @param { Object } value
   * @param { !prefs.mojom.ValueState } valueState
   * @param { !prefs.mojom.ValueState } externalValidationValueState
   * @param { !boolean } isPersonal
   */
   onAtomicPreferenceValidation(prefPath, value, valueState, externalValidationValueState, isPersonal) {}
  /**
   * @param { !string } prefPath
   * @param { !Array<string> } invalidKeys
   * @param { !Array<string> } externalValidationInvalidKeys
   * @param { !prefs.mojom.ValueState } valueState
   * @param { !prefs.mojom.ValueState } externalValidationValueState
   * @param { !boolean } isPersonal
   */
   onSplitPreferenceValidation(prefPath, invalidKeys, externalValidationInvalidKeys, valueState, externalValidationValueState, isPersonal) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
prefs.mojom.TrackedPreferenceValidationDelegate;
prefs.mojom.TrackedPreferenceValidationDelegate_OnAtomicPreferenceValidation_Params = class {
  constructor() {
    /** @type { !string } */
    this.prefPath;
    /** @type { Object } */
    this.value;
    /** @type { !prefs.mojom.ValueState } */
    this.valueState;
    /** @type { !prefs.mojom.ValueState } */
    this.externalValidationValueState;
    /** @type { !boolean } */
    this.isPersonal;
  }
};
prefs.mojom.TrackedPreferenceValidationDelegate_OnSplitPreferenceValidation_Params = class {
  constructor() {
    /** @type { !string } */
    this.prefPath;
    /** @type { !Array<string> } */
    this.invalidKeys;
    /** @type { !Array<string> } */
    this.externalValidationInvalidKeys;
    /** @type { !prefs.mojom.ValueState } */
    this.valueState;
    /** @type { !prefs.mojom.ValueState } */
    this.externalValidationValueState;
    /** @type { !boolean } */
    this.isPersonal;
  }
};
