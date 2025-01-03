// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let serviceManager = {};
/** @const */
serviceManager.mojom = {};
/** @implements {mojo.InterfacePtr} */
serviceManager.mojom.ServiceControlPtr = class {

  /**
   */
   requestQuit() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
serviceManager.mojom.ServiceControl;
serviceManager.mojom.ServiceControl_RequestQuit_Params = class {
  constructor() {
  }
};
