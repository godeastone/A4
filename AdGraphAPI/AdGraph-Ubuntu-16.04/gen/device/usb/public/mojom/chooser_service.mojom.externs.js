// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.UsbChooserServicePtr = class {

  /**
   * @param { !Array<device.mojom.UsbDeviceFilter> } deviceFilters
   * @return {Promise}
   */
   getPermission(deviceFilters) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.UsbChooserService;
device.mojom.UsbChooserService_GetPermission_Params = class {
  constructor() {
    /** @type { !Array<device.mojom.UsbDeviceFilter> } */
    this.deviceFilters;
  }
};
device.mojom.UsbChooserService_GetPermission_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.UsbDeviceInfo } */
    this.result;
  }
};
