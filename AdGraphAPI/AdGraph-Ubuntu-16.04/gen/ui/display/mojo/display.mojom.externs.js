// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
display.mojom.Display = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !gfx.mojom.Rect } */
    this.bounds;
    /** @type { !gfx.mojom.Size } */
    this.sizeInPixels;
    /** @type { !gfx.mojom.Rect } */
    this.workArea;
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !display.mojom.Rotation } */
    this.rotation;
    /** @type { !display.mojom.TouchSupport } */
    this.touchSupport;
    /** @type { !display.mojom.AccelerometerSupport } */
    this.accelerometerSupport;
    /** @type { !gfx.mojom.Size } */
    this.maximumCursorSize;
    /** @type { !number } */
    this.colorDepth;
    /** @type { !number } */
    this.depthPerComponent;
    /** @type { !boolean } */
    this.isMonochrome;
  }
};
