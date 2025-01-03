// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ControllerServiceWorkerPtr = class {

  /**
   * @param { !content.mojom.DispatchFetchEventParams } params
   * @param { !content.mojom.ServiceWorkerFetchResponseCallbackPtr } responseCallback
   * @return {Promise}
   */
   dispatchFetchEvent(params, responseCallback) {}
  /**
   * @param { !mojo.InterfaceRequest } controller
   */
   clone(controller) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ControllerServiceWorker;
content.mojom.ControllerServiceWorkerInfo = class {
  constructor() {
    /** @type { content.mojom.ControllerServiceWorkerPtr } */
    this.endpoint;
    /** @type { !string } */
    this.clientId;
    /** @type { blink.mojom.ServiceWorkerObjectInfo } */
    this.objectInfo;
  }
};
content.mojom.ControllerServiceWorker_DispatchFetchEvent_Params = class {
  constructor() {
    /** @type { !content.mojom.DispatchFetchEventParams } */
    this.params;
    /** @type { !content.mojom.ServiceWorkerFetchResponseCallbackPtr } */
    this.responseCallback;
  }
};
content.mojom.ControllerServiceWorker_DispatchFetchEvent_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerEventStatus } */
    this.status;
    /** @type { !mojoBase.mojom.Time } */
    this.dispatchEventTime;
  }
};
content.mojom.ControllerServiceWorker_Clone_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.controller;
  }
};
