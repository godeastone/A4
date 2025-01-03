// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.UsbDevicePtr = class {

  /**
   * @return {Promise}
   */
   open() {}
  /**
   * @return {Promise}
   */
   close() {}
  /**
   * @param { !number } value
   * @return {Promise}
   */
   setConfiguration(value) {}
  /**
   * @param { !number } interfaceNumber
   * @return {Promise}
   */
   claimInterface(interfaceNumber) {}
  /**
   * @param { !number } interfaceNumber
   * @return {Promise}
   */
   releaseInterface(interfaceNumber) {}
  /**
   * @param { !number } interfaceNumber
   * @param { !number } alternateSetting
   * @return {Promise}
   */
   setInterfaceAlternateSetting(interfaceNumber, alternateSetting) {}
  /**
   * @return {Promise}
   */
   reset() {}
  /**
   * @param { !number } endpoint
   * @return {Promise}
   */
   clearHalt(endpoint) {}
  /**
   * @param { !device.mojom.UsbControlTransferParams } params
   * @param { !number } length
   * @param { !number } timeout
   * @return {Promise}
   */
   controlTransferIn(params, length, timeout) {}
  /**
   * @param { !device.mojom.UsbControlTransferParams } params
   * @param { !Array<number> } data
   * @param { !number } timeout
   * @return {Promise}
   */
   controlTransferOut(params, data, timeout) {}
  /**
   * @param { !number } endpointNumber
   * @param { !number } length
   * @param { !number } timeout
   * @return {Promise}
   */
   genericTransferIn(endpointNumber, length, timeout) {}
  /**
   * @param { !number } endpointNumber
   * @param { !Array<number> } data
   * @param { !number } timeout
   * @return {Promise}
   */
   genericTransferOut(endpointNumber, data, timeout) {}
  /**
   * @param { !number } endpointNumber
   * @param { !Array<number> } packetLengths
   * @param { !number } timeout
   * @return {Promise}
   */
   isochronousTransferIn(endpointNumber, packetLengths, timeout) {}
  /**
   * @param { !number } endpointNumber
   * @param { !Array<number> } data
   * @param { !Array<number> } packetLengths
   * @param { !number } timeout
   * @return {Promise}
   */
   isochronousTransferOut(endpointNumber, data, packetLengths, timeout) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.UsbDevice;
