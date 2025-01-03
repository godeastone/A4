// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.WakeLockProviderPtr = class {

  /**
   * @param { !number } contextId
   * @param { !mojo.InterfaceRequest } context
   */
   getWakeLockContextForID(contextId, context) {}
  /**
   * @param { !device.mojom.WakeLockType } type
   * @param { !device.mojom.WakeLockReason } reason
   * @param { !string } description
   * @param { !mojo.InterfaceRequest } wakeLock
   */
   getWakeLockWithoutContext(type, reason, description, wakeLock) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.WakeLockProvider;
device.mojom.WakeLockProvider_GetWakeLockContextForID_Params = class {
  constructor() {
    /** @type { !number } */
    this.contextId;
    /** @type { !mojo.InterfaceRequest } */
    this.context;
  }
};
device.mojom.WakeLockProvider_GetWakeLockWithoutContext_Params = class {
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
