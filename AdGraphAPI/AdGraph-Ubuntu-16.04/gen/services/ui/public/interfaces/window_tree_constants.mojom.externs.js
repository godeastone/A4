// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.WindowData = class {
  constructor() {
    /** @type { !number } */
    this.parentId;
    /** @type { !number } */
    this.windowId;
    /** @type { !number } */
    this.transientParentId;
    /** @type { !gfx.mojom.Rect } */
    this.bounds;
    /** @type { !Map<string, Array<number>> } */
    this.properties;
    /** @type { !boolean } */
    this.visible;
  }
};
