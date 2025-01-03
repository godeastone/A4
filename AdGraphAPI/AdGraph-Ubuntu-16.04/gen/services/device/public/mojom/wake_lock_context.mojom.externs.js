// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.WakeLockContextPtr = class {

  /**
   * @param { !device.mojom.WakeLockType } type
   * @param { !device.mojom.WakeLockReason } reason
   * @param { !string } description
   * @param { !mojo.InterfaceRequest } wakeLock
   */
   getWakeLock(type, reason, description, wakeLock) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.WakeLockContext;
device.mojom.WakeLockContext_GetWakeLock_Params = class {
  constructor() {
    /** @type { !device.mojom.WakeLockType } */
    this.type;
    /** @type { !device.mojom.WakeLockReason } */
    this.reason;
    /** @type { !string } */
    this.description;
    /** @type { !mojo.InterfaceRequest } */
    this.wakeLock;
  }
};
