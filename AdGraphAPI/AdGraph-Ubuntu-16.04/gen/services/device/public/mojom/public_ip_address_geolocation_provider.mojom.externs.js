// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.PublicIpAddressGeolocationProviderPtr = class {

  /**
   * @param { !network.mojom.MutablePartialNetworkTrafficAnnotationTag } tag
   * @param { !mojo.InterfaceRequest } request
   */
   createGeolocation(tag, request) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.PublicIpAddressGeolocationProvider;
device.mojom.PublicIpAddressGeolocationProvider_CreateGeolocation_Params = class {
  constructor() {
    /** @type { !network.mojom.MutablePartialNetworkTrafficAnnotationTag } */
    this.tag;
    /** @type { !mojo.InterfaceRequest } */
    this.request;
  }
};
