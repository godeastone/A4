// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let gfx = {};
/** @const */
gfx.mojom = {};
gfx.mojom.Range = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
  }
};
gfx.mojom.RangeF = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
  }
};
