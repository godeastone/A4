// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojoBase = {};
/** @const */
mojoBase.mojom = {};
mojoBase.mojom.Time = class {
  constructor() {
    /** @type { !number } */
    this.internalValue;
  }
};
mojoBase.mojom.TimeDelta = class {
  constructor() {
    /** @type { !number } */
    this.microseconds;
  }
};
mojoBase.mojom.TimeTicks = class {
  constructor() {
    /** @type { !number } */
    this.internalValue;
  }
};
