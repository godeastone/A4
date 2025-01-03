// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
/** @implements {mojo.InterfacePtr} */
display.mojom.OutputProtectionPtr = class {

  /**
   * @param { !number } displayId
   * @return {Promise}
   */
   queryContentProtectionStatus(displayId) {}
  /**
   * @param { !number } displayId
   * @param { !number } desiredMethodMask
   * @return {Promise}
   */
   setContentProtection(displayId, desiredMethodMask) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
display.mojom.OutputProtection;
display.mojom.OutputProtection_QueryContentProtectionStatus_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
  }
};
display.mojom.OutputProtection_QueryContentProtectionStatus_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.linkMask;
    /** @type { !number } */
    this.protectionMask;
  }
};
display.mojom.OutputProtection_SetContentProtection_Params = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !number } */
    this.desiredMethodMask;
  }
};
display.mojom.OutputProtection_SetContentProtection_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
