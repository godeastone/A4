// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let ui = {};
/** @const */
ui.mojom = {};
ui.mojom.TouchDeviceTransform = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !number } */
    this.deviceId;
    /** @type { !gfx.mojom.Transform } */
    this.transform;
    /** @type { !number } */
    this.radiusScale;
  }
};
