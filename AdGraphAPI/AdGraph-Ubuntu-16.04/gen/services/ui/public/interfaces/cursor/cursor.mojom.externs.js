// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.CursorData = class {
  constructor() {
    /** @type { !ui.mojom.CursorType } */
    this.cursorType;
    /** @type { !number } */
    this.scaleFactor;
    /** @type { !mojoBase.mojom.TimeDelta } */
    this.frameDelay;
    /** @type { !gfx.mojom.Point } */
    this.hotspotInPixels;
    /** @type { !Array<skia.mojom.Bitmap> } */
    this.cursorFrames;
  }
};
