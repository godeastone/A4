// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.MediaServicePtr = class {

  /**
   * @param { !mojo.InterfaceRequest } factory
   * @param { serviceManager.mojom.InterfaceProviderPtr } hostInterfaces
   */
   createInterfaceFactory(factory, hostInterfaces) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.MediaService;
media.mojom.MediaService_CreateInterfaceFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.factory;
    /** @type { serviceManager.mojom.InterfaceProviderPtr } */
    this.hostInterfaces;
  }
};
