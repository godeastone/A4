// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerInstalledScriptsManagerHostPtr = class {

  /**
   * @param { !url.mojom.Url } scriptUrl
   */
   requestInstalledScript(scriptUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerInstalledScriptsManagerHost;
/** @implements {mojo.InterfacePtr} */
blink.mojom.ServiceWorkerInstalledScriptsManagerPtr = class {

  /**
   * @param { !blink.mojom.ServiceWorkerScriptInfo } scriptInfo
   */
   transferInstalledScript(scriptInfo) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.ServiceWorkerInstalledScriptsManager;
blink.mojom.ServiceWorkerInstalledScriptsInfo = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.managerRequest;
    /** @type { !blink.mojom.ServiceWorkerInstalledScriptsManagerHostPtr } */
    this.managerHostPtr;
    /** @type { !Array<url.mojom.Url> } */
    this.installedUrls;
  }
};
blink.mojom.ServiceWorkerScriptInfo = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.scriptUrl;
    /** @type { !string } */
    this.encoding;
    /** @type { !Map<string, string> } */
    this.headers;
    /** @type { !mojo.MojoHandle } */
    this.body;
    /** @type { mojo.MojoHandle } */
    this.metaData;
    /** @type { !number } */
    this.bodySize;
    /** @type { !number } */
    this.metaDataSize;
  }
};
blink.mojom.ServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.scriptUrl;
  }
};
blink.mojom.ServiceWorkerInstalledScriptsManager_TransferInstalledScript_Params = class {
  constructor() {
    /** @type { !blink.mojom.ServiceWorkerScriptInfo } */
    this.scriptInfo;
  }
};
