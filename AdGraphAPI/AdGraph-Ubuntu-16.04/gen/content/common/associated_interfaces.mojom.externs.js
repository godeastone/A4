// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.AssociatedInterfacePtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.AssociatedInterface;
/** @implements {mojo.InterfacePtr} */
content.mojom.AssociatedInterfaceProviderPtr = class {

  /**
   * @param { !string } name
   * @param { !mojo.AssociatedInterfaceRequest } request
   */
   getAssociatedInterface(name, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.AssociatedInterfaceProvider;
/** @implements {mojo.InterfacePtr} */
content.mojom.RouteProviderPtr = class {

  /**
   * @param { !number } routingId
   * @param { !mojo.AssociatedInterfaceRequest } request
   */
   getRoute(routingId, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RouteProvider;
content.mojom.AssociatedInterfaceProvider_GetAssociatedInterface_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
  }
};
content.mojom.RouteProvider_GetRoute_Params = class {
  constructor() {
    /** @type { !number } */
    this.routingId;
    /** @type { !mojo.AssociatedInterfaceRequest } */
    this.request;
  }
};
