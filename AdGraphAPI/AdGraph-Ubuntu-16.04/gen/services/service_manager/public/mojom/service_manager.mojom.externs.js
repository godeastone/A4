// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ServiceManagerListenerPtr = class {

  /**
   * @param { !Array<serviceManager.mojom.RunningServiceInfo> } runningServices
   */
   onInit(runningServices) {}
  /**
   * @param { !serviceManager.mojom.RunningServiceInfo } service
   */
   onServiceCreated(service) {}
  /**
   * @param { !serviceManager.mojom.Identity } identity
   * @param { !number } pid
   */
   onServiceStarted(identity, pid) {}
  /**
   * @param { !serviceManager.mojom.Identity } identity
   * @param { !number } pid
   */
   onServicePIDReceived(identity, pid) {}
  /**
   * @param { !serviceManager.mojom.Identity } identity
   */
   onServiceFailedToStart(identity) {}
  /**
   * @param { !serviceManager.mojom.Identity } identity
   */
   onServiceStopped(identity) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.ServiceManagerListener;
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ServiceManagerPtr = class {

  /**
   * @param { !serviceManager.mojom.ServiceManagerListenerPtr } listener
   */
   addListener(listener) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.ServiceManager;
serviceManager.mojom.RunningServiceInfo = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !number } */
    this.pid;
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.ServiceManagerListener_OnInit_Params = class {
  constructor() {
    /** @type { !Array<serviceManager.mojom.RunningServiceInfo> } */
    this.runningServices;
  }
};
serviceManager.mojom.ServiceManagerListener_OnServiceCreated_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.RunningServiceInfo } */
    this.service;
  }
};
serviceManager.mojom.ServiceManagerListener_OnServiceStarted_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
    /** @type { !number } */
    this.pid;
  }
};
serviceManager.mojom.ServiceManagerListener_OnServicePIDReceived_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
    /** @type { !number } */
    this.pid;
  }
};
serviceManager.mojom.ServiceManagerListener_OnServiceFailedToStart_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.ServiceManagerListener_OnServiceStopped_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.Identity } */
    this.identity;
  }
};
serviceManager.mojom.ServiceManager_AddListener_Params = class {
  constructor() {
    /** @type { !serviceManager.mojom.ServiceManagerListenerPtr } */
    this.listener;
  }
};
