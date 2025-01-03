// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.VibrationManagerPtr = class {

  /**
   * @param { !number } milliseconds
   * @return {Promise}
   */
   vibrate(milliseconds) {}
  /**
   * @return {Promise}
   */
   cancel() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.VibrationManager;
device.mojom.VibrationManager_Vibrate_Params = class {
  constructor() {
    /** @type { !number } */
    this.milliseconds;
  }
};
device.mojom.VibrationManager_Vibrate_ResponseParams = class {
  constructor() {
  }
};
device.mojom.VibrationManager_Cancel_Params = class {
  constructor() {
  }
};
device.mojom.VibrationManager_Cancel_ResponseParams = class {
  constructor() {
  }
};
