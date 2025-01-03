// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let iPC = {};
/** @const */
iPC.mojom = {};
/** @implements {mojo.InterfacePtr} */
iPC.mojom.GenericInterfacePtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
iPC.mojom.GenericInterface;
/** @implements {mojo.InterfacePtr} */
iPC.mojom.ChannelPtr = class {

  /**
   * @param { !number } pid
   */
   setPeerPid(pid) {}
  /**
   * @param { !mojoBase.mojom.ReadOnlyBuffer } data
   * @param { Array<mojo.native.SerializedHandle> } handles
   */
   receive(data, handles) {}
  /**
   * @param { !string } name
   * @param { !mojo.AssociatedInterfaceRequest } request
   */
   getAssociatedInterface(name, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
iPC.mojom.Channel;
/** @implements {mojo.InterfacePtr} */
iPC.mojom.ChannelBootstrapPtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
iPC.mojom.ChannelBootstrap;
iPC.mojom.Channel_SetPeerPid_Params = class {
  constructor() {
    /** @type { !number } */
    this.pid;
  }
};
iPC.mojom.Channel_Receive_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.ReadOnlyBuffer } */
    this.data;
    /** @type { Array<mojo.native.SerializedHandle> } */
    this.handles;
  }
};
iPC.mojom.Channel_GetAssociatedInterface_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
  }
};
