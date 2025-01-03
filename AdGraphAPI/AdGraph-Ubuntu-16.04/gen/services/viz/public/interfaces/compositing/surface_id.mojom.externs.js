// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.SurfaceId = class {
  constructor() {
    /** @type { !viz.mojom.FrameSinkId } */
    this.frameSinkId;
    /** @type { !viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
  }
};
