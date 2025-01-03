// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.LocalSurfaceId = class {
  constructor() {
    /** @type { !number } */
    this.parentSequenceNumber;
    /** @type { !number } */
    this.childSequenceNumber;
    /** @type { !mojoBase.mojom.UnguessableToken } */
    this.embedToken;
  }
};
