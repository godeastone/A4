// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.GeolocationServicePtr = class {

  /**
   * @param { !mojo.InterfaceRequest } request
   * @param { !boolean } userGesture
   */
   createGeolocation(request, userGesture) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.GeolocationService;
blink.mojom.GeolocationService_CreateGeolocation_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.request;
    /** @type { !boolean } */
    this.userGesture;
  }
};
