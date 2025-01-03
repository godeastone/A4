// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.PowerMonitorPtr = class {

  /**
   * @param { !device.mojom.PowerMonitorClientPtr } client
   */
   addClient(client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.PowerMonitor;
/** @implements {mojo.InterfacePtr} */
device.mojom.PowerMonitorClientPtr = class {

  /**
   * @param { !boolean } onBatteryPower
   */
   powerStateChange(onBatteryPower) {}
  /**
   */
   suspend() {}
  /**
   */
   resume() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.PowerMonitorClient;
device.mojom.PowerMonitor_AddClient_Params = class {
  constructor() {
    /** @type { !device.mojom.PowerMonitorClientPtr } */
    this.client;
  }
};
device.mojom.PowerMonitorClient_PowerStateChange_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.onBatteryPower;
  }
};
device.mojom.PowerMonitorClient_Suspend_Params = class {
  constructor() {
  }
};
device.mojom.PowerMonitorClient_Resume_Params = class {
  constructor() {
  }
};
