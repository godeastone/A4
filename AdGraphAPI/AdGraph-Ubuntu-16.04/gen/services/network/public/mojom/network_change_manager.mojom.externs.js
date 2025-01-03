// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkChangeManagerClientPtr = class {

  /**
   * @param { !network.mojom.ConnectionType } type
   */
   onInitialConnectionType(type) {}
  /**
   * @param { !network.mojom.ConnectionType } type
   */
   onNetworkChanged(type) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkChangeManagerClient;
/** @implements {mojo.InterfacePtr} */
network.mojom.NetworkChangeManagerPtr = class {

  /**
   * @param { !network.mojom.NetworkChangeManagerClientPtr } clientPtr
   */
   requestNotifications(clientPtr) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
network.mojom.NetworkChangeManager;
network.mojom.NetworkChangeManagerClient_OnInitialConnectionType_Params = class {
  constructor() {
    /** @type { !network.mojom.ConnectionType } */
    this.type;
  }
};
network.mojom.NetworkChangeManagerClient_OnNetworkChanged_Params = class {
  constructor() {
    /** @type { !network.mojom.ConnectionType } */
    this.type;
  }
};
network.mojom.NetworkChangeManager_RequestNotifications_Params = class {
  constructor() {
    /** @type { !network.mojom.NetworkChangeManagerClientPtr } */
    this.clientPtr;
  }
};
