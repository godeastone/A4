// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.RendererSettings = class {
  constructor() {
    /** @type { !boolean } */
    this.allowAntialiasing;
    /** @type { !boolean } */
    this.finishRenderingOnResize;
    /** @type { !boolean } */
    this.forceAntialiasing;
    /** @type { !boolean } */
    this.forceBlendingWithShaders;
    /** @type { !boolean } */
    this.tintGlCompositedContent;
    /** @type { !boolean } */
    this.partialSwapEnabled;
    /** @type { !boolean } */
    this.releaseOverlayResourcesAfterGpuQuery;
    /** @type { !boolean } */
    this.shouldClearRootRenderPass;
    /** @type { !boolean } */
    this.showOverdrawFeedback;
    /** @type { !boolean } */
    this.enableDrawOcclusion;
    /** @type { !boolean } */
    this.useSkiaRenderer;
    /** @type { !boolean } */
    this.useSkiaDeferredDisplayList;
    /** @type { !boolean } */
    this.allowOverlays;
    /** @type { !number } */
    this.highpThresholdMin;
    /** @type { !number } */
    this.slowDownCompositingScaleFactor;
  }
};
