// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.InputDeviceManagerClientPtr = class {

  /**
   * @param { !device.mojom.InputDeviceInfo } deviceInfo
   */
   inputDeviceAdded(deviceInfo) {}
  /**
   * @param { !string } id
   */
   inputDeviceRemoved(id) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.InputDeviceManagerClient;
/** @implements {mojo.InterfacePtr} */
device.mojom.InputDeviceManagerPtr = class {

  /**
   * @param { !mojo.AssociatedInterfacePtrInfo } client
   * @return {Promise}
   */
   getDevicesAndSetClient(client) {}
  /**
   * @return {Promise}
   */
   getDevices() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.InputDeviceManager;
device.mojom.InputDeviceInfo = class {
  constructor() {
    /** @type { !string } */
    this.id;
    /** @type { !string } */
    this.name;
    /** @type { !device.mojom.InputDeviceSubsystem } */
    this.subsystem;
    /** @type { !device.mojom.InputDeviceType } */
    this.type;
    /** @type { !boolean } */
    this.isAccelerometer;
    /** @type { !boolean } */
    this.isJoystick;
    /** @type { !boolean } */
    this.isKey;
    /** @type { !boolean } */
    this.isKeyboard;
    /** @type { !boolean } */
    this.isMouse;
    /** @type { !boolean } */
    this.isTablet;
    /** @type { !boolean } */
    this.isTouchpad;
    /** @type { !boolean } */
    this.isTouchscreen;
  }
};
device.mojom.InputDeviceManagerClient_InputDeviceAdded_Params = class {
  constructor() {
    /** @type { !device.mojom.InputDeviceInfo } */
    this.deviceInfo;
  }
};
device.mojom.InputDeviceManagerClient_InputDeviceRemoved_Params = class {
  constructor() {
    /** @type { !string } */
    this.id;
  }
};
device.mojom.InputDeviceManager_GetDevicesAndSetClient_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.client;
  }
};
device.mojom.InputDeviceManager_GetDevicesAndSetClient_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.InputDeviceInfo> } */
    this.devices;
  }
};
device.mojom.InputDeviceManager_GetDevices_Params = class {
  constructor() {
  }
};
device.mojom.InputDeviceManager_GetDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<device.mojom.InputDeviceInfo> } */
    this.devices;
  }
};
