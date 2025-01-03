// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.SharedQuadState = class {
  constructor() {
    /** @type { !gfx.mojom.Transform } */
    this.quadToTargetTransform;
    /** @type { !gfx.mojom.Rect } */
    this.quadLayerRect;
    /** @type { !gfx.mojom.Rect } */
    this.visibleQuadLayerRect;
    /** @type { !gfx.mojom.Rect } */
    this.clipRect;
    /** @type { !boolean } */
    this.isClipped;
    /** @type { !boolean } */
    this.areContentsOpaque;
    /** @type { !number } */
    this.opacity;
    /** @type { !number } */
    this.blendMode;
    /** @type { !number } */
    this.sortingContextId;
  }
};
