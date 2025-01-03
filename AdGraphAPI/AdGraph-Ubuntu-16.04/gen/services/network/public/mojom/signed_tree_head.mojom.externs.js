// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let network = {};
/** @const */
network.mojom = {};
network.mojom.SignedTreeHead = class {
  constructor() {
    /** @type { !network.mojom.SignedTreeHeadVersion } */
    this.version;
    /** @type { !mojoBase.mojom.Time } */
    this.timestamp;
    /** @type { !number } */
    this.treeSize;
    /** @type { !Array<number> } */
    this.sha256RootHash;
    /** @type { !network.mojom.DigitallySigned } */
    this.signature;
    /** @type { !string } */
    this.logId;
  }
};
