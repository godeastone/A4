// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let net = {};
/** @const */
net.interfaces = {};
net.interfaces.IPAddress = class {
  constructor() {
    /** @type { !Array<number> } */
    this.addressBytes;
  }
};