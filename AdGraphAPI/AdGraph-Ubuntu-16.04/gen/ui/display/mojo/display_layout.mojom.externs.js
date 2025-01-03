// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
display.mojom.DisplayPlacement = class {
  constructor() {
    /** @type { !number } */
    this.displayId;
    /** @type { !number } */
    this.parentDisplayId;
    /** @type { !display.mojom.Position } */
    this.position;
    /** @type { !number } */
    this.offset;
    /** @type { !display.mojom.OffsetReference } */
    this.offsetReference;
  }
};
display.mojom.DisplayLayout = class {
  constructor() {
    /** @type { !boolean } */
    this.defaultUnified;
    /** @type { !number } */
    this.primaryDisplayId;
    /** @type { !Array<display.mojom.DisplayPlacement> } */
    this.placementList;
  }
};
