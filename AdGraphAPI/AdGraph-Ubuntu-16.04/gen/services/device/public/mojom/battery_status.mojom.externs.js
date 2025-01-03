// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
device.mojom.BatteryStatus = class {
  constructor() {
    /** @type { !boolean } */
    this.charging;
    /** @type { !number } */
    this.chargingTime;
    /** @type { !number } */
    this.dischargingTime;
    /** @type { !number } */
    this.level;
  }
};
