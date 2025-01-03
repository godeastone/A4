// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let resourceCoordinator = {};
/** @const */
resourceCoordinator.mojom = {};
/** @implements {mojo.InterfacePtr} */
resourceCoordinator.mojom.CoordinationUnitProviderPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } id
   */
   createFrameCoordinationUnit(request, id) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } id
   */
   createPageCoordinationUnit(request, id) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !resourceCoordinator.mojom.CoordinationUnitID } id
   */
   createProcessCoordinationUnit(request, id) {}
  /**
   * @param { !mojo.InterfaceRequest } request
   */
   getSystemCoordinationUnit(request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
resourceCoordinator.mojom.CoordinationUnitProvider;
resourceCoordinator.mojom.CoordinationUnitProvider_CreateFrameCoordinationUnit_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.CoordinationUnitProvider_CreatePageCoordinationUnit_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.CoordinationUnitProvider_CreateProcessCoordinationUnit_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !resourceCoordinator.mojom.CoordinationUnitID } */
    this.id;
  }
};
resourceCoordinator.mojom.CoordinationUnitProvider_GetSystemCoordinationUnit_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
