// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.TimeZoneMonitorPtr = class {

  /**
   * @param { !device.mojom.TimeZoneMonitorClientPtr } client
   */
   addClient(client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.TimeZoneMonitor;
/** @implements {mojo.InterfacePtr} */
device.mojom.TimeZoneMonitorClientPtr = class {

  /**
   * @param { !string } tzInfo
   */
   onTimeZoneChange(tzInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.TimeZoneMonitorClient;
device.mojom.TimeZoneMonitor_AddClient_Params = class {
  constructor() {
    /** @type { !device.mojom.TimeZoneMonitorClientPtr } */
    this.client;
  }
};
device.mojom.TimeZoneMonitorClient_OnTimeZoneChange_Params = class {
  constructor() {
    /** @type { !string } */
    this.tzInfo;
  }
};
