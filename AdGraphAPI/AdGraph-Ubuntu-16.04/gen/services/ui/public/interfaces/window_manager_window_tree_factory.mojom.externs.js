// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowManagerWindowTreeFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } treeRequest
   * @param { !ui.mojom.WindowTreeClientPtr } client
   * @param { !boolean } automaticallyCreateDisplayRoots
   */
   createWindowTree(treeRequest, client, automaticallyCreateDisplayRoots) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowManagerWindowTreeFactory;
ui.mojom.WindowManagerWindowTreeFactory_CreateWindowTree_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.treeRequest;
    /** @type { !ui.mojom.WindowTreeClientPtr } */
    this.client;
    /** @type { !boolean } */
    this.automaticallyCreateDisplayRoots;
  }
};
