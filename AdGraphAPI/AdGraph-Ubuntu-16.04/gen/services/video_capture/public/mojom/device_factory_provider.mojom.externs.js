// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let videoCapture = {};
/** @const */
videoCapture.mojom = {};
/** @implements {mojo.InterfacePtr} */
videoCapture.mojom.DeviceFactoryProviderPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   */
   connectToDeviceFactory(request) {}
  /**
   * @param { !number } seconds
   */
   setShutdownDelayInSeconds(seconds) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
videoCapture.mojom.DeviceFactoryProvider;
videoCapture.mojom.DeviceFactoryProvider_ConnectToDeviceFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
videoCapture.mojom.DeviceFactoryProvider_SetShutdownDelayInSeconds_Params = class {
  constructor() {
    /** @type { !number } */
    this.seconds;
  }
};
