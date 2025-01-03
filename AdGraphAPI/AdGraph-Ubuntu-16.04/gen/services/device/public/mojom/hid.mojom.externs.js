// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.HidManagerClientPtr = class {

  /**
   * @param { !device.mojom.HidDeviceInfo } deviceInfo
   */
   deviceAdded(deviceInfo) {}
  /**
   * @param { !device.mojom.HidDeviceInfo } deviceInfo
   */
   deviceRemoved(deviceInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.HidManagerClient;
/** @implements {mojo.InterfacePtr} */
device.mojom.HidManagerPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @return {Promise}
   */
   getDevicesAndSetClient(client) {}
  /**
   * @return {Promise}
   */
   getDevices() {}
  /**
   * @param { !string } deviceGuid
   * @return {Promise}
   */
   connect(deviceGuid) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.HidManager;
/** @implements {mojo.InterfacePtr} */
device.mojom.HidConnectionPtr = class {

  /**
   * @return {Promise}
   */
   read() {}
  /**
   * @param { !number } reportId
   * @param { !Array<number> } buffer
   * @return {Promise}
   */
   write(reportId, buffer) {}
  /**
   * @param { !number } reportId
   * @return {Promise}
   */
   getFeatureReport(reportId) {}
  /**
   * @param { !number } reportId
   * @param { !Array<number> } buffer
   * @return {Promise}
   */
   sendFeatureReport(reportId, buffer) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.HidConnection;
device.mojom.HidUsageAndPage = class {
  constructor() {
    /** @type { !number } */
    this.usage;
    /** @type { !number } */
    this.usagePage;
  }
};
device.mojom.HidCollectionInfo = class {
  constructor() {
    /** @type { !device.mojom.HidUsageAndPage } */
    this.usage;
    /** @type { !Array<number> } */
    this.reportIds;
  }
};
device.mojom.HidDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.guid;
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.productId;
    /** @type { !device.mojom.HidBusType } */
    this.busType;
    /** @type { !string } */
    this.productName;
    /** @type { !string } */
    this.serialNumber;
    /** @type { !Array<number> } */
    this.reportDescriptor;
    /** @type { !Array<device.mojom.HidCollectionInfo> } */
    this.collections;
    /** @type { !boolean } */
    this.hasReportId;
    /** @type { !number } */
    this.maxInputReportSize;
    /** @type { !number } */
    this.maxOutputReportSize;
    /** @type { !number } */
    this.maxFeatureReportSize;
    /** @type { !string } */
    this.deviceNode;
  }
};
device.mojom.HidManagerClient_DeviceAdded_Params = class {
  constructor() {
    /** @type { !device.mojom.HidDeviceInfo } */
    this.deviceInfo;
  }
};
device.mojom.HidManagerClient_DeviceRemoved_Params = class {
  constructor() {
    /** @type { !device.mojom.HidDeviceInfo } */
    this.deviceInfo;
  }
};
device.mojom.HidManager_GetDevicesAndSetClient_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
device.mojom.HidManager_GetDevicesAndSetClient_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.HidDeviceInfo> } */
    this.devices;
  }
};
device.mojom.HidManager_GetDevices_Params = class {
  constructor() {
  }
};
device.mojom.HidManager_GetDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.HidDeviceInfo> } */
    this.devices;
  }
};
device.mojom.HidManager_Connect_Params = class {
  constructor() {
    /** @type { !string } */
    this.deviceGuid;
  }
};
device.mojom.HidManager_Connect_ResponseParams = class {
  constructor() {
    /** @type { device.mojom.HidConnectionPtr } */
    this.connection;
  }
};
device.mojom.HidConnection_Read_Params = class {
  constructor() {
  }
};
device.mojom.HidConnection_Read_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { !number } */
    this.reportId;
    /** @type { Array<number> } */
    this.buffer;
  }
};
device.mojom.HidConnection_Write_Params = class {
  constructor() {
    /** @type { !number } */
    this.reportId;
    /** @type { !Array<number> } */
    this.buffer;
  }
};
device.mojom.HidConnection_Write_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.HidConnection_GetFeatureReport_Params = class {
  constructor() {
    /** @type { !number } */
    this.reportId;
  }
};
device.mojom.HidConnection_GetFeatureReport_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { Array<number> } */
    this.buffer;
  }
};
device.mojom.HidConnection_SendFeatureReport_Params = class {
  constructor() {
    /** @type { !number } */
    this.reportId;
    /** @type { !Array<number> } */
    this.buffer;
  }
};
device.mojom.HidConnection_SendFeatureReport_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
