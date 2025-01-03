// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let device = {};
/** @const */
device.mojom = {};
/** @implements {mojo.InterfacePtr} */
device.mojom.WakeLockPtr = class {

  /**
   */
   requestWakeLock() {}
  /**
   */
   cancelWakeLock() {}
  /**
   * @param { !mojo.InterfaceRequest } wakeLock
   */
   addClient(wakeLock) {}
  /**
   * @param { !device.mojom.WakeLockType } type
   * @return {Promise}
   */
   changeType(type) {}
  /**
   * @return {Promise}
   */
   hasWakeLockForTests() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
device.mojom.WakeLock;
device.mojom.WakeLock_RequestWakeLock_Params = class {
  constructor() {
  }
};
device.mojom.WakeLock_CancelWakeLock_Params = class {
  constructor() {
  }
};
device.mojom.WakeLock_AddClient_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.wakeLock;
  }
};
device.mojom.WakeLock_ChangeType_Params = class {
  constructor() {
    /** @type { !device.mojom.WakeLockType } */
    this.type;
  }
};
device.mojom.WakeLock_ChangeType_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
device.mojom.WakeLock_HasWakeLockForTests_Params = class {
  constructor() {
  }
};
device.mojom.WakeLock_HasWakeLockForTests_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
