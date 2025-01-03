// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let clientHints = {};
/** @const */
clientHints.mojom = {};
/** @implements {mojo.InterfacePtr} */
clientHints.mojom.ClientHintsPtr = class {

  /**
   * @param { !url.mojom.Origin } primaryOrigin
   * @param { !Array<blink.mojom.WebClientHintsType> } clientHints
   * @param { !mojoBase.mojom.TimeDelta } expirationDuration
   */
   persistClientHints(primaryOrigin, clientHints, expirationDuration) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
clientHints.mojom.ClientHints;
clientHints.mojom.ClientHints_PersistClientHints_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.primaryOrigin;
    /** @type { !Array<blink.mojom.WebClientHintsType> } */
    this.clientHints;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.expirationDuration;
  }
};
