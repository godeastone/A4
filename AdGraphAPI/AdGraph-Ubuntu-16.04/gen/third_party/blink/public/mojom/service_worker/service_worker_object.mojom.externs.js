// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerObjectHostPtr = class {

  /**
   * @param { !blink.mojom.TransferableMessage } message
   */
   postMessageToServiceWorker(message) {}
  /**
   * @return {Promise}
   */
   terminateForTesting() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerObjectHost;
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerObjectPtr = class {

  /**
   * @param { !blink.mojom.ServiceWorkerState } state
   */
   stateChanged(state) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerObject;
blink.mojom.ServiceWorkerObjectInfo = class {
  constructor() {
    /** @type { !number } */
    this.versionId;
    /** @type { !blink.mojom.ServiceWorkerState } */
    this.state;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.hostPtrInfo;
  }
};
blink.mojom.ServiceWorkerObjectHost_PostMessageToServiceWorker_Params = class {
  constructor() {
    /** @type { !blink.mojom.TransferableMessage } */
    this.message;
  }
};
blink.mojom.ServiceWorkerObjectHost_TerminateForTesting_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerObjectHost_TerminateForTesting_ResponseParams = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerObject_StateChanged_Params = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerState } */
    this.state;
  }
};
