// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.GeolocationConfigPtr = class {

  /**
   * @return {Promise}
   */
   isHighAccuracyLocationBeingCaptured() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GeolocationConfig;
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_Params = class {
  constructor() {
  }
};
device.mojom.GeolocationConfig_IsHighAccuracyLocationBeingCaptured_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.highAccuracy;
  }
};
