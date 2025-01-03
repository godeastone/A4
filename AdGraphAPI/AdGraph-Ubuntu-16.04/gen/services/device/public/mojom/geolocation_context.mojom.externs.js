// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.GeolocationContextPtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   */
   bindGeolocation(request) {}
  /**
   * @param { !device.mojom.Geoposition } geoposition
   */
   setOverride(geoposition) {}
  /**
   */
   clearOverride() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.GeolocationContext;
device.mojom.GeolocationContext_BindGeolocation_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
device.mojom.GeolocationContext_SetOverride_Params = class {
  constructor() {
    /** @type { !device.mojom.Geoposition } */
    this.geoposition;
  }
};
device.mojom.GeolocationContext_ClearOverride_Params = class {
  constructor() {
  }
};
