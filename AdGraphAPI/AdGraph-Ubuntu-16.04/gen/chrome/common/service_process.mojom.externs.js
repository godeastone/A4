// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let chrome = {};
/** @const */
chrome.mojom = {};
/** @implements {mojo.InterfacePtr} */
chrome.mojom.ServiceProcessPtr = class {

  /**
   * @return {Promise}
   */
   hello() {}
  /**
   * @return {Promise}
   */
   getHistograms() {}
  /**
   */
   updateAvailable() {}
  /**
   */
   shutDown() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
chrome.mojom.ServiceProcess;
chrome.mojom.ServiceProcess_Hello_Params = class {
  constructor() {
  }
};
chrome.mojom.ServiceProcess_Hello_ResponseParams = class {
  constructor() {
  }
};
chrome.mojom.ServiceProcess_GetHistograms_Params = class {
  constructor() {
  }
};
chrome.mojom.ServiceProcess_GetHistograms_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.histograms;
  }
};
chrome.mojom.ServiceProcess_UpdateAvailable_Params = class {
  constructor() {
  }
};
chrome.mojom.ServiceProcess_ShutDown_Params = class {
  constructor() {
  }
};
