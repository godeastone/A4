// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.InputTargetClientPtr = class {

  /**
   * @param { !gfx.mojom.Point } point
   * @return {Promise}
   */
   frameSinkIdAt(point) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.InputTargetClient;
viz.mojom.InputTargetClient_FrameSinkIdAt_Params = class {
  constructor() {
    /** @type { !gfx.mojom.Point } */
    this.point;
  }
};
viz.mojom.InputTargetClient_FrameSinkIdAt_ResponseParams = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.id;
  }
};
