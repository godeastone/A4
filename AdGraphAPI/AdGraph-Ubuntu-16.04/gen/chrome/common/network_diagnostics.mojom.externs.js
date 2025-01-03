// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.NetworkDiagnosticsPtr = class {

  /**
   * @param { !url.mojom.Url } failedUrl
   */
   runNetworkDiagnostics(failedUrl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.NetworkDiagnostics;
/** @implements {mojo.InterfacePtr} */
chrome.mojom.NetworkDiagnosticsClientPtr = class {

  /**
   * @param { !boolean } canShow
   */
   setCanShowNetworkDiagnosticsDialog(canShow) {}
  /**
   * @param { !number } status
   */
   dNSProbeStatus(status) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.NetworkDiagnosticsClient;
chrome.mojom.NetworkDiagnostics_RunNetworkDiagnostics_Params = class {
  constructor() {
    /** @type { !url.mojom.Url } */
    this.failedUrl;
  }
};
chrome.mojom.NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.canShow;
  }
};
chrome.mojom.NetworkDiagnosticsClient_DNSProbeStatus_Params = class {
  constructor() {
    /** @type { !number } */
    this.status;
  }
};
