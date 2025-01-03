// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.TextureReleaserPtr = class {

  /**
   * @param { !gpu.mojom.SyncToken } syncToken
   * @param { !boolean } isLost
   */
   release(syncToken, isLost) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.TextureReleaser;
viz.mojom.TextureReleaser_Release_Params = class {
  constructor() {
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
    /** @type { !boolean } */
    this.isLost;
  }
};
