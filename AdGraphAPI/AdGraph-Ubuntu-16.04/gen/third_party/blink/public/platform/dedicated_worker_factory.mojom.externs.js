// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.DedicatedWorkerFactoryPtr = class {

  /**
   * @param { !url.mojom.Origin } origin
   * @param { !mojo.InterfaceRequest } workerInterfaceProvider
   */
   createDedicatedWorker(origin, workerInterfaceProvider) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.DedicatedWorkerFactory;
blink.mojom.DedicatedWorkerFactory_CreateDedicatedWorker_Params = class {
  constructor() {
    /** @type { !url.mojom.Origin } */
    this.origin;
    /** @type { !mojo.InterfaceRequest } */
    this.workerInterfaceProvider;
  }
};
