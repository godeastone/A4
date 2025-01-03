// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojoBase = {};
/** @const */
mojoBase.mojom = {};
mojoBase.mojom.String16 = class {
  constructor() {
    /** @type { !Array<number> } */
    this.data;
  }
};
mojoBase.mojom.BigString16 = class {
  constructor() {
    /** @type { !Object } */
    this.data;
  }
};
