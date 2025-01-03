// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let content = {};
/** @const */
content.mojom = {};
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderFrameMetadataObserverPtr = class {

  /**
   * @param { !boolean } enabled
   */
   reportAllFrameSubmissionsForTesting(enabled) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderFrameMetadataObserver;
/** @implements {mojo.InterfacePtr} */
content.mojom.RenderFrameMetadataObserverClientPtr = class {

  /**
   * @param { !number } frameToken
   * @param { !content.mojom.RenderFrameMetadata } metadata
   */
   onRenderFrameMetadataChanged(frameToken, metadata) {}
  /**
   * @param { !number } frameToken
   */
   onFrameSubmissionForTesting(frameToken) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
content.mojom.RenderFrameMetadataObserverClient;
content.mojom.RenderFrameMetadata = class {
  constructor() {
    /** @type { !number } */
    this.rootBackgroundColor;
    /** @type { !boolean } */
    this.isScrollOffsetAtTop;
    /** @type { !boolean } */
    this.isMobileOptimized;
    /** @type { gfx.mojom.Vector2dF } */
    this.rootScrollOffset;
    /** @type { !viz.mojom.Selection } */
    this.selection;
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !number } */
    this.topControlsHeight;
    /** @type { !gfx.mojom.Size } */
    this.viewportSizeInPixels;
    /** @type { viz.mojom.LocalSurfaceId } */
    this.localSurfaceId;
    /** @type { !number } */
    this.topControlsShownRatio;
    /** @type { !number } */
    this.bottomControlsHeight;
    /** @type { !number } */
    this.bottomControlsShownRatio;
  }
};
content.mojom.RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params = class {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
};
content.mojom.RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameToken;
    /** @type { !content.mojom.RenderFrameMetadata } */
    this.metadata;
  }
};
content.mojom.RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params = class {
  constructor() {
    /** @type { !number } */
    this.frameToken;
  }
};
