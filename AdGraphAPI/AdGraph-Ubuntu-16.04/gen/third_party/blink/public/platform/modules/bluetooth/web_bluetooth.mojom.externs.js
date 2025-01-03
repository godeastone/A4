// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.WebBluetoothServicePtr = class {

  /**
   * @param { !blink.mojom.WebBluetoothRequestDeviceOptions } options
   * @return {Promise}
   */
   requestDevice(options) {}
  /**
   * @param { !blink.mojom.WebBluetoothDeviceId } deviceId
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @return {Promise}
   */
   remoteServerConnect(deviceId, client) {}
  /**
   * @param { !blink.mojom.WebBluetoothDeviceId } deviceId
   */
   remoteServerDisconnect(deviceId) {}
  /**
   * @param { !blink.mojom.WebBluetoothDeviceId } deviceId
   * @param { !blink.mojom.WebBluetoothGATTQueryQuantity } quantity
   * @param { bluetooth.mojom.UUID } servicesUuid
   * @return {Promise}
   */
   remoteServerGetPrimaryServices(deviceId, quantity, servicesUuid) {}
  /**
   * @param { !string } serviceInstanceId
   * @param { !blink.mojom.WebBluetoothGATTQueryQuantity } quantity
   * @param { bluetooth.mojom.UUID } characteristicsUuid
   * @return {Promise}
   */
   remoteServiceGetCharacteristics(serviceInstanceId, quantity, characteristicsUuid) {}
  /**
   * @param { !string } characteristicInstanceId
   * @return {Promise}
   */
   remoteCharacteristicReadValue(characteristicInstanceId) {}
  /**
   * @param { !string } characteristicInstanceId
   * @param { !Array<number> } value
   * @return {Promise}
   */
   remoteCharacteristicWriteValue(characteristicInstanceId, value) {}
  /**
   * @param { !string } characteristicInstanceId
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @return {Promise}
   */
   remoteCharacteristicStartNotifications(characteristicInstanceId, client) {}
  /**
   * @param { !string } characteristicInstanceId
   * @return {Promise}
   */
   remoteCharacteristicStopNotifications(characteristicInstanceId) {}
  /**
   * @param { !string } characteristicsInstanceId
   * @param { !blink.mojom.WebBluetoothGATTQueryQuantity } quantity
   * @param { bluetooth.mojom.UUID } descriptorUuid
   * @return {Promise}
   */
   remoteCharacteristicGetDescriptors(characteristicsInstanceId, quantity, descriptorUuid) {}
  /**
   * @param { !string } descriptorInstanceId
   * @return {Promise}
   */
   remoteDescriptorReadValue(descriptorInstanceId) {}
  /**
   * @param { !string } descriptorInstanceId
   * @param { !Array<number> } value
   * @return {Promise}
   */
   remoteDescriptorWriteValue(descriptorInstanceId, value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WebBluetoothService;
/** @implements {mojo.InterfacePtr} */
blink.mojom.WebBluetoothServerClientPtr = class {

  /**
   */
   gATTServerDisconnected() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WebBluetoothServerClient;
/** @implements {mojo.InterfacePtr} */
blink.mojom.WebBluetoothCharacteristicClientPtr = class {

  /**
   * @param { !Array<number> } value
   */
   remoteCharacteristicValueChanged(value) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WebBluetoothCharacteristicClient;
blink.mojom.WebBluetoothLeScanFilter = class {
  constructor() {
    /** @type { Array<bluetooth.mojom.UUID> } */
    this.services;
    /** @type { string } */
    this.name;
    /** @type { string } */
    this.namePrefix;
  }
};
blink.mojom.WebBluetoothRequestDeviceOptions = class {
  constructor() {
    /** @type { Array<blink.mojom.WebBluetoothLeScanFilter> } */
    this.filters;
    /** @type { !Array<bluetooth.mojom.UUID> } */
    this.optionalServices;
    /** @type { !boolean } */
    this.acceptAllDevices;
  }
};
blink.mojom.WebBluetoothDeviceId = class {
  constructor() {
    /** @type { !string } */
    this.deviceId;
  }
};
blink.mojom.WebBluetoothDevice = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothDeviceId } */
    this.id;
    /** @type { string } */
    this.name;
  }
};
blink.mojom.WebBluetoothRemoteGATTService = class {
  constructor() {
    /** @type { !string } */
    this.instanceId;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
  }
};
blink.mojom.WebBluetoothRemoteGATTCharacteristic = class {
  constructor() {
    /** @type { !string } */
    this.instanceId;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
    /** @type { !number } */
    this.properties;
  }
};
blink.mojom.WebBluetoothRemoteGATTDescriptor = class {
  constructor() {
    /** @type { !string } */
    this.instanceId;
    /** @type { !bluetooth.mojom.UUID } */
    this.uuid;
  }
};
blink.mojom.WebBluetoothService_RequestDevice_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothRequestDeviceOptions } */
    this.options;
  }
};
blink.mojom.WebBluetoothService_RequestDevice_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { blink.mojom.WebBluetoothDevice } */
    this.device;
  }
};
blink.mojom.WebBluetoothService_RemoteServerConnect_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothDeviceId } */
    this.deviceId;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
