// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.LockHandlePtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.LockHandle;
/** @implements {mojo.InterfacePtr} */
blink.mojom.LockRequestPtr = class {

  /**
   * @param { !blink.mojom.LockHandlePtr } lockHandle
   */
   granted(lockHandle) {}
  /**
   */
   failed() {}
  /**
   * @param { !string } reason
   */
   abort(reason) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.LockRequest;
/** @implements {mojo.InterfacePtr} */
blink.mojom.LockManagerPtr = class {

  /**
   * @param { !string } name
   * @param { !blink.mojom.LockMode } mode
   * @param { !blink.mojom.WaitMode } wait
   * @param { !blink.mojom.LockRequestPtr } request
   */
   requestLock(name, mode, wait, request) {}
  /**
   * @return {Promise}
   */
   queryState() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.LockManager;
blink.mojom.LockInfo = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !blink.mojom.LockMode } */
    this.mode;
    /** @type { !string } */
    this.clientId;
  }
};
blink.mojom.LockRequest_Granted_Params = class {
  constructor() {
    /** @type { !blink.mojom.LockHandlePtr } */
    this.lockHandle;
  }
};
blink.mojom.LockRequest_Failed_Params = class {
  constructor() {
  }
};
blink.mojom.LockRequest_Abort_Params = class {
  constructor() {
    /** @type { !string } */
    this.reason;
  }
};
blink.mojom.LockManager_RequestLock_Params = class {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !blink.mojom.LockMode } */
    this.mode;
    /** @type { !blink.mojom.WaitMode } */
    this.wait;
    /** @type { !blink.mojom.LockRequestPtr } */
    this.request;
  }
};
blink.mojom.LockManager_QueryState_Params = class {
  constructor() {
  }
};
blink.mojom.LockManager_QueryState_ResponseParams = class {
  constructor() {
    /** @type { !Array<blink.mojom.LockInfo> } */
    this.requested;
    /** @type { !Array<blink.mojom.LockInfo> } */
    this.held;
  }
};
