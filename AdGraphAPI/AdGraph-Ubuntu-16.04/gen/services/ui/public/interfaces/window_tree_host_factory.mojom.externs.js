// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowTreeHostFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } windowTreeHost
   * @param { !ui.mojom.WindowTreeClientPtr } treeClient
   */
   createWindowTreeHost(windowTreeHost, treeClient) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowTreeHostFactory;
ui.mojom.WindowTreeHostFactory_CreateWindowTreeHost_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.windowTreeHost;
    /** @type { !ui.mojom.WindowTreeClientPtr } */
    this.treeClient;
  }
};
