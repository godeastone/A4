// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
blink.mojom.WindowFeatures = class {
  constructor() {
    /** @type { !number } */
    this.x;
    /** @type { !boolean } */
    this.hasX;
    /** @type { !boolean } */
    this.hasY;
    /** @type { !boolean } */
    this.hasWidth;
    /** @type { !boolean } */
    this.hasHeight;
    /** @type { !boolean } */
    this.menuBarVisible;
    /** @type { !boolean } */
    this.statusBarVisible;
    /** @type { !boolean } */
    this.toolBarVisible;
    /** @type { !boolean } */
    this.scrollbarsVisible;
    /** @type { !number } */
    this.y;
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
