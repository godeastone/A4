// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gpu = {};
/** @const */
gpu.mojom = {};
gpu.mojom.SyncToken = class {
  constructor() {
    /** @type { !boolean } */
    this.verifiedFlush;
    /** @type { !gpu.mojom.CommandBufferNamespace } */
    this.namespaceId;
    /** @type { !number } */
    this.commandBufferId;
    /** @type { !number } */
    this.releaseCount;
  }
};
