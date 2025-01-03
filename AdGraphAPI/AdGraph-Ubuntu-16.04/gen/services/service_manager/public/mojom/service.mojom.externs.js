// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ServicePtr = class {

  /**
   * @param { !serviceManager.mojom.Identity } identity
   * @return {Promise}
   */
   onStart(identity) {}
  /**
   * @param { !serviceManager.mojom.BindSourceInfo } source
   * @param { !string } interfaceName
   * @param { !mojo.MojoHandle } interfacePipe
   * @return {Promise}
   */
   onBindInterface(source, interfaceName, interfacePipe) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.Service;
serviceManager.mojom.BindSourceInfo = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
    /** @type { !serviceManager.mojom.CapabilitySet } */
    this.requiredCapabilities;
  }
};
serviceManager.mojom.Service_OnStart_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.Service_OnStart_ResponseParams = class {
  constructor() {
    /** @type { mojo.InterfaceRequest } */
    this.connectorRequest;
    /** @type { mojo.AssociatedInterfaceRequest } */
    this.controlRequest;
  }
};
serviceManager.mojom.Service_OnBindInterface_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.BindSourceInfo } */
    this.source;
    /** @type { !string } */
    this.interfaceName;
    /** @type { !mojo.MojoHandle } */
    this.interfacePipe;
  }
};
serviceManager.mojom.Service_OnBindInterface_ResponseParams = class {
  constructor() {
  }
};
