// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.UsbInternalsPageHandlerPtr = class {

  /**
   * @param { !string } name
   * @param { !string } serialNumber
   * @param { !string } landingPage
   * @return {Promise}
   */
   addDeviceForTesting(name, serialNumber, landingPage) {}
  /**
   * @param { !string } guid
   * @return {Promise}
   */
   removeDeviceForTesting(guid) {}
  /**
   * @return {Promise}
   */
   getTestDevices() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.UsbInternalsPageHandler;
mojom.TestDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.guid;
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.serialNumber;
    /** @type { !url.mojom.Url } */
    this.landingPage;
  }
};
mojom.UsbInternalsPageHandler_AddDeviceForTesting_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.serialNumber;
    /** @type { !string } */
    this.landingPage;
  }
};
mojom.UsbInternalsPageHandler_AddDeviceForTesting_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !string } */
    this.message;
  }
};
mojom.UsbInternalsPageHandler_RemoveDeviceForTesting_Params = class {
  constructor() {
    /** @type { !string } */
    this.guid;
  }
};
mojom.UsbInternalsPageHandler_RemoveDeviceForTesting_ResponseParams = class {
  constructor() {
  }
};
mojom.UsbInternalsPageHandler_GetTestDevices_Params = class {
  constructor() {
  }
};
mojom.UsbInternalsPageHandler_GetTestDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<mojom.TestDeviceInfo> } */
    this.devices;
  }
};
