// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
display.mojom.DisplayMode = class {
  constructor() {
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !boolean } */
    this.isInterlaced;
    /** @type { !number } */
    this.refreshRate;
  }
};
