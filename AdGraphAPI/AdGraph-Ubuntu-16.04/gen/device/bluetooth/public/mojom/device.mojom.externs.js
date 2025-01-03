// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let bluetooth = {};
/** @const */
bluetooth.mojom = {};
/** @implements {mojo.InterfacePtr} */
bluetooth.mojom.DevicePtr = class {

  /**
   */
   disconnect() {}
  /**
   * @return {Promise}
   */
   getInfo() {}
  /**
   * @return {Promise}
   */
   getServices() {}
  /**
   * @param { !string } serviceId
   * @return {Promise}
   */
   getCharacteristics(serviceId) {}
  /**
   * @param { !string } serviceId
   * @param { !string } characteristicId
   * @return {Promise}
   */
   readValueForCharacteristic(serviceId, characteristicId) {}
  /**
   * @param { !string } serviceId
   * @param { !string } characteristicId
   * @param { !Array<number> } value
   * @return {Promise}
   */
   writeValueForCharacteristic(serviceId, characteristicId, value) {}
  /**
   * @param { !string } serviceId
   * @param { !string } characteristicId
   * @return {Promise}
   */
   getDescriptors(serviceId, characteristicId) {}
  /**
   * @param { !string } serviceId
   * @param { !string } characteristicId
   * @param { !string } descriptorId
   * @return {Promise}
   */
   readValueForDescriptor(serviceId, characteristicId, descriptorId) {}
  /**
   * @param { !string } serviceId
   * @param { !string } characteristicId
   * @param { !string } descriptorId
   * @param { !Array<number> } value
   * @return {Promise}
   */
   writeValueForDescriptor(serviceId, characteristicId, descriptorId, value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
bluetooth.mojom.Device;
bluetooth.mojom.RSSIWrapper = class {
  constructor() {
    /** @type { !number } */
    this.value;
  }
};
bluetooth.mojom.DeviceInfo = class {
  constructor() {
    /** @type { string } */
    this.name;
    /** @type { !string } */
    this.nameForDisplay;
    /** @type { !string } */
    this.address;
    /** @type { !boolean } */
    this.isGattConnected;
    /** @type { bluetooth.mojom.RSSIWrapper } */
    this.rssi;
  }
};
bluetooth.mojom.ServiceInfo = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
    /** @type { !boolean } */
    this.isPrimary;
  }
};
bluetooth.mojom.CharacteristicInfo = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
    /** @type { !number } */
    this.properties;
    /** @type { !Array<number> } */
    this.lastKnownValue;
  }
};
bluetooth.mojom.DescriptorInfo = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
    /** @type { !Array<number> } */
    this.lastKnownValue;
  }
};
bluetooth.mojom.Device_Disconnect_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Device_GetInfo_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Device_GetInfo_ResponseParams = class {
  constructor() {
    /** @type { bluetooth.mojom.DeviceInfo } */
    this.info;
  }
};
bluetooth.mojom.Device_GetServices_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Device_GetServices_ResponseParams = class {
  constructor() {
    /** @type { !Array<bluetooth.mojom.ServiceInfo> } */
    this.services;
  }
};
bluetooth.mojom.Device_GetCharacteristics_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
  }
};
bluetooth.mojom.Device_GetCharacteristics_ResponseParams = class {
  constructor() {
    /** @type { Array<bluetooth.mojom.CharacteristicInfo> } */
    this.characteristics;
  }
};
bluetooth.mojom.Device_ReadValueForCharacteristic_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.characteristicId;
  }
};
bluetooth.mojom.Device_ReadValueForCharacteristic_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.GattResult } */
    this.result;
    /** @type { Array<number> } */
    this.value;
  }
};
bluetooth.mojom.Device_WriteValueForCharacteristic_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.characteristicId;
    /** @type { !Array<number> } */
    this.value;
  }
};
bluetooth.mojom.Device_WriteValueForCharacteristic_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.GattResult } */
    this.result;
  }
};
bluetooth.mojom.Device_GetDescriptors_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.characteristicId;
  }
};
bluetooth.mojom.Device_GetDescriptors_ResponseParams = class {
  constructor() {
    /** @type { Array<bluetooth.mojom.DescriptorInfo> } */
    this.descriptors;
  }
};
bluetooth.mojom.Device_ReadValueForDescriptor_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.characteristicId;
    /** @type { !string } */
    this.descriptorId;
  }
};
bluetooth.mojom.Device_ReadValueForDescriptor_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.GattResult } */
    this.result;
    /** @type { Array<number> } */
    this.value;
  }
};
bluetooth.mojom.Device_WriteValueForDescriptor_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceId;
    /** @type { !string } */
    this.characteristicId;
    /** @type { !string } */
    this.descriptorId;
    /** @type { !Array<number> } */
    this.value;
  }
};
bluetooth.mojom.Device_WriteValueForDescriptor_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.GattResult } */
    this.result;
  }
};
