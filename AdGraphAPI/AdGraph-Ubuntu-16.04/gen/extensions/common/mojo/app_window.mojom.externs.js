// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let extensions = {};
/** @const */
extensions.mojom = {};
/** @implements {mojo.InterfacePtr} */
extensions.mojom.AppWindowPtr = class {

  /**
   * @param { !boolean } deemphasized
   */
   setVisuallyDeemphasized(deemphasized) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
extensions.mojom.AppWindow;
extensions.mojom.AppWindow_SetVisuallyDeemphasized_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.deemphasized;
  }
};
