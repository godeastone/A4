// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.FilterOperation = class {
  constructor() {
    /** @type { !viz.mojom.FilterType } */
    this.type;
    /** @type { !number } */
    this.amount;
    /** @type { !number } */
    this.outerThreshold;
    /** @type { !number } */
    this.dropShadowColor;
    /** @type { !gfx.mojom.Point } */
    this.dropShadowOffset;
    /** @type { !viz.mojom.PaintFilter } */
    this.imageFilter;
    /** @type { Array<number> } */
    this.matrix;
    /** @type { !number } */
    this.zoomInset;
    /** @type { !skia.mojom.BlurTileMode } */
    this.blurTileMode;
    /** @type { Array<gfx.mojom.Rect> } */
    this.shape;
  }
};
