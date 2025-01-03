// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
device.mojom.Geoposition = class {
  constructor() {
    /** @type { !boolean } */
    this.valid;
    /** @type { !device.mojom.ErrorCode } */
    this.errorCode;
    /** @type { !number } */
    this.latitude;
    /** @type { !number } */
    this.longitude;
    /** @type { !number } */
    this.altitude;
    /** @type { !number } */
    this.accuracy;
    /** @type { !number } */
    this.altitudeAccuracy;
    /** @type { !number } */
    this.heading;
    /** @type { !number } */
    this.speed;
    /** @type { !mojoBase.mojom.Time } */
    this.timestamp;
    /** @type { !string } */
    this.errorMessage;
  }
};
