// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let skia = {};
/** @const */
skia.mojom = {};
skia.mojom.ImageInfo = class {
  constructor() {
    /** @type { !skia.mojom.ColorType } */
    this.colorType;
    /** @type { !skia.mojom.AlphaType } */
    this.alphaType;
    /** @type { !skia.mojom.ColorProfileType } */
    this.profileType;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
