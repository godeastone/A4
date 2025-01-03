// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let identity = {};
/** @const */
identity.mojom = {};
identity.mojom.AccountState = class {
  constructor() {
    /** @type { !boolean } */
    this.hasRefreshToken;
    /** @type { !boolean } */
    this.isPrimaryAccount;
  }
};
