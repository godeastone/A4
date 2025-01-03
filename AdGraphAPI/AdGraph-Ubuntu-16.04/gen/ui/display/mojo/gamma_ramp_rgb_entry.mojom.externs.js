// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let display = {};
/** @const */
display.mojom = {};
display.mojom.GammaRampRGBEntry = class {
  constructor() {
    /** @type { !number } */
    this.r;
    /** @type { !number } */
    this.g;
    /** @type { !number } */
    this.b;
  }
};
