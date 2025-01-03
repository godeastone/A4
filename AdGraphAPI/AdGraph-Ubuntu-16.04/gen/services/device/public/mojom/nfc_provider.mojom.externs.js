// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.NFCProviderPtr = class {

  /**
   * @param { !number } hostId
   * @param { !mojo.InterfaceRequest } nfc
   */
   getNFCForHost(hostId, nfc) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.NFCProvider;
device.mojom.NFCProvider_GetNFCForHost_Params = class {
  constructor() {
    /** @type { !number } */
    this.hostId;
    /** @type { !mojo.InterfaceRequest } */
    this.nfc;
  }
};
