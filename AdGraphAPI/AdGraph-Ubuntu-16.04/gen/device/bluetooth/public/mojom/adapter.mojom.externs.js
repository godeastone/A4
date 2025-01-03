// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let bluetooth = {};
/** @const */
bluetooth.mojom = {};
/** @implements {mojo.InterfacePtr} */
bluetooth.mojom.DiscoverySessionPtr = class {

  /**
   * @return {Promise}
   */
   isActive() {}
  /**
   * @return {Promise}
   */
   stop() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
bluetooth.mojom.DiscoverySession;
/** @implements {mojo.InterfacePtr} */
bluetooth.mojom.AdapterPtr = class {

  /**
   * @param { !string } address
   * @return {Promise}
   */
   connectToDevice(address) {}
  /**
   * @return {Promise}
   */
   getDevices() {}
  /**
   * @return {Promise}
   */
   getInfo() {}
  /**
   * @param { !bluetooth.mojom.AdapterClientPtr } client
   */
   setClient(client) {}
  /**
   * @return {Promise}
   */
   startDiscoverySession() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
bluetooth.mojom.Adapter;
/** @implements {mojo.InterfacePtr} */
bluetooth.mojom.AdapterClientPtr = class {

  /**
   * @param { !boolean } present
   */
   presentChanged(present) {}
  /**
   * @param { !boolean } powered
   */
   poweredChanged(powered) {}
  /**
   * @param { !boolean } discoverable
   */
   discoverableChanged(discoverable) {}
  /**
   * @param { !boolean } discovering
   */
   discoveringChanged(discovering) {}
  /**
   * @param { !bluetooth.mojom.DeviceInfo } device
   */
   deviceAdded(device) {}
  /**
   * @param { !bluetooth.mojom.DeviceInfo } device
   */
   deviceChanged(device) {}
  /**
   * @param { !bluetooth.mojom.DeviceInfo } device
   */
   deviceRemoved(device) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
bluetooth.mojom.AdapterClient;
bluetooth.mojom.AdapterInfo = class {
  constructor() {
    /** @type { !string } */
    this.address;
    /** @type { !string } */
    this.name;
    /** @type { !boolean } */
    this.initialized;
    /** @type { !boolean } */
    this.present;
    /** @type { !boolean } */
    this.powered;
    /** @type { !boolean } */
    this.discoverable;
    /** @type { !boolean } */
    this.discovering;
  }
};
bluetooth.mojom.DiscoverySession_IsActive_Params = class {
  constructor() {
  }
};
bluetooth.mojom.DiscoverySession_IsActive_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.active;
  }
};
bluetooth.mojom.DiscoverySession_Stop_Params = class {
  constructor() {
  }
};
bluetooth.mojom.DiscoverySession_Stop_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
bluetooth.mojom.Adapter_ConnectToDevice_Params = class {
  constructor() {
    /** @type { !string } */
    this.address;
  }
};
bluetooth.mojom.Adapter_ConnectToDevice_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.ConnectResult } */
    this.result;
    /** @type { bluetooth.mojom.DevicePtr } */
    this.device;
  }
};
bluetooth.mojom.Adapter_GetDevices_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Adapter_GetDevices_ResponseParams = class {
  constructor() {
    /** @type { !Array<bluetooth.mojom.DeviceInfo> } */
    this.devices;
  }
};
bluetooth.mojom.Adapter_GetInfo_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Adapter_GetInfo_ResponseParams = class {
  constructor() {
    /** @type { !bluetooth.mojom.AdapterInfo } */
    this.info;
  }
};
bluetooth.mojom.Adapter_SetClient_Params = class {
  constructor() {
    /** @type { !bluetooth.mojom.AdapterClientPtr } */
    this.client;
  }
};
bluetooth.mojom.Adapter_StartDiscoverySession_Params = class {
  constructor() {
  }
};
bluetooth.mojom.Adapter_StartDiscoverySession_ResponseParams = class {
  constructor() {
    /** @type { bluetooth.mojom.DiscoverySessionPtr } */
    this.session;
  }
};
bluetooth.mojom.AdapterClient_PresentChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.present;
  }
};
bluetooth.mojom.AdapterClient_PoweredChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.powered;
  }
};
bluetooth.mojom.AdapterClient_DiscoverableChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.discoverable;
  }
};
bluetooth.mojom.AdapterClient_DiscoveringChanged_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.discovering;
  }
};
bluetooth.mojom.AdapterClient_DeviceAdded_Params = class {
  constructor() {
    /** @type { !bluetooth.mojom.DeviceInfo } */
    this.device;
  }
};
bluetooth.mojom.AdapterClient_DeviceChanged_Params = class {
  constructor() {
    /** @type { !bluetooth.mojom.DeviceInfo } */
    this.device;
  }
};
bluetooth.mojom.AdapterClient_DeviceRemoved_Params = class {
  constructor() {
    /** @type { !bluetooth.mojom.DeviceInfo } */
    this.device;
  }
};
