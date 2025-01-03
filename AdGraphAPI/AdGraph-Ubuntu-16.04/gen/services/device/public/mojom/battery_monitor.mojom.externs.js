// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.BatteryMonitorPtr = class {

  /**
   * @return {Promise}
   */
   queryNextStatus() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.BatteryMonitor;
device.mojom.BatteryMonitor_QueryNextStatus_Params = class {
  constructor() {
  }
};
device.mojom.BatteryMonitor_QueryNextStatus_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.BatteryStatus } */
    this.status;
  }
};
