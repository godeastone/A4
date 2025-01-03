// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerHostPtr = class {

  /**
   * @param { !url.mojom.Url } url
   * @param { !Array<number> } data
   */
   setCachedMetadata(url, data) {}
  /**
   * @param { !url.mojom.Url } url
   */
   clearCachedMetadata(url) {}
  /**
   * @param { !blink.mojom.ServiceWorkerClientQueryOptions } options
   * @return {Promise}
   */
   getClients(options) {}
  /**
   * @param { !string } clientUuid
   * @return {Promise}
   */
   getClient(clientUuid) {}
  /**
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   openNewTab(url) {}
  /**
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   openPaymentHandlerWindow(url) {}
  /**
   * @param { !string } clientUuid
   * @param { !blink.mojom.TransferableMessage } message
   */
   postMessageToClient(clientUuid, message) {}
  /**
   * @param { !string } clientUuid
   * @return {Promise}
   */
   focusClient(clientUuid) {}
  /**
   * @param { !string } clientUuid
   * @param { !url.mojom.Url } url
   * @return {Promise}
   */
   navigateClient(clientUuid, url) {}
  /**
   * @return {Promise}
   */
   skipWaiting() {}
  /**
   * @return {Promise}
   */
   claimClients() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerHost;
blink.mojom.ServiceWorkerHost_SetCachedMetadata_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
    /** @type { !Array<number> } */
    this.data;
  }
};
blink.mojom.ServiceWorkerHost_ClearCachedMetadata_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ServiceWorkerHost_GetClients_Params = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerClientQueryOptions } */
    this.options;
  }
};
blink.mojom.ServiceWorkerHost_GetClients_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.ServiceWorkerClientInfo> } */
    this.clients;
  }
};
blink.mojom.ServiceWorkerHost_GetClient_Params = class {
  constructor() {
    /** @type { !string } */
    this.clientUuid;
  }
};
blink.mojom.ServiceWorkerHost_GetClient_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.client;
  }
};
blink.mojom.ServiceWorkerHost_OpenNewTab_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ServiceWorkerHost_OpenNewTab_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.client;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerHost_OpenPaymentHandlerWindow_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.client;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerHost_PostMessageToClient_Params = class {
  constructor() {
    /** @type { !string } */
    this.clientUuid;
    /** @type { !blink.mojom.TransferableMessage } */
    this.message;
  }
};
blink.mojom.ServiceWorkerHost_FocusClient_Params = class {
  constructor() {
    /** @type { !string } */
    this.clientUuid;
  }
};
blink.mojom.ServiceWorkerHost_FocusClient_ResponseParams = class {
  constructor() {
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.client;
  }
};
blink.mojom.ServiceWorkerHost_NavigateClient_Params = class {
  constructor() {
    /** @type { !string } */
    this.clientUuid;
    /** @type { !url.mojom.Url } */
    this.url;
  }
};
blink.mojom.ServiceWorkerHost_NavigateClient_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
    /** @type { blink.mojom.ServiceWorkerClientInfo } */
    this.client;
    /** @type { string } */
    this.errorMsg;
  }
};
blink.mojom.ServiceWorkerHost_SkipWaiting_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerHost_SkipWaiting_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
blink.mojom.ServiceWorkerHost_ClaimClients_Params = class {
  constructor() {
  }
};
blink.mojom.ServiceWorkerHost_ClaimClients_ResponseParams = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerErrorType } */
    this.error;
    /** @type { string } */
    this.errorMsg;
  }
};
