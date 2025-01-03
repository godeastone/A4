// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.SharedWorkerConnectorPtr = class {

  /**
   * @param { !content.mojom.SharedWorkerInfo } info
   * @param { !content.mojom.SharedWorkerClientPtr } client
   * @param { !blink.mojom.SharedWorkerCreationContextType } creationContextType
   * @param { !mojo.MojoHandle } messagePort
   */
   connect(info, client, creationContextType, messagePort) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.SharedWorkerConnector;
content.mojom.SharedWorkerConnector_Connect_Params = class {
  constructor() {
    /** @type { !content.mojom.SharedWorkerInfo } */
    this.info;
    /** @type { !content.mojom.SharedWorkerClientPtr } */
    this.client;
    /** @type { !blink.mojom.SharedWorkerCreationContextType } */
    this.creationContextType;
    /** @type { !mojo.MojoHandle } */
    this.messagePort;
  }
};
