// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
display.mojom.DisplaySnapshot = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !gfx.mojom.Point } */
    this.origin;
    /** @type { !gfx.mojom.Size } */
    this.physicalSize;
    /** @type { !display.mojom.DisplayConnectionType } */
    this.type;
    /** @type { !boolean } */
    this.isAspectPreservingScaling;
    /** @type { !boolean } */
    this.hasOverscan;
    /** @type { !boolean } */
    this.hasColorCorrectionMatrix;
    /** @type { !boolean } */
    this.hasCurrentMode;
    /** @type { !boolean } */
    this.hasNativeMode;
    /** @type { !gfx.mojom.ColorSpace } */
    this.colorSpace;
    /** @type { !string } */
    this.displayName;
    /** @type { !mojoBase.mojom.FilePath } */
    this.sysPath;
    /** @type { !Array<display.mojom.DisplayMode> } */
    this.modes;
    /** @type { !Array<number> } */
    this.edid;
    /** @type { !number } */
    this.currentModeIndex;
    /** @type { !number } */
    this.nativeModeIndex;
    /** @type { !number } */
    this.productCode;
    /** @type { !number } */
    this.yearOfManufacture;
    /** @type { !gfx.mojom.Size } */
    this.maximumCursorSize;
  }
};
