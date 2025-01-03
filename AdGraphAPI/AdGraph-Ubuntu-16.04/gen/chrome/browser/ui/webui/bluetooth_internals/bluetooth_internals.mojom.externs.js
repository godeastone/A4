// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.BluetoothInternalsHandlerPtr = class {

  /**
   * @return {Promise}
   */
   getAdapter() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.BluetoothInternalsHandler;
mojom.BluetoothInternalsHandler_GetAdapter_Params = class {
  constructor() {
  }
};
mojom.BluetoothInternalsHandler_GetAdapter_ResponseParams = class {
  constructor() {
    /** @type { bluetooth.mojom.AdapterPtr } */
    this.adapter;
  }
};
