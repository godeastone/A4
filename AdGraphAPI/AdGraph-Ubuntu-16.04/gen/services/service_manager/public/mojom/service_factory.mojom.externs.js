// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ServiceFactoryPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } service
   * @param { !string } name
   * @param { !serviceManager.mojom.PIDReceiverPtr } pidReceiver
   */
   createService(service, name, pidReceiver) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.ServiceFactory;
serviceManager.mojom.ServiceFactory_CreateService_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.service;
    /** @type { !string } */
    this.name;
    /** @type { !serviceManager.mojom.PIDReceiverPtr } */
    this.pidReceiver;
  }
};
