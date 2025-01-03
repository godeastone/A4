// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.PIDReceiverPtr = class {

  /**
   * @param { !number } pid
   */
   setPID(pid) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.PIDReceiver;
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ConnectorPtr = class {

  /**
   * @param { !serviceManager.mojom.Identity } target
   * @param { !string } interfaceName
   * @param { !mojo.MojoHandle } interfacePipe
   * @return {Promise}
   */
   bindInterface(target, interfaceName, interfacePipe) {}
  /**
   * @param { !serviceManager.mojom.Identity } target
   * @return {Promise}
   */
   queryService(target) {}
  /**
   * @param { !serviceManager.mojom.Identity } target
   * @return {Promise}
   */
   startService(target) {}
  /**
   * @param { !serviceManager.mojom.Identity } target
   * @param { !mojo.MojoHandle } service
   * @param { !mojo.InterfaceRequest } pidReceiverRequest
   * @return {Promise}
   */
   startServiceWithProcess(target, service, pidReceiverRequest) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   clone(request) {}
  /**
   * @param { !string } spec
   * @param { !serviceManager.mojom.Identity } source
   * @param { !mojo.InterfaceRequest } sourceRequest
   * @param { !serviceManager.mojom.InterfaceProviderPtr } target
   */
   filterInterfaces(spec, source, sourceRequest, target) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.Connector;
serviceManager.mojom.Identity = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.userId;
    /** @type { !string } */
    this.instance;
  }
};
serviceManager.mojom.PIDReceiver_SetPID_Params = class {
  constructor() {
    /** @type { !number } */
    this.pid;
  }
};
serviceManager.mojom.Connector_BindInterface_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.target;
    /** @type { !string } */
    this.interfaceName;
    /** @type { !mojo.MojoHandle } */
    this.interfacePipe;
  }
};
serviceManager.mojom.Connector_BindInterface_ResponseParams = class {
  constructor() {
    /** @type { !serviceManager.mojom.ConnectResult } */
    this.result;
    /** @type { !serviceManager.mojom.Identity } */
    this.userId;
  }
};
serviceManager.mojom.Connector_QueryService_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.target;
  }
};
serviceManager.mojom.Connector_QueryService_ResponseParams = class {
  constructor() {
    /** @type { !serviceManager.mojom.ConnectResult } */
    this.result;
    /** @type { !string } */
    this.sandboxType;
  }
};
serviceManager.mojom.Connector_StartService_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.target;
  }
};
serviceManager.mojom.Connector_StartService_ResponseParams = class {
  constructor() {
    /** @type { !serviceManager.mojom.ConnectResult } */
    this.result;
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.Connector_StartServiceWithProcess_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.target;
    /** @type { !mojo.MojoHandle } */
    this.service;
    /** @type { !mojo.InterfaceRequest } */
    this.pidReceiverRequest;
  }
};
serviceManager.mojom.Connector_StartServiceWithProcess_ResponseParams = class {
  constructor() {
    /** @type { !serviceManager.mojom.ConnectResult } */
    this.result;
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.Connector_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
serviceManager.mojom.Connector_FilterInterfaces_Params = class {
  constructor() {
    /** @type { !string } */
    this.spec;
    /** @type { !serviceManager.mojom.Identity } */
    this.source;
    /** @type { !mojo.InterfaceRequest } */
    this.sourceRequest;
    /** @type { !serviceManager.mojom.InterfaceProviderPtr } */
    this.target;
  }
};
