// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.HitTestRegion = class {
  constructor() {
    /** @type { !number } */
    this.flags;
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !gfx.mojom.Rect } */
    this.rect;
    /** @type { !gfx.mojom.Transform } */
    this.transform;
  }
};
viz.mojom.HitTestRegionList = class {
  constructor() {
    /** @type { !number } */
    this.flags;
    /** @type { !gfx.mojom.Rect } */
    this.bounds;
    /** @type { !gfx.mojom.Transform } */
    this.transform;
    /** @type { !Array<viz.mojom.HitTestRegion> } */
    this.regions;
  }
};
