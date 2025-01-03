// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let media = {};
/** @const */
media.mojom = {};
/** @implements {mojo.InterfacePtr} */
media.mojom.CdmServicePtr = class {

  /**
   * @param { !mojoBase.mojom.FilePath } cdmPath
   */
   loadCdm(cdmPath) {}
  /**
   * @param { !mojo.InterfaceRequest } factory
   * @param { serviceManager.mojom.InterfaceProviderPtr } hostInterfaces
   */
   createCdmFactory(factory, hostInterfaces) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
media.mojom.CdmService;
media.mojom.CdmService_LoadCdm_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.FilePath } */
    this.cdmPath;
  }
};
media.mojom.CdmService_CreateCdmFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.factory;
    /** @type { serviceManager.mojom.InterfaceProviderPtr } */
    this.hostInterfaces;
  }
};
