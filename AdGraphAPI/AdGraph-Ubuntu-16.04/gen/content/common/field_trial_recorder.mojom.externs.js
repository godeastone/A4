// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.FieldTrialRecorderPtr = class {

  /**
   * @param { !string } trialName
   */
   fieldTrialActivated(trialName) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.FieldTrialRecorder;
content.mojom.FieldTrialRecorder_FieldTrialActivated_Params = class {
  constructor() {
    /** @type { !string } */
    this.trialName;
  }
};
