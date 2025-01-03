// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.AggregatedHitTestRegion = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !number } */
    this.flags;
    /** @type { !number } */
    this.childCount;
    /** @type { !gfx.mojom.Rect } */
    this.rect;
    /** @type { !gfx.mojom.Transform } */
    this.transform;
  }
};
