// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.FrameDecorationValues = class {
  constructor() {
    /** @type { !gfx.mojom.Insets } */
    this.normalClientAreaInsets;
    /** @type { !gfx.mojom.Insets } */
    this.maximizedClientAreaInsets;
    /** @type { !number } */
    this.maxTitleBarButtonWidth;
  }
};
ui.mojom.WsDisplay = class {
  constructor() {
    /** @type { !display.mojom.Display } */
    this.display;
    /** @type { !ui.mojom.FrameDecorationValues } */
    this.frameDecorationValues;
  }
};
ui.mojom.WmViewportMetrics = class {
  constructor() {
    /** @type { !gfx.mojom.Rect } */
    this.boundsInPixels;
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !number } */
    this.uiScaleFactor;
  }
};
ui.mojom.BlockingContainers = class {
  constructor() {
    /** @type { !number } */
    this.systemModalContainerId;
    /** @type { !number } */
    this.minContainerId;
  }
};
