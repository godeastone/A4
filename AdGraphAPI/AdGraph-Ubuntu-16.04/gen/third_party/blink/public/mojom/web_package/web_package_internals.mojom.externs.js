// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.test = {};
/** @const */
blink.test.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.test.mojom.WebPackageInternalsPtr = class {

  /**
   * @param { !mojoBase.mojom.Time } time
   * @return {Promise}
   */
   setSignedExchangeVerificationTime(time) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.test.mojom.WebPackageInternals;
blink.test.mojom.WebPackageInternals_SetSignedExchangeVerificationTime_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.Time } */
    this.time;
  }
};
blink.test.mojom.WebPackageInternals_SetSignedExchangeVerificationTime_ResponseParams = class {
  constructor() {
  }
};
