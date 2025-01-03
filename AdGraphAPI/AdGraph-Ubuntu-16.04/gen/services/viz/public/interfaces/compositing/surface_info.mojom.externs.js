// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.SurfaceInfo = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.surfaceId;
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !gfx.mojom.Size } */
    this.sizeInPixels;
  }
};
