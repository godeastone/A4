// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.ReturnedResource = class {
  constructor() {
    /** @type { !number } */
    this.id;
    /** @type { !number } */
    this.count;
    /** @type { !gpu.mojom.SyncToken } */
    this.syncToken;
    /** @type { !boolean } */
    this.lost;
  }
};
