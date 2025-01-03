// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let skia = {};
/** @const */
skia.mojom = {};
skia.mojom.Bitmap = class {
  constructor() {
    /** @type { !skia.mojom.ImageInfo } */
    this.imageInfo;
    /** @type { !number } */
    this.rowBytes;
    /** @type { !Object } */
    this.pixelData;
  }
};
skia.mojom.InlineBitmap = class {
  constructor() {
    /** @type { !skia.mojom.ImageInfo } */
    this.imageInfo;
    /** @type { !number } */
    this.rowBytes;
    /** @type { !Array<number> } */
    this.pixelData;
  }
};
