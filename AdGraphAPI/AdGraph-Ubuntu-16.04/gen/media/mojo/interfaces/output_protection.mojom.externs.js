// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.OutputProtectionPtr = class {

  /**
   * @return {Promise}
   */
   queryStatus() {}
  /**
   * @param { !number } desiredProtectionMask
   * @return {Promise}
   */
   enableProtection(desiredProtectionMask) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.OutputProtection;
media.mojom.OutputProtection_QueryStatus_Params = class {
  constructor() {
  }
};
media.mojom.OutputProtection_QueryStatus_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.linkMask;
    /** @type { !number } */
    this.protectionMask;
  }
};
media.mojom.OutputProtection_EnableProtection_Params = class {
  constructor() {
    /** @type { !number } */
    this.desiredProtectionMask;
  }
};
media.mojom.OutputProtection_EnableProtection_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
