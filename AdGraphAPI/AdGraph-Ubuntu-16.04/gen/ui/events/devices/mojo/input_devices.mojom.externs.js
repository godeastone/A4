// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.InputDevice = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !ui.mojom.InputDeviceType } */
    this.type;
    /** @type { !string } */
    this.name;
    /** @type { !boolean } */
    this.enabled;
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.productId;
    /** @type { !string } */
    this.sysPath;
  }
};
ui.mojom.TouchscreenDevice = class {
  constructor() {
    /** @type { !ui.mojom.InputDevice } */
    this.inputDevice;
    /** @type { !gfx.mojom.Size } */
    this.size;
    /** @type { !number } */
    this.touchPoints;
    /** @type { !boolean } */
    this.hasStylus;
  }
};