device.mojom.UsbEndpointInfo = class {
  constructor() {
    /** @type { !number } */
    this.endpointNumber;
    /** @type { !device.mojom.UsbTransferDirection } */
    this.direction;
    /** @type { !device.mojom.UsbTransferType } */
    this.type;
    /** @type { !number } */
    this.packetSize;
  }
};
device.mojom.UsbAlternateInterfaceInfo = class {
  constructor() {
    /** @type { !number } */
    this.alternateSetting;
    /** @type { !number } */
    this.classCode;
    /** @type { !number } */
    this.subclassCode;
    /** @type { !number } */
    this.protocolCode;
    /** @type { mojoBase.mojom.String16 } */
    this.interfaceName;
    /** @type { !Array<device.mojom.UsbEndpointInfo> } */
    this.endpoints;
  }
};
device.mojom.UsbInterfaceInfo = class {
  constructor() {
    /** @type { !number } */
    this.interfaceNumber;
    /** @type { !Array<device.mojom.UsbAlternateInterfaceInfo> } */
    this.alternates;
  }
};
device.mojom.UsbConfigurationInfo = class {
  constructor() {
    /** @type { !number } */
    this.configurationValue;
    /** @type { mojoBase.mojom.String16 } */
    this.configurationName;
    /** @type { !Array<device.mojom.UsbInterfaceInfo> } */
    this.interfaces;
  }
};
device.mojom.UsbDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.guid;
    /** @type { !number } */
    this.usbVersionMajor;
    /** @type { !number } */
    this.usbVersionMinor;
    /** @type { !number } */
    this.usbVersionSubminor;
    /** @type { !number } */
    this.classCode;
    /** @type { !number } */
    this.subclassCode;
    /** @type { !number } */
    this.protocolCode;
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.productId;
    /** @type { !number } */
    this.deviceVersionMajor;
    /** @type { !number } */
    this.deviceVersionMinor;
    /** @type { !number } */
    this.deviceVersionSubminor;
    /** @type { !number } */
    this.activeConfiguration;
    /** @type { mojoBase.mojom.String16 } */
    this.manufacturerName;
    /** @type { mojoBase.mojom.String16 } */
    this.productName;
    /** @type { mojoBase.mojom.String16 } */
    this.serialNumber;
    /** @type { !Array<device.mojom.UsbConfigurationInfo> } */
    this.configurations;
  }
};
device.mojom.UsbControlTransferParams = class {
  constructor() {
    /** @type { !device.mojom.UsbControlTransferType } */
    this.type;
    /** @type { !device.mojom.UsbControlTransferRecipient } */
    this.recipient;
    /** @type { !number } */
    this.request;
    /** @type { !number } */
    this.value;
    /** @type { !number } */
    this.index;
  }
};
device.mojom.UsbIsochronousPacket = class {
  constructor() {
    /** @type { !number } */
    this.length;
    /** @type { !number } */
    this.transferredLength;
    /** @type { !device.mojom.UsbTransferStatus } */
    this.status;
  }
};
device.mojom.UsbDevice_Open_Params = class {
  constructor() {
  }
};
device.mojom.UsbDevice_Open_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.UsbOpenDeviceError } */
    this.error;
  }
};
device.mojom.UsbDevice_Close_Params = class {
  constructor() {
  }
};
device.mojom.UsbDevice_Close_ResponseParams = class {
  constructor() {
  }
};
device.mojom.UsbDevice_SetConfiguration_Params = class {
  constructor() {
    /** @type { !number } */
    this.value;
  }
};
device.mojom.UsbDevice_SetConfiguration_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_ClaimInterface_Params = class {
  constructor() {
    /** @type { !number } */
    this.interfaceNumber;
  }
};
device.mojom.UsbDevice_ClaimInterface_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_ReleaseInterface_Params = class {
  constructor() {
    /** @type { !number } */
    this.interfaceNumber;
  }
};
device.mojom.UsbDevice_ReleaseInterface_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_SetInterfaceAlternateSetting_Params = class {
  constructor() {
    /** @type { !number } */
    this.interfaceNumber;
    /** @type { !number } */
    this.alternateSetting;
  }
};
device.mojom.UsbDevice_SetInterfaceAlternateSetting_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_Reset_Params = class {
  constructor() {
  }
};
device.mojom.UsbDevice_Reset_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_ClearHalt_Params = class {
  constructor() {
    /** @type { !number } */
    this.endpoint;
  }
};
device.mojom.UsbDevice_ClearHalt_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
device.mojom.UsbDevice_ControlTransferIn_Params = class {
  constructor() {
    /** @type { !device.mojom.UsbControlTransferParams } */
    this.params;
    /** @type { !number } */
    this.length;
    /** @type { !number } */
    this.timeout;
  }
};
device.mojom.UsbDevice_ControlTransferIn_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.UsbTransferStatus } */
    this.status;
    /** @type { !Array<number> } */
    this.data;
  }
};
device.mojom.UsbDevice_ControlTransferOut_Params = class {
  constructor() {
    /** @type { !device.mojom.UsbControlTransferParams } */
    this.params;
    /** @type { !Array<number> } */
    this.data;
    /** @type { !number } */
    this.timeout;
  }
};
device.mojom.UsbDevice_ControlTransferOut_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.UsbTransferStatus } */
    this.status;
  }
};
device.mojom.UsbDevice_GenericTransferIn_Params = class {
  constructor() {
    /** @type { !number } */
    this.endpointNumber;
    /** @type { !number } */
    this.length;
    /** @type { !number } */
    this.timeout;
  }
};
device.mojom.UsbDevice_GenericTransferIn_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.UsbTransferStatus } */
    this.status;
    /** @type { !Array<number> } */
    this.data;
  }
};
device.mojom.UsbDevice_GenericTransferOut_Params = class {
  constructor() {
    /** @type { !number } */
    this.endpointNumber;
    /** @type { !number } */
    this.timeout;
    /** @type { !Array<number> } */
    this.data;
  }
};
device.mojom.UsbDevice_GenericTransferOut_ResponseParams = class {
  constructor() {
    /** @type { !device.mojom.UsbTransferStatus } */
    this.status;
  }
};
device.mojom.UsbDevice_IsochronousTransferIn_Params = class {
  constructor() {
    /** @type { !number } */
    this.endpointNumber;
    /** @type { !number } */
    this.timeout;
    /** @type { !Array<number> } */
    this.packetLengths;
  }
};
device.mojom.UsbDevice_IsochronousTransferIn_ResponseParams = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
    /** @type { !Array<device.mojom.UsbIsochronousPacket> } */
    this.packets;
  }
};
device.mojom.UsbDevice_IsochronousTransferOut_Params = class {
  constructor() {
    /** @type { !number } */
    this.endpointNumber;
    /** @type { !number } */
    this.timeout;
    /** @type { !Array<number> } */
    this.data;
    /** @type { !Array<number> } */
    this.packetLengths;
  }
};
device.mojom.UsbDevice_IsochronousTransferOut_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.UsbIsochronousPacket> } */
    this.packets;
  }
};
