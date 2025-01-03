// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SharedWorkerPtr = class {

  /**
   * @param { !number } connectionId
   * @param { !mojo.MojoHandle } messagePort
   */
   connect(connectionId, messagePort) {}
  /**
   */
   terminate() {}
  /**
   * @param { !mojo.AssociatedInterfaceRequest } devtoolsAgent
   */
   bindDevToolsAgent(devtoolsAgent) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SharedWorker;
content.mojom.SharedWorker_Connect_Params = class {
  constructor() {
    /** @type { !number } */
    this.connectionId;
    /** @type { !mojo.MojoHandle } */
    this.messagePort;
  }
};
content.mojom.SharedWorker_Terminate_Params = class {
  constructor() {
  }
};
content.mojom.SharedWorker_BindDevToolsAgent_Params = class {
  constructor() {
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.devtoolsAgent;
  }
};
