// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.CompositorFrameMetadata = class {
  constructor() {
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !number } */
    this.pageScaleFactor;
    /** @type { !gfx.mojom.Vector2dF } */
    this.rootScrollOffset;
    /** @type { !gfx.mojom.SizeF } */
    this.scrollableViewportSize;
    /** @type { !gfx.mojom.SizeF } */
    this.rootLayerSize;
    /** @type { !number } */
    this.minPageScaleFactor;
    /** @type { !number } */
    this.maxPageScaleFactor;
    /** @type { !boolean } */
    this.rootOverflowYHidden;
    /** @type { !boolean } */
    this.mayContainVideo;
    /** @type { !boolean } */
    this.isResourcelessSoftwareDrawWithScrollOrAnimation;
    /** @type { !number } */
    this.topControlsHeight;
    /** @type { !number } */
    this.topControlsShownRatio;
    /** @type { !number } */
    this.bottomControlsHeight;
    /** @type { !number } */
    this.bottomControlsShownRatio;
    /** @type { !number } */
    this.rootBackgroundColor;
    /** @type { !viz.mojom.Selection } */
    this.selection;
    /** @type { !Array<ui.mojom.LatencyInfo> } */
    this.latencyInfo;
    /** @type { !Array<viz.mojom.SurfaceId> } */
    this.referencedSurfaces;
    /** @type { !viz.mojom.FrameDeadline } */
    this.deadline;
    /** @type { !Array<viz.mojom.SurfaceId> } */
    this.activationDependencies;
    /** @type { !number } */
    this.contentSourceId;
    /** @type { !number } */
    this.frameToken;
    /** @type { !viz.mojom.BeginFrameAck } */
    this.beginFrameAck;
    /** @type { !number } */
    this.presentationToken;
  }
};
