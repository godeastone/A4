// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.UsbDeviceManagerPtr = class {

  /**
   * @param { device.mojom.UsbEnumerationOptions } options
   * @return {Promise}
   */
   getDevices(options) {}
  /**
   * @param { !string } guid
   * @param { !mojo.InterfaceRequest } deviceRequest
   */
   getDevice(guid, deviceRequest) {}
  /**
   * @param { !device.mojom.UsbDeviceManagerClientPtr } client
   */
   setClient(client) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.UsbDeviceManager;
/** @implements {mojo.InterfacePtr} */
device.mojom.UsbDeviceManagerClientPtr = class {

  /**
   * @param { !device.mojom.UsbDeviceInfo } deviceInfo
   */
   onDeviceAdded(deviceInfo) {}
  /**
   * @param { !device.mojom.UsbDeviceInfo } deviceInfo
   */
   onDeviceRemoved(deviceInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.UsbDeviceManagerClient;
device.mojom.UsbDeviceFilter = class {
  constructor() {
    /** @type { !boolean } */
    this.hasVendorId;
    /** @type { !boolean } */
    this.hasProductId;
    /** @type { !boolean } */
    this.hasClassCode;
    /** @type { !boolean } */
    this.hasSubclassCode;
    /** @type { !boolean } */
    this.hasProtocolCode;
    /** @type { !number } */
    this.classCode;
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.productId;
    /** @type { !number } */
    this.subclassCode;
    /** @type { !number } */
    this.protocolCode;
    /** @type { mojoBase.mojom.String16 } */
    this.serialNumber;
  }
};
device.mojom.UsbEnumerationOptions = class {
  constructor() {
    /** @type { !Array<device.mojom.UsbDeviceFilter> } */
    this.filters;
  }
};
device.mojom.UsbDeviceManager_GetDevices_Params = class {
  constructor() {
    /** @type { device.mojom.UsbEnumerationOptions } */
    this.options;
  }
};
device.mojom.UsbDeviceManager_GetDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.UsbDeviceInfo> } */
    this.results;
  }
};
device.mojom.UsbDeviceManager_GetDevice_Params = class {
  constructor() {
    /** @type { !string } */
    this.guid;
    /** @type { !mojo.InterfaceRequest } */
    this.deviceRequest;
  }
};
device.mojom.UsbDeviceManager_SetClient_Params = class {
  constructor() {
    /** @type { !device.mojom.UsbDeviceManagerClientPtr } */
    this.client;
  }
};
device.mojom.UsbDeviceManagerClient_OnDeviceAdded_Params = class {
  constructor() {
    /** @type { !device.mojom.UsbDeviceInfo } */
    this.deviceInfo;
  }
};
device.mojom.UsbDeviceManagerClient_OnDeviceRemoved_Params = class {
  constructor() {
    /** @type { !device.mojom.UsbDeviceInfo } */
    this.deviceInfo;
  }
};
