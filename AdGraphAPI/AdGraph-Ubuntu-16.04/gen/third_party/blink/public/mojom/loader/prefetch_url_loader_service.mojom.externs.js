// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let blink = {};
/** @const */
blink.mojom = {};
/** @implements {mojo.InterfacePtr} */
blink.mojom.PrefetchURLLoaderServicePtr = class {

  /**
   * @param { !mojo.InterfaceRequest } factory
   */
   getFactory(factory) {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
blink.mojom.PrefetchURLLoaderService;
blink.mojom.PrefetchURLLoaderService_GetFactory_Params = class {
  constructor() {
    /** @type { !mojo.InterfaceRequest } */
    this.factory;
  }
};
