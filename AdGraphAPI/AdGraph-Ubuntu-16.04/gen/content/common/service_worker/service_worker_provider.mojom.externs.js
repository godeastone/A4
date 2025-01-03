// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerWorkerClientPtr = class {

  /**
   * @param { !number } controllerVersionId
   */
   setControllerServiceWorker(controllerVersionId) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerWorkerClient;
content.mojom.ServiceWorkerProviderInfoForSharedWorker = class {
  constructor() {
    /** @type { !number } */
    this.providerId;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.hostPtrInfo;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.clientRequest;
  }
};
content.mojom.ServiceWorkerProviderInfoForStartWorker = class {
  constructor() {
    /** @type { !number } */
    this.providerId;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.hostPtrInfo;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.clientRequest;
    /** @type { mojo.AssociatedInterfacePtrInfo } */
    this.scriptLoaderFactoryPtrInfo;
    /** @type { !serviceManager.mojom.InterfaceProviderPtr } */
    this.interfaceProvider;
  }
};
content.mojom.ServiceWorkerProviderHostInfo = class {
  constructor() {
    /** @type { !number } */
    this.providerId;
    /** @type { !number } */
    this.routeId;
    /** @type { !blink.mojom.ServiceWorkerProviderType } */
    this.type;
    /** @type { !boolean } */
    this.isParentFrameSecure;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.hostRequest;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.clientPtrInfo;
  }
};
content.mojom.ServiceWorkerWorkerClient_SetControllerServiceWorker_Params = class {
  constructor() {
    /** @type { !number } */
    this.controllerVersionId;
  }
};
