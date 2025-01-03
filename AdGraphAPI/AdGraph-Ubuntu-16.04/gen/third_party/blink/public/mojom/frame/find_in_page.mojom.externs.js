// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.FindInPagePtr = class {

  /**
   * @param { !blink.mojom.StopFindAction } action
   */
   stopFinding(action) {}
  /**
   */
   clearActiveFindMatch() {}
  /**
   * @param { !gfx.mojom.PointF } point
   * @return {Promise}
   */
   getNearestFindResult(point) {}
  /**
   * @param { !gfx.mojom.PointF } point
   * @return {Promise}
   */
   activateNearestFindResult(point) {}
  /**
   * @param { !number } currentVersion
   * @return {Promise}
   */
   findMatchRects(currentVersion) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.FindInPage;
blink.mojom.FindInPage_StopFinding_Params = class {
  constructor() {
    /** @type { !blink.mojom.StopFindAction } */
    this.action;
  }
};
blink.mojom.FindInPage_ClearActiveFindMatch_Params = class {
  constructor() {
  }
};
blink.mojom.FindInPage_GetNearestFindResult_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.point;
  }
};
blink.mojom.FindInPage_GetNearestFindResult_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.distance;
  }
};
blink.mojom.FindInPage_ActivateNearestFindResult_Params = class {
  constructor() {
    /** @type { !gfx.mojom.PointF } */
    this.point;
  }
};
blink.mojom.FindInPage_ActivateNearestFindResult_ResponseParams = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.activeMatchRect;
    /** @type { !number } */
    this.numberOfMatches;
    /** @type { !number } */
    this.activeMatchOrdinal;
    /** @type { !boolean } */
    this.finalUpdate;
  }
};
blink.mojom.FindInPage_FindMatchRects_Params = class {
  constructor() {
    /** @type { !number } */
    this.currentVersion;
  }
};
blink.mojom.FindInPage_FindMatchRects_ResponseParams = class {
  constructor() {
    /** @type { !number } */
    this.version;
    /** @type { !Array<gfx.mojom.RectF> } */
    this.rects;
    /** @type { !gfx.mojom.RectF } */
    this.activeMatchRect;
  }
};
