// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.CompositorFrame = class {
  constructor() {
    /** @type { !viz.mojom.CompositorFrameMetadata } */
    this.metadata;
    /** @type { !Array<viz.mojom.TransferableResource> } */
    this.resources;
    /** @type { !Array<viz.mojom.RenderPass> } */
    this.passes;
  }
};
