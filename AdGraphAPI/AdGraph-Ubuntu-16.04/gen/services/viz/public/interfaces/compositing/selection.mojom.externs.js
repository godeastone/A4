// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let viz = {};
/** @const */
viz.mojom = {};
viz.mojom.Selection = class {
  constructor() {
    /** @type { !gfx.mojom.SelectionBound } */
    this.start;
    /** @type { !gfx.mojom.SelectionBound } */
    this.end;
  }
};
