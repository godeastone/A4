// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.GeolocationPtr = class {

  /**
   * @param { !boolean } highAccuracy
   */
   setHighAccuracy(highAccuracy) {}
  /**
   * @return {Promise}
   */
   queryNextPosition() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.Geolocation;
device.mojom.Geolocation_SetHighAccuracy_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.highAccuracy;
  }
};
device.mojom.Geolocation_QueryNextPosition_Params = class {
  constructor() {
  }
};
device.mojom.Geolocation_QueryNextPosition_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.Geoposition } */
    this.geoposition;
  }
};
