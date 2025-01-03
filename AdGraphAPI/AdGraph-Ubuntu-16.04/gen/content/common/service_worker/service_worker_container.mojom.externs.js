// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerContainerHostPtr = class {

  /**
   * @param { !url.mojom.Url } scriptUrl
   * @param { !blink.mojom.ServiceWorkerRegistrationOptions } options
   * @return {Promise}
   */
   register(scriptUrl, options) {}
  /**
   * @param { !url.mojom.Url } clientUrl
   * @return {Promise}
   */
   getRegistration(clientUrl) {}
  /**
   * @return {Promise}
   */
   getRegistrations() {}
  /**
   * @return {Promise}
   */
   getRegistrationForReady() {}
  /**
   * @param { !mojo.InterfaceRequest } controller
   * @param { !content.mojom.ControllerServiceWorkerPurpose } purpose
   */
   ensureControllerServiceWorker(controller, purpose) {}
  /**
   * @param { !mojo.InterfaceRequest } containerHostForWorker
   */
   cloneForWorker(containerHostForWorker) {}
  /**
   * @return {Promise}
   */
   ping() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerContainerHost;
/** @implements {mojo.InterfacePtr} */
content.mojom.ServiceWorkerContainerPtr = class {

  /**
   * @param { !content.mojom.ControllerServiceWorkerInfo } controllerInfo
   * @param { !Array<blink.mojom.WebFeature> } usedFeatures
   * @param { !boolean } shouldNotifyControllerchange
   */
   setController(controllerInfo, usedFeatures, shouldNotifyControllerchange) {}
  /**
   * @param { !blink.mojom.ServiceWorkerObjectInfo } source
   * @param { !blink.mojom.TransferableMessage } message
   */
   postMessageToClient(source, message) {}
  /**
   * @param { !blink.mojom.WebFeature } feature
   */
   countFeature(feature) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.ServiceWorkerContainer;
content.mojom.ServiceWorkerContainerHost_Register_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.scriptUrl;
    /** @type { !blink.mojom.ServiceWorkerRegistrationOptions } */
    this.options;
  }
};
content.mojom.ServiceWorkerContainerHost_Register_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
    /** @type { blink.mojom.ServiceWorkerRegistrationObjectInfo } */
    this.registration;
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistration_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.clientUrl;
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistration_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
    /** @type { blink.mojom.ServiceWorkerRegistrationObjectInfo } */
    this.registration;
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistrations_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistrations_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
    /** @type { Array<blink.mojom.ServiceWorkerRegistrationObjectInfo> } */
    this.infos;
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistrationForReady_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerContainerHost_GetRegistrationForReady_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.ServiceWorkerRegistrationObjectInfo } */
    this.registration;
  }
};
content.mojom.ServiceWorkerContainerHost_EnsureControllerServiceWorker_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.controller;
    /** @type { !content.mojom.ControllerServiceWorkerPurpose } */
    this.purpose;
  }
};
content.mojom.ServiceWorkerContainerHost_CloneForWorker_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.containerHostForWorker;
  }
};
content.mojom.ServiceWorkerContainerHost_Ping_Params = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerContainerHost_Ping_ResponseParams = class {
  constructor() {
  }
};
content.mojom.ServiceWorkerContainer_SetController_Params = class {
  constructor() {
    /** @type { !content.mojom.ControllerServiceWorkerInfo } */
    this.controllerInfo;
    /** @type { !Array<blink.mojom.WebFeature> } */
    this.usedFeatures;
    /** @type { !boolean } */
    this.shouldNotifyControllerchange;
  }
};
content.mojom.ServiceWorkerContainer_PostMessageToClient_Params = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerObjectInfo } */
    this.source;
    /** @type { !blink.mojom.TransferableMessage } */
    this.message;
  }
};
content.mojom.ServiceWorkerContainer_CountFeature_Params = class {
  constructor() {
    /** @type { !blink.mojom.WebFeature } */
    this.feature;
  }
};
