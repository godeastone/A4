// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.RenderPass = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !gfx.mojom.Rect } */
    this.outputRect;
    /** @type { !gfx.mojom.Rect } */
    this.damageRect;
    /** @type { !gfx.mojom.Transform } */
    this.transformToRootTarget;
    /** @type { !viz.mojom.FilterOperations } */
    this.filters;
    /** @type { !viz.mojom.FilterOperations } */
    this.backgroundFilters;
    /** @type { !gfx.mojom.ColorSpace } */
    this.colorSpace;
    /** @type { !boolean } */
    this.hasTransparentBackground;
    /** @type { !boolean } */
    this.cacheRenderPass;
    /** @type { !boolean } */
    this.hasDamageFromContributingContent;
    /** @type { !boolean } */
    this.generateMipmap;
    /** @type { !Array<viz.mojom.CopyOutputRequest> } */
    this.copyRequests;
    /** @type { !Array<viz.mojom.DrawQuad> } */
    this.quadList;
  }
};
