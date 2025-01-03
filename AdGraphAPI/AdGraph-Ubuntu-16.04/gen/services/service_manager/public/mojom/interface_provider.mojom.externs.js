// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.InterfaceProviderPtr = class {

  /**
   * @param { !string } interfaceName
   * @param { !mojo.MojoHandle } pipe
   */
   getInterface(interfaceName, pipe) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.InterfaceProvider;
serviceManager.mojom.InterfaceProvider_GetInterface_Params = class {
  constructor() {
    /** @type { !string } */
    this.interfaceName;
    /** @type { !mojo.MojoHandle } */
    this.pipe;
  }
};
