// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.EngagementClientPtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !blink.mojom.EngagementLevel } level
   */
   setEngagementLevel(origin, level) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.EngagementClient;
blink.mojom.EngagementClient_SetEngagementLevel_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !blink.mojom.EngagementLevel } */
    this.level;
  }
};
