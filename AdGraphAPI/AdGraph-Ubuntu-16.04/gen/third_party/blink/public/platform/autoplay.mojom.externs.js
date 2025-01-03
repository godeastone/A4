// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.AutoplayConfigurationClientPtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !number } flags
   */
   addAutoplayFlags(origin, flags) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.AutoplayConfigurationClient;
blink.mojom.AutoplayConfigurationClient_AddAutoplayFlags_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !number } */
    this.flags;
  }
};
