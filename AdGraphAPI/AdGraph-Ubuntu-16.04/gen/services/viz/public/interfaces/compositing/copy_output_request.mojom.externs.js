// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
/** @implements {mojo.InterfacePtr} */
viz.mojom.CopyOutputResultSenderPtr = class {

  /**
   * @param { !viz.mojom.CopyOutputResult } result
   */
   sendResult(result) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
viz.mojom.CopyOutputResultSender;
viz.mojom.CopyOutputRequest = class {
  constructor() {
    /** @type { !viz.mojom.CopyOutputResultFormat } */
    this.resultFormat;
    /** @type { !gfx.mojom.Vector2d } */
    this.scaleFrom;
    /** @type { !gfx.mojom.Vector2d } */
    this.scaleTo;
    /** @type { mojoBase.mojom.UnguessableToken } */
    this.source;
    /** @type { gfx.mojom.Rect } */
    this.area;
    /** @type { gfx.mojom.Rect } */
    this.resultSelection;
    /** @type { !viz.mojom.CopyOutputResultSenderPtr } */
    this.resultSender;
  }
};
viz.mojom.CopyOutputResultSender_SendResult_Params = class {
  constructor() {
    /** @type { !viz.mojom.CopyOutputResult } */
    this.result;
  }
};
