// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gfx = {};
/** @const */
gfx.mojom = {};
gfx.mojom.CALayerParams = class {
  constructor() {
    /** @type { !boolean } */
    this.isEmpty;
    /** @type { !number } */
    this.scaleFactor;
    /** @type { !Object } */
    this.content;
    /** @type { !gfx.mojom.Size } */
    this.pixelSize;
  }
};
