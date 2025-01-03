// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mash = {};
/** @const */
mash.mojom = {};
/** @implements {mojo.InterfacePtr} */
mash.mojom.LaunchablePtr = class {

  /**
   * @param { !number } what
   * @param { !mash.mojom.LaunchMode } how
   */
   launch(what, how) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mash.mojom.Launchable;
mash.mojom.Launchable_Launch_Params = class {
  constructor() {
    /** @type { !number } */
    this.what;
    /** @type { !mash.mojom.LaunchMode } */
    this.how;
  }
};
