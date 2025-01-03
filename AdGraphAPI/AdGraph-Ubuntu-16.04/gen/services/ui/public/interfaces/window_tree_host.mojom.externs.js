// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
/** @implements {mojo.InterfacePtr} */
ui.mojom.WindowTreeHostPtr = class {

  /**
   * @param { !gfx.mojom.Size } size
   */
   setSize(size) {}
  /**
   * @param { !string } title
   */
   setTitle(title) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
ui.mojom.WindowTreeHost;
ui.mojom.WindowTreeHost_SetSize_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.size;
  }
};
ui.mojom.WindowTreeHost_SetTitle_Params = class {
  constructor() {
    /** @type { !string } */
    this.title;
  }
};
