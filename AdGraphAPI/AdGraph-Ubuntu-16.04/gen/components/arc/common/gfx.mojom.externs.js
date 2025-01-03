// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
arc.mojom.Rect = class {
  constructor() {
    /** @type { !number } */
    this.left;
    /** @type { !number } */
    this.top;
    /** @type { !number } */
    this.right;
    /** @type { !number } */
    this.bottom;
  }
};
arc.mojom.Range = class {
  constructor() {
    /** @type { !number } */
    this.start;
    /** @type { !number } */
    this.end;
  }
};