blink.mojom.WebBluetoothService_RemoteServerConnect_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
  }
};
blink.mojom.WebBluetoothService_RemoteServerDisconnect_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothDeviceId } */
    this.deviceId;
  }
};
blink.mojom.WebBluetoothService_RemoteServerGetPrimaryServices_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothDeviceId } */
    this.deviceId;
    /** @type { !blink.mojom.WebBluetoothGATTQueryQuantity } */
    this.quantity;
    /** @type { bluetooth.mojom.UUID } */
    this.servicesUuid;
  }
};
blink.mojom.WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { Array<blink.mojom.WebBluetoothRemoteGATTService> } */
    this.services;
  }
};
blink.mojom.WebBluetoothService_RemoteServiceGetCharacteristics_Params = class {
  constructor() {
    /** @type { !string } */
    this.serviceInstanceId;
    /** @type { !blink.mojom.WebBluetoothGATTQueryQuantity } */
    this.quantity;
    /** @type { bluetooth.mojom.UUID } */
    this.characteristicsUuid;
  }
};
blink.mojom.WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { Array<blink.mojom.WebBluetoothRemoteGATTCharacteristic> } */
    this.characteristics;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicReadValue_Params = class {
  constructor() {
    /** @type { !string } */
    this.characteristicInstanceId;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { Array<number> } */
    this.value;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicWriteValue_Params = class {
  constructor() {
    /** @type { !string } */
    this.characteristicInstanceId;
    /** @type { !Array<number> } */
    this.value;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicStartNotifications_Params = class {
  constructor() {
    /** @type { !string } */
    this.characteristicInstanceId;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicStopNotifications_Params = class {
  constructor() {
    /** @type { !string } */
    this.characteristicInstanceId;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicGetDescriptors_Params = class {
  constructor() {
    /** @type { !string } */
    this.characteristicsInstanceId;
    /** @type { !blink.mojom.WebBluetoothGATTQueryQuantity } */
    this.quantity;
    /** @type { bluetooth.mojom.UUID } */
    this.descriptorUuid;
  }
};
blink.mojom.WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { Array<blink.mojom.WebBluetoothRemoteGATTDescriptor> } */
    this.descriptors;
  }
};
blink.mojom.WebBluetoothService_RemoteDescriptorReadValue_Params = class {
  constructor() {
    /** @type { !string } */
    this.descriptorInstanceId;
  }
};
blink.mojom.WebBluetoothService_RemoteDescriptorReadValue_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
    /** @type { Array<number> } */
    this.value;
  }
};
blink.mojom.WebBluetoothService_RemoteDescriptorWriteValue_Params = class {
  constructor() {
    /** @type { !string } */
    this.descriptorInstanceId;
    /** @type { !Array<number> } */
    this.value;
  }
};
blink.mojom.WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.WebBluetoothResult } */
    this.result;
  }
};
blink.mojom.WebBluetoothServerClient_GATTServerDisconnected_Params = class {
  constructor() {
  }
};
blink.mojom.WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params = class {
  constructor() {
    /** @type { !Array<number> } */
    this.value;
  }
};
