// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.WorkerContentSettingsProxyPtr = class {

  /**
   * @param { !mojoBase.mojom.String16 } name
   * @return {Promise}
   */
   allowIndexedDB(name) {}
  /**
   * @return {Promise}
   */
   requestFileSystemAccessSync() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.WorkerContentSettingsProxy;
blink.mojom.WorkerContentSettingsProxy_AllowIndexedDB_Params = class {
  constructor() {
    /** @type { !mojoBase.mojom.String16 } */
    this.name;
  }
};
blink.mojom.WorkerContentSettingsProxy_AllowIndexedDB_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
blink.mojom.WorkerContentSettingsProxy_RequestFileSystemAccessSync_Params = class {
  constructor() {
  }
};
blink.mojom.WorkerContentSettingsProxy_RequestFileSystemAccessSync_ResponseParams = class {
  constructor() {
    /** @type { !boolean } */
    this.result;
  }
};
