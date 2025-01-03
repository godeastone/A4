// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let arc = {};
/** @const */
arc.mojom = {};
arc.mojom.VideoFramePlane = class {
  constructor() {
    /** @type { !number } */
    this.offset;
    /** @type { !number } */
    this.stride;
  }
};
arc.mojom.Size = class {
  constructor() {
    /** @type { !number } */
    this.width;
    /** @type { !number } */
    this.height;
  }
};
