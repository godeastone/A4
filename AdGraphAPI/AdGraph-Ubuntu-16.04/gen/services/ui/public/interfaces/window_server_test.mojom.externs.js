// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowServerTestPtr = class {

  /**
   * @param { !string } clientName
   * @return {Promise}
   */
   ensureClientHasDrawnWindow(clientName) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowServerTest;
ui.mojom.WindowServerTest_EnsureClientHasDrawnWindow_Params = class {
  constructor() {
    /** @type { !string } */
    this.clientName;
  }
};
ui.mojom.WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.success;
  }
};
