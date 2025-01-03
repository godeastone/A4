// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let nacl = {};
/** @const */
nacl.mojom = {};
/** @implements {mojo.InterfacePtr} */
nacl.mojom.NaClRendererHostPtr = class {

  /**
   * @param { !number } exitStatus
   * @return {Promise}
   */
   reportExitStatus(exitStatus) {}
  /**
   * @param { !nacl.mojom.NaClErrorCode } loadStatus
   * @return {Promise}
   */
   reportLoadStatus(loadStatus) {}
  /**
   * @param { !nacl.mojom.NaClExitControlPtr } exitControl
   */
   provideExitControl(exitControl) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
nacl.mojom.NaClRendererHost;
/** @implements {mojo.InterfacePtr} */
nacl.mojom.NaClExitControlPtr = class {

};

/**
 * @const
 * @type { mojo.Interface };
 */
nacl.mojom.NaClExitControl;
nacl.mojom.NaClRendererHost_ReportExitStatus_Params = class {
  constructor() {
    /** @type { !number } */
    this.exitStatus;
  }
};
nacl.mojom.NaClRendererHost_ReportExitStatus_ResponseParams = class {
  constructor() {
  }
};
nacl.mojom.NaClRendererHost_ReportLoadStatus_Params = class {
  constructor() {
    /** @type { !nacl.mojom.NaClErrorCode } */
    this.loadStatus;
  }
};
nacl.mojom.NaClRendererHost_ReportLoadStatus_ResponseParams = class {
  constructor() {
  }
};
nacl.mojom.NaClRendererHost_ProvideExitControl_Params = class {
  constructor() {
    /** @type { !nacl.mojom.NaClExitControlPtr } */
    this.exitControl;
  }
};
