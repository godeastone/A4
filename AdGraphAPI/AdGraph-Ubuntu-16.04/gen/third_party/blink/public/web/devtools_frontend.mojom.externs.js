// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.DevToolsFrontendPtr = class {

  /**
   * @param { !string } apiScript
   * @param { !mojo.AssociatedInterfacePtrInfo } host
   */
   setupDevToolsFrontend(apiScript, host) {}
  /**
   * @param { !string } extensionApi
   */
   setupDevToolsExtensionAPI(extensionApi) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DevToolsFrontend;
/** @implements {mojo.InterfacePtr} */
blink.mojom.DevToolsFrontendHostPtr = class {

  /**
   * @param { !string } message
   */
   dispatchEmbedderMessage(message) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DevToolsFrontendHost;
blink.mojom.DevToolsFrontend_SetupDevToolsFrontend_Params = class {
  constructor() {
    /** @type { !string } */
    this.apiScript;
    /** @type { !mojo.AssociatedInterfacePtrInfo } */
    this.host;
  }
};
blink.mojom.DevToolsFrontend_SetupDevToolsExtensionAPI_Params = class {
  constructor() {
    /** @type { !string } */
    this.extensionApi;
  }
};
blink.mojom.DevToolsFrontendHost_DispatchEmbedderMessage_Params = class {
  constructor() {
    /** @type { !string } */
    this.message;
  }
};
