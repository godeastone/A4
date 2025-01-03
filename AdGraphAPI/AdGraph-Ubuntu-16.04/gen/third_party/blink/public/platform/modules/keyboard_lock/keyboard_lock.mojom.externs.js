// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.KeyboardLockServicePtr = class {

  /**
   * @param { !Array<string> } keyCodes
   * @return {Promise}
   */
   requestKeyboardLock(keyCodes) {}
  /**
   */
   cancelKeyboardLock() {}
  /**
   * @return {Promise}
   */
   getKeyboardLayoutMap() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.KeyboardLockService;
blink.mojom.GetKeyboardLayoutMapResult = class {
  constructor() {
    /** @type { !blink.mojom.GetKeyboardLayoutMapStatus } */
    this.status;
    /** @type { !Map<string, string> } */
    this.layoutMap;
  }
};
blink.mojom.KeyboardLockService_RequestKeyboardLock_Params = class {
  constructor() {
    /** @type { !Array<string> } */
    this.keyCodes;
  }
};
blink.mojom.KeyboardLockService_RequestKeyboardLock_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.KeyboardLockRequestResult } */
    this.result;
  }
};
blink.mojom.KeyboardLockService_CancelKeyboardLock_Params = class {
  constructor() {
  }
};
blink.mojom.KeyboardLockService_GetKeyboardLayoutMap_Params = class {
  constructor() {
  }
};
blink.mojom.KeyboardLockService_GetKeyboardLayoutMap_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.GetKeyboardLayoutMapResult } */
    this.result;
  }
};
