// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.DebugBorderQuadState = class {
  constructor() {
    /** @type { !number } */
    this.color;
    /** @type { !number } */
    this.width;
  }
};
viz.mojom.RenderPassQuadState = class {
  constructor() {
    /** @type { !number } */
    this.renderPassId;
    /** @type { !number } */
    this.maskResourceId;
    /** @type { !boolean } */
    this.forceAntiAliasingOff;
    /** @type { !gfx.mojom.RectF } */
    this.maskUvRect;
    /** @type { !gfx.mojom.Size } */
    this.maskTextureSize;
    /** @type { !gfx.mojom.Vector2dF } */
    this.filtersScale;
    /** @type { !gfx.mojom.PointF } */
    this.filtersOrigin;
    /** @type { !gfx.mojom.RectF } */
    this.texCoordRect;
  }
};
viz.mojom.SolidColorQuadState = class {
  constructor() {
    /** @type { !number } */
    this.color;
    /** @type { !boolean } */
    this.forceAntiAliasingOff;
  }
};
viz.mojom.StreamVideoQuadState = class {
  constructor() {
    /** @type { !number } */
    this.resourceId;
    /** @type { !gfx.mojom.Size } */
    this.resourceSizeInPixels;
    /** @type { !gfx.mojom.Transform } */
    this.matrix;
  }
};
viz.mojom.SurfaceQuadState = class {
  constructor() {
    /** @type { !viz.mojom.SurfaceId } */
    this.primarySurfaceId;
    /** @type { viz.mojom.SurfaceId } */
    this.fallbackSurfaceId;
    /** @type { !number } */
    this.defaultBackgroundColor;
    /** @type { !boolean } */
    this.stretchContentToFillBounds;
  }
};
viz.mojom.TextureQuadState = class {
  constructor() {
    /** @type { !number } */
    this.resourceId;
    /** @type { !boolean } */
    this.premultipliedAlpha;
    /** @type { !boolean } */
    this.yFlipped;
    /** @type { !boolean } */
    this.nearestNeighbor;
    /** @type { !boolean } */
    this.secureOutputOnly;
    /** @type { !gfx.mojom.Size } */
    this.resourceSizeInPixels;
    /** @type { !gfx.mojom.PointF } */
    this.uvTopLeft;
    /** @type { !gfx.mojom.PointF } */
    this.uvBottomRight;
    /** @type { !number } */
    this.backgroundColor;
    /** @type { !Array<number> } */
    this.vertexOpacity;
  }
};
viz.mojom.TileQuadState = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.texCoordRect;
    /** @type { !gfx.mojom.Size } */
    this.textureSize;
    /** @type { !boolean } */
    this.swizzleContents;
    /** @type { !boolean } */
    this.isPremultiplied;
    /** @type { !boolean } */
    this.nearestNeighbor;
    /** @type { !boolean } */
    this.forceAntiAliasingOff;
    /** @type { !number } */
    this.resourceId;
  }
};
viz.mojom.YUVVideoQuadState = class {
  constructor() {
    /** @type { !gfx.mojom.RectF } */
    this.yaTexCoordRect;
    /** @type { !gfx.mojom.RectF } */
    this.uvTexCoordRect;
    /** @type { !gfx.mojom.Size } */
    this.yaTexSize;
    /** @type { !gfx.mojom.Size } */
    this.uvTexSize;
    /** @type { !number } */
    this.yPlaneResourceId;
    /** @type { !number } */
    this.uPlaneResourceId;
    /** @type { !number } */
    this.vPlaneResourceId;
    /** @type { !number } */
    this.aPlaneResourceId;
    /** @type { !number } */
    this.resourceOffset;
    /** @type { !number } */
    this.resourceMultiplier;
    /** @type { !number } */
    this.bitsPerChannel;
    /** @type { !boolean } */
    this.requireOverlay;
    /** @type { !boolean } */
    this.isProtectedVideo;
    /** @type { !gfx.mojom.ColorSpace } */
    this.videoColorSpace;
  }
};
viz.mojom.DrawQuad = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.rect;
    /** @type { !gfx.mojom.Rect } */
    this.visibleRect;
    /** @type { !boolean } */
    this.needsBlending;
    /** @type { viz.mojom.SharedQuadState } */
    this.sqs;
    /** @type { !Object } */
    this.drawQuadState;
  }
};
