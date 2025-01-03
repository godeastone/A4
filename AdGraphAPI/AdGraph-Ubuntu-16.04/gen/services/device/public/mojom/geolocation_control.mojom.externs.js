// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.GeolocationControlPtr = class {

  /**
   */
   userDidOptIntoLocationServices() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GeolocationControl;
device.mojom.GeolocationControl_UserDidOptIntoLocationServices_Params = class {
  constructor() {
  }
};
