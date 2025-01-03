// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let printing = {};
/** @const */
printing.mojom = {};
printing.mojom.PdfRenderSettings = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.area;
    /** @type { !gfx.mojom.Point } */
    this.offsets;
    /** @type { !gfx.mojom.Size } */
    this.dpi;
    /** @type { !boolean } */
    this.autorotate;
    /** @type { !boolean } */
    this.useColor;
    /** @type { !printing.mojom.Mode } */
    this.mode;
  }
};
